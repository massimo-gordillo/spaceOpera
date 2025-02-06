/*
  # Unit Combat Function
  
  1. New Function
    - Calculates combat damage between units based on attributes and multipliers
    - Validates unit positions and types
    - Uses unit attributes and combat multipliers tables
*/

CREATE OR REPLACE FUNCTION unit_combat(
    p_match_id UUID,
    p_unit_id_num INTEGER,
    p_attacker_x INTEGER,
    p_attacker_y INTEGER,
    p_defender_x INTEGER,
    p_defender_y INTEGER
)
RETURNS NUMERIC
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    v_attacker_piece match_piece_list%ROWTYPE;
    v_defender_piece match_piece_list%ROWTYPE;
    v_damage_type_id INTEGER;
    v_armor_id INTEGER;
    v_multiplier NUMERIC;
    v_base_damage NUMERIC;
    v_map_width INTEGER;
    v_map_height INTEGER;
BEGIN
    -- Get map dimensions for boundary checking
    SELECT m.width, m.height
    INTO v_map_width, v_map_height
    FROM matches mt
    JOIN maps m ON m.id = mt.map_id
    WHERE mt.id = p_match_id;

    IF v_map_width IS NULL THEN
        RAISE EXCEPTION 'Invalid match_id: match not found';
    END IF;

    -- Validate coordinates are within map boundaries
    IF p_attacker_x < 0 OR p_attacker_x >= v_map_width OR 
       p_attacker_y < 0 OR p_attacker_y >= v_map_height THEN
        RAISE EXCEPTION 'Invalid attacker position (%, %): coordinates out of map bounds (width: %, height: %)',
            p_attacker_x, p_attacker_y, v_map_width, v_map_height;
    END IF;

    IF p_defender_x < 0 OR p_defender_x >= v_map_width OR 
       p_defender_y < 0 OR p_defender_y >= v_map_height THEN
        RAISE EXCEPTION 'Invalid defender position (%, %): coordinates out of map bounds (width: %, height: %)',
            p_defender_x, p_defender_y, v_map_width, v_map_height;
    END IF;

    -- Get attacker unit
    SELECT * INTO v_attacker_piece
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND x_loc = p_attacker_x
        AND y_loc = p_attacker_y
        AND piece_type = true;

    IF v_attacker_piece IS NULL THEN
        RAISE EXCEPTION 'No unit found at attacker position (%, %)', p_attacker_x, p_attacker_y;
    END IF;

    -- Validate unit type matches
    IF v_attacker_piece.type_num != p_unit_id_num THEN
        RAISE EXCEPTION 'Unit type mismatch: Expected %, found %', p_unit_id_num, v_attacker_piece.type_num;
    END IF;

    -- Get defender unit
    SELECT * INTO v_defender_piece
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND x_loc = p_defender_x
        AND y_loc = p_defender_y
        AND piece_type = true;

    IF v_defender_piece IS NULL THEN
        RAISE EXCEPTION 'No unit found at defender position (%, %)', p_defender_x, p_defender_y;
    END IF;

    -- Get damage type for attacker
    SELECT damage_type_id INTO v_damage_type_id
    FROM unit_attributes
    WHERE unit_id = p_unit_id_num;

    IF v_damage_type_id IS NULL THEN
        RAISE EXCEPTION 'No attributes found for unit type %', p_unit_id_num;
    END IF;

    -- Get armor type for defender
    SELECT armor_id INTO v_armor_id
    FROM unit_armor_id
    WHERE unit_id = v_defender_piece.type_num;

    IF v_armor_id IS NULL THEN
        RAISE EXCEPTION 'No armor type found for defender unit type %', v_defender_piece.type_num;
    END IF;

    -- Get combat multiplier
    SELECT multiplier INTO v_multiplier
    FROM unit_combat_multipliers
    WHERE damage_type_id = v_damage_type_id
        AND armor_id = v_armor_id;

    IF v_multiplier IS NULL THEN
        RAISE EXCEPTION 'No combat multiplier found for damage type % and armor type %', 
            v_damage_type_id, v_armor_id;
    END IF;

    -- Get base damage
    SELECT base_damage INTO v_base_damage
    FROM unit_attributes
    WHERE unit_id = p_unit_id_num;

    IF v_base_damage IS NULL THEN
        RAISE EXCEPTION 'No base damage found for unit type %', p_unit_id_num;
    END IF;

    -- Calculate final damage
    RETURN v_base_damage * v_multiplier;
END;
$$;