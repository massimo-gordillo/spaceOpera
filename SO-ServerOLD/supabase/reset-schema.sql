-- Drop existing tables
DROP TABLE IF EXISTS turns;
DROP TABLE IF EXISTS games;

-- Run the schema creation script
\i 'supabase/schema.sql';