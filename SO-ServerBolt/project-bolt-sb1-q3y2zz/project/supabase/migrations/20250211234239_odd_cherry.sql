-- Update game_action type to use UUID for player_id
DROP TYPE game_action;
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
    player_id UUID
);

-- Update match_moves table to use UUID for player_id
ALTER TABLE match_moves 
ALTER COLUMN player_id TYPE UUID USING player_id::UUID;

-- Update submit_game_actions function to handle UUID player_id
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
            (v_action->>'playerID')::UUID
        )::game_action;
        
        -- Add to array
        v_game_actions := array_append(v_game_actions, v_current_action);
    END LOOP;

    -- Submit the turn with the converted actions
    RETURN submit_turn(p_match_id, v_game_actions);
END;
$$;

-- Update process_game_action function to handle UUID player_id
CREATE OR REPLACE FUNCTION process_game_action(
    p_action game_action
)
RETURNS BOOLEAN
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    v_success BOOLEAN;
BEGIN
    -- Validate action type
    IF p_action.action_type NOT IN (0, 1, 2, 3) THEN
        RAISE EXCEPTION 'Invalid action type: %', p_action.action_type;
    END IF;

    -- Record the action in match_moves
    INSERT INTO match_moves (
        match_id,
        player_id,
        actions,
        turn_number,
        action_type,
        game_piece_id,
        unit_terrain_type,
        from_location_x,
        from_location_y,
        to_location_x,
        to_location_y
    ) VALUES (
        p_action.match_id,
        p_action.player_id,
        jsonb_build_object(
            'type', p_action.action_type,
            'gamePieceId', p_action.game_piece_id,
            'unitTerrainType', p_action.unit_terrain_type,
            'fromX', p_action.from_location_x,
            'fromY', p_action.from_location_y,
            'toX', p_action.to_location_x,
            'toY', p_action.to_location_y
        ),
        p_action.turn_number,
        p_action.action_type,
        p_action.game_piece_id,
        p_action.unit_terrain_type,
        p_action.from_location_x,
        p_action.from_location_y,
        p_action.to_location_x,
        p_action.to_location_y
    );

    -- Process action based on type
    CASE p_action.action_type
        WHEN 0 THEN -- Move
            v_success := action_move(
                p_action.match_id,
                p_action.from_location_x,
                p_action.from_location_y,
                p_action.to_location_x,
                p_action.to_location_y
            );
        WHEN 1 THEN -- Attack
            v_success := action_combat(
                p_action.match_id,
                p_action.from_location_x,
                p_action.from_location_y,
                p_action.to_location_x,
                p_action.to_location_y
            );
        WHEN 2 THEN -- Capture
            v_success := action_capture(
                p_action.match_id,
                p_action.from_location_x,
                p_action.from_location_y,
                p_action.to_location_x,
                p_action.to_location_y
            );
        WHEN 3 THEN -- Produce
            v_success := action_produce(
                p_action.match_id,
                p_action.to_location_x,
                p_action.to_location_y,
                p_action.game_piece_id
            );
    END CASE;

    -- Update is_valid flag based on action success
    UPDATE match_moves
    SET is_valid = v_success
    WHERE match_id = p_action.match_id
        AND turn_number = p_action.turn_number
        AND action_type = p_action.action_type
        AND from_location_x = p_action.from_location_x
        AND from_location_y = p_action.from_location_y
        AND to_location_x = p_action.to_location_x
        AND to_location_y = p_action.to_location_y;

    RETURN v_success;
END;
$$;