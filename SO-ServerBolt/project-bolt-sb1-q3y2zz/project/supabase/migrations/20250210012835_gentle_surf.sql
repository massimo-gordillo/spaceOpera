-- Add action exhaustion columns to match_piece_list
ALTER TABLE match_piece_list
ADD COLUMN move_nonexhausted BOOLEAN DEFAULT FALSE,
ADD COLUMN attack_nonexhausted BOOLEAN DEFAULT FALSE,
ADD COLUMN production_nonexhausted BOOLEAN DEFAULT FALSE;

-- Update insert_game_pieces function to handle initial action states
CREATE OR REPLACE FUNCTION insert_game_pieces(
    p_match_id UUID,
    p_map_id UUID,
    p_player1_id UUID,
    p_player_a_id UUID
)
RETURNS void
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
BEGIN
    INSERT INTO match_piece_list (
        match_id,
        is_unit,
        x_loc,
        y_loc,
        game_piece_id,
        player_controller,
        health_val,
        move_nonexhausted,
        attack_nonexhausted,
        production_nonexhausted
    )
    SELECT
        p_match_id,
        piece_type,
        x_loc,
        y_loc,
        game_piece_id,
        CASE 
            -- Remap player controllers based on player assignment
            WHEN player_controller = 0 THEN 0  -- Neutral pieces stay 0
            WHEN player_controller = 1 THEN    -- Player 1 pieces
                CASE WHEN p_player1_id = p_player_a_id THEN 1 ELSE 2 END
            WHEN player_controller = 2 THEN    -- Player 2 pieces
                CASE WHEN p_player1_id = p_player_a_id THEN 2 ELSE 1 END
            ELSE player_controller             -- Keep other values as is
        END,
        health_val,
        -- Set initial action states
        CASE 
            WHEN piece_type = true AND  -- Is a unit
                 CASE  -- Belongs to player 1
                    WHEN player_controller = 1 THEN p_player1_id = p_player_a_id
                    WHEN player_controller = 2 THEN p_player1_id != p_player_a_id
                    ELSE false
                 END
            THEN true  -- Player 1's units start non-exhausted
            ELSE false -- All other units start exhausted
        END,
        CASE 
            WHEN piece_type = true AND  -- Is a unit
                 CASE  -- Belongs to player 1
                    WHEN player_controller = 1 THEN p_player1_id = p_player_a_id
                    WHEN player_controller = 2 THEN p_player1_id != p_player_a_id
                    ELSE false
                 END
            THEN true  -- Player 1's units start non-exhausted
            ELSE false -- All other units start exhausted
        END,
        CASE 
            WHEN NOT piece_type AND  -- Is a structure
                 CASE  -- Belongs to player 1
                    WHEN player_controller = 1 THEN p_player1_id = p_player_a_id
                    WHEN player_controller = 2 THEN p_player1_id != p_player_a_id
                    ELSE false
                 END
            THEN true  -- Player 1's structures start non-exhausted
            ELSE false -- All other structures start exhausted
        END
    FROM map_init_pieces
    WHERE map_id = p_map_id;
END;
$$;

-- Update match_new_turn to refresh action states
CREATE OR REPLACE FUNCTION match_new_turn(
    p_match_id UUID
)
RETURNS VOID
LANGUAGE plpgsql
AS $$
DECLARE
    v_current_player INTEGER;
    v_match matches%ROWTYPE;
    v_next_player INTEGER;
BEGIN
    -- Get match data
    SELECT * INTO v_match
    FROM matches
    WHERE id = p_match_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'Match not found';
    END IF;

    -- Get current player number
    SELECT 
        CASE 
            WHEN v_match.current_player_id = v_match.player1_id THEN 1
            WHEN v_match.current_player_id = v_match.player2_id THEN 2
            ELSE NULL
        END INTO v_current_player;

    IF v_current_player IS NULL THEN
        RAISE EXCEPTION 'Invalid match state: current player not found';
    END IF;

    -- Calculate and apply income for current player
    PERFORM match_calculate_income(p_match_id, v_current_player);

    -- Determine next player
    v_next_player := CASE v_current_player
        WHEN 1 THEN 2
        ELSE 1
    END;

    -- Switch current player and increment turn number
    UPDATE matches
    SET current_player_id = CASE 
            WHEN current_player_id = player1_id THEN player2_id
            ELSE player1_id
        END,
        turn_number = turn_number + 1
    WHERE id = p_match_id;

    -- Reset action states for next player's pieces
    UPDATE match_piece_list
    SET 
        move_nonexhausted = CASE 
            WHEN is_unit THEN true 
            ELSE NULL 
        END,
        attack_nonexhausted = CASE 
            WHEN is_unit THEN true 
            ELSE NULL 
        END,
        production_nonexhausted = CASE 
            WHEN NOT is_unit AND EXISTS (
                SELECT 1 FROM structure_attributes 
                WHERE game_piece_id = match_piece_list.game_piece_id 
                AND is_production = true
            ) THEN true 
            ELSE NULL 
        END
    WHERE match_id = p_match_id
    AND player_controller = v_next_player;
END;
$$;

-- Update action_move to handle exhaustion
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
    v_piece match_piece_list%ROWTYPE;
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
    SELECT * INTO v_piece
    FROM match_piece_list
    WHERE match_id = p_game_id
        AND x_loc = p_old_x
        AND y_loc = p_old_y
        AND is_unit = true;

    -- If no unit found, raise an exception with detailed message
    IF v_piece IS NULL THEN
        RAISE EXCEPTION 'No unit found at position (%, %)', p_old_x, p_old_y;
    END IF;

    -- Check if the unit can move
    IF NOT v_piece.move_nonexhausted THEN
        RAISE EXCEPTION 'Unit has already moved this turn';
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

    -- Update the unit's position and exhaust its move action
    UPDATE match_piece_list
    SET x_loc = p_new_x,
        y_loc = p_new_y,
        move_nonexhausted = false
    WHERE id = v_piece.id;

    GET DIAGNOSTICS v_updated = ROW_COUNT;
    
    IF NOT v_updated THEN
        RAISE EXCEPTION 'Failed to update unit position';
    END IF;

    -- Reset structure health at the old position after unit moves away
    PERFORM reset_structure_health(p_game_id, p_old_x, p_old_y);

    RETURN true;
END;
$$;

-- Update action_combat to handle exhaustion
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

-- Update action_produce to handle exhaustion
CREATE OR REPLACE FUNCTION action_produce(
    p_match_id UUID,
    p_x INTEGER,
    p_y INTEGER,
    p_unit_type INTEGER
)
RETURNS BOOLEAN
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    v_structure match_piece_list%ROWTYPE;
    v_structure_attrs structure_attributes%ROWTYPE;
    v_unit_attrs unit_attributes%ROWTYPE;
    v_match matches%ROWTYPE;
    v_current_player INTEGER;
    v_unit_cost INTEGER;
    v_player_resources INTEGER;
BEGIN
    -- Get match data
    SELECT * INTO v_match
    FROM matches
    WHERE id = p_match_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'Match not found';
    END IF;

    -- Determine current player number
    SELECT 
        CASE 
            WHEN v_match.current_player_id = v_match.player1_id THEN 1
            WHEN v_match.current_player_id = v_match.player2_id THEN 2
            ELSE NULL
        END INTO v_current_player;

    -- Get structure at location
    SELECT * INTO v_structure
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND x_loc = p_x
        AND y_loc = p_y
        AND is_unit = false;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'No structure found at position (%, %)', p_x, p_y;
    END IF;

    -- Check if the structure can produce
    IF NOT v_structure.production_nonexhausted THEN
        RAISE EXCEPTION 'Structure has already produced this turn';
    END IF;

    -- Get structure attributes
    SELECT * INTO v_structure_attrs
    FROM structure_attributes
    WHERE game_piece_id = v_structure.game_piece_id;

    -- Validate it's a production structure
    IF NOT v_structure_attrs.is_production THEN
        RAISE EXCEPTION 'Structure at (%, %) is not a production facility', p_x, p_y;
    END IF;

    -- Validate structure ownership
    IF v_structure.player_controller != v_current_player THEN
        RAISE EXCEPTION 'Structure is not owned by the current player';
    END IF;

    -- Get unit attributes
    SELECT * INTO v_unit_attrs
    FROM unit_attributes
    WHERE game_piece_id = p_unit_type;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'Invalid unit type: %', p_unit_type;
    END IF;

    -- Validate terrain type match
    IF v_structure_attrs.production_terrain_type != v_unit_attrs.unit_terrain_type THEN
        RAISE EXCEPTION 'Structure cannot produce units of type %', v_unit_attrs.unit_terrain_type;
    END IF;

    -- Check if square is occupied by a unit
    IF EXISTS (
        SELECT 1
        FROM match_piece_list
        WHERE match_id = p_match_id
            AND x_loc = p_x
            AND y_loc = p_y
            AND is_unit = true
    ) THEN
        RAISE EXCEPTION 'Cannot produce unit: square is occupied';
    END IF;

    -- Get player's resources
    v_player_resources := CASE v_current_player
        WHEN 1 THEN v_match.player1_resources
        WHEN 2 THEN v_match.player2_resources
    END;

    -- Check if player can afford the unit
    IF v_player_resources < v_unit_attrs.price THEN
        RAISE EXCEPTION 'Insufficient resources to produce unit (cost: %, available: %)',
            v_unit_attrs.price, v_player_resources;
    END IF;

    -- Deduct resources
    UPDATE matches
    SET player1_resources = CASE WHEN v_current_player = 1 
            THEN player1_resources - v_unit_attrs.price
            ELSE player1_resources END,
        player2_resources = CASE WHEN v_current_player = 2
            THEN player2_resources - v_unit_attrs.price
            ELSE player2_resources END
    WHERE id = p_match_id;

    -- Exhaust the structure's production action
    UPDATE match_piece_list
    SET production_nonexhausted = false
    WHERE id = v_structure.id;

    -- Create the unit
    INSERT INTO match_piece_list (
        match_id,
        is_unit,
        x_loc,
        y_loc,
        game_piece_id,
        player_controller,
        health_val,
        move_nonexhausted,
        attack_nonexhausted,
        production_nonexhausted
    ) VALUES (
        p_match_id,
        true,
        p_x,
        p_y,
        p_unit_type,
        v_current_player,
        v_unit_attrs.health_max,
        false,  -- New units can't move on their production turn
        false,  -- New units can't attack on their production turn
        NULL    -- Units don't have production actions
    );

    RETURN true;
END;
$$;