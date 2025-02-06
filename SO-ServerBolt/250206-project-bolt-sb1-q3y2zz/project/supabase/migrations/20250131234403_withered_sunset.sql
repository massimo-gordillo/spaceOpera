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
  v_x integer;
  v_y integer;
BEGIN
  -- Insert map record
  INSERT INTO maps (name, width, height)
  VALUES (p_name, p_width, p_height)
  RETURNING * INTO v_map;

  -- Insert tiles
  FOR i IN 0..array_upper(p_tiles, 1)-1 LOOP
    v_tile_type := p_tiles[i+1];
    v_x := i % p_width;
    v_y := i / p_width;
    
    PERFORM add_map_tile(
      v_map.id,
      v_x,
      v_y,
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