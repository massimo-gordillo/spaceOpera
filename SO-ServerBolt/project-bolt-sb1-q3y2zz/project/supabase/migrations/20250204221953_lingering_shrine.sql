/*
  # Remove partitioning implementation
  
  1. Changes
    - Drop partition-related triggers and functions
    - Convert partitioned tables to regular tables
    - Preserve existing data and indexes
    - Keep RLS policies intact
*/

-- Drop partition-related triggers if they exist
DROP TRIGGER IF EXISTS create_map_init_pieces_partition ON maps;
DROP TRIGGER IF EXISTS create_map_tiles_partition ON maps;

-- Drop partition-related functions if they exist
DROP FUNCTION IF EXISTS create_map_init_pieces_partition();
DROP FUNCTION IF EXISTS create_map_tiles_partition();

-- Recreate map_init_pieces as a regular table
CREATE TABLE IF NOT EXISTS map_init_pieces_new (
    id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
    map_id UUID REFERENCES maps(id) ON DELETE CASCADE,
    piece_type BOOLEAN NOT NULL,
    x_loc INTEGER NOT NULL,
    y_loc INTEGER NOT NULL,
    type_num INTEGER NOT NULL,
    player_controller INTEGER NOT NULL,
    health_val INTEGER NOT NULL
);

-- Recreate map_tiles as a regular table
CREATE TABLE IF NOT EXISTS map_tiles_new (
    id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
    map_id UUID REFERENCES maps(id) ON DELETE CASCADE,
    x_loc INTEGER NOT NULL,
    y_loc INTEGER NOT NULL,
    tile_type INTEGER NOT NULL
);

-- Copy data from old tables to new ones (if they exist)
INSERT INTO map_init_pieces_new 
SELECT * FROM map_init_pieces;

INSERT INTO map_tiles_new 
SELECT * FROM map_tiles;

-- Drop old tables
DROP TABLE IF EXISTS map_init_pieces CASCADE;
DROP TABLE IF EXISTS map_tiles CASCADE;

-- Rename new tables to original names
ALTER TABLE map_init_pieces_new RENAME TO map_init_pieces;
ALTER TABLE map_tiles_new RENAME TO map_tiles;

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