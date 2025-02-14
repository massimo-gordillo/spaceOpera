-- Create function to validate a single game action without executing it
CREATE OR REPLACE FUNCTION validate_game_action(
    p_action game_action,
    p_match matches
)
RETURNS BOOLEAN
LANGUAGE plpgsql
AS $$
DECLARE
    v_unit match_piece_list%ROWTYPE;
    v_structure match_piece_list%ROWTYPE;
    v_unit_attrs unit_attributes%ROWTYPE;
    v_structure_attrs structure_attributes%ROWTYPE;
    v_movement_distance INTEGER;
    v_attack_distance INTEGER;
    v_player_resources INTEGER;
BEGIN
    -- Validate action type
    IF p_action.action_type NOT IN (0, 1, 2, 3) THEN
        RAISE EXCEPTION 'Invalid action type: %', p_action.action_type;
    END IF;

    -- Common validations based on action type
    CASE p_action.action_type
        WHEN 0 THEN -- Move
            -- Get unit at source location
            SELECT * INTO v_unit
            FROM match_piece_list
            WHERE match_id = p_action.match_id
                AND x_loc = p_action.from_location_x
                AND y_loc = p_action.from_location_y
                AND is_unit = true;

            IF v_unit IS NULL THEN
                RAISE EXCEPTION 'No unit found at position (%, %)', 
                    p_action.from_location_x, p_action.from_location_y;
            END IF;

            -- Check if unit can move
            IF NOT v_unit.move_nonexhausted THEN
                RAISE EXCEPTION 'Unit has already moved this turn';
            END IF;

            -- Get unit attributes
            SELECT * INTO v_unit_attrs
            FROM unit_attributes
            WHERE game_piece_id = v_unit.game_piece_id;

            -- Calculate and validate movement distance
            v_movement_distance := abs(p_action.to_location_x - p_action.from_location_x) + 
                                 abs(p_action.to_location_y - p_action.from_location_y);
            IF v_movement_distance > v_unit_attrs.movement_range THEN
                RAISE EXCEPTION 'Movement distance % exceeds unit movement range %',
                    v_movement_distance, v_unit_attrs.movement_range;
            END IF;

            -- Check destination is not occupied
            IF EXISTS (
                SELECT 1 
                FROM match_piece_list 
                WHERE match_id = p_action.match_id 
                    AND x_loc = p_action.to_location_x 
                    AND y_loc = p_action.to_location_y
                    AND is_unit = true
            ) THEN
                RAISE EXCEPTION 'Destination position (%, %) is already occupied', 
                    p_action.to_location_x, p_action.to_location_y;
            END IF;

        WHEN 1 THEN -- Attack
            -- Get attacker
            SELECT * INTO v_unit
            FROM match_piece_list
            WHERE match_id = p_action.match_id
                AND x_loc = p_action.from_location_x
                AND y_loc = p_action.from_location_y
                AND is_unit = true;

            IF v_unit IS NULL THEN
                RAISE EXCEPTION 'No unit found at attacker position (%, %)', 
                    p_action.from_location_x, p_action.from_location_y;
            END IF;

            -- Check if unit can attack
            IF NOT v_unit.attack_nonexhausted THEN
                RAISE EXCEPTION 'Unit has already attacked this turn';
            END IF;

            -- Get defender
            SELECT * INTO v_structure
            FROM match_piece_list
            WHERE match_id = p_action.match_id
                AND x_loc = p_action.to_location_x
                AND y_loc = p_action.to_location_y
                AND is_unit = true;

            IF v_structure IS NULL THEN
                RAISE EXCEPTION 'No unit found at defender position (%, %)', 
                    p_action.to_location_x, p_action.to_location_y;
            END IF;

            -- Prevent friendly fire
            IF v_unit.player_controller = v_structure.player_controller THEN
                RAISE EXCEPTION 'Cannot attack units controlled by the same player';
            END IF;

            -- Get unit attributes
            SELECT * INTO v_unit_attrs
            FROM unit_attributes
            WHERE game_piece_id = v_unit.game_piece_id;

            -- Calculate and validate attack distance
            v_attack_distance := abs(p_action.to_location_x - p_action.from_location_x) + 
                               abs(p_action.to_location_y - p_action.from_location_y);

            IF v_attack_distance < v_unit_attrs.minimum_attack_range THEN
                RAISE EXCEPTION 'Target is too close. Minimum attack range is %', 
                    v_unit_attrs.minimum_attack_range;
            END IF;

            IF v_attack_distance > v_unit_attrs.attack_range THEN
                RAISE EXCEPTION 'Target is out of range. Maximum attack range is %',
                    v_unit_attrs.attack_range;
            END IF;

        WHEN 2 THEN -- Capture
            -- Get unit
            SELECT * INTO v_unit
            FROM match_piece_list
            WHERE match_id = p_action.match_id
                AND x_loc = p_action.from_location_x
                AND y_loc = p_action.from_location_y
                AND is_unit = true;

            IF v_unit IS NULL THEN
                RAISE EXCEPTION 'No unit found at position (%, %)', 
                    p_action.from_location_x, p_action.from_location_y;
            END IF;

            -- Get structure
            SELECT * INTO v_structure
            FROM match_piece_list
            WHERE match_id = p_action.match_id
                AND x_loc = p_action.to_location_x
                AND y_loc = p_action.to_location_y
                AND is_unit = false;

            IF v_structure IS NULL THEN
                RAISE EXCEPTION 'No structure found at position (%, %)', 
                    p_action.to_location_x, p_action.to_location_y;
            END IF;

            -- Get unit attributes
            SELECT * INTO v_unit_attrs
            FROM unit_attributes
            WHERE game_piece_id = v_unit.game_piece_id;

            -- Validate unit can capture
            IF NOT v_unit_attrs.is_resource_unit THEN
                RAISE EXCEPTION 'Unit cannot capture structures';
            END IF;

            -- Cannot capture own structures
            IF v_unit.player_controller = v_structure.player_controller AND 
               v_structure.player_controller != 0 THEN
                RAISE EXCEPTION 'Cannot capture your own structures';
            END IF;

            -- Must be on same square
            IF p_action.from_location_x != p_action.to_location_x OR 
               p_action.from_location_y != p_action.to_location_y THEN
                RAISE EXCEPTION 'Unit must be on the same square as the structure to capture';
            END IF;

        WHEN 3 THEN -- Produce
            -- Get structure
            SELECT * INTO v_structure
            FROM match_piece_list
            WHERE match_id = p_action.match_id
                AND x_loc = p_action.to_location_x
                AND y_loc = p_action.to_location_y
                AND is_unit = false;

            IF v_structure IS NULL THEN
                RAISE EXCEPTION 'No structure found at position (%, %)', 
                    p_action.to_location_x, p_action.to_location_y;
            END IF;

            -- Check if structure can produce
            IF NOT v_structure.production_nonexhausted THEN
                RAISE EXCEPTION 'Structure has already produced this turn';
            END IF;

            -- Get structure attributes
            SELECT * INTO v_structure_attrs
            FROM structure_attributes
            WHERE game_piece_id = v_structure.game_piece_id;

            -- Validate it's a production structure
            IF NOT v_structure_attrs.is_production THEN
                RAISE EXCEPTION 'Structure at (%, %) is not a production facility', 
                    p_action.to_location_x, p_action.to_location_y;
            END IF;

            -- Validate structure ownership
            IF v_structure.player_controller != (
                CASE 
                    WHEN p_match.current_player_id = p_match.player1_id THEN 1
                    ELSE 2
                END
            ) THEN
                RAISE EXCEPTION 'Structure is not owned by the current player';
            END IF;

            -- Get unit attributes
            SELECT * INTO v_unit_attrs
            FROM unit_attributes
            WHERE game_piece_id = p_action.game_piece_id;

            IF NOT FOUND THEN
                RAISE EXCEPTION 'Invalid unit type: %', p_action.game_piece_id;
            END IF;

            -- Validate terrain type match
            IF v_structure_attrs.production_terrain_type != v_unit_attrs.unit_terrain_type THEN
                RAISE EXCEPTION 'Structure cannot produce units of type %', 
                    v_unit_attrs.unit_terrain_type;
            END IF;

            -- Check if square is occupied
            IF EXISTS (
                SELECT 1
                FROM match_piece_list
                WHERE match_id = p_action.match_id
                    AND x_loc = p_action.to_location_x
                    AND y_loc = p_action.to_location_y
                    AND is_unit = true
            ) THEN
                RAISE EXCEPTION 'Cannot produce unit: square is occupied';
            END IF;

            -- Check if player can afford the unit
            v_player_resources := CASE 
                WHEN p_match.current_player_id = p_match.player1_id THEN p_match.player1_resources
                ELSE p_match.player2_resources
            END;

            IF v_player_resources < v_unit_attrs.price THEN
                RAISE EXCEPTION 'Insufficient resources to produce unit (cost: %, available: %)',
                    v_unit_attrs.price, v_player_resources;
            END IF;
    END CASE;

    RETURN true;
END;
$$;

-- Update submit_turn to validate all actions before executing any
CREATE OR REPLACE FUNCTION submit_turn(
    p_match_id UUID,
    p_actions game_action[]
)
RETURNS BOOLEAN
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    v_match matches%ROWTYPE;
    v_action game_action;
    v_current_player UUID;
    v_last_turn_number SMALLINT := -1;
    v_last_action_number SMALLINT := -1;
BEGIN
    -- Get match data
    SELECT * INTO v_match
    FROM matches
    WHERE id = p_match_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'Match not found';
    END IF;

    -- Check if match is completed
    IF v_match.is_completed THEN
        RAISE EXCEPTION 'Cannot submit actions for completed match';
    END IF;

    -- Get current player
    v_current_player := v_match.current_player_id;

    -- First pass: validate all actions
    FOREACH v_action IN ARRAY p_actions
    LOOP
        -- Validate match ID
        IF v_action.match_id != p_match_id THEN
            RAISE EXCEPTION 'Invalid match ID in action';
        END IF;

        -- Validate player ID
        IF v_action.player_id != v_current_player THEN
            RAISE EXCEPTION 'Action player ID does not match current player';
        END IF;

        -- Validate turn number
        IF v_action.turn_number != v_match.turn_number THEN
            RAISE EXCEPTION 'Invalid turn number: expected %, got %',
                v_match.turn_number, v_action.turn_number;
        END IF;

        -- Validate action ordering
        IF v_action.turn_number = v_last_turn_number AND 
           v_action.action_number <= v_last_action_number THEN
            RAISE EXCEPTION 'Actions must be in ascending order';
        END IF;

        -- Validate the action without executing it
        IF NOT validate_game_action(v_action, v_match) THEN
            RAISE EXCEPTION 'Action validation failed for action % of turn %',
                v_action.action_number, v_action.turn_number;
        END IF;

        -- Update last processed action/turn numbers
        v_last_turn_number := v_action.turn_number;
        v_last_action_number := v_action.action_number;
    END LOOP;

    -- Second pass: execute all actions
    FOREACH v_action IN ARRAY p_actions
    LOOP
        IF NOT process_game_action(v_action) THEN
            RAISE EXCEPTION 'Failed to process action % of turn %',
                v_action.action_number, v_action.turn_number;
        END IF;
    END LOOP;

    -- End turn and switch current player
    PERFORM match_new_turn(p_match_id);

    RETURN true;
END;
$$;