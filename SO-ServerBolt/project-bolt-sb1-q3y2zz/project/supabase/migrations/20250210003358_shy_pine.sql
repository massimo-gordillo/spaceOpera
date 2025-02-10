-- Create helper function to reset structure health
CREATE OR REPLACE FUNCTION reset_structure_health(
    p_match_id UUID,
    p_x INTEGER,
    p_y INTEGER
)
RETURNS VOID
LANGUAGE plpgsql
AS $$
DECLARE
    v_structure match_piece_list%ROWTYPE;
    v_structure_attrs structure_attributes%ROWTYPE;
BEGIN
    -- Check if there's a structure at this location
    SELECT * INTO v_structure
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND x_loc = p_x
        AND y_loc = p_y
        AND is_unit = false;

    -- If there's a structure, reset its health
    IF v_structure IS NOT NULL THEN
        SELECT * INTO v_structure_attrs
        FROM structure_attributes
        WHERE game_piece_id = v_structure.game_piece_id;

        IF v_structure_attrs IS NOT NULL THEN
            UPDATE match_piece_list
            SET health_val = v_structure_attrs.default_health
            WHERE id = v_structure.id;
        END IF;
    END IF;
END;
$$;

-- Update action_move to reset structure health when unit moves away
CREATE OR REPLACE FUNCTION action_move(
    p_game_id UUID,
    p_old_x INTEGER,
    p_old_y INTEGER,
    p_new_x INTEGER,
    p_new_y INTEGER
)
RETURNS BOOLEAN
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    v_piece_id UUID;
    v_updated BOOLEAN;
    v_map_width INTEGER;
    v_map_height INTEGER;
    v_map_id UUID;
BEGIN
    -- Get map dimensions from the match's associated map
    SELECT m.width, m.height, m.id INTO v_map_width, v_map_height, v_map_id
    FROM matches mt
    JOIN maps m ON m.id = mt.map_id
    WHERE mt.id = p_game_id;

    IF v_map_width IS NULL THEN
        RAISE EXCEPTION 'Invalid game_id: match not found';
    END IF;

    -- Validate coordinates are within map boundaries
    IF p_old_x < 0 OR p_old_x >= v_map_width OR 
       p_old_y < 0 OR p_old_y >= v_map_height THEN
        RAISE EXCEPTION 'Invalid old position (%, %): coordinates out of map bounds (width: %, height: %)',
            p_old_x, p_old_y, v_map_width, v_map_height;
    END IF;

    IF p_new_x < 0 OR p_new_x >= v_map_width OR 
       p_new_y < 0 OR p_new_y >= v_map_height THEN
        RAISE EXCEPTION 'Invalid new position (%, %): coordinates out of map bounds (width: %, height: %)',
            p_new_x, p_new_y, v_map_width, v_map_height;
    END IF;

    -- Find the unit at the old position
    SELECT id INTO v_piece_id
    FROM match_piece_list
    WHERE match_id = p_game_id
        AND x_loc = p_old_x
        AND y_loc = p_old_y
        AND is_unit = true;

    -- If no unit found, raise an exception with detailed message
    IF v_piece_id IS NULL THEN
        RAISE EXCEPTION 'No unit found at position (%, %)', p_old_x, p_old_y;
    END IF;

    -- Check if destination is occupied by another piece
    IF EXISTS (
        SELECT 1 
        FROM match_piece_list 
        WHERE match_id = p_game_id 
            AND x_loc = p_new_x 
            AND y_loc = p_new_y
            AND is_unit = TRUE
    ) THEN
        RAISE EXCEPTION 'Destination position (%, %) is already occupied', p_new_x, p_new_y;
    END IF;

    -- Update the unit's position
    UPDATE match_piece_list
    SET x_loc = p_new_x,
        y_loc = p_new_y
    WHERE id = v_piece_id;

    GET DIAGNOSTICS v_updated = ROW_COUNT;
    
    IF NOT v_updated THEN
        RAISE EXCEPTION 'Failed to update unit position';
    END IF;

    -- Reset structure health at the old position after unit moves away
    PERFORM reset_structure_health(p_game_id, p_old_x, p_old_y);

    RETURN true;
END;
$$;

-- Update action_combat to reset structure health when a unit is destroyed
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
                          v_defender_attrs.attack_range >= v_attacker_attrs.attack_range AND
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
$$;