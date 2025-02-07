-- Update combat_can_attack function to use unit_terrain_type
CREATE OR REPLACE FUNCTION combat_can_attack(
    p_attacker_id INTEGER,
    p_defender_id INTEGER
)
RETURNS BOOLEAN
LANGUAGE plpgsql
AS $$
DECLARE
    v_attacker_attrs unit_attributes%ROWTYPE;
    v_defender_attrs unit_attributes%ROWTYPE;
BEGIN
    -- Get attacker attributes
    SELECT * INTO v_attacker_attrs
    FROM unit_attributes
    WHERE game_piece_id = p_attacker_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'No attributes found for attacker unit %', p_attacker_id;
    END IF;

    -- Get defender attributes
    SELECT * INTO v_defender_attrs
    FROM unit_attributes
    WHERE game_piece_id = p_defender_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'No attributes found for defender unit %', p_defender_id;
    END IF;

    -- Check if attacker can attack defender's terrain type
    RETURN CASE v_defender_attrs.unit_terrain_type
        WHEN 'Land' THEN v_attacker_attrs.can_attack_land
        WHEN 'Sea' THEN v_attacker_attrs.can_attack_sea
        WHEN 'Air' THEN v_attacker_attrs.can_attack_air
        ELSE false
    END;
END;
$$;