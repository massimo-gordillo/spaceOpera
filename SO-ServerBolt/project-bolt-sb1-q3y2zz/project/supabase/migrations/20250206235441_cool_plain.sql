/*
  # Update map_tiles table structure
  
  1. Changes
    - Add temporary column for type conversion
    - Convert data to proper type
    - Drop old column
    - Rename new column
    - Add foreign key constraint
  
  2. Notes
    - Handles type conversion safely
    - Preserves existing data
    - Adds proper foreign key relationship
*/

-- Add new column with correct type
ALTER TABLE map_tiles 
ADD COLUMN tile_type_id_new INTEGER;

-- Convert existing data
UPDATE map_tiles 
SET tile_type_id_new = tile_type::INTEGER;

-- Drop old column and rename new one
ALTER TABLE map_tiles 
DROP COLUMN tile_type,
RENAME COLUMN tile_type_id_new TO tile_type_id;

-- Add foreign key constraint
ALTER TABLE map_tiles
ADD CONSTRAINT fk_map_tiles_tile_type
FOREIGN KEY (tile_type_id)
REFERENCES tile_values(tile_type_id);

-- Update get_map function to use new column name
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
  SELECT array_agg(mt.tile_type_id ORDER BY mt.y_loc * v_map.width + mt.x_loc)
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