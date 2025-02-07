/*
  # Remove partitioning and create simple tables
  
  1. Changes
    - Drop existing partitioned tables and related objects
    - Create new simple tables with indexes
    - Migrate test data to new structure
*/

-- Drop existing partition-related objects
DROP TRIGGER IF EXISTS create_map_init_pieces_partition ON maps;
DROP TRIGGER IF EXISTS create_map_tiles_partition ON maps;
DROP FUNCTION IF EXISTS create_map_init_pieces_partition();
DROP FUNCTION IF EXISTS create_map_tiles_partition();

-- Drop existing partitioned tables
DROP TABLE IF EXISTS map_init_pieces CASCADE;
DROP TABLE IF EXISTS map_tiles CASCADE;

-- Create new simple tables
CREATE TABLE map_init_pieces (
    id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
    map_id UUID REFERENCES maps(id) ON DELETE CASCADE,
    piece_type BOOLEAN NOT NULL,
    x_loc INTEGER NOT NULL,
    y_loc INTEGER NOT NULL,
    type_num INTEGER NOT NULL,
    player_controller INTEGER NOT NULL,
    health_val INTEGER NOT NULL
);

CREATE TABLE map_tiles (
    id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
    map_id UUID REFERENCES maps(id) ON DELETE CASCADE,
    x_loc INTEGER NOT NULL,
    y_loc INTEGER NOT NULL,
    tile_type INTEGER NOT NULL
);

-- Create indexes for efficient querying
CREATE INDEX idx_map_init_pieces_map_id ON map_init_pieces(map_id);
CREATE INDEX idx_map_init_pieces_location ON map_init_pieces(map_id, x_loc, y_loc);
CREATE INDEX idx_map_tiles_map_id ON map_tiles(map_id);
CREATE INDEX idx_map_tiles_location ON map_tiles(map_id, x_loc, y_loc);

-- Enable RLS
ALTER TABLE map_init_pieces ENABLE ROW LEVEL SECURITY;
ALTER TABLE map_tiles ENABLE ROW LEVEL SECURITY;

-- Create RLS policies
CREATE POLICY "Anyone can read map init pieces"
    ON map_init_pieces FOR SELECT
    TO authenticated
    USING (true);

CREATE POLICY "Anyone can read map tiles"
    ON map_tiles FOR SELECT
    TO authenticated
    USING (true);

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