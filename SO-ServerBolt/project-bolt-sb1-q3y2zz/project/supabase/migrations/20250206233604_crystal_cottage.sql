/*
  # Rename combat functions

  1. Changes
    - Rename match_unit_combat to combat_get_damage
    - Rename attack_unit to game_action_combat
    - No changes to function logic or parameters
*/

-- Drop the old functions first
DROP FUNCTION IF EXISTS match_unit_combat(UUID, INTEGER, INTEGER, INTEGER, INTEGER, INTEGER);
DROP FUNCTION IF EXISTS attack_unit(UUID, INTEGER, INTEGER, INTEGER, INTEGER);

-- Recreate match_unit_combat as combat_get_damage
CREATE OR REPLACE FUNCTION combat_get_damage(
    p_match_id UUID,
    p_unit_id_num INTEGER,
    p_attacker_x INTEGER,
    p_attacker_y INTEGER,
    p_defender_x INTEGER,
    p_defender_y INTEGER
)
RETURNS NUMERIC
LANGUAGE plpgsql
AS $$
DECLARE
    v_attacker_piece match_piece_list%ROWTYPE;
    v_defender_piece match_piece_list%ROWTYPE;
    v_damage_type TEXT;
    v_health_type TEXT;
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
        AND is_unit = true;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'No unit found at attacker position (%, %)', p_attacker_x, p_attacker_y;
    END IF;

    -- Validate unit type matches
    IF v_attacker_piece.game_piece_id != p_unit_id_num THEN
        RAISE EXCEPTION 'Unit type mismatch: Expected %, found %', p_unit_id_num, v_attacker_piece.game_piece_id;
    END IF;

    -- Get defender unit
    SELECT * INTO v_defender_piece
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND x_loc = p_defender_x
        AND y_loc = p_defender_y
        AND is_unit = true;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'No unit found at defender position (%, %)', p_defender_x, p_defender_y;
    END IF;

    -- Get damage type for attacker
    SELECT damage_type INTO v_damage_type
    FROM unit_attributes
    WHERE game_piece_id = v_attacker_piece.game_piece_id;

    IF v_damage_type IS NULL THEN
        RAISE EXCEPTION 'No damage type found for attacking unit type %', v_attacker_piece.game_piece_id;
    END IF;

    -- Get health type for defender
    SELECT health_type INTO v_health_type
    FROM unit_attributes
    WHERE game_piece_id = v_defender_piece.game_piece_id;

    IF v_health_type IS NULL THEN
        RAISE EXCEPTION 'No health type found for defender unit type %', v_defender_piece.game_piece_id;
    END IF;

    -- Get combat multiplier
    SELECT multiplier INTO v_multiplier
    FROM combat_multipliers
    WHERE damage_type = v_damage_type
      AND health_type = v_health_type;

    IF v_multiplier IS NULL THEN
        RAISE EXCEPTION 'No combat multiplier found for damage type % and health type %', 
            v_damage_type, v_health_type;
    END IF;

    -- Get base damage
    SELECT base_damage INTO v_base_damage
    FROM unit_attributes
    WHERE game_piece_id = v_attacker_piece.game_piece_id;

    IF v_base_damage IS NULL THEN
        RAISE EXCEPTION 'No base damage found for unit type %', v_attacker_piece.game_piece_id;
    END IF;

    -- Calculate final damage
    RETURN v_base_damage * v_multiplier;
END;
$$;

-- Recreate attack_unit as game_action_combat
CREATE OR REPLACE FUNCTION game_action_combat(
    p_match_id UUID,
    p_attacker_x INTEGER,
    p_attacker_y INTEGER,
    p_defender_x INTEGER,
    p_defender_y INTEGER
)
RETURNS BOOLEAN
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    v_attacker_piece match_piece_list%ROWTYPE;
    v_defender_piece match_piece_list%ROWTYPE;
    v_damage NUMERIC;
    v_new_health INTEGER;
BEGIN
    -- Get attacker unit
    SELECT * INTO v_attacker_piece
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND x_loc = p_attacker_x
        AND y_loc = p_attacker_y
        AND is_unit = true;

    IF v_attacker_piece IS NULL THEN
        RAISE EXCEPTION 'No unit found at attacker position (%, %)', p_attacker_x, p_attacker_y;
    END IF;

    -- Get defender unit
    SELECT * INTO v_defender_piece
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND x_loc = p_defender_x
        AND y_loc = p_defender_y
        AND is_unit = true;

    IF v_defender_piece IS NULL THEN
        RAISE EXCEPTION 'No unit found at defender position (%, %)', p_defender_x, p_defender_y;
    END IF;

    -- Calculate damage using combat_get_damage function
    SELECT combat_get_damage(
        p_match_id,
        v_attacker_piece.game_piece_id,
        p_attacker_x,
        p_attacker_y,
        p_defender_x,
        p_defender_y
    ) INTO v_damage;

    -- Calculate new health
    v_new_health := v_defender_piece.health_val - v_damage::INTEGER;

    -- Update defender's health
    UPDATE match_piece_list
    SET health_val = GREATEST(0, v_new_health)
    WHERE id = v_defender_piece.id;

    -- If health dropped to 0, remove the unit
    IF v_new_health <= 0 THEN
        DELETE FROM match_piece_list
        WHERE id = v_defender_piece.id;
    END IF;

    RETURN true;
END;
$$;