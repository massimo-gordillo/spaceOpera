-- Create tables
CREATE TABLE IF NOT EXISTS games (
    id UUID PRIMARY KEY DEFAULT gen_random_uuid(),
    created_at TIMESTAMP WITH TIME ZONE DEFAULT TIMEZONE('utc', NOW()),
    current_state JSONB NOT NULL,
    player1_id UUID NOT NULL,
    player2_id UUID,
    current_player_id UUID NOT NULL,
    random_seed TEXT NOT NULL,
    status TEXT NOT NULL CHECK (status IN ('waiting', 'active', 'completed')),
    last_turn_number INTEGER DEFAULT 0,
    
    CONSTRAINT fk_player1
        FOREIGN KEY(player1_id) 
        REFERENCES auth.users(id)
        ON DELETE CASCADE,
    
    CONSTRAINT fk_player2
        FOREIGN KEY(player2_id) 
        REFERENCES auth.users(id)
        ON DELETE CASCADE,
        
    CONSTRAINT fk_current_player
        FOREIGN KEY(current_player_id) 
        REFERENCES auth.users(id)
        ON DELETE CASCADE
);

CREATE TABLE IF NOT EXISTS turns (
    id UUID PRIMARY KEY DEFAULT gen_random_uuid(),
    created_at TIMESTAMP WITH TIME ZONE DEFAULT TIMEZONE('utc', NOW()),
    game_id UUID NOT NULL,
    player_id UUID NOT NULL,
    turn_number INTEGER NOT NULL,
    moves JSONB NOT NULL, -- Array of moves for this turn
    state_before JSONB NOT NULL, -- Game state at start of turn
    state_after JSONB NOT NULL,  -- Game state after moves applied
    state_hash TEXT NOT NULL,    -- Hash of state_after for verification
    
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

-- Enable Row Level Security
ALTER TABLE games ENABLE ROW LEVEL SECURITY;
ALTER TABLE turns ENABLE ROW LEVEL SECURITY;

-- Create policies
CREATE POLICY "Players can view their own games"
    ON games
    FOR SELECT
    USING (
        auth.uid() = player1_id 
        OR auth.uid() = player2_id
    );

CREATE POLICY "Player 1 can create games"
    ON games
    FOR INSERT
    WITH CHECK (
        auth.uid() = player1_id
        AND player2_id IS NULL
    );

CREATE POLICY "Player 2 can join games"
    ON games
    FOR UPDATE
    USING (
        status = 'waiting'
        AND player2_id IS NULL
    )
    WITH CHECK (
        auth.uid() = player2_id
        AND status = 'active'
    );

CREATE POLICY "Current player can update game state"
    ON games
    FOR UPDATE
    USING (
        auth.uid() = current_player_id
        AND status = 'active'
    );

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

-- Create indexes
CREATE INDEX idx_games_player1 ON games(player1_id);
CREATE INDEX idx_games_player2 ON games(player2_id);
CREATE INDEX idx_games_current_player ON games(current_player_id);
CREATE INDEX idx_games_status ON games(status);
CREATE INDEX idx_turns_game ON turns(game_id);
CREATE INDEX idx_turns_player ON turns(player_id);
CREATE INDEX idx_turns_number ON turns(turn_number);
CREATE INDEX idx_turns_game_turn ON turns(game_id, turn_number);