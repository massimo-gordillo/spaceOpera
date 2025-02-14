-- Drop existing functions to avoid conflicts
DROP FUNCTION IF EXISTS submit_game_actions(UUID, INTEGER, JSONB[]);
DROP FUNCTION IF EXISTS submit_turn(UUID, game_action[]);

-- Create new submit_game_actions as internal helper function
CREATE OR REPLACE FUNCTION submit_game_actions(
    p_match_id UUID,
    p_actions game_action[]
)
RETURNS BOOLEAN
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    v_match matches%ROWTYPE;
    v_action game_action;
    v_current_player UUID;
    v_last_turn_number SMALLINT := -1;
    v_last_action_number SMALLINT := -1;
BEGIN
    -- Get match data
    SELECT * INTO v_match
    FROM matches
    WHERE id = p_match_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'Match not found';
    END IF;

    -- Check if match is completed
    IF v_match.is_completed THEN
        RAISE EXCEPTION 'Cannot submit actions for completed match';
    END IF;

    -- Get current player
    v_current_player := v_match.current_player_id;

    -- Start transaction
    BEGIN
        -- Process each action in order
        FOREACH v_action IN ARRAY p_actions
        LOOP
            -- Validate match ID
            IF v_action.match_id != p_match_id THEN
                RAISE EXCEPTION 'Invalid match ID in action';
            END IF;

            -- Validate player ID
            IF v_action.player_id != v_current_player THEN
                RAISE EXCEPTION 'Action player ID does not match current player';
            END IF;

            -- Validate turn number
            IF v_action.turn_number != v_match.turn_number THEN
                RAISE EXCEPTION 'Invalid turn number: expected %, got %',
                    v_match.turn_number, v_action.turn_number;
            END IF;

            -- Validate action ordering
            IF v_action.turn_number = v_last_turn_number AND 
               v_action.action_number <= v_last_action_number THEN
                RAISE EXCEPTION 'Actions must be in ascending order';
            END IF;

            -- Process the action - if it fails, the exception will rollback the transaction
            IF NOT process_game_action(v_action) THEN
                RAISE EXCEPTION 'Failed to process action % of turn %',
                    v_action.action_number, v_action.turn_number;
            END IF;

            -- Update last processed action/turn numbers
            v_last_turn_number := v_action.turn_number;
            v_last_action_number := v_action.action_number;
        END LOOP;

        -- If we get here, all actions succeeded
        -- End turn and switch current player
        PERFORM match_new_turn(p_match_id);

        -- Commit transaction
        RETURN true;
    EXCEPTION WHEN OTHERS THEN
        -- Rollback transaction on any error
        RAISE;
    END;
END;
$$;

-- Create new submit_turn as the main entry point
CREATE OR REPLACE FUNCTION submit_turn(
    p_match_id UUID,
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
GRANT EXECUTE ON FUNCTION submit_turn(UUID, JSONB[]) TO authenticated;