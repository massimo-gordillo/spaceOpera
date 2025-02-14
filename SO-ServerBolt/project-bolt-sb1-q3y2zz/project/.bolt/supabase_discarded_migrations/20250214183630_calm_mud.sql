-- Update submit_turn to include game state hash validation
CREATE OR REPLACE FUNCTION submit_turn(
    p_match_id UUID,
    p_turn_number INTEGER,
    p_actions JSONB[],
    p_expected_hash BIGINT
)
RETURNS TABLE (
    success BOOLEAN,
    hash_mismatch BOOLEAN,
    new_hash BIGINT
)
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    v_match matches%ROWTYPE;
    v_action JSONB;
    v_game_actions game_action[];
    v_current_action game_action;
    v_action_number INTEGER := 0;
    v_new_hash BIGINT;
BEGIN
    -- Get match data for validation
    SELECT * INTO v_match
    FROM matches
    WHERE id = p_match_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'Match not found';
    END IF;

    -- Validate turn number matches current match state
    IF v_match.turn_number != p_turn_number THEN
        RAISE EXCEPTION 'Invalid turn number: expected %, got %',
            v_match.turn_number, p_turn_number;
    END IF;

    -- Validate current game state hash matches client's expected hash
    IF v_match.game_state_hash != p_expected_hash THEN
        -- For now, just set the hash_mismatch flag but continue processing
        -- In the future, uncomment the following line to enforce hash matching:
        -- RAISE EXCEPTION 'Game state hash mismatch';
        RETURN QUERY SELECT 
            false::BOOLEAN,
            true::BOOLEAN,
            v_match.game_state_hash;
        RETURN;
    END IF;

    -- Convert JSON actions to game_action array
    FOR v_action IN SELECT * FROM unnest(p_actions)
    LOOP
        v_action_number := v_action_number + 1;
        
        -- Create game_action record
        v_current_action := ROW(
            p_match_id,
            v_match.turn_number::SMALLINT,
            v_action_number::SMALLINT,
            (v_action->>'actionType')::SMALLINT,
            (v_action->>'gamePieceId')::SMALLINT,
            (v_action->>'unitTerrainType')::SMALLINT,
            (v_action->>'fromLocationX')::SMALLINT,
            (v_action->>'fromLocationY')::SMALLINT,
            (v_action->>'toLocationX')::SMALLINT,
            (v_action->>'toLocationY')::SMALLINT,
            v_match.current_player_id  -- Use current player from match
        )::game_action;
        
        -- Add to array
        v_game_actions := array_append(v_game_actions, v_current_action);
    END LOOP;

    -- Submit the actions using the internal helper function
    IF submit_game_actions(p_match_id, v_game_actions) THEN
        -- Get the new hash after actions are processed
        SELECT game_state_hash INTO v_new_hash
        FROM matches
        WHERE id = p_match_id;

        RETURN QUERY SELECT 
            true::BOOLEAN,
            false::BOOLEAN,
            v_new_hash;
    ELSE
        RETURN QUERY SELECT 
            false::BOOLEAN,
            false::BOOLEAN,
            v_match.game_state_hash;
    END IF;
END;
$$;

-- Grant access to submit_turn function
GRANT EXECUTE ON FUNCTION submit_turn(UUID, INTEGER, JSONB[], BIGINT) TO authenticated;