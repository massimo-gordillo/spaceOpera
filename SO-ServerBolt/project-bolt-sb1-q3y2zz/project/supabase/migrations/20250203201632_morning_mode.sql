/*
  # Add get_map RPC function
  
  1. Changes
    - Add get_map function to retrieve complete map data including tiles and pieces
    - Returns a JSON object with map details, tiles array, and pieces array
    - Includes error handling and validation
*/

CREATE OR REPLACE FUNCTION get_map(p_map_id UUID)
RETURNS jsonb
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
  v_map maps;
  v_tiles jsonb;
  v_pieces jsonb;
  v_result jsonb;
BEGIN
  -- Get map data
  SELECT * INTO v_map
  FROM maps
  WHERE id = p_map_id;
  
  IF NOT FOUND THEN
    RAISE EXCEPTION 'Map not found';
  END IF;

  -- Get tiles as array
  SELECT jsonb_agg(
    jsonb_build_object(
      'x', x_loc,
      'y', y_loc,
      'type', tile_type
    )
    ORDER BY y_loc * v_map.width + x_loc
  ) INTO v_tiles
  FROM map_tiles
  WHERE map_id = p_map_id;

  -- Get pieces as array
  SELECT jsonb_agg(
    jsonb_build_object(
      'isUnit', piece_type,
      'x', x_loc,
      'y', y_loc,
      'typeId', type_num,
      'ownerId', player_controller,
      'health', health_val
    )
  ) INTO v_pieces
  FROM map_init_pieces
  WHERE map_id = p_map_id;

  -- Build complete response
  v_result := jsonb_build_object(
    'id', v_map.id,
    'name', v_map.name,
    'width', v_map.width,
    'height', v_map.height,
    'tiles', COALESCE(v_tiles, '[]'::jsonb),
    'pieces', COALESCE(v_pieces, '[]'::jsonb)
  );

  RETURN v_result;
END;
$$;