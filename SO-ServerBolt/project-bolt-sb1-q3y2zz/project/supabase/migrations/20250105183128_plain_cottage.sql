-- Add maps table
CREATE TABLE maps (
  id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
  name TEXT NOT NULL,
  data TEXT NOT NULL, -- Base64 encoded MessagePack string
  creator_id UUID REFERENCES auth.users(id) NOT NULL,
  created_at TIMESTAMP WITH TIME ZONE DEFAULT TIMEZONE('utc', NOW())
);

-- Add RLS policies
ALTER TABLE maps ENABLE ROW LEVEL SECURITY;

-- Anyone can read maps
CREATE POLICY "Maps are readable by all"
  ON maps FOR SELECT
  TO authenticated
  USING (true);

-- Only creators can insert maps
CREATE POLICY "Creators can insert maps"
  ON maps FOR INSERT
  TO authenticated
  WITH CHECK (auth.uid() = creator_id);

-- Add index for faster lookups
CREATE INDEX idx_maps_creator ON maps(creator_id);