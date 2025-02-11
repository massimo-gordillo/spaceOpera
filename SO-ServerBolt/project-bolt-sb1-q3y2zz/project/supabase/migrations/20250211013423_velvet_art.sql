-- Create type for game action
CREATE TYPE game_action AS (
    match_id UUID,
    turn_number SMALLINT,
    action_number SMALLINT,
    action_type SMALLINT,
    game_piece_id SMALLINT,
    unit_terrain_type SMALLINT,
    from_location_x SMALLINT,
    from_location_y SMALLINT,
    to_location_x SMALLINT,
    to_location_y SMALLINT,
    player_id SMALLINT
);

-- Create function to process a single game action
CREATE OR REPLACE FUNCTION process_game_action(
    p_action game_action
)
RETURNS BOOLEAN
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
BEGIN
    -- Validate action type
    IF p_action.action_type NOT IN (0, 1, 2, 3) THEN
        RAISE EXCEPTION 'Invalid action type: %', p_action.action_type;
    END IF;

    -- Process action based on type
    CASE p_action.action_type
        WHEN 0 THEN -- Move
            RETURN action_move(
                p_action.match_id,
                p_action.from_location_x,
                p_action.from_location_y,
                p_action.to_location_x,
                p_action.to_location_y
            );
        WHEN 1 THEN -- Attack
            RETURN action_combat(
                p_action.match_id,
                p_action.from_location_x,
                p_action.from_location_y,
                p_action.to_location_x,
                p_action.to_location_y
            );
        WHEN 2 THEN -- Capture
            RETURN action_capture(
                p_action.match_id,
                p_action.from_location_x,
                p_action.from_location_y,
                p_action.to_location_x,
                p_action.to_location_y
            );
        WHEN 3 THEN -- Produce
            RETURN action_produce(
                p_action.match_id,
                p_action.to_location_x,
                p_action.to_location_y,
                p_action.game_piece_id
            );
    END CASE;

    RETURN false;
END;
$$;

-- Create function to process a list of game actions
CREATE OR REPLACE FUNCTION submit_turn(
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
    v_current_player INTEGER;
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

    -- Get current player number
    SELECT 
        CASE 
            WHEN v_match.current_player_id = v_match.player1_id THEN 1
            WHEN v_match.current_player_id = v_match.player2_id THEN 2
            ELSE NULL
        END INTO v_current_player;

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

        -- Process the action
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

    RETURN true;
END;
$$;