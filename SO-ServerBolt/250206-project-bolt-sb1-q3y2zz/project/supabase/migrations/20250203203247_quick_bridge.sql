/*
  # Fix ambiguous id reference in get_map function
  
  1. Changes
    - Fix ambiguous id column reference
    - Add explicit table aliases
    - Improve column selection clarity
*/

-- Drop the existing function
DROP FUNCTION IF EXISTS get_map(UUID);

-- Create new function with fixed column references
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
      'isUnit', mp.piece_type,
      'x', mp.x_loc,
      'y', mp.y_loc,
      'typeId', mp.type_num,
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