-- Add new columns to match_moves table
ALTER TABLE match_moves
ADD COLUMN action_type SMALLINT NOT NULL,
ADD COLUMN game_piece_id SMALLINT,
ADD COLUMN unit_terrain_type SMALLINT,
ADD COLUMN from_location_x SMALLINT,
ADD COLUMN from_location_y SMALLINT,
ADD COLUMN to_location_x SMALLINT,
ADD COLUMN to_location_y SMALLINT;

-- Create index for querying moves by action type
CREATE INDEX idx_match_moves_action_type ON match_moves(match_id, action_type);

-- Update process_game_action to record actions
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