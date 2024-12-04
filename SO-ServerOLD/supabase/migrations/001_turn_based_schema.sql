-- Add new columns to games table
ALTER TABLE games 
ADD COLUMN IF NOT EXISTS last_turn_number INTEGER DEFAULT 0;

-- Create new turns table
CREATE TABLE IF NOT EXISTS turns (
    id UUID PRIMARY KEY DEFAULT gen_random_uuid(),
    created_at TIMESTAMP WITH TIME ZONE DEFAULT TIMEZONE('utc', NOW()),
    game_id UUID NOT NULL,
    player_id UUID NOT NULL,
    turn_number INTEGER NOT NULL,
    moves JSONB NOT NULL,
    state_before JSONB NOT NULL,
    state_after JSONB NOT NULL,
    state_hash TEXT NOT NULL,
    
    CONSTRAINT fk_game
        FOREIGN KEY(game_id) 
        REFERENCES games(id)
        ON DELETE CASCADE,
        
    CONSTRAINT fk_player
        FOREIGN KEY(player_id) 
        REFERENCES auth.users(id)
        ON DELETE CASCADE,
        
    CONSTRAINT unique_game_turn
        UNIQUE(game_id, turn_number)
);

-- Migrate existing moves data to turns
-- This will group moves by game_id and turn, combining them into single turn records
INSERT INTO turns (game_id, player_id, turn_number, moves, state_before, state_after, state_hash)
SELECT 
    game_id,
    player_id,
    turn,
    jsonb_agg(move_data) as moves,
    -- We'll use the first move's game state as state_before
    (SELECT current_state FROM games WHERE id = game_id) as state_before,
    (SELECT current_state FROM games WHERE id = game_id) as state_after,
    -- Generate a simple hash for existing data
    encode(sha256((SELECT current_state::text FROM games WHERE id = game_id)::bytea), 'hex') as state_hash
FROM moves_backup
GROUP BY game_id, player_id, turn;

-- Create new indexes
CREATE INDEX IF NOT EXISTS idx_games_player1 ON games(player1_id);
CREATE INDEX IF NOT EXISTS idx_games_player2 ON games(player2_id);
CREATE INDEX IF NOT EXISTS idx_games_current_player ON games(current_player_id);
CREATE INDEX IF NOT EXISTS idx_games_status ON games(status);
CREATE INDEX IF NOT EXISTS idx_turns_game ON turns(game_id);
CREATE INDEX IF NOT EXISTS idx_turns_player ON turns(player_id);
CREATE INDEX IF NOT EXISTS idx_turns_number ON turns(turn_number);
CREATE INDEX IF NOT EXISTS idx_turns_game_turn ON turns(game_id, turn_number);

-- Update RLS policies for turns table
CREATE POLICY "Players can view turns in their games"
    ON turns
    FOR SELECT
    USING (
        EXISTS (
            SELECT 1 FROM games
            WHERE games.id = turns.game_id
            AND (
                games.player1_id = auth.uid()
                OR games.player2_id = auth.uid()
            )
        )
    );

CREATE POLICY "Current player can create turns"
    ON turns
    FOR INSERT
    WITH CHECK (
        EXISTS (
            SELECT 1 FROM games
            WHERE games.id = turns.game_id
            AND games.current_player_id = auth.uid()
            AND games.status = 'active'
        )
    );

-- Enable RLS on turns table
ALTER TABLE turns ENABLE ROW LEVEL SECURITY;