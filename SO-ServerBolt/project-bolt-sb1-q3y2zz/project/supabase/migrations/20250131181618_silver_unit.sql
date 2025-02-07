/*
  # Add Foreign Key Relationships

  1. Changes
    - Add foreign key constraint to match_piece_list.match_id referencing matches.id
    - Add foreign key constraint to map_init_pieces.map_id referencing maps.id
    - Add foreign key constraint to map_tiles.map_id referencing maps.id

  2. Security
    - No changes to RLS policies
    - Foreign keys enforce referential integrity
*/

-- Add foreign key to match_piece_list
ALTER TABLE match_piece_list
ADD CONSTRAINT fk_match_piece_list_match
FOREIGN KEY (match_id)
REFERENCES matches(id)
ON DELETE CASCADE;

-- Add foreign key to map_init_pieces
ALTER TABLE map_init_pieces
ADD CONSTRAINT fk_map_init_pieces_map
FOREIGN KEY (map_id)
REFERENCES maps(id)
ON DELETE CASCADE;

-- Add foreign key to map_tiles
ALTER TABLE map_tiles
ADD CONSTRAINT fk_map_tiles_map
FOREIGN KEY (map_id)
REFERENCES maps(id)
ON DELETE CASCADE;