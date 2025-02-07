-- Drop existing partitioned table and related objects
DROP TABLE IF EXISTS match_piece_list CASCADE;

-- Create new regular table
CREATE TABLE match_piece_list (
    id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
    match_id UUID REFERENCES matches(id) ON DELETE CASCADE,
    piece_type BOOLEAN NOT NULL,
    x_loc INTEGER NOT NULL,
    y_loc INTEGER NOT NULL,
    type_num INTEGER NOT NULL,
    player_controller INTEGER NOT NULL,
    health_val INTEGER NOT NULL
);

-- Create indexes for efficient querying
CREATE INDEX idx_match_piece_list_match ON match_piece_list(match_id);
CREATE INDEX idx_match_piece_list_location ON match_piece_list(match_id, x_loc, y_loc);

-- Enable RLS
ALTER TABLE match_piece_list ENABLE ROW LEVEL SECURITY;

-- Create RLS policies
CREATE POLICY "Players can view pieces in their matches"
    ON match_piece_list
    FOR SELECT
    USING (
        EXISTS (
            SELECT 1 FROM matches 
            WHERE matches.id = match_piece_list.match_id
            AND (matches.player1_id = auth.uid() OR matches.player2_id = auth.uid())
        )
    );

CREATE POLICY "Current player can modify pieces"
    ON match_piece_list
    FOR ALL
    USING (
        EXISTS (
            SELECT 1 FROM matches 
            WHERE matches.id = match_piece_list.match_id
            AND matches.current_player_id = auth.uid()
            AND NOT matches.is_completed
        )
    );

-- Function to insert game pieces for a match
CREATE OR REPLACE FUNCTION insert_game_pieces(
    p_match_id UUID,
    p_map_id UUID,
    p_player1_id UUID,
    p_player_a_id UUID
)
RETURNS void
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
BEGIN
    INSERT INTO match_piece_list (
        match_id,
        piece_type,
        x_loc,
        y_loc,
        type_num,
        player_controller,
        health_val
    )
    SELECT
        p_match_id,
        piece_type,
        x_loc,
        y_loc,
        type_num,
        CASE 
            -- Remap player controllers based on player assignment
            WHEN player_controller = 0 THEN 0  -- Neutral pieces stay 0
            WHEN player_controller = 1 THEN    -- Player 1 pieces
                CASE WHEN p_player1_id = p_player_a_id THEN 1 ELSE 2 END
            WHEN player_controller = 2 THEN    -- Player 2 pieces
                CASE WHEN p_player1_id = p_player_a_id THEN 2 ELSE 1 END
            ELSE player_controller             -- Keep other values as is
        END,
        health_val
    FROM map_init_pieces
    WHERE map_id = p_map_id;
END;
$$;

-- Create updated create_match function
CREATE OR REPLACE FUNCTION create_match(
    player_a_id UUID,
    player_b_id UUID,
    map_id UUID
)
RETURNS matches
LANGUAGE plpgsql
SECURITY DEFINER
AS $$
DECLARE
    map_record maps;
    player1 UUID;
    player2 UUID;
    v_match matches;
BEGIN
    -- Fetch map data
    SELECT * INTO map_record FROM maps WHERE id = map_id;
    IF NOT FOUND THEN
        RAISE EXCEPTION 'Map not found';
    END IF;

    -- Randomly assign players
    IF random() < 0.5 THEN
        player1 := player_a_id;
        player2 := player_b_id;
    ELSE
        player1 := player_b_id;
        player2 := player_a_id;
    END IF;

    -- Insert match
    INSERT INTO matches (
        player1_id,
        player2_id,
        map_id,
        map_name,
        current_player_id
    )
    VALUES (
        player1,
        player2,
        map_id,
        map_record.name,
        player1
    )
    RETURNING * INTO v_match;

    -- Insert game pieces for the match
    PERFORM insert_game_pieces(v_match.id, map_id, player1, player_a_id);

    RETURN v_match;
END;
$$;