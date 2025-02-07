/*
  # Update create_match function
  
  1. Changes
    - Remove BYTEA conversion logic
    - Update to use JSONB for game state
    - Simplify grid initialization
*/

CREATE OR REPLACE FUNCTION create_match(
  player_a_id UUID,
  player_b_id UUID,
  map_id UUID
)
RETURNS matches
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
  map_record maps;
  player1 UUID;
  player2 UUID;
  v_match matches;
BEGIN
  -- Fetch map data
  SELECT * INTO map_record FROM maps WHERE id = map_id;
  IF NOT FOUND THEN
    RAISE EXCEPTION 'Map not found';
  END IF;

  -- Randomly assign players
  IF random() < 0.5 THEN
    player1 := player_a_id;
    player2 := player_b_id;
  ELSE
    player1 := player_b_id;
    player2 := player_a_id;
  END IF;

  -- Insert match with empty grids
  INSERT INTO matches (
    player1_id,
    player2_id,
    map_id,
    map_name,
    current_player_id,
    unit_grid,
    structure_grid,
    terrain_grid,
    game_state
  )
  VALUES (
    player1,
    player2,
    map_id,
    map_record.name,
    player1,
    '[]'::jsonb,
    '[]'::jsonb,
    '[]'::jsonb,
    '[]'::jsonb
  )
  RETURNING * INTO v_match;

  RETURN v_match;
END;
$$;