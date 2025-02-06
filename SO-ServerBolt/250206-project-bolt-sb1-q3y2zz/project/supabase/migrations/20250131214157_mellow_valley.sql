/*
  # Create SaveMap RPC Function

  1. New Function
    - `save_map`: Handles saving map data across multiple tables
      - Creates map record
      - Inserts tiles
      - Inserts initial pieces
  
  2. Parameters
    - name: text
    - width: integer
    - height: integer
    - tiles: integer[]
    - pieces: jsonb (array of piece objects)

  3. Returns
    - maps record
*/

CREATE OR REPLACE FUNCTION save_map(
  p_name text,
  p_width integer,
  p_height integer,
  p_tiles integer[],
  p_pieces jsonb
)
RETURNS maps
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
  v_map maps;
  v_tile_type integer;
  v_piece jsonb;
BEGIN
  -- Insert map record
  INSERT INTO maps (name, width, height)
  VALUES (p_name, p_width, p_height)
  RETURNING * INTO v_map;

  -- Insert tiles
  FOR i IN 0..array_length(p_tiles, 1)-1 LOOP
    v_tile_type := p_tiles[i+1];
    PERFORM add_map_tile(
      v_map.id,
      i % p_width,  -- x coordinate
      i / p_width,  -- y coordinate
      v_tile_type
    );
  END LOOP;

  -- Insert pieces
  FOR v_piece IN SELECT * FROM jsonb_array_elements(p_pieces) LOOP
    PERFORM add_map_init_piece(
      v_map.id,
      (v_piece->>'isUnit')::boolean,
      (v_piece->>'x')::integer,
      (v_piece->>'y')::integer,
      (v_piece->>'typeId')::integer,
      (v_piece->>'ownerId')::integer,
      (v_piece->>'health')::integer
    );
  END LOOP;

  RETURN v_map;
END;
$$;