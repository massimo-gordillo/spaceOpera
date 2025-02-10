-- Update match_new_turn function to handle turn switching and turn number increment
CREATE OR REPLACE FUNCTION match_new_turn(
    p_match_id UUID
)
RETURNS VOID
LANGUAGE plpgsql
AS $$
DECLARE
    v_current_player INTEGER;
    v_match matches%ROWTYPE;
BEGIN
    -- Get match data
    SELECT * INTO v_match
    FROM matches
    WHERE id = p_match_id;

    IF NOT FOUND THEN
        RAISE EXCEPTION 'Match not found';
    END IF;

    -- Get current player number
    SELECT 
        CASE 
            WHEN v_match.current_player_id = v_match.player1_id THEN 1
            WHEN v_match.current_player_id = v_match.player2_id THEN 2
            ELSE NULL
        END INTO v_current_player;

    IF v_current_player IS NULL THEN
        RAISE EXCEPTION 'Invalid match state: current player not found';
    END IF;

    -- Calculate and apply income for current player
    PERFORM match_calculate_income(p_match_id, v_current_player);

    -- Switch current player and increment turn number
    UPDATE matches
    SET current_player_id = CASE 
            WHEN current_player_id = player1_id THEN player2_id
            ELSE player1_id
        END,
        turn_number = turn_number + 1
    WHERE id = p_match_id;
END;
$$;