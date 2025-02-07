-- Update combat_update_health to fix modulo operation
CREATE OR REPLACE FUNCTION combat_update_health(
    p_unit_id UUID,
    p_damage DOUBLE PRECISION,
    p_current_health INTEGER,
    p_max_health INTEGER
)
RETURNS INTEGER
LANGUAGE plpgsql
AS $$
DECLARE
    v_new_health DOUBLE PRECISION;
    v_health_threshold DOUBLE PRECISION;
    v_health_step DOUBLE PRECISION;
BEGIN
    -- If damage is 0 or negative, return current health
    IF p_damage <= 0 THEN
        RETURN p_current_health;
    END IF;

    -- Calculate new health
    IF p_current_health <= p_damage THEN
        -- Unit will be destroyed
        RETURN 0;
    END IF;

    -- Calculate 5% of max health threshold
    v_health_threshold := p_max_health * 0.05;
    
    -- Calculate potential new health
    v_new_health := p_current_health - p_damage;

    -- If health would drop below 5% threshold, destroy unit
    IF v_new_health < v_health_threshold THEN
        RETURN 0;
    END IF;

    -- Calculate health step (1% of max health)
    v_health_step := p_max_health / 100.0;

    -- Round down to nearest 1% of max health
    v_new_health := FLOOR(v_new_health / v_health_step) * v_health_step;
    
    RETURN v_new_health::INTEGER;
END;
$$;