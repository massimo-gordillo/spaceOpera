/*
  # Add attack function

  1. New Functions
    - `attack_unit`: Handles unit combat and damage application
      - Validates positions and units
      - Applies damage based on combat multipliers
      - Updates unit health
      - Returns true if attack was successful

  2. Changes
    - No schema changes
    - No table modifications
    - Adds new function for handling attacks
*/

CREATE OR REPLACE FUNCTION attack_unit(
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

    -- Calculate damage using match_unit_combat function
    SELECT match_unit_combat(
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