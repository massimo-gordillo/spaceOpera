-- Create test data
DO $$ 
DECLARE
    v_match_id UUID;
    v_map_id UUID;
    v_damage NUMERIC;
BEGIN
    -- First create required tables if they don't exist
    CREATE TABLE IF NOT EXISTS unit_attributes (
        unit_id INTEGER PRIMARY KEY,
        damage_type_id INTEGER NOT NULL,
        base_damage NUMERIC NOT NULL
    );

    CREATE TABLE IF NOT EXISTS unit_health_types (
        unit_id INTEGER PRIMARY KEY,
        health_type INTEGER NOT NULL
    );

    CREATE TABLE IF NOT EXISTS combat_multipliers (
        damage_type_id INTEGER,
        health_type INTEGER,
        multiplier NUMERIC NOT NULL,
        PRIMARY KEY (damage_type_id, health_type)
    );

    -- Insert test map
    INSERT INTO maps (name, width, height)
    VALUES ('Test Combat Map', 10, 10)
    RETURNING id INTO v_map_id;

    -- Insert test unit attributes
    INSERT INTO unit_attributes (unit_id, damage_type_id, base_damage) VALUES
    (1, 1, 10.0),  -- Infantry with pierce damage
    (2, 2, 15.0);  -- Archer with projectile damage

    -- Insert test health types
    INSERT INTO unit_health_types (unit_id, health_type) VALUES
    (1, 1),  -- Infantry with light armor
    (2, 2);  -- Archer with medium armor

    -- Insert test combat multipliers
    INSERT INTO combat_multipliers (damage_type_id, health_type, multiplier) VALUES
    (1, 1, 1.0),    -- Pierce vs Light: normal damage
    (1, 2, 0.75),   -- Pierce vs Medium: reduced damage
    (2, 1, 1.5),    -- Projectile vs Light: bonus damage
    (2, 2, 1.0);    -- Projectile vs Medium: normal damage

    -- Create test match
    INSERT INTO matches (player1_id, player2_id, map_id, map_name, current_player_id)
    VALUES 
    ('11111111-1111-1111-1111-111111111111', -- Test player 1 ID
     '22222222-2222-2222-2222-222222222222', -- Test player 2 ID
     v_map_id,
     'Test Combat Map',
     '11111111-1111-1111-1111-111111111111')
    RETURNING id INTO v_match_id;

    -- Insert test units into match
    INSERT INTO match_piece_list (match_id, piece_type, x_loc, y_loc, game_piece_id, player_controller, health_val)
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