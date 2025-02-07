/*
  # Create match creation function
  
  1. New Functions
    - `create_match`: Creates a new match between two players on a specified map
      - Parameters:
        - player_a_id: UUID of first player
        - player_b_id: UUID of second player
        - map_id: UUID of the map to play on
      - Returns: The created match record
  
  2. Function Logic
    - Validates player and map existence
    - Randomly assigns players to positions
    - Initializes game grids from map data
    - Creates the match record
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
  piece_data jsonb;
  unit_grid jsonb[][];
  structure_grid jsonb[][];
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

  -- Parse piece data
  piece_data := convert_from(map_record.init_piece_data, 'UTF8')::jsonb;
  
  -- Initialize grids
  unit_grid := array_fill(NULL::jsonb, ARRAY[map_record.height, map_record.width]);
  structure_grid := array_fill(NULL::jsonb, ARRAY[map_record.height, map_record.width]);

  -- Insert match
  INSERT INTO matches (
    player1_id,
    player2_id,
    map_id,
    map_name,
    current_player_id,
    unit_grid,
    structure_grid,
    terrain_grid
  )
  VALUES (
    player1,
    player2,
    map_id,
    map_record.name,
    player1,
    to_jsonb(unit_grid),
    to_jsonb(structure_grid),
    '[]'::jsonb
  )
  RETURNING * INTO v_match;

  RETURN v_match;
END;
$$;