-- Create combat-related tables
CREATE TABLE IF NOT EXISTS unit_attributes (
    gamePieceId INTEGER PRIMARY KEY,
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

-- Enable RLS on new tables
ALTER TABLE unit_attributes ENABLE ROW LEVEL SECURITY;
ALTER TABLE unit_health_types ENABLE ROW LEVEL SECURITY;
ALTER TABLE combat_multipliers ENABLE ROW LEVEL SECURITY;

-- Add RLS policies for reading data
CREATE POLICY "Anyone can read unit attributes"
    ON unit_attributes FOR SELECT
    TO authenticated
    USING (true);

CREATE POLICY "Anyone can read unit health types"
    ON unit_health_types FOR SELECT
    TO authenticated
    USING (true);

CREATE POLICY "Anyone can read combat multipliers"
    ON combat_multipliers FOR SELECT
    TO authenticated
    USING (true);

-- Insert initial unit attributes
INSERT INTO unit_attributes (gamePieceId, damage_type_id, base_damage) VALUES
(1, 1, 10.0),  -- Infantry with pierce damage
(2, 2, 15.0);  -- Archer with projectile damage

-- Insert initial health types
INSERT INTO unit_health_types (unit_id, health_type) VALUES
(1, 1),  -- Infantry with light armor
(2, 2);  -- Archer with medium armor

-- Insert combat multipliers
INSERT INTO combat_multipliers (damage_type_id, health_type, multiplier) VALUES
(1, 1, 1.0),    -- Pierce vs Light: normal damage
(1, 2, 0.75),   -- Pierce vs Medium: reduced damage
(2, 1, 1.5),    -- Projectile vs Light: bonus damage
(2, 2, 1.0);    -- Projectile vs Medium: normal damage