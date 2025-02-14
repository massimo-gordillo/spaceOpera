-- Add game_state_hash column to matches table
ALTER TABLE matches
ADD COLUMN game_state_hash BIGINT;

-- Create function to calculate game state hash
CREATE OR REPLACE FUNCTION match_calculate_game_state_hash(
    p_match_id UUID
)
RETURNS BIGINT
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    v_hash BIGINT := 0;
    v_piece match_piece_list%ROWTYPE;
    v_unit_attrs unit_attributes%ROWTYPE;
    v_health_multiplier NUMERIC;
BEGIN
    -- Calculate hash for each piece
    FOR v_piece IN 
        SELECT * FROM match_piece_list 
        WHERE match_id = p_match_id
        ORDER BY x_loc, y_loc, game_piece_id -- Ensure consistent ordering
    LOOP
        -- Get unit attributes if it's a unit
        IF v_piece.is_unit THEN
            SELECT * INTO v_unit_attrs
            FROM unit_attributes
            WHERE game_piece_id = v_piece.game_piece_id;

            -- Calculate health multiplier
            IF v_piece.health_val = v_unit_attrs.health_max THEN
                v_health_multiplier := 1;
            ELSE
                v_health_multiplier := v_piece.health_val;
            END IF;
        ELSE
            -- For structures, always use health_val as multiplier
            v_health_multiplier := v_piece.health_val;
        END IF;

        -- Calculate piece contribution to hash
        v_hash := v_hash + (
            (v_piece.game_piece_id + 1) *
            (v_piece.player_controller + 1) *
            (v_piece.x_loc + 1) *
            (v_piece.y_loc + 1) *
            v_health_multiplier
        )::BIGINT;
    END LOOP;

    RETURN v_hash;
END;
$$;

-- Update create_match to calculate initial hash
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
    --IF random() < 0.5 THEN
        player1 := player_a_id;
        player2 := player_b_id;
    --ELSE
    --    player1 := player_b_id;
    --    player2 := player_a_id;
   -- END IF;

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

    -- Calculate and store initial game state hash
    UPDATE matches
    SET game_state_hash = match_calculate_game_state_hash(v_match.id)
    WHERE id = v_match.id
    RETURNING * INTO v_match;

    RETURN v_match;
END;
$$;