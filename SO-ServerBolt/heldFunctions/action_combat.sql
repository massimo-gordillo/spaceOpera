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
    v_combat_multiplier DOUBLE PRECISION;
    v_defence_multiplier DOUBLE PRECISION;
    v_new_health INTEGER;
    v_can_counterattack BOOLEAN;
    v_counterattack_multiplier DOUBLE PRECISION := 0.7;
    v_attack_distance INTEGER;
    v_match matches%ROWTYPE;
BEGIN
    -- Get match data and validate it's not completed
    SELECT * INTO v_match
    FROM matches
    WHERE id = p_match_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'Match not found';
    END IF;

    IF v_match.is_completed THEN
        RAISE EXCEPTION 'Cannot perform actions on a completed match';
    END IF;
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

    -- Check if the attacker can attack
    IF NOT v_attacker.attack_nonexhausted THEN
        RAISE EXCEPTION 'Unit has already attacked this turn';
    END IF;

    -- Prevent friendly fire
    IF v_attacker.player_controller = v_defender.player_controller THEN
        RAISE EXCEPTION 'Cannot attack units controlled by the same player';
    END IF;

    -- Get unit attributes
    SELECT * INTO v_attacker_attrs
    FROM unit_attributes
    WHERE game_piece_id = v_attacker.game_piece_id;

    SELECT * INTO v_defender_attrs
    FROM unit_attributes
    WHERE game_piece_id = v_defender.game_piece_id;

    -- Calculate Manhattan distance
    v_attack_distance := abs(p_attacker_x - p_defender_x) + abs(p_attacker_y - p_defender_y);

    -- Validate minimum attack range
    IF v_attack_distance < v_attacker_attrs.minimum_attack_range THEN
        RAISE EXCEPTION 'Target is too close. Minimum attack range is %', 
            v_attacker_attrs.minimum_attack_range;
    END IF;

    -- Validate maximum attack range
    IF v_attack_distance > v_attacker_attrs.attack_range THEN
        RAISE EXCEPTION 'Target is out of range. Maximum attack range is %',
            v_attacker_attrs.attack_range;
    END IF;

    -- Validate unit can attack target terrain type
    IF NOT combat_can_attack(v_attacker.game_piece_id, v_defender.game_piece_id) THEN
        RAISE EXCEPTION 'Unit cannot attack target terrain type';
    END IF;

    -- Get base damage
    v_base_damage := v_attacker_attrs.base_damage;
    
    -- Get combat multiplier based on unit types
    SELECT multiplier INTO v_combat_multiplier
    FROM combat_multipliers
    WHERE damage_type = v_attacker_attrs.damage_type
      AND health_type = v_defender_attrs.health_type;

    IF v_combat_multiplier IS NULL THEN
        RAISE EXCEPTION 'No combat multiplier found for damage type % and health type %', 
            v_attacker_attrs.damage_type, v_defender_attrs.health_type;
    END IF;

    -- Get defence multiplier based on defender's tile
    v_defence_multiplier := combat_get_defence_multiplier(
        p_match_id,
        p_defender_x,
        p_defender_y
    );
    
    -- Calculate total damage with all multipliers
    v_damage := v_base_damage 
        * combat_get_health_ratio(
            p_match_id,
            v_attacker.game_piece_id,
            p_attacker_x,
            p_attacker_y
        )
        * v_combat_multiplier
        * v_defence_multiplier;

    -- Apply same-unit type damage cap (70%)
    IF v_attacker.game_piece_id = v_defender.game_piece_id AND 
       v_damage > v_defender_attrs.health_max * 0.7 THEN
        v_damage := v_defender_attrs.health_max * 0.7;
    END IF;

    -- Exhaust attacker's actions
    UPDATE match_piece_list
    SET attack_nonexhausted = false,
        move_nonexhausted = false
    WHERE id = v_attacker.id;

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
        -- Reset structure health at defender's position after unit is destroyed
        PERFORM reset_structure_health(p_match_id, p_defender_x, p_defender_y);
    ELSE
        UPDATE match_piece_list
        SET health_val = v_new_health
        WHERE id = v_defender.id;
    END IF;

    -- Handle counterattack if applicable and defender survived
    v_can_counterattack := v_new_health > 0 AND
                          v_defender_attrs.can_fire_back AND 
                          v_defender_attrs.attack_range >= v_attack_distance AND
                          v_defender_attrs.minimum_attack_range <= v_attack_distance AND
                          combat_can_attack(v_defender.game_piece_id, v_attacker.game_piece_id);

    IF v_can_counterattack THEN
        -- Get base counterattack damage
        v_base_damage := v_defender_attrs.base_damage;
        
        -- Get combat multiplier for counterattack
        SELECT multiplier INTO v_combat_multiplier
        FROM combat_multipliers
        WHERE damage_type = v_defender_attrs.damage_type
          AND health_type = v_attacker_attrs.health_type;

        -- Get defence multiplier for counterattack
        v_defence_multiplier := combat_get_defence_multiplier(
            p_match_id,
            p_attacker_x,
            p_attacker_y
        );
        
        -- Calculate total counterattack damage with all multipliers
        v_damage := v_base_damage 
            * combat_get_health_ratio(
                p_match_id,
                v_defender.game_piece_id,
                p_defender_x,
                p_defender_y
            )
            * v_combat_multiplier
            * v_defence_multiplier
            * v_counterattack_multiplier;

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
            -- Reset structure health at attacker's position after unit is destroyed
            PERFORM reset_structure_health(p_match_id, p_attacker_x, p_attacker_y);
        ELSE
            UPDATE match_piece_list
            SET health_val = v_new_health
            WHERE id = v_attacker.id;
        END IF;
    END IF;

    RETURN true;
END;