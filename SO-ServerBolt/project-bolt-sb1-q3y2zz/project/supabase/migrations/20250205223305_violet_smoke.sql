-- Drop and recreate match_piece_list table with correct columns
DROP TABLE IF EXISTS match_piece_list CASCADE;

CREATE TABLE match_piece_list (
    id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
    match_id UUID REFERENCES matches(id) ON DELETE CASCADE,
    piece_type BOOLEAN NOT NULL,
    x_loc INTEGER NOT NULL,
    y_loc INTEGER NOT NULL,
    game_piece_id INTEGER NOT NULL,
    player_controller INTEGER NOT NULL,
    health_val INTEGER NOT NULL
);

-- Create indexes for efficient querying
CREATE INDEX idx_match_piece_list_match ON match_piece_list(match_id);
CREATE INDEX idx_match_piece_list_location ON match_piece_list(match_id, x_loc, y_loc);

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