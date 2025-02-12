CREATE OR REPLACE FUNCTION action_produce(
    p_match_id UUID,
    p_x INTEGER,
    p_y INTEGER,
    p_unit_type INTEGER
)
RETURNS BOOLEAN
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    v_structure match_piece_list%ROWTYPE;
    v_structure_attrs structure_attributes%ROWTYPE;
    v_unit_attrs unit_attributes%ROWTYPE;
    v_match matches%ROWTYPE;
    v_current_player INTEGER;
    v_unit_cost INTEGER;
    v_player_resources INTEGER;
BEGIN
    -- Get match data
    SELECT * INTO v_match
    FROM matches
    WHERE id = p_match_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'Match not found';
    END IF;

    IF v_match.is_completed THEN
        RAISE EXCEPTION 'Cannot perform actions on a completed match';
    END IF;

    -- Determine current player number
    SELECT 
        CASE 
            WHEN v_match.current_player_id = v_match.player1_id THEN 1
            WHEN v_match.current_player_id = v_match.player2_id THEN 2
            ELSE NULL
        END INTO v_current_player;

    -- Get structure at location
    SELECT * INTO v_structure
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND x_loc = p_x
        AND y_loc = p_y
        AND is_unit = false;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'No structure found at position (%, %)', p_x, p_y;
    END IF;

    -- Check if the structure can produce
    IF NOT v_structure.production_nonexhausted THEN
        RAISE EXCEPTION 'Structure has already produced this turn';
    END IF;

    -- Get structure attributes
    SELECT * INTO v_structure_attrs
    FROM structure_attributes
    WHERE game_piece_id = v_structure.game_piece_id;

    -- Validate it's a production structure
    IF NOT v_structure_attrs.is_production THEN
        RAISE EXCEPTION 'Structure at (%, %) is not a production facility', p_x, p_y;
    END IF;

    -- Validate structure ownership
    IF v_structure.player_controller != v_current_player THEN
        RAISE EXCEPTION 'Structure is not owned by the current player';
    END IF;

    -- Get unit attributes
    SELECT * INTO v_unit_attrs
    FROM unit_attributes
    WHERE game_piece_id = p_unit_type;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'Invalid unit type: %', p_unit_type;
    END IF;

    -- Validate terrain type match
    IF v_structure_attrs.production_terrain_type != v_unit_attrs.unit_terrain_type THEN
        RAISE EXCEPTION 'Structure cannot produce units of type %', v_unit_attrs.unit_terrain_type;
    END IF;

    -- Check if square is occupied by a unit
    IF EXISTS (
        SELECT 1
        FROM match_piece_list
        WHERE match_id = p_match_id
            AND x_loc = p_x
            AND y_loc = p_y
            AND is_unit = true
    ) THEN
        RAISE EXCEPTION 'Cannot produce unit at %,%: square is occupied', p_x, p_y;
    END IF;

    -- Get player's resources
    v_player_resources := CASE v_current_player
        WHEN 1 THEN v_match.player1_resources
        WHEN 2 THEN v_match.player2_resources
    END;

    -- Check if player can afford the unit
    IF v_player_resources < v_unit_attrs.price THEN
        RAISE EXCEPTION 'Insufficient resources to produce unit (cost: %, available: %)',
            v_unit_attrs.price, v_player_resources;
    END IF;

    -- Deduct resources
    UPDATE matches
    SET player1_resources = CASE WHEN v_current_player = 1 
            THEN player1_resources - v_unit_attrs.price
            ELSE player1_resources END,
        player2_resources = CASE WHEN v_current_player = 2
            THEN player2_resources - v_unit_attrs.price
            ELSE player2_resources END
    WHERE id = p_match_id;

    -- Exhaust the structure's production action
    UPDATE match_piece_list
    SET production_nonexhausted = false
    WHERE id = v_structure.id;

    -- Create the unit
    INSERT INTO match_piece_list (
        match_id,
        is_unit,
        x_loc,
        y_loc,
        game_piece_id,
        player_controller,
        health_val,
        move_nonexhausted,
        attack_nonexhausted,
        production_nonexhausted
    ) VALUES (
        p_match_id,
        true,
        p_x,
        p_y,
        p_unit_type,
        v_current_player,
        v_unit_attrs.health_max,
        false,  -- New units can't move on their production turn
        false,  -- New units can't attack on their production turn
        NULL    -- Units don't have production actions
    );

    RETURN true;
END;