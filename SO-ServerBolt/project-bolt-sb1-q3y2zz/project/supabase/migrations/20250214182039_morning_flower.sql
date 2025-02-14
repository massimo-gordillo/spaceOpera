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
    v_structure_attrs structure_attributes%ROWTYPE;
    v_health_multiplier NUMERIC;
BEGIN
    -- Calculate hash for each piece
    FOR v_piece IN 
        SELECT * FROM match_piece_list 
        WHERE match_id = p_match_id
        ORDER BY x_loc, y_loc, game_piece_id -- Ensure consistent ordering
    LOOP
        IF v_piece.is_unit THEN
            -- Get unit attributes
            SELECT * INTO v_unit_attrs
            FROM unit_attributes
            WHERE game_piece_id = v_piece.game_piece_id;

            -- Calculate health multiplier for unit
            IF v_piece.health_val = v_unit_attrs.health_max THEN
                v_health_multiplier := 1;
            ELSE
                v_health_multiplier := v_piece.health_val;
            END IF;
        ELSE
            -- Get structure attributes
            SELECT * INTO v_structure_attrs
            FROM structure_attributes
            WHERE game_piece_id = v_piece.game_piece_id;

            -- Calculate health multiplier for structure
            IF v_piece.health_val = v_structure_attrs.default_health THEN
                v_health_multiplier := 1;
            ELSE
                v_health_multiplier := v_piece.health_val;
            END IF;
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

-- Update create_match to use new hash function and remove random player assignment
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
    v_match matches%ROWTYPE;
BEGIN
    -- Fetch map data
    SELECT * INTO map_record FROM maps WHERE id = map_id;
    IF NOT FOUND THEN
        RAISE EXCEPTION 'Map not found';
    END IF;

    -- Insert match with player_a as player1
    INSERT INTO matches (
        player1_id,
        player2_id,
        map_id,
        map_name,
        current_player_id
    )
    VALUES (
        player_a_id,
        player_b_id,
        map_id,
        map_record.name,
        player_a_id
    )
    RETURNING * INTO v_match;

    -- Insert game pieces for the match
    PERFORM insert_game_pieces(v_match.id, map_id, player_a_id, player_a_id);

    -- Calculate and store initial game state hash
    UPDATE matches
    SET game_state_hash = match_calculate_game_state_hash(v_match.id)
    WHERE id = v_match.id
    RETURNING * INTO v_match;

    RETURN v_match;
END;
$$;