-- Update submit_turn to validate both pre and post turn hashes
CREATE OR REPLACE FUNCTION submit_turn(
    p_match_id UUID,
    p_turn_number INTEGER,
    p_actions JSONB[],
    p_pre_turn_hash BIGINT,
    p_expected_post_turn_hash BIGINT
)
RETURNS TABLE (
    success BOOLEAN,
    pre_hash_mismatch BOOLEAN,
    post_hash_mismatch BOOLEAN,
    actual_pre_hash BIGINT,
    actual_post_hash BIGINT
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
    v_actual_post_hash BIGINT;
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

    -- Validate pre-turn hash matches current game state
    IF v_match.game_state_hash != p_pre_turn_hash THEN
        -- For now, just return mismatch info but don't fail
        -- In the future, uncomment the following line to enforce hash matching:
        -- RAISE EXCEPTION 'Pre-turn game state hash mismatch';
        RETURN QUERY SELECT 
            false::BOOLEAN,
            true::BOOLEAN,
            false::BOOLEAN,
            v_match.game_state_hash,
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
        -- Get the actual post-turn hash
        SELECT game_state_hash INTO v_actual_post_hash
        FROM matches
        WHERE id = p_match_id;

        -- Compare post-turn hash with client's expected hash
        IF v_actual_post_hash != p_expected_post_turn_hash THEN
            -- For now, just return mismatch info but don't fail
            -- In the future, uncomment the following line to enforce hash matching:
            -- RAISE EXCEPTION 'Post-turn game state hash mismatch';
            RETURN QUERY SELECT 
                true::BOOLEAN,
                false::BOOLEAN,
                true::BOOLEAN,
                p_pre_turn_hash,
                v_actual_post_hash;
        ELSE
            -- Everything matches
            RETURN QUERY SELECT 
                true::BOOLEAN,
                false::BOOLEAN,
                false::BOOLEAN,
                p_pre_turn_hash,
                v_actual_post_hash;
        END IF;
    ELSE
        -- Action submission failed
        RETURN QUERY SELECT 
            false::BOOLEAN,
            false::BOOLEAN,
            false::BOOLEAN,
            v_match.game_state_hash,
            v_match.game_state_hash;
    END IF;
END;
$$;

-- Grant access to submit_turn function
GRANT EXECUTE ON FUNCTION submit_turn(UUID, INTEGER, JSONB[], BIGINT, BIGINT) TO authenticated;