-- Rename and modify the function to return a ratio instead of scaled damage
CREATE OR REPLACE FUNCTION combat_get_health_ratio(
    p_match_id UUID,
    p_unit_id INTEGER,
    p_x INTEGER,
    p_y INTEGER
)
RETURNS NUMERIC
LANGUAGE plpgsql
AS $$
DECLARE
    v_unit match_piece_list%ROWTYPE;
    v_max_health INTEGER;
BEGIN
    -- Get unit's current state
    SELECT * INTO v_unit
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND x_loc = p_x
        AND y_loc = p_y
        AND game_piece_id = p_unit_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'Unit not found at position (%, %)', p_x, p_y;
    END IF;

    -- Get unit's max health
    SELECT health_max INTO v_max_health
    FROM unit_attributes
    WHERE game_piece_id = p_unit_id;

    -- Return health ratio (between 0 and 1)
    RETURN v_unit.health_val::NUMERIC / v_max_health;
END;
$$;

-- Update action_combat to use the new ratio function
CREATE OR REPLACE FUNCTION action_combat(
    p_match_id UUID,
    p_attacker_x INTEGER,
    p_attacker_y INTEGER,
    p_defender_x INTEGER,
    p_defender_y INTEGER
)
RETURNS BOOLEAN
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    v_attacker match_piece_list%ROWTYPE;
    v_defender match_piece_list%ROWTYPE;
    v_attacker_attrs unit_attributes%ROWTYPE;
    v_defender_attrs unit_attributes%ROWTYPE;
    v_base_damage NUMERIC;
    v_damage NUMERIC;
    v_new_health INTEGER;
    v_can_counterattack BOOLEAN;
    v_counterattack_multiplier NUMERIC := 0.7;
BEGIN
    -- Get attacker and defender
    SELECT * INTO v_attacker
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND x_loc = p_attacker_x
        AND y_loc = p_attacker_y
        AND is_unit = true;

    SELECT * INTO v_defender
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND x_loc = p_defender_x
        AND y_loc = p_defender_y
        AND is_unit = true;

    IF v_attacker IS NULL OR v_defender IS NULL THEN
        RAISE EXCEPTION 'Attacker or defender not found';
    END IF;

    -- Get unit attributes
    SELECT * INTO v_attacker_attrs
    FROM unit_attributes
    WHERE game_piece_id = v_attacker.game_piece_id;

    SELECT * INTO v_defender_attrs
    FROM unit_attributes
    WHERE game_piece_id = v_defender.game_piece_id;

    -- Validate attack range
    IF abs(p_attacker_x - p_defender_x) + abs(p_attacker_y - p_defender_y) > v_attacker_attrs.attack_range THEN
        RAISE EXCEPTION 'Target is out of range';
    END IF;

    -- Validate unit can attack target terrain type
    IF NOT combat_can_attack(v_attacker.game_piece_id, v_defender.game_piece_id) THEN
        RAISE EXCEPTION 'Unit cannot attack target terrain type';
    END IF;

    -- Get base damage and apply health ratio
    v_base_damage := combat_get_damage(
        p_match_id,
        v_attacker.game_piece_id,
        p_attacker_x,
        p_attacker_y,
        p_defender_x,
        p_defender_y
    );
    
    -- Scale damage by attacker's health ratio
    v_damage := v_base_damage * combat_get_health_ratio(
        p_match_id,
        v_attacker.game_piece_id,
        p_attacker_x,
        p_attacker_y
    );

    -- Apply same-unit type damage cap (70%)
    IF v_attacker.game_piece_id = v_defender.game_piece_id AND 
       v_damage > v_defender_attrs.health_max * 0.7 THEN
        v_damage := v_defender_attrs.health_max * 0.7;
    END IF;

    -- Apply damage to defender using health calculation
    v_new_health := combat_update_health(
        v_defender.id,
        v_damage::INTEGER,
        v_defender.health_val,
        v_defender_attrs.health_max
    );

    -- Update or delete defender based on new health
    IF v_new_health <= 0 THEN
        DELETE FROM match_piece_list WHERE id = v_defender.id;
    ELSE
        UPDATE match_piece_list
        SET health_val = v_new_health
        WHERE id = v_defender.id;
    END IF;

    -- Handle counterattack if applicable and defender survived
    v_can_counterattack := v_new_health > 0 AND
                          v_defender_attrs.can_fire_back AND 
                          v_defender_attrs.attack_range >= v_attacker_attrs.attack_range AND
                          combat_can_attack(v_defender.game_piece_id, v_attacker.game_piece_id);

    IF v_can_counterattack THEN
        -- Get base counterattack damage and apply health ratio
        v_base_damage := combat_get_damage(
            p_match_id,
            v_defender.game_piece_id,
            p_defender_x,
            p_defender_y,
            p_attacker_x,
            p_attacker_y
        );
        
        -- Scale damage by defender's health ratio and counterattack multiplier
        v_damage := v_base_damage * combat_get_health_ratio(
            p_match_id,
            v_defender.game_piece_id,
            p_defender_x,
            p_defender_y
        ) * v_counterattack_multiplier;

        -- Apply same-unit type damage cap (50% for counterattack)
        IF v_attacker.game_piece_id = v_defender.game_piece_id AND 
           v_damage > v_defender_attrs.health_max * 0.5 THEN
            v_damage := v_defender_attrs.health_max * 0.5;
        END IF;

        -- Apply counterattack damage using health calculation
        v_new_health := combat_update_health(
            v_attacker.id,
            v_damage::INTEGER,
            v_attacker.health_val,
            v_attacker_attrs.health_max
        );

        -- Update or delete attacker based on new health
        IF v_new_health <= 0 THEN
            DELETE FROM match_piece_list WHERE id = v_attacker.id;
        ELSE
            UPDATE match_piece_list
            SET health_val = v_new_health
            WHERE id = v_attacker.id;
        END IF;
    END IF;

    RETURN true;
END;
$$;