-- Update match_new_turn to calculate and store new hash
CREATE OR REPLACE FUNCTION match_new_turn(
    p_match_id UUID
)
RETURNS VOID
LANGUAGE plpgsql
AS $$
DECLARE
    v_current_player INTEGER;
    v_match matches%ROWTYPE;
    v_next_player INTEGER;
    v_new_hash BIGINT;
BEGIN
    -- Get match data
    SELECT * INTO v_match
    FROM matches
    WHERE id = p_match_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'Match not found';
    END IF;

    -- Get current player number
    SELECT 
        CASE 
            WHEN v_match.current_player_id = v_match.player1_id THEN 1
            WHEN v_match.current_player_id = v_match.player2_id THEN 2
            ELSE NULL
        END INTO v_current_player;

    IF v_current_player IS NULL THEN
        RAISE EXCEPTION 'Invalid match state: current player not found';
    END IF;

    -- Calculate and apply income for current player
    PERFORM match_calculate_income(p_match_id, v_current_player);

    -- Determine next player
    v_next_player := CASE v_current_player
        WHEN 1 THEN 2
        ELSE 1
    END;

    -- Reset action states for next player's pieces
    UPDATE match_piece_list
    SET 
        move_nonexhausted = CASE 
            WHEN is_unit THEN true 
            ELSE NULL 
        END,
        attack_nonexhausted = CASE 
            WHEN is_unit THEN true 
            ELSE NULL 
        END,
        production_nonexhausted = CASE 
            WHEN NOT is_unit AND EXISTS (
                SELECT 1 FROM structure_attributes 
                WHERE game_piece_id = match_piece_list.game_piece_id 
                AND is_production = true
            ) THEN true 
            ELSE NULL 
        END
    WHERE match_id = p_match_id
    AND player_controller = v_next_player;

    -- Calculate new game state hash
    v_new_hash := match_calculate_game_state_hash(p_match_id);

    -- Switch current player, increment turn number, and update hash
    UPDATE matches
    SET current_player_id = CASE 
            WHEN current_player_id = player1_id THEN player2_id
            ELSE player1_id
        END,
        turn_number = turn_number + 1,
        game_state_hash = v_new_hash
    WHERE id = p_match_id;
END;
$$;

-- Update submit_game_actions to use match_new_turn
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