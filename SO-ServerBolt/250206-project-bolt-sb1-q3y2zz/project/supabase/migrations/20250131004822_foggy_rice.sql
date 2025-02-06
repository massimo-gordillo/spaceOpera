/*
  # Update Match Piece List Table Structure

  1. Changes
    - Drop existing function before recreating
    - Drop existing trigger before recreating
    - Include match_id in primary key to satisfy partitioning requirements
    - Add id column as a unique identifier
    - Add indexes for common query patterns
    - Keep partitioning by match_id

  2. Indexes
    - Primary key on (match_id, id) for partition pruning
    - B-tree index on (match_id, x_loc, y_loc) for location queries
    - B-tree index on (match_id, piece_type) for type filtering
*/

-- Drop existing function and trigger
DROP FUNCTION IF EXISTS add_match_piece(UUID, BOOLEAN, INTEGER, INTEGER, INTEGER, INTEGER, INTEGER);
DROP TRIGGER IF EXISTS create_match_partition ON matches;

-- Drop existing table and its dependencies
DROP TABLE IF EXISTS match_piece_list CASCADE;

-- Create the updated partitioned table
CREATE TABLE match_piece_list (
    id UUID DEFAULT gen_random_uuid(),
    match_id UUID NOT NULL,
    piece_type BOOLEAN NOT NULL,
    x_loc INTEGER NOT NULL,
    y_loc INTEGER NOT NULL,
    type_num INTEGER NOT NULL,
    player_controller INTEGER NOT NULL,
    health_val INTEGER NOT NULL,
    PRIMARY KEY (match_id, id)
) PARTITION BY LIST (match_id);

-- Create indexes for efficient querying
CREATE INDEX idx_match_piece_list_location ON match_piece_list(match_id, x_loc, y_loc);
CREATE INDEX idx_match_piece_list_match_type ON match_piece_list(match_id, piece_type);

-- Enable RLS
ALTER TABLE match_piece_list ENABLE ROW LEVEL SECURITY;

-- Create RLS policies
CREATE POLICY "Players can view pieces in their matches"
    ON match_piece_list
    FOR SELECT
    USING (
        EXISTS (
            SELECT 1 FROM matches 
            WHERE matches.id = match_piece_list.match_id
            AND (matches.player1_id = auth.uid() OR matches.player2_id = auth.uid())
        )
    );

CREATE POLICY "Current player can modify pieces"
    ON match_piece_list
    FOR ALL
    USING (
        EXISTS (
            SELECT 1 FROM matches 
            WHERE matches.id = match_piece_list.match_id
            AND matches.current_player_id = auth.uid()
            AND NOT matches.is_completed
        )
    );

-- Create function to automatically create partitions for new matches
CREATE OR REPLACE FUNCTION create_match_piece_partition()
RETURNS TRIGGER AS $$
BEGIN
    -- Create a new partition for the match if it doesn't exist
    EXECUTE format(
        'CREATE TABLE IF NOT EXISTS match_piece_list_%s PARTITION OF match_piece_list 
         FOR VALUES IN (%L)',
        NEW.id,
        NEW.id
    );
    RETURN NEW;
END;
$$ LANGUAGE plpgsql;

-- Create trigger to automatically create partitions
CREATE TRIGGER create_match_partition
    AFTER INSERT ON matches
    FOR EACH ROW
    EXECUTE FUNCTION create_match_piece_partition();

-- Helper function to add a piece to a match
CREATE OR REPLACE FUNCTION add_match_piece(
    p_match_id UUID,
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
    INSERT INTO match_piece_list (
        match_id, piece_type, x_loc, y_loc, type_num, player_controller, health_val
    ) VALUES (
        p_match_id, p_piece_type, p_x_loc, p_y_loc, p_type_num, p_player_controller, p_health_val
    )
    RETURNING id INTO v_id;
    
    RETURN v_id;
END;
$$ LANGUAGE plpgsql;