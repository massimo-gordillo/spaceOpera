/*
  # Add tile_values table
  
  1. New Tables
    - `tile_values`
      - `tile_name` (text)
      - `tile_type_id` (integer, primary key)
      - `defence_value` (integer)
      - `movement_cost` (integer)
      - `can_infantry_traverse` (boolean)
      - `can_vehicle_traverse` (boolean)
      - `can_land_traverse` (boolean)
      - `can_sea_traverse` (boolean)
  
  2. Changes
    - Changed data types from text to more appropriate types
    - Added primary key constraint on tile_type_id
    - Added NOT NULL constraints where appropriate
    - Added RLS policies
*/

-- Create tile_values table
CREATE TABLE tile_values (
    tile_type_id INTEGER PRIMARY KEY,
    tile_name TEXT,
    defence_value INTEGER NOT NULL DEFAULT 0,
    movement_cost INTEGER NOT NULL DEFAULT 1,
    can_infantry_traverse BOOLEAN NOT NULL DEFAULT true,
    can_vehicle_traverse BOOLEAN NOT NULL DEFAULT true,
    can_land_traverse BOOLEAN NOT NULL DEFAULT true,
    can_sea_traverse BOOLEAN NOT NULL DEFAULT false
);

-- Enable RLS
ALTER TABLE tile_values ENABLE ROW LEVEL SECURITY;

-- Create RLS policies
CREATE POLICY "Anyone can read tile values"
    ON tile_values
    FOR SELECT
    TO authenticated
    USING (true);

-- Add some initial tile types
INSERT INTO tile_values (tile_type_id, tile_name, defence_value, movement_cost, can_infantry_traverse, can_vehicle_traverse, can_land_traverse, can_sea_traverse) VALUES
    (1, 'Plains', 0, 1, true, true, true, false),
    (2, 'Forest', 1, 2, true, false, true, false),
    (3, 'Mountain', 2, 3, true, false, true, false),
    (4, 'Water', 0, 1, false, false, false, true);