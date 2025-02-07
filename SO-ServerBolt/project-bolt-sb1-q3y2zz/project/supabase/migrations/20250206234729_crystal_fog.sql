/*
  # Update tile_values table
  
  1. Changes
    - Add RLS if not already enabled
    - Ensure RLS policy exists
    - Update or insert initial tile data
  
  2. Notes
    - Uses safe IF NOT EXISTS checks
    - Handles case where table already exists
*/

-- Enable RLS if not already enabled
DO $$ 
BEGIN
    IF NOT EXISTS (
        SELECT 1
        FROM pg_tables
        WHERE schemaname = 'public'
        AND tablename = 'tile_values'
        AND rowsecurity = true
    ) THEN
        ALTER TABLE tile_values ENABLE ROW LEVEL SECURITY;
    END IF;
END $$;

-- Create RLS policy if it doesn't exist
DO $$ 
BEGIN
    IF NOT EXISTS (
        SELECT 1 
        FROM pg_policies 
        WHERE tablename = 'tile_values' 
        AND policyname = 'Anyone can read tile values'
    ) THEN
        CREATE POLICY "Anyone can read tile values"
            ON tile_values
            FOR SELECT
            TO authenticated
            USING (true);
    END IF;
END $$;

-- Insert or update initial tile types
INSERT INTO tile_values (
    tile_type_id, 
    tile_name, 
    defence_value, 
    movement_cost, 
    can_infantry_traverse, 
    can_vehicle_traverse, 
    can_land_traverse, 
    can_sea_traverse
)
VALUES
    (1, 'Plains', 0, 1, true, true, true, false),
    (2, 'Forest', 1, 2, true, false, true, false),
    (3, 'Mountain', 2, 3, true, false, true, false),
    (4, 'Water', 0, 1, false, false, false, true)
ON CONFLICT (tile_type_id) DO UPDATE 
SET
    tile_name = EXCLUDED.tile_name,
    defence_value = EXCLUDED.defence_value,
    movement_cost = EXCLUDED.movement_cost,
    can_infantry_traverse = EXCLUDED.can_infantry_traverse,
    can_vehicle_traverse = EXCLUDED.can_vehicle_traverse,
    can_land_traverse = EXCLUDED.can_land_traverse,
    can_sea_traverse = EXCLUDED.can_sea_traverse;