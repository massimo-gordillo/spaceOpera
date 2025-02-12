-- Update action_move to validate movement range using existing column
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

    -- Get unit attributes for movement range
    SELECT * INTO v_unit_attrs
    FROM unit_attributes
    WHERE game_piece_id = v_piece.game_piece_id;

    -- Calculate Manhattan distance
    v_movement_distance := abs(p_new_x - p_old_x) + abs(p_new_y - p_old_y);

    -- Validate movement range
    IF v_movement_distance > v_unit_attrs.movement_range THEN
        RAISE EXCEPTION 'Movement distance % exceeds unit movement range %',
            v_movement_distance, v_unit_attrs.movement_range;
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