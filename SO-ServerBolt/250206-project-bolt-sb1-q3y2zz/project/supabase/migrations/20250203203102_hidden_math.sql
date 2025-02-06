/*
  # Update get_map function for GET requests
  
  1. Changes
    - Modify get_map function to work with GET requests
    - Add proper error handling
    - Return data in a format suitable for Unity
*/

-- Drop the existing function
DROP FUNCTION IF EXISTS get_map(UUID);

-- Create new function that returns a table instead of jsonb
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
  -- Get map data
  SELECT * INTO v_map
  FROM maps
  WHERE id = p_map_id;
  
  IF NOT FOUND THEN
    RAISE EXCEPTION 'Map not found';
  END IF;

  -- Get tiles as a 1D array
  SELECT array_agg(tile_type ORDER BY y_loc * v_map.width + x_loc)
  INTO v_tiles
  FROM map_tiles
  WHERE map_id = p_map_id;

  -- Get pieces as JSON array
  SELECT jsonb_agg(
    jsonb_build_object(
      'isUnit', piece_type,
      'x', x_loc,
      'y', y_loc,
      'typeId', type_num,
      'ownerId', player_controller,
      'health', health_val
    )
  )
  INTO v_pieces
  FROM map_init_pieces
  WHERE map_id = p_map_id;

  -- Return the result
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