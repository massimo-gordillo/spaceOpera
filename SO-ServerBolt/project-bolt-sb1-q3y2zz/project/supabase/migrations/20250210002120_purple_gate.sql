-- Create structure_attributes table with constraints
CREATE TABLE structure_attributes (
    game_piece_id INTEGER PRIMARY KEY,
    is_resource BOOLEAN NOT NULL DEFAULT false,
    is_production BOOLEAN NOT NULL DEFAULT false,
    is_command BOOLEAN NOT NULL DEFAULT false,
    default_health INTEGER NOT NULL DEFAULT 200,
    CONSTRAINT structure_id_range CHECK (game_piece_id >= 200 AND game_piece_id <= 255)
);

-- Enable RLS
ALTER TABLE structure_attributes ENABLE ROW LEVEL SECURITY;

-- Create RLS policy for reading structure attributes
CREATE POLICY "Anyone can read structure attributes"
    ON structure_attributes
    FOR SELECT
    TO authenticated
    USING (true);

-- Insert initial structure types
INSERT INTO structure_attributes (game_piece_id, is_resource, is_production, is_command) VALUES
    (200, true, false, false),    -- Resource
    (201, false, true, false),    -- Factory
    (202, false, true, false),    -- Airport
    (203, false, true, false),    -- Seaport
    (205, false, false, true);    -- Command

-- Create capture action function
CREATE OR REPLACE FUNCTION action_capture(
    p_match_id UUID,
    p_unit_x INTEGER,
    p_unit_y INTEGER,
    p_structure_x INTEGER,
    p_structure_y INTEGER
)
RETURNS BOOLEAN
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    v_unit match_piece_list%ROWTYPE;
    v_structure match_piece_list%ROWTYPE;
    v_unit_attrs unit_attributes%ROWTYPE;
    v_structure_attrs structure_attributes%ROWTYPE;
    v_capture_damage INTEGER;
    v_new_health INTEGER;
BEGIN
    -- Get unit and validate it exists
    SELECT * INTO v_unit
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND x_loc = p_unit_x
        AND y_loc = p_unit_y
        AND is_unit = true;

    IF v_unit IS NULL THEN
        RAISE EXCEPTION 'No unit found at position (%, %)', p_unit_x, p_unit_y;
    END IF;

    -- Get structure and validate it exists
    SELECT * INTO v_structure
    FROM match_piece_list
    WHERE match_id = p_match_id
        AND x_loc = p_structure_x
        AND y_loc = p_structure_y
        AND is_unit = false;

    IF v_structure IS NULL THEN
        RAISE EXCEPTION 'No structure found at position (%, %)', p_structure_x, p_structure_y;
    END IF;

    -- Get unit attributes
    SELECT * INTO v_unit_attrs
    FROM unit_attributes
    WHERE game_piece_id = v_unit.game_piece_id;

    -- Validate unit can capture
    IF NOT v_unit_attrs.is_resource_unit THEN
        RAISE EXCEPTION 'Unit cannot capture structures';
    END IF;

    -- Get structure attributes
    SELECT * INTO v_structure_attrs
    FROM structure_attributes
    WHERE game_piece_id = v_structure.game_piece_id;

    -- Validate structure exists in attributes
    IF v_structure_attrs IS NULL THEN
        RAISE EXCEPTION 'Invalid structure type';
    END IF;

    -- Cannot capture own structures
    IF v_unit.player_controller = v_structure.player_controller AND v_structure.player_controller != 0 THEN
        RAISE EXCEPTION 'Cannot capture your own structures';
    END IF;

    -- Must be adjacent to capture
    IF abs(p_unit_x - p_structure_x) + abs(p_unit_y - p_structure_y) > 1 THEN
        RAISE EXCEPTION 'Unit must be adjacent to structure to capture';
    END IF;

    -- Calculate capture damage (unit's health as a percentage of 100)
    v_capture_damage := (v_unit.health_val::NUMERIC / v_unit_attrs.health_max * 100)::INTEGER;

    -- Calculate new structure health
    v_new_health := v_structure.health_val - v_capture_damage;

    -- If structure health reaches 0, transfer ownership
    IF v_new_health <= 0 THEN
        UPDATE match_piece_list
        SET player_controller = v_unit.player_controller,
            health_val = v_structure_attrs.default_health
        WHERE id = v_structure.id;
    ELSE
        -- Otherwise just update health
        UPDATE match_piece_list
        SET health_val = v_new_health
        WHERE id = v_structure.id;
    END IF;

    RETURN true;
END;
$$;