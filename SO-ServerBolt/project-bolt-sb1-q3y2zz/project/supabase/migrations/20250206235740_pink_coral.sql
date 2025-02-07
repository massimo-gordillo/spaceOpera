/*
  # Add foreign key relationship for map_tiles
  
  1. Changes
    - Add foreign key constraint from map_tiles.tile_type_id to tile_values.tile_type_id
  
  2. Notes
    - Ensures referential integrity between map tiles and tile definitions
*/

-- Add foreign key constraint
ALTER TABLE map_tiles
ADD CONSTRAINT fk_map_tiles_tile_type
FOREIGN KEY (tile_type_id)
REFERENCES tile_values(tile_type_id);