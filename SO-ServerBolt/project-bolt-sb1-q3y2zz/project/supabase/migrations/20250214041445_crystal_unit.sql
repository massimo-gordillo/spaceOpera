-- Drop and recreate submit_turn with turn number parameter
DROP FUNCTION IF EXISTS submit_turn(UUID, JSONB[]);

CREATE OR REPLACE FUNCTION submit_turn(
    p_match_id UUID,
    p_turn_number INTEGER,
    p_actions JSONB[]
)
RETURNS BOOLEAN
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    v_match matches%ROWTYPE;
    v_action JSONB;
    v_game_actions game_action[];
    v_current_action game_action;
    v_action_number INTEGER := 0;
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
    RETURN submit_game_actions(p_match_id, v_game_actions);
END;
$$;

-- Grant access to submit_turn function
GRANT EXECUTE ON FUNCTION submit_turn(UUID, INTEGER, JSONB[]) TO authenticated;