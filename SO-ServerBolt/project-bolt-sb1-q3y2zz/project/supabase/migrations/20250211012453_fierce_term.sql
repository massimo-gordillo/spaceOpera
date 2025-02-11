-- Create function to check and apply victory conditions
CREATE OR REPLACE FUNCTION check_victory_conditions(
    p_match_id UUID,
    p_capturing_player INTEGER
)
RETURNS BOOLEAN
LANGUAGE plpgsql
AS $$
DECLARE
    v_match matches%ROWTYPE;
    v_command_structures INTEGER;
    v_winner_id UUID;
BEGIN
    -- Get match data
    SELECT * INTO v_match
    FROM matches
    WHERE id = p_match_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'Match not found';
    END IF;

    -- Check if match is already completed
    IF v_match.is_completed THEN
        RETURN false;
    END IF;

    -- Count command structures for the opponent
    SELECT COUNT(*)
    INTO v_command_structures
    FROM match_piece_list mpl
    JOIN structure_attributes sa ON mpl.game_piece_id = sa.game_piece_id
    WHERE mpl.match_id = p_match_id
        AND mpl.is_unit = false
        AND sa.is_command = true
        AND mpl.player_controller != p_capturing_player;

    -- If no command structures remain, the capturing player wins
    IF v_command_structures = 0 THEN
        -- Determine winner ID
        v_winner_id := CASE p_capturing_player
            WHEN 1 THEN v_match.player1_id
            WHEN 2 THEN v_match.player2_id
        END;

        -- Update match with victory information
        UPDATE matches
        SET is_completed = true,
            ended_at = CURRENT_TIMESTAMP,
            winner_id = v_winner_id
        WHERE id = p_match_id;

        RETURN true;
    END IF;

    RETURN false;
END;
$$;

-- Update action_capture to check victory conditions
CREATE OR REPLACE FUNCTION action_capture(
    p_match_id UUID,
    p_unit_x INTEGER,
    p_unit_y INTEGER,
    p_structure_x INTEGER,
    p_structure_y INTEGER
)
RETURNS BOOLEAN
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    v_unit match_piece_list%ROWTYPE;
    v_structure match_piece_list%ROWTYPE;
    v_unit_attrs unit_attributes%ROWTYPE;
    v_structure_attrs structure_attributes%ROWTYPE;
    v_capture_damage INTEGER;
    v_new_health INTEGER;
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

    -- Get unit and validate it exists
    SELECT * INTO v_unit
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND x_loc = p_unit_x
        AND y_loc = p_unit_y
        AND is_unit = true;

    IF v_unit IS NULL THEN
        RAISE EXCEPTION 'No unit found at position (%, %)', p_unit_x, p_unit_y;
    END IF;

    -- Get structure and validate it exists
    SELECT * INTO v_structure
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND x_loc = p_structure_x
        AND y_loc = p_structure_y
        AND is_unit = false;

    IF v_structure IS NULL THEN
        RAISE EXCEPTION 'No structure found at position (%, %)', p_structure_x, p_structure_y;
    END IF;

    -- Get unit attributes
    SELECT * INTO v_unit_attrs
    FROM unit_attributes
    WHERE game_piece_id = v_unit.game_piece_id;

    -- Validate unit can capture
    IF NOT v_unit_attrs.is_resource_unit THEN
        RAISE EXCEPTION 'Unit cannot capture structures';
    END IF;

    -- Get structure attributes
    SELECT * INTO v_structure_attrs
    FROM structure_attributes
    WHERE game_piece_id = v_structure.game_piece_id;

    -- Validate structure exists in attributes
    IF v_structure_attrs IS NULL THEN
        RAISE EXCEPTION 'Invalid structure type';
    END IF;

    -- Cannot capture own structures
    IF v_unit.player_controller = v_structure.player_controller AND v_structure.player_controller != 0 THEN
        RAISE EXCEPTION 'Cannot capture your own structures';
    END IF;

    -- Must be on same square to capture
    IF p_unit_x != p_structure_x OR p_unit_y != p_structure_y THEN
        RAISE EXCEPTION 'Unit must be on the same square as the structure to capture';
    END IF;

    -- Calculate capture damage (unit's health as a percentage of 100)
    v_capture_damage := (v_unit.health_val::NUMERIC / v_unit_attrs.health_max * 100)::INTEGER;

    -- Calculate new structure health
    v_new_health := v_structure.health_val - v_capture_damage;

    -- If structure health reaches 0, transfer ownership
    IF v_new_health <= 0 THEN
        UPDATE match_piece_list
        SET player_controller = v_unit.player_controller,
            health_val = v_structure_attrs.default_health
        WHERE id = v_structure.id;

        -- Check victory conditions if this was a command structure
        IF v_structure_attrs.is_command THEN
            PERFORM check_victory_conditions(p_match_id, v_unit.player_controller);
        END IF;
    ELSE
        -- Otherwise just update health
        UPDATE match_piece_list
        SET health_val = v_new_health
        WHERE id = v_structure.id;
    END IF;

    RETURN true;
END;
$$;

-- Update action_move to validate match completion
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
    v_unit_attrs unit_attributes%ROWTYPE;
    v_movement_distance INTEGER;
    v_match matches%ROWTYPE;
BEGIN
    -- Get match data and validate it's not completed
    SELECT * INTO v_match
    FROM matches
    WHERE id = p_game_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'Match not found';
    END IF;

    IF v_match.is_completed THEN
        RAISE EXCEPTION 'Cannot perform actions on a completed match';
    END IF;

    -- Rest of the function remains unchanged
    -- [Previous action_move implementation...]
    
    RETURN true;
END;
$$;

-- Update action_combat to validate match completion
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
    v_match matches%ROWTYPE;
    -- [Previous variable declarations...]
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

    -- Rest of the function remains unchanged
    -- [Previous action_combat implementation...]
    
    RETURN true;
END;
$$;

-- Update action_produce to validate match completion
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
    v_match matches%ROWTYPE;
    -- [Previous variable declarations...]
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

    -- Rest of the function remains unchanged
    -- [Previous action_produce implementation...]
    
    RETURN true;
END;
$$;