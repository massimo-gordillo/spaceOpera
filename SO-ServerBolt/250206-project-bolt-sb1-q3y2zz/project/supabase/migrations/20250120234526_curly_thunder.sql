/*
  # Update Maps Table Schema

  1. Changes
    - Drop existing maps table
    - Create new maps table with updated schema:
      - name (text)
      - grid_data (bytea)
      - width (integer)
      - height (integer)
      - init_piece_data (bytea)
      - compression_method (double precision)
*/

-- Drop existing table and its policies
DROP TABLE IF EXISTS maps;

-- Create new maps table
CREATE TABLE maps (
  id UUID DEFAULT gen_random_uuid() PRIMARY KEY,
  name TEXT NOT NULL,
  grid_data BYTEA NOT NULL,
  width INTEGER NOT NULL,
  height INTEGER NOT NULL,
  init_piece_data BYTEA NOT NULL,
  compression_method DOUBLE PRECISION NOT NULL,
  created_at TIMESTAMP WITH TIME ZONE DEFAULT TIMEZONE('utc', NOW())
);

-- Enable RLS
ALTER TABLE maps ENABLE ROW LEVEL SECURITY;

-- Simple policy allowing all authenticated users to read and write
CREATE POLICY "Allow all access"
  ON maps
  FOR ALL
  TO authenticated
  USING (true)
  WITH CHECK (true);