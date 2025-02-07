/*
  # Fix UUID handling in create_match function

  1. Changes
    - Update create_match function to properly handle UUIDs with hyphens
    - Remove UUID string manipulation that was causing syntax errors
    - Add input validation for UUIDs

  2. Notes
    - UUIDs should be passed as proper UUID types, not strings
    - Function will now properly handle UUIDs with hyphens
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
    -- Input validation
    IF player_a_id IS NULL OR player_b_id IS NULL OR map_id IS NULL THEN
        RAISE EXCEPTION 'Invalid input: player_a_id, player_b_id, and map_id must not be null';
    END IF;

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

    -- Insert match
    INSERT INTO matches (
        player1_id,
        player2_id,
        map_id,
        map_name,
        current_player_id
    )
    VALUES (
        player1,
        player2,
        map_id,
        map_record.name,
        player1
    )
    RETURNING * INTO v_match;

    -- Insert game pieces for the match
    PERFORM insert_game_pieces(v_match.id, map_id, player1, player_a_id);

    RETURN v_match;
END;
$$;