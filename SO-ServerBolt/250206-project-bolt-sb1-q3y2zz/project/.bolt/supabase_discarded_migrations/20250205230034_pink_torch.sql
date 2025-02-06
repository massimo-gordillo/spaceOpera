-- Create test data
DO $$ 
DECLARE
    v_match_id UUID;
    v_map_id UUID;
    v_damage NUMERIC;
    v_player1_id UUID := '11111111-1111-1111-1111-111111111111';
    v_player2_id UUID := '22222222-2222-2222-2222-222222222222';
BEGIN
    -- Create test users if they don't exist
    INSERT INTO auth.users (
        id,
        email,
        created_at,
        updated_at,
        raw_user_meta_data,
        raw_app_meta_data,
        is_super_admin,
        encrypted_password
    ) VALUES 
    (
        v_player1_id,
        'player1@test.com',
        NOW(),
        NOW(),
        '{}'::jsonb,
        '{"provider":"email","providers":["email"]}'::jsonb,
        false,
        '123456'
    ),
    (
        v_player2_id,
        'player2@test.com',
        NOW(),
        NOW(),
        '{}'::jsonb,
        '{"provider":"email","providers":["email"]}'::jsonb,
        false,
        '123456'
    )
    ON CONFLICT (id) DO NOTHING;

    -- Insert test map
    INSERT INTO maps (name, width, height)
    VALUES ('Test Combat Map', 10, 10)
    RETURNING id INTO v_map_id;

    -- Create test match
    INSERT INTO matches (player1_id, player2_id, map_id, map_name, current_player_id)
    VALUES 
    (v_player1_id, v_player2_id, v_map_id, 'Test Combat Map', v_player1_id)
    RETURNING id INTO v_match_id;

    -- Insert test units into match
    INSERT INTO match_piece_list (match_id, piece_type, x_loc, y_loc, unit_id, player_controller, health_val)
    VALUES
    (v_match_id, true, 1, 1, 1, 1, 100),  -- Infantry at (1,1)
    (v_match_id, true, 2, 2, 2, 2, 100);  -- Archer at (2,2)

    -- Test combat calculation: Infantry attacking Archer
    SELECT unit_combat(v_match_id, 1, 1, 1, 2, 2) INTO v_damage;
    RAISE NOTICE 'Infantry attacking Archer damage: %', v_damage;
    ASSERT v_damage = 7.5, 'Expected damage 7.5 (10 * 0.75) for Infantry vs Archer';

    -- Test combat calculation: Archer attacking Infantry
    SELECT unit_combat(v_match_id, 2, 2, 2, 1, 1) INTO v_damage;
    RAISE NOTICE 'Archer attacking Infantry damage: %', v_damage;
    ASSERT v_damage = 22.5, 'Expected damage 22.5 (15 * 1.5) for Archer vs Infantry';

    RAISE NOTICE 'All tests passed successfully!';
EXCEPTION
    WHEN OTHERS THEN
        RAISE NOTICE 'Test failed: %', SQLERRM;
        RAISE;
END $$;