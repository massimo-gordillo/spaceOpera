/*
  # Recreate foreign key relationship for map_tiles
  
  1. Changes
    - Drop existing foreign key constraint
    - Recreate foreign key constraint with correct types
  
  2. Notes
    - Ensures clean recreation of the constraint
    - Maintains referential integrity between map tiles and tile definitions
*/

-- Drop existing constraint if it exists
ALTER TABLE map_tiles
DROP CONSTRAINT IF EXISTS fk_map_tiles_tile_type;

-- Add foreign key constraint
ALTER TABLE map_tiles
ADD CONSTRAINT fk_map_tiles_tile_type
FOREIGN KEY (tile_type_id)
REFERENCES tile_values(tile_type_id);