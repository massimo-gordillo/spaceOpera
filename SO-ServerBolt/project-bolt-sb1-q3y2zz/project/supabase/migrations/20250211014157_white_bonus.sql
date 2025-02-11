-- Create RPC function for submitting game actions
CREATE OR REPLACE FUNCTION submit_game_actions(
    p_match_id UUID,
    p_turn_number INTEGER,
    p_actions JSONB[]
)
RETURNS BOOLEAN
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    v_action JSONB;
    v_game_actions game_action[];
    v_current_action game_action;
    v_action_number INTEGER := 0;
BEGIN
    -- Convert JSON actions to game_action array
    FOR v_action IN SELECT * FROM unnest(p_actions)
    LOOP
        v_action_number := v_action_number + 1;
        
        -- Create game_action record
        v_current_action := ROW(
            p_match_id,
            p_turn_number::SMALLINT,
            v_action_number::SMALLINT,
            (v_action->>'actionType')::SMALLINT,
            (v_action->>'gamePieceId')::SMALLINT,
            (v_action->>'unitTerrainType')::SMALLINT,
            (v_action->>'fromLocationX')::SMALLINT,
            (v_action->>'fromLocationY')::SMALLINT,
            (v_action->>'toLocationX')::SMALLINT,
            (v_action->>'toLocationY')::SMALLINT,
            (v_action->>'playerID')::SMALLINT
        )::game_action;
        
        -- Add to array
        v_game_actions := array_append(v_game_actions, v_current_action);
    END LOOP;

    -- Submit the turn with the converted actions
    RETURN submit_turn(p_match_id, v_game_actions);
END;
$$;

-- Grant access to the RPC function
GRANT EXECUTE ON FUNCTION submit_game_actions(UUID, INTEGER, JSONB[]) TO authenticated;