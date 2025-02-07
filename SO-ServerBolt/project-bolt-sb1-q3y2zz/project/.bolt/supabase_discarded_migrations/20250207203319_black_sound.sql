-- Drop and recreate unit_attributes table with all required fields
DROP TABLE IF EXISTS unit_attributes CASCADE;

CREATE TABLE unit_attributes (
    game_piece_id INTEGER PRIMARY KEY,
    damage_type TEXT NOT NULL,
    health_type TEXT NOT NULL,
    base_damage NUMERIC NOT NULL,
    health_max INTEGER NOT NULL,
    attack_range INTEGER NOT NULL,
    can_fire_back BOOLEAN NOT NULL DEFAULT true,
    movement_type TEXT NOT NULL,
    can_attack_land BOOLEAN NOT NULL DEFAULT true,
    can_attack_sea BOOLEAN NOT NULL DEFAULT false,
    can_attack_air BOOLEAN NOT NULL DEFAULT false
);

-- Enable RLS
ALTER TABLE unit_attributes ENABLE ROW LEVEL SECURITY;

-- Add RLS policy
CREATE POLICY "Anyone can read unit attributes"
    ON unit_attributes FOR SELECT
    TO authenticated
    USING (true);

-- Insert sample unit data
INSERT INTO unit_attributes (
    game_piece_id,
    damage_type,
    health_type,
    base_damage,
    health_max,
    attack_range,
    can_fire_back,
    movement_type,
    can_attack_land,
    can_attack_sea,
    can_attack_air
) VALUES
    (1, 'Kinetic', 'Light', 55, 100, 1, true, 'Land', true, false, false),   -- Infantry
    (2, 'Explosive', 'Medium', 85, 100, 2, true, 'Land', true, false, false), -- Tank
    (3, 'Piercing', 'Light', 45, 100, 3, true, 'Land', true, false, true),   -- Anti-Air
    (4, 'Explosive', 'Heavy', 95, 100, 1, true, 'Land', true, false, false), -- Heavy Tank
    (5, 'Kinetic', 'Light', 35, 100, 4, true, 'Air', true, true, true);     -- Helicopter

-- Create combat multipliers table
DROP TABLE IF EXISTS combat_multipliers CASCADE;

CREATE TABLE combat_multipliers (
    damage_type TEXT,
    health_type TEXT,
    multiplier NUMERIC NOT NULL,
    PRIMARY KEY (damage_type, health_type)
);

-- Enable RLS
ALTER TABLE combat_multipliers ENABLE ROW LEVEL SECURITY;

-- Add RLS policy
CREATE POLICY "Anyone can read combat multipliers"
    ON combat_multipliers FOR SELECT
    TO authenticated
    USING (true);

-- Insert combat multipliers
INSERT INTO combat_multipliers (damage_type, health_type, multiplier) VALUES
    ('Kinetic', 'Light', 1.2),
    ('Kinetic', 'Medium', 0.8),
    ('Kinetic', 'Heavy', 0.5),
    ('Explosive', 'Light', 1.5),
    ('Explosive', 'Medium', 1.2),
    ('Explosive', 'Heavy', 0.9),
    ('Piercing', 'Light', 1.0),
    ('Piercing', 'Medium', 1.1),
    ('Piercing', 'Heavy', 1.3);

-- Update combat_can_attack function to use movement_type
CREATE OR REPLACE FUNCTION combat_can_attack(
    p_attacker_id INTEGER,
    p_defender_id INTEGER
)
RETURNS BOOLEAN
LANGUAGE plpgsql
AS $$
DECLARE
    v_attacker_attrs unit_attributes%ROWTYPE;
    v_defender_attrs unit_attributes%ROWTYPE;
BEGIN
    -- Get attacker attributes
    SELECT * INTO v_attacker_attrs
    FROM unit_attributes
    WHERE game_piece_id = p_attacker_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'No attributes found for attacker unit %', p_attacker_id;
    END IF;

    -- Get defender attributes
    SELECT * INTO v_defender_attrs
    FROM unit_attributes
    WHERE game_piece_id = p_defender_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'No attributes found for defender unit %', p_defender_id;
    END IF;

    -- Check if attacker can attack defender's movement type
    RETURN CASE v_defender_attrs.movement_type
        WHEN 'Land' THEN v_attacker_attrs.can_attack_land
        WHEN 'Sea' THEN v_attacker_attrs.can_attack_sea
        WHEN 'Air' THEN v_attacker_attrs.can_attack_air
        ELSE false
    END;
END;
$$;