-- Rollback for game_state_hash column
ALTER TABLE matches
DROP COLUMN IF EXISTS game_state_hash;

-- Rollback for match_calculate_game_state_hash function
DROP FUNCTION IF EXISTS match_calculate_game_state_hash(UUID);

-- Restore original create_match function with random player assignment
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
    v_match matches%ROWTYPE;
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