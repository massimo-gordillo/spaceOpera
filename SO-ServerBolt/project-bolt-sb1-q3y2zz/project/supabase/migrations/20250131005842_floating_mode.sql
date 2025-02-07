/*
  # Create Map Tiles Table

  1. New Tables
    - `map_tiles`: Partitioned table to store tile data for maps
      - `id` (uuid, part of primary key)
      - `map_id` (uuid, part of primary key, partition key)
      - `x_loc` (integer)
      - `y_loc` (integer)
      - `tile_type` (integer)

  2. Changes
    - Remove grid_data from maps table
    - Add partitioning by map_id
    - Add indexes for common queries
    - Add RLS policies
*/

-- Drop grid_data column from maps if it exists
ALTER TABLE maps DROP COLUMN IF EXISTS grid_data;

-- Create the partitioned table for map tiles
CREATE TABLE map_tiles (
    id UUID DEFAULT gen_random_uuid(),
    map_id UUID NOT NULL,
    x_loc INTEGER NOT NULL,
    y_loc INTEGER NOT NULL,
    tile_type INTEGER NOT NULL,
    PRIMARY KEY (map_id, id)
) PARTITION BY LIST (map_id);

-- Create indexes for efficient querying
CREATE INDEX idx_map_tiles_location ON map_tiles(map_id, x_loc, y_loc);
CREATE INDEX idx_map_tiles_type ON map_tiles(map_id, tile_type);

-- Enable RLS
ALTER TABLE map_tiles ENABLE ROW LEVEL SECURITY;

-- Create RLS policies
CREATE POLICY "Anyone can read map tiles"
    ON map_tiles
    FOR SELECT
    TO authenticated
    USING (true);

-- Since we don't have creator_id, we'll allow authenticated users to modify tiles
-- You may want to add more specific access control later
CREATE POLICY "Authenticated users can modify tiles"
    ON map_tiles
    FOR ALL
    TO authenticated
    USING (true)
    WITH CHECK (true);

-- Create function to automatically create partitions for new maps
CREATE OR REPLACE FUNCTION create_map_tiles_partition()
RETURNS TRIGGER AS $$
BEGIN
    -- Create a new partition for the map if it doesn't exist
    EXECUTE format(
        'CREATE TABLE IF NOT EXISTS map_tiles_%s PARTITION OF map_tiles 
         FOR VALUES IN (%L)',
        NEW.id,
        NEW.id
    );
    RETURN NEW;
END;
$$ LANGUAGE plpgsql;

-- Create trigger to automatically create partitions
CREATE TRIGGER create_map_tiles_partition
    AFTER INSERT ON maps
    FOR EACH ROW
    EXECUTE FUNCTION create_map_tiles_partition();

-- Helper function to add a tile to a map
CREATE OR REPLACE FUNCTION add_map_tile(
    p_map_id UUID,
    p_x_loc INTEGER,
    p_y_loc INTEGER,
    p_tile_type INTEGER
) RETURNS UUID AS $$
DECLARE
    v_id UUID;
BEGIN
    INSERT INTO map_tiles (
        map_id, x_loc, y_loc, tile_type
    ) VALUES (
        p_map_id, p_x_loc, p_y_loc, p_tile_type
    )
    RETURNING id INTO v_id;
    
    RETURN v_id;
END;
$$ LANGUAGE plpgsql;