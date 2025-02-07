-- Update action_combat to fix damage calculation
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
    v_base_damage DOUBLE PRECISION;
    v_damage DOUBLE PRECISION;
    v_new_health INTEGER;
    v_can_counterattack BOOLEAN;
    v_counterattack_multiplier DOUBLE PRECISION := 0.7;
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

    -- Get base damage
    v_base_damage := v_attacker_attrs.base_damage;
    
    -- Apply combat multipliers and health ratio
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
        v_damage,
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
        -- Get base counterattack damage
        v_base_damage := v_defender_attrs.base_damage;
        
        -- Apply combat multipliers, health ratio and counterattack multiplier
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
            v_damage,
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