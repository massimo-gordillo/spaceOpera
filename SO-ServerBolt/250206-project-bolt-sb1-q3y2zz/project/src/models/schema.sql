-- Add player_devices table
CREATE TABLE player_devices (
  id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
  player_id UUID REFERENCES auth.users(id) NOT NULL,
  device_id TEXT NOT NULL,
  token TEXT NOT NULL,
  last_active TIMESTAMP WITH TIME ZONE DEFAULT TIMEZONE('utc', NOW()),
  created_at TIMESTAMP WITH TIME ZONE DEFAULT TIMEZONE('utc', NOW()),
  UNIQUE(player_id, device_id)
);

-- Add RLS policies for player_devices
ALTER TABLE player_devices ENABLE ROW LEVEL SECURITY;

CREATE POLICY "Players can only view their own devices"
  ON player_devices FOR SELECT
  USING (auth.uid() = player_id);

CREATE POLICY "Players can only register their own devices"
  ON player_devices FOR INSERT
  WITH CHECK (auth.uid() = player_id);

-- Add indexes
CREATE INDEX idx_player_devices_player ON player_devices(player_id);
CREATE INDEX idx_player_devices_token ON player_devices(token);