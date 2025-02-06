/*
  # Fix map partitioning
  
  1. Changes
    - Fix partition naming to handle UUIDs properly
    - Keep existing partitioned tables structure
    - Remove duplicate tables
    - Restore triggers with fixed naming
*/

-- Drop the duplicate tables if they exist
DROP TABLE IF EXISTS map_pieces CASCADE;
DROP TABLE IF EXISTS map_terrain CASCADE;

-- Create improved partition creation functions
CREATE OR REPLACE FUNCTION create_map_init_pieces_partition()
RETURNS TRIGGER AS $$
BEGIN
    -- Create partition name by replacing hyphens with underscores
    EXECUTE format(
        'CREATE TABLE IF NOT EXISTS map_init_pieces_%s PARTITION OF map_init_pieces FOR VALUES IN (%L)',
        replace(NEW.id::text, '-', '_'),
        NEW.id
    );
    RETURN NEW;
END;
$$ LANGUAGE plpgsql;

CREATE OR REPLACE FUNCTION create_map_tiles_partition()
RETURNS TRIGGER AS $$
BEGIN
    -- Create partition name by replacing hyphens with underscores
    EXECUTE format(
        'CREATE TABLE IF NOT EXISTS map_tiles_%s PARTITION OF map_tiles FOR VALUES IN (%L)',
        replace(NEW.id::text, '-', '_'),
        NEW.id
    );
    RETURN NEW;
END;
$$ LANGUAGE plpgsql;

-- Recreate triggers
CREATE TRIGGER create_map_init_pieces_partition
    AFTER INSERT ON maps
    FOR EACH ROW
    EXECUTE FUNCTION create_map_init_pieces_partition();

CREATE TRIGGER create_map_tiles_partition
    AFTER INSERT ON maps
    FOR EACH ROW
    EXECUTE FUNCTION create_map_tiles_partition();

-- Test map insertion
DO $$ 
DECLARE
  v_map_id uuid;
BEGIN
  -- Insert map and get its ID
  INSERT INTO maps (name, width, height)
  VALUES ('TestMap21', 16, 19)
  RETURNING id INTO v_map_id;

  -- Insert tiles
  INSERT INTO map_tiles (map_id, x_loc, y_loc, tile_type)
  SELECT 
    v_map_id,
    (gs.i - 1) % 16,  -- x coordinate
    (gs.i - 1) / 16,  -- y coordinate
    tile_type
  FROM (
    SELECT 
      generate_series(1, 304) as i,
      unnest(ARRAY[
        1,1,3,2,2,1,1,3,2,2,2,3,1,1,2,2,3,1,1,1,1,3,2,2,1,3,3,2,1,2,3,3,1,2,2,3,1,1,3,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,3,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,1,1,1,1,3,2,1,1,1,1,1,2,3,1,1,1,1,3,3,1,1,1,3,3,2,1,2,2,2,1,2,3,3,1,1,1,3,1,1,1,1,2,2,2,1,4,4,4,1,2,2,2,1,1,1,1,2,1,1,1,1,2,4,4,4,4,4,4,4,2,1,1,1,1,2,1,1,1,1,1,2,4,4,4,4,4,4,4,2,1,1,1,1,2,2,1,1,1,1,2,4,4,4,4,4,4,4,3,1,1,1,1,1,2,1,1,1,1,3,3,4,4,4,4,4,2,3,1,1,1,1,2,1,1,1,1,1,2,3,4,4,4,4,4,3,2,1,1,1,1,1,2,2,1,1,2,2,2,2,4,4,4,2,2,2,2,1,1,2,3,3,3,3,2,2,2,2,1,4,4,4,1,2,2,2,1,1,2,3
      ]) as tile_type
  ) gs;

  -- Insert pieces
  INSERT INTO map_init_pieces (map_id, piece_type, x_loc, y_loc, type_num, player_controller, health_val)
  VALUES
    (v_map_id, false, 0, 0, 200, 0, 200),
    (v_map_id, false, 0, 13, 200, 0, 200),
    (v_map_id, false, 1, 1, 200, 0, 200),
    (v_map_id, false, 1, 11, 201, 1, 200),
    (v_map_id, false, 2, 3, 200, 0, 200),
    (v_map_id, false, 2, 8, 201, 1, 200),
    (v_map_id, false, 3, 3, 200, 0, 200),
    (v_map_id, false, 3, 12, 205, 1, 200),
    (v_map_id, false, 3, 14, 200, 1, 200),
    (v_map_id, false, 4, 9, 200, 1, 200),
    (v_map_id, false, 4, 10, 200, 1, 200),
    (v_map_id, false, 6, 0, 200, 0, 200),
    (v_map_id, false, 6, 3, 201, 0, 200),
    (v_map_id, false, 7, 8, 200, 0, 200),
    (v_map_id, false, 7, 15, 200, 0, 200),
    (v_map_id, false, 8, 2, 200, 0, 200),
    (v_map_id, false, 10, 2, 200, 0, 200),
    (v_map_id, false, 11, 8, 200, 0, 200),
    (v_map_id, false, 11, 15, 200, 0, 200),
    (v_map_id, false, 12, 0, 200, 0, 200),
    (v_map_id, false, 12, 3, 201, 0, 200),
    (v_map_id, false, 14, 9, 200, 2, 200),
    (v_map_id, false, 14, 10, 200, 2, 200),
    (v_map_id, false, 15, 3, 200, 0, 200),
    (v_map_id, true, 15, 12, 0, 2, 100),
    (v_map_id, false, 15, 12, 205, 2, 200),
    (v_map_id, false, 15, 14, 200, 2, 200),
    (v_map_id, false, 16, 3, 200, 0, 200),
    (v_map_id, false, 16, 8, 201, 2, 200),
    (v_map_id, false, 17, 1, 200, 0, 200),
    (v_map_id, false, 17, 11, 201, 2, 200),
    (v_map_id, false, 18, 0, 200, 0, 200),
    (v_map_id, false, 18, 13, 200, 0, 200);
END $$;