-- Create test match with proper UUIDs
WITH new_match AS (
    INSERT INTO matches (
        id,
        player1_id,
        player2_id,
        map_id,
        map_name,
        current_player_id
    )
    VALUES (
        gen_random_uuid(),
        gen_random_uuid(),
        gen_random_uuid(),
        gen_random_uuid(),
        'Test Map',
        gen_random_uuid()
    )
    RETURNING id, player1_id, player2_id
),
-- Store the IDs for later use
test_ids AS (
    SELECT 
        id as match_id,
        player1_id,
        player2_id
    FROM new_match
)

-- Insert test pieces using the stored IDs
INSERT INTO match_piece_list (
    match_id,
    is_unit,
    x_loc,
    y_loc,
    game_piece_id,
    player_controller,
    health_val
)
SELECT match_id, is_unit, x_loc, y_loc, game_piece_id, player_num, health_val
FROM test_ids,
UNNEST(
    ARRAY[true, true, false, false, false]::boolean[], -- is_unit
    ARRAY[1, 1, 200, 200, 201]::integer[], -- game_piece_id
    ARRAY[1, 2, 1, 2, 3]::integer[], -- x_loc
    ARRAY[1, 2, 1, 2, 3]::integer[], -- y_loc
    ARRAY[1, 1, 0, 2, 2]::integer[], -- player_num
    ARRAY[100, 50, 200, 200, 200]::integer[] -- health_val
) AS t(is_unit, game_piece_id, x_loc, y_loc, player_num, health_val);

-- Run test cases using the stored match_id
DO $$
DECLARE
    v_match_id UUID;
BEGIN
    SELECT id INTO v_match_id FROM matches ORDER BY created_at DESC LIMIT 1;

    -- Test 1: Full health unit capturing neutral structure
    PERFORM action_capture(v_match_id, 1, 1, 1, 1);
    
    -- Test 2: Half health unit capturing enemy structure
    PERFORM action_capture(v_match_id, 2, 2, 2, 2);
    
    -- Insert additional test pieces
    INSERT INTO match_piece_list (
        match_id,
        is_unit,
        x_loc,
        y_loc,
        game_piece_id,
        player_controller,
        health_val
    )
    VALUES
        -- Own structure and unit (Test 3)
        (v_match_id, false, 4, 4, 200, 1, 200),
        (v_match_id, true, 4, 4, 1, 1, 100),
        -- Combat unit and enemy structure (Test 4)
        (v_match_id, true, 5, 5, 2, 1, 100),
        (v_match_id, false, 5, 5, 200, 2, 200);

    -- Test 3: Try to capture own structure
    PERFORM action_capture(v_match_id, 4, 4, 4, 4);
    
    -- Test 4: Try to capture with non-resource unit
    PERFORM action_capture(v_match_id, 5, 5, 5, 5);
    
    -- Test 5: Try to capture from different square
    PERFORM action_capture(v_match_id, 1, 1, 2, 2);

    -- Cleanup test data
    DELETE FROM match_piece_list WHERE match_id = v_match_id;
    DELETE FROM matches WHERE id = v_match_id;
END;
$$;