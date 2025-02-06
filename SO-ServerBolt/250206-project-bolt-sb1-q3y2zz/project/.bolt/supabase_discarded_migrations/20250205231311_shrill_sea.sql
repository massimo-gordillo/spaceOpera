-- Rename columns in map_init_pieces and match_piece_list
ALTER TABLE map_init_pieces 
  RENAME COLUMN type_num TO game_piece_id;

ALTER TABLE match_piece_list
  RENAME COLUMN unit_id TO game_piece_id;

-- Update unit_attributes to use game_piece_id
DROP TABLE IF EXISTS unit_attributes CASCADE;
CREATE TABLE unit_attributes (
    game_piece_id INTEGER PRIMARY KEY,
    damage_type_id INTEGER NOT NULL,
    base_damage NUMERIC NOT NULL
);

-- Update unit_health_types to use game_piece_id
DROP TABLE IF EXISTS unit_health_types CASCADE;
CREATE TABLE unit_health_types (
    game_piece_id INTEGER PRIMARY KEY,
    health_type INTEGER NOT NULL
);

-- Enable RLS on new tables
ALTER TABLE unit_attributes ENABLE ROW LEVEL SECURITY;
ALTER TABLE unit_health_types ENABLE ROW LEVEL SECURITY;

-- Add RLS policies for reading data
CREATE POLICY "Anyone can read unit attributes"
    ON unit_attributes FOR SELECT
    TO authenticated
    USING (true);

CREATE POLICY "Anyone can read unit health types"
    ON unit_health_types FOR SELECT
    TO authenticated
    USING (true);

-- Insert initial unit attributes
INSERT INTO unit_attributes (game_piece_id, damage_type_id, base_damage) VALUES
(1, 1, 10.0),  -- Infantry with pierce damage
(2, 2, 15.0);  -- Archer with projectile damage

-- Insert initial health types
INSERT INTO unit_health_types (game_piece_id, health_type) VALUES
(1, 1),  -- Infantry with light armor
(2, 2);  -- Archer with medium armor