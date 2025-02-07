/*
  # Create match-related tables

  1. New Tables
    - `matches`
      - Core match data between two players
      - Game state and grid data
      - Match status tracking
    - `match_moves`
      - Move history for each match
      - Move validation status
  
  2. Security
    - Enable RLS on all tables
    - Players can only view their own matches
    - Only current player can submit moves
    - Anyone in the match can view moves
*/

-- Create matches table
CREATE TABLE matches (
  id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
  player1_id UUID REFERENCES auth.users(id) NOT NULL,
  player2_id UUID REFERENCES auth.users(id) NOT NULL,
  map_id UUID REFERENCES maps(id) NOT NULL,
  map_name TEXT NOT NULL,
  current_player_id UUID REFERENCES auth.users(id) NOT NULL,
  game_state JSONB NOT NULL DEFAULT '[]'::jsonb,
  is_completed BOOLEAN NOT NULL DEFAULT false,
  unit_grid JSONB NOT NULL,
  structure_grid JSONB NOT NULL,
  terrain_grid JSONB NOT NULL,
  created_at TIMESTAMPTZ DEFAULT now() NOT NULL,
  ended_at TIMESTAMPTZ,
  winner_id UUID REFERENCES auth.users(id),
  turn_number INTEGER NOT NULL DEFAULT 1,
  CONSTRAINT valid_players CHECK (
    player1_id != player2_id AND
    current_player_id IN (player1_id, player2_id) AND
    (winner_id IS NULL OR winner_id IN (player1_id, player2_id))
  )
);

-- Create match moves table
CREATE TABLE match_moves (
  id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
  match_id UUID REFERENCES matches(id) NOT NULL,
  player_id UUID REFERENCES auth.users(id) NOT NULL,
  actions JSONB NOT NULL,
  created_at TIMESTAMPTZ DEFAULT now() NOT NULL,
  is_valid BOOLEAN,
  turn_number INTEGER NOT NULL
);

-- Create function to validate match move player
CREATE OR REPLACE FUNCTION check_match_move_player()
RETURNS TRIGGER AS $$
BEGIN
  IF NOT EXISTS (
    SELECT 1 FROM matches 
    WHERE id = NEW.match_id 
    AND (player1_id = NEW.player_id OR player2_id = NEW.player_id)
  ) THEN
    RAISE EXCEPTION 'Player is not part of this match';
  END IF;
  RETURN NEW;
END;
$$ LANGUAGE plpgsql;

-- Create trigger for match moves validation
CREATE TRIGGER validate_match_move_player
  BEFORE INSERT OR UPDATE ON match_moves
  FOR EACH ROW
  EXECUTE FUNCTION check_match_move_player();

-- Enable RLS
ALTER TABLE matches ENABLE ROW LEVEL SECURITY;
ALTER TABLE match_moves ENABLE ROW LEVEL SECURITY;

-- Matches policies
CREATE POLICY "Players can view their own matches"
  ON matches FOR SELECT
  USING (
    auth.uid() = player1_id OR 
    auth.uid() = player2_id
  );

CREATE POLICY "Current player can update match"
  ON matches FOR UPDATE
  USING (auth.uid() = current_player_id)
  WITH CHECK (auth.uid() = current_player_id);

-- Match moves policies
CREATE POLICY "Players can view moves for their matches"
  ON match_moves FOR SELECT
  USING (
    EXISTS (
      SELECT 1 FROM matches 
      WHERE matches.id = match_moves.match_id
      AND (
        matches.player1_id = auth.uid() OR 
        matches.player2_id = auth.uid()
      )
    )
  );

CREATE POLICY "Current player can insert moves"
  ON match_moves FOR INSERT
  WITH CHECK (
    EXISTS (
      SELECT 1 FROM matches 
      WHERE matches.id = match_moves.match_id
      AND matches.current_player_id = auth.uid()
      AND NOT matches.is_completed
    )
  );

-- Indexes for better performance
CREATE INDEX idx_matches_players ON matches(player1_id, player2_id);
CREATE INDEX idx_matches_current_player ON matches(current_player_id);
CREATE INDEX idx_match_moves_match ON match_moves(match_id);
CREATE INDEX idx_match_moves_player ON match_moves(player_id);