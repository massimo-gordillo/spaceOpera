/*
  # Fix save_map function

  1. Changes
    - Fix array indexing issue
    - Add better error handling
    - Improve validation
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
  i integer;
  v_x integer;
  v_y integer;
  v_array_length integer;
BEGIN
  -- Validate input parameters
  IF p_width <= 0 OR p_height <= 0 THEN
    RAISE EXCEPTION 'Invalid dimensions: width and height must be positive';
  END IF;

  -- Insert map record
  INSERT INTO maps (name, width, height)
  VALUES (p_name, p_width, p_height)
  RETURNING * INTO v_map;

  -- Get array length safely
  SELECT array_length(p_tiles, 1) INTO v_array_length;
  
  IF v_array_length != p_width * p_height THEN
    RAISE EXCEPTION 'Tiles array length (%) does not match dimensions (% x %)', v_array_length, p_width, p_height;
  END IF;

  -- Insert tiles
  FOR i IN 1..v_array_length LOOP
    v_tile_type := p_tiles[i];
    v_x := (i - 1) % p_width;
    v_y := (i - 1) / p_width;
    
    PERFORM add_map_tile(
      v_map.id,
      v_x,
      v_y,
      v_tile_type
    );
  END LOOP;

  -- Insert pieces
  FOR v_piece IN SELECT * FROM jsonb_array_elements(p_pieces) LOOP
    -- Validate piece coordinates
    IF (v_piece->>'x')::integer >= p_width OR (v_piece->>'y')::integer >= p_height THEN
      RAISE EXCEPTION 'Piece coordinates out of bounds: (%, %)', (v_piece->>'x')::integer, (v_piece->>'y')::integer;
    END IF;

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