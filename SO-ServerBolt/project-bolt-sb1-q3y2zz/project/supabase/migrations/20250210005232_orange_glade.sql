-- Add resource columns to matches table
ALTER TABLE matches
ADD COLUMN player1_resources INTEGER NOT NULL DEFAULT 1000,
ADD COLUMN player2_resources INTEGER NOT NULL DEFAULT 1000;

-- Add production_terrain_type to structure_attributes
ALTER TABLE structure_attributes
ADD COLUMN production_terrain_type TEXT CHECK (production_terrain_type IN ('Land', 'Sea', 'Air'));

-- Update structure types with their production terrain types
UPDATE structure_attributes
SET production_terrain_type = CASE game_piece_id
    WHEN 201 THEN 'Land'  -- Factory
    WHEN 202 THEN 'Air'   -- Airport
    WHEN 203 THEN 'Sea'   -- Seaport
    ELSE NULL
END
WHERE is_production = true;

-- Create function to calculate and apply income for a player
CREATE OR REPLACE FUNCTION match_calculate_income(
    p_match_id UUID,
    p_player_num INTEGER
)
RETURNS INTEGER
LANGUAGE plpgsql
AS $$
DECLARE
    v_structure_count INTEGER;
    v_income INTEGER;
    v_player_id UUID;
BEGIN
    -- Validate player number
    IF p_player_num NOT IN (1, 2) THEN
        RAISE EXCEPTION 'Invalid player number: must be 1 or 2';
    END IF;

    -- Get player ID based on player number
    SELECT CASE p_player_num
        WHEN 1 THEN player1_id
        WHEN 2 THEN player2_id
    END INTO v_player_id
    FROM matches
    WHERE id = p_match_id;

    -- Count structures owned by the player
    SELECT COUNT(*)
    INTO v_structure_count
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND is_unit = false
        AND player_controller = p_player_num;

    -- Calculate income: 200 base + 100 per structure
    v_income := 200 + (100 * v_structure_count);

    -- Update player's resources
    UPDATE matches
    SET player1_resources = CASE WHEN p_player_num = 1 
            THEN player1_resources + v_income
            ELSE player1_resources END,
        player2_resources = CASE WHEN p_player_num = 2
            THEN player2_resources + v_income
            ELSE player2_resources END
    WHERE id = p_match_id;

    RETURN v_income;
END;
$$;

-- Create function to handle new turn
CREATE OR REPLACE FUNCTION match_new_turn(
    p_match_id UUID
)
RETURNS VOID
LANGUAGE plpgsql
AS $$
DECLARE
    v_current_player INTEGER;
BEGIN
    -- Get current player number
    SELECT 
        CASE 
            WHEN current_player_id = player1_id THEN 1
            WHEN current_player_id = player2_id THEN 2
            ELSE NULL
        END INTO v_current_player
    FROM matches
    WHERE id = p_match_id;

    IF v_current_player IS NULL THEN
        RAISE EXCEPTION 'Invalid match state: current player not found';
    END IF;

    -- Calculate and apply income for current player
    PERFORM match_calculate_income(p_match_id, v_current_player);
END;
$$;

-- Create function to handle unit production
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
    IF v_structure_attrs.production_terrain_type != v_unit_attrs.terrain_type THEN
        RAISE EXCEPTION 'Structure cannot produce units of type %', v_unit_attrs.terrain_type;
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
        RAISE EXCEPTION 'Cannot produce unit: square is occupied';
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

    -- Create the unit
    INSERT INTO match_piece_list (
        match_id,
        is_unit,
        x_loc,
        y_loc,
        game_piece_id,
        player_controller,
        health_val
    ) VALUES (
        p_match_id,
        true,
        p_x,
        p_y,
        p_unit_type,
        v_current_player,
        v_unit_attrs.health_max
    );

    RETURN true;
END;
$$;