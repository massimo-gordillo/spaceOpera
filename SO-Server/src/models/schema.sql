-- Enable UUID extension
CREATE EXTENSION IF NOT EXISTS "uuid-ossp";



-- Create tables
CREATE TABLE maps (
  id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
  name TEXT NOT NULL,
  data BYTEA NOT NULL,
  width INTEGER NOT NULL,
  height INTEGER NOT NULL,
  created_at TIMESTAMP WITH TIME ZONE DEFAULT TIMEZONE('utc', NOW())
);

CREATE TABLE games (
  id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
  map_id UUID REFERENCES maps(id),
  player1_id UUID REFERENCES auth.users(id),
  player2_id UUID REFERENCES auth.users(id),
  current_turn INTEGER DEFAULT 1,
  current_player UUID,
  game_state JSONB DEFAULT '{}',
  random_seed TEXT,
  status TEXT DEFAULT 'active' CHECK (status IN ('active', 'completed', 'abandoned')),
  created_at TIMESTAMP WITH TIME ZONE DEFAULT TIMEZONE('utc', NOW()),
  updated_at TIMESTAMP WITH TIME ZONE DEFAULT TIMEZONE('utc', NOW())
);

CREATE TABLE turn_moves (
  id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
  game_id UUID REFERENCES games(id),
  turn_number INTEGER,
  player_id UUID REFERENCES auth.users(id),
  moves JSONB NOT NULL,
  state_hash TEXT NOT NULL,
  created_at TIMESTAMP WITH TIME ZONE DEFAULT TIMEZONE('utc', NOW()),
  UNIQUE(game_id, turn_number)
);

-- Enable Row Level Security
ALTER TABLE games ENABLE ROW LEVEL SECURITY;
ALTER TABLE turn_moves ENABLE ROW LEVEL SECURITY;
ALTER TABLE maps ENABLE ROW LEVEL SECURITY;

-- Create indexes
CREATE INDEX idx_games_player1 ON games(player1_id);
CREATE INDEX idx_games_player2 ON games(player2_id);
CREATE INDEX idx_games_status ON games(status);
CREATE INDEX idx_turn_moves_game ON turn_moves(game_id, turn_number);

-- Create updated_at trigger
CREATE OR REPLACE FUNCTION update_updated_at_column()
RETURNS TRIGGER AS $$
BEGIN
    NEW.updated_at = TIMEZONE('utc', NOW());
    RETURN NEW;
END;
$$ language 'plpgsql';

CREATE TRIGGER update_games_updated_at
    BEFORE UPDATE ON games
    FOR EACH ROW
    EXECUTE FUNCTION update_updated_at_column();

-- Create stored procedure for submitting turns
CREATE OR REPLACE PROCEDURE submit_turn(
  p_game_id UUID,
  p_player_id UUID,
  p_moves JSONB,
  p_state_hash TEXT,
  p_next_player UUID
)
LANGUAGE plpgsql
AS $$
DECLARE
  v_current_turn INTEGER;
BEGIN
  -- Get current turn number and verify it's the player's turn
  SELECT current_turn INTO v_current_turn
  FROM games
  WHERE id = p_game_id AND current_player = p_player_id
  FOR UPDATE;
  
  IF NOT FOUND THEN
    RAISE EXCEPTION 'Invalid game state or not player''s turn';
  END IF;

  -- Insert turn moves
  INSERT INTO turn_moves (
    game_id,
    turn_number,
    player_id,
    moves,
    state_hash
  ) VALUES (
    p_game_id,
    v_current_turn,
    p_player_id,
    p_moves,
    p_state_hash
  );

  -- Update game state

  END;
$$;