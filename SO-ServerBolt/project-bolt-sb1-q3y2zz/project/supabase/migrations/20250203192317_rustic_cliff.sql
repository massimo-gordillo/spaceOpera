/*
  # Simplify map storage
  
  1. Changes
    - Remove partition triggers
    - Create unpartitioned tables for map data
    - Simplify data storage approach
*/

-- Drop existing partition-related objects
DROP TRIGGER IF EXISTS create_map_init_pieces_partition ON maps;
DROP TRIGGER IF EXISTS create_map_tiles_partition ON maps;
DROP FUNCTION IF EXISTS create_map_init_pieces_partition();
DROP FUNCTION IF EXISTS create_map_tiles_partition();

-- Create new tables without partitioning
CREATE TABLE IF NOT EXISTS map_pieces (
    id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
    map_id UUID REFERENCES maps(id) ON DELETE CASCADE,
    piece_type BOOLEAN NOT NULL,
    x_loc INTEGER NOT NULL,
    y_loc INTEGER NOT NULL,
    type_num INTEGER NOT NULL,
    player_controller INTEGER NOT NULL,
    health_val INTEGER NOT NULL
);

CREATE TABLE IF NOT EXISTS map_terrain (
    id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
    map_id UUID REFERENCES maps(id) ON DELETE CASCADE,
    x_loc INTEGER NOT NULL,
    y_loc INTEGER NOT NULL,
    tile_type INTEGER NOT NULL
);

-- Create indexes
CREATE INDEX IF NOT EXISTS idx_map_pieces_map_id ON map_pieces(map_id);
CREATE INDEX IF NOT EXISTS idx_map_pieces_location ON map_pieces(map_id, x_loc, y_loc);
CREATE INDEX IF NOT EXISTS idx_map_terrain_map_id ON map_terrain(map_id);
CREATE INDEX IF NOT EXISTS idx_map_terrain_location ON map_terrain(map_id, x_loc, y_loc);

-- Enable RLS
ALTER TABLE map_pieces ENABLE ROW LEVEL SECURITY;
ALTER TABLE map_terrain ENABLE ROW LEVEL SECURITY;

-- Create RLS policies
CREATE POLICY "Anyone can read map pieces"
    ON map_pieces FOR SELECT
    TO authenticated
    USING (true);

CREATE POLICY "Anyone can read map terrain"
    ON map_terrain FOR SELECT
    TO authenticated
    USING (true);

-- Insert test map data
DO $$ 
DECLARE
  v_map_id uuid;
BEGIN
  -- Insert map
  INSERT INTO maps (name, width, height)
  VALUES ('TestMap21', 16, 19)
  RETURNING id INTO v_map_id;

  -- Insert terrain
  INSERT INTO map_terrain (map_id, x_loc, y_loc, tile_type)
  SELECT 
    v_map_id,
    (gs.i - 1) % 16,
    (gs.i - 1) / 16,
    tile_type
  FROM (
    SELECT 
      generate_series(1, 304) as i,
      unnest(ARRAY[
        1,1,3,2,2,1,1,3,2,2,2,3,1,1,2,2,3,1,1,1,1,3,2,2,1,3,3,2,1,2,3,3,1,2,2,3,1,1,3,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,3,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,1,1,1,1,3,2,1,1,1,1,1,2,3,1,1,1,1,3,3,1,1,1,3,3,2,1,2,2,2,1,2,3,3,1,1,1,3,1,1,1,1,2,2,2,1,4,4,4,1,2,2,2,1,1,1,1,2,1,1,1,1,2,4,4,4,4,4,4,4,2,1,1,1,1,2,1,1,1,1,1,2,4,4,4,4,4,4,4,2,1,1,1,1,2,2,1,1,1,1,2,4,4,4,4,4,4,4,3,1,1,1,1,1,2,1,1,1,1,3,3,4,4,4,4,4,2,3,1,1,1,1,2,1,1,1,1,1,2,3,4,4,4,4,4,3,2,1,1,1,1,1,2,2,1,1,2,2,2,2,4,4,4,2,2,2,2,1,1,2,3,3,3,3,2,2,2,2,1,4,4,4,1,2,2,2,1,1,2,3
      ]) as tile_type
  ) gs;

  -- Insert pieces
  INSERT INTO map_pieces (map_id, piece_type, x_loc, y_loc, type_num, player_controller, health_val)
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