/*
  # Create Map Init Pieces Table

  1. New Tables
    - `map_init_pieces`: Partitioned table to store initial piece data for maps
      - `id` (uuid, part of primary key)
      - `map_id` (uuid, part of primary key, partition key)
      - `piece_type` (boolean, true for unit, false for structure)
      - `x_loc` (integer)
      - `y_loc` (integer)
      - `type_num` (integer)
      - `player_controller` (integer)
      - `health_val` (integer)

  2. Changes
    - Remove init_piece_data from maps table
    - Add partitioning by map_id
    - Add indexes for common queries
    - Add RLS policies
*/

-- Drop init_piece_data column from maps if it exists
ALTER TABLE maps DROP COLUMN IF EXISTS init_piece_data;

-- Create the partitioned table for map initial pieces
CREATE TABLE map_init_pieces (
    id UUID DEFAULT gen_random_uuid(),
    map_id UUID NOT NULL,
    piece_type BOOLEAN NOT NULL,
    x_loc INTEGER NOT NULL,
    y_loc INTEGER NOT NULL,
    type_num INTEGER NOT NULL,
    player_controller INTEGER NOT NULL,
    health_val INTEGER NOT NULL,
    PRIMARY KEY (map_id, id)
) PARTITION BY LIST (map_id);

-- Create indexes for efficient querying
CREATE INDEX idx_map_init_pieces_location ON map_init_pieces(map_id, x_loc, y_loc);
CREATE INDEX idx_map_init_pieces_type ON map_init_pieces(map_id, piece_type);

-- Enable RLS
ALTER TABLE map_init_pieces ENABLE ROW LEVEL SECURITY;

-- Create RLS policies
CREATE POLICY "Anyone can read map init pieces"
    ON map_init_pieces
    FOR SELECT
    TO authenticated
    USING (true);

-- Since we don't have creator_id, we'll allow authenticated users to modify pieces
-- You may want to add more specific access control later
CREATE POLICY "Authenticated users can modify init pieces"
    ON map_init_pieces
    FOR ALL
    TO authenticated
    USING (true)
    WITH CHECK (true);

-- Create function to automatically create partitions for new maps
CREATE OR REPLACE FUNCTION create_map_init_pieces_partition()
RETURNS TRIGGER AS $$
BEGIN
    -- Create a new partition for the map if it doesn't exist
    EXECUTE format(
        'CREATE TABLE IF NOT EXISTS map_init_pieces_%s PARTITION OF map_init_pieces 
         FOR VALUES IN (%L)',
        NEW.id,
        NEW.id
    );
    RETURN NEW;
END;
$$ LANGUAGE plpgsql;

-- Create trigger to automatically create partitions
CREATE TRIGGER create_map_init_pieces_partition
    AFTER INSERT ON maps
    FOR EACH ROW
    EXECUTE FUNCTION create_map_init_pieces_partition();

-- Helper function to add an initial piece to a map
CREATE OR REPLACE FUNCTION add_map_init_piece(
    p_map_id UUID,
    p_piece_type BOOLEAN,
    p_x_loc INTEGER,
    p_y_loc INTEGER,
    p_type_num INTEGER,
    p_player_controller INTEGER,
    p_health_val INTEGER
) RETURNS UUID AS $$
DECLARE
    v_id UUID;
BEGIN
    INSERT INTO map_init_pieces (
        map_id, piece_type, x_loc, y_loc, type_num, player_controller, health_val
    ) VALUES (
        p_map_id, p_piece_type, p_x_loc, p_y_loc, p_type_num, p_player_controller, p_health_val
    )
    RETURNING id INTO v_id;
    
    RETURN v_id;
END;
$$ LANGUAGE plpgsql;