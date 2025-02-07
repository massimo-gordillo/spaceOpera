/*
  # Add moveUnit function
  
  1. New Functions
    - moveUnit: Updates unit position in match_piece_list
      - Validates game_id exists
      - Validates unit exists at old position
      - Updates position to new coordinates
      - Returns boolean indicating success
*/

CREATE OR REPLACE FUNCTION move_unit(
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
BEGIN
    -- Input validation
    IF p_game_id IS NULL THEN
        RAISE EXCEPTION 'Invalid input: game_id must not be null';
    END IF;

    -- Find the unit at the old position
    SELECT id INTO v_piece_id
    FROM match_piece_list
    WHERE match_id = p_game_id
        AND x_loc = p_old_x
        AND y_loc = p_old_y
        AND piece_type = true;

    -- If no unit found, return false
    IF v_piece_id IS NULL THEN
        RETURN false;
    END IF;

    -- Update the unit's position
    UPDATE match_piece_list
    SET x_loc = p_new_x,
        y_loc = p_new_y
    WHERE id = v_piece_id;

    GET DIAGNOSTICS v_updated = ROW_COUNT;
    
    RETURN v_updated > 0;
END;
$$;