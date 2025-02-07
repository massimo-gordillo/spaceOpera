/*
  # Update functions for new column names

  1. Changes
    - Update get_map to use is_unit and game_piece_id
    - Update move_unit to use is_unit
    - Remove apply_action and validate_move (use grid-less functions instead)

  2. Security
    - Maintain existing SECURITY DEFINER settings
    - Keep existing RLS policies
*/

-- Update get_map function to use new column names
CREATE OR REPLACE FUNCTION get_map(p_map_id UUID)
RETURNS TABLE (
  id UUID,
  name TEXT,
  width INTEGER,
  height INTEGER,
  tiles INTEGER[],
  pieces JSONB
) 
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
  v_map maps;
  v_tiles INTEGER[];
  v_pieces JSONB;
BEGIN
  -- Get map data with explicit column reference
  SELECT m.* INTO v_map
  FROM maps m
  WHERE m.id = p_map_id;
  
  IF NOT FOUND THEN
    RAISE EXCEPTION 'Map not found';
  END IF;

  -- Get tiles as a 1D array with explicit table alias
  SELECT array_agg(mt.tile_type ORDER BY mt.y_loc * v_map.width + mt.x_loc)
  INTO v_tiles
  FROM map_tiles mt
  WHERE mt.map_id = p_map_id;

  -- Get pieces as JSON array with explicit table alias
  SELECT jsonb_agg(
    jsonb_build_object(
      'isUnit', mp.is_unit,
      'x', mp.x_loc,
      'y', mp.y_loc,
      'typeId', mp.game_piece_id,
      'ownerId', mp.player_controller,
      'health', mp.health_val
    )
  )
  INTO v_pieces
  FROM map_init_pieces mp
  WHERE mp.map_id = p_map_id;

  -- Return the result with explicit map reference
  RETURN QUERY
  SELECT 
    v_map.id,
    v_map.name,
    v_map.width,
    v_map.height,
    COALESCE(v_tiles, ARRAY[]::INTEGER[]),
    COALESCE(v_pieces, '[]'::jsonb);
END;
$$;

-- Update move_unit function to use is_unit
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

    RETURN true;
END;
$$;

-- Drop deprecated grid-based functions
DROP FUNCTION IF EXISTS apply_action(UUID, JSONB);
DROP FUNCTION IF EXISTS validate_move(JSONB, JSONB, JSONB, INTEGER, INTEGER, INTEGER, INTEGER, INTEGER);