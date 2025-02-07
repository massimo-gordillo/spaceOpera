/*
  # Add grid handling functions and indexes
  
  1. New Functions
    - get_grid_cell: Get value at specific coordinates
    - validate_move: Check if a move is legal
    - apply_action: Apply a game action to the state
  2. Indexes
    - Add GIN indexes for efficient JSONB querying
*/

-- Create helper function to get value at grid coordinates
CREATE OR REPLACE FUNCTION get_grid_cell(
  grid jsonb,
  x integer,
  y integer
)
RETURNS jsonb
LANGUAGE sql
IMMUTABLE
AS $$
  SELECT grid->y->x
$$;

-- Create function to validate unit movement
CREATE OR REPLACE FUNCTION validate_move(
  terrain_grid jsonb,
  unit_grid jsonb,
  structure_grid jsonb,
  from_x integer,
  from_y integer,
  to_x integer,
  to_y integer,
  unit_type integer
)
RETURNS boolean
LANGUAGE plpgsql
AS $$
DECLARE
  terrain_type integer;
  destination_unit jsonb;
  movement_cost integer;
BEGIN
  -- Get terrain at destination
  terrain_type := (get_grid_cell(terrain_grid, to_x, to_y)->>'type')::integer;
  
  -- Check if destination is occupied
  destination_unit := get_grid_cell(unit_grid, to_x, to_y);
  IF destination_unit IS NOT NULL THEN
    RETURN false;
  END IF;
  
  -- Get movement cost for terrain type (you'll need to define these rules)
  movement_cost := CASE terrain_type
    WHEN 1 THEN 1  -- Plains
    WHEN 2 THEN 2  -- Forest
    WHEN 3 THEN 3  -- Mountains
    ELSE 99        -- Impassable
  END;
  
  -- Calculate Manhattan distance
  IF (ABS(to_x - from_x) + ABS(to_y - from_y)) > movement_cost THEN
    RETURN false;
  END IF;
  
  RETURN true;
END;
$$;

-- Create function to apply an action to the game state
CREATE OR REPLACE FUNCTION apply_action(
  match_id uuid,
  action jsonb
)
RETURNS boolean
LANGUAGE plpgsql
AS $$
DECLARE
  v_match matches;
  action_type text;
  from_x integer;
  from_y integer;
  to_x integer;
  to_y integer;
  unit jsonb;
BEGIN
  -- Get current match state
  SELECT * INTO v_match FROM matches WHERE id = match_id;
  
  action_type := action->>'type';
  
  CASE action_type
    WHEN 'MOVE' THEN
      from_x := (action->>'fromX')::integer;
      from_y := (action->>'fromY')::integer;
      to_x := (action->>'toX')::integer;
      to_y := (action->>'toY')::integer;
      
      -- Get unit at source position
      unit := get_grid_cell(v_match.unit_grid, from_x, from_y);
      
      -- Validate move
      IF NOT validate_move(
        v_match.terrain_grid,
        v_match.unit_grid,
        v_match.structure_grid,
        from_x,
        from_y,
        to_x,
        to_y,
        (unit->>'type')::integer
      ) THEN
        RETURN false;
      END IF;
      
      -- Update unit position
      UPDATE matches 
      SET unit_grid = jsonb_set(
        jsonb_set(
          unit_grid,
          ARRAY[from_y::text, from_x::text],
          'null'::jsonb
        ),
        ARRAY[to_y::text, to_x::text],
        unit
      )
      WHERE id = match_id;
      
    -- Add other action types here
    ELSE
      RAISE EXCEPTION 'Unknown action type: %', action_type;
  END CASE;
  
  RETURN true;
END;
$$;

-- Add GIN indexes for efficient JSONB querying
CREATE INDEX IF NOT EXISTS idx_matches_unit_grid ON matches USING GIN (unit_grid);
CREATE INDEX IF NOT EXISTS idx_matches_structure_grid ON matches USING GIN (structure_grid);
CREATE INDEX IF NOT EXISTS idx_matches_terrain_grid ON matches USING GIN (terrain_grid);