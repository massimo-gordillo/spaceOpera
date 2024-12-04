import { config } from 'dotenv';
import { createClient } from '@supabase/supabase-js';
import type { Database } from './types/supabase';

// Load environment variables for Node.js environment
config();

const supabaseUrl = process.env.VITE_SUPABASE_URL;
const supabaseKey = process.env.VITE_SUPABASE_ANON_KEY;

if (!supabaseUrl || !supabaseKey) {
  console.error('Missing environment variables. Please check your .env file.');
  process.exit(1);
}

const supabase = createClient<Database>(supabaseUrl, supabaseKey);

async function testConnection() {
  try {
    console.log('Testing connection to Supabase...');
    console.log('Environment variables loaded:');
    console.log('SUPABASE_URL:', supabaseUrl ? '[PRESENT]' : '[MISSING]');
    console.log('SUPABASE_KEY:', supabaseKey ? '[PRESENT]' : '[MISSING]');
    
    const { data, error } = await supabase.from('games').select('*').limit(1);
    
    if (error) {
      console.error('Connection error:', error.message);
      process.exit(1);
    }
    
    console.log('Connection successful! ✅');
    console.log('Sample data:', data);
    process.exit(0);
  } catch (err) {
    console.error('Unexpected error:', err);
    process.exit(1);
  }
}

testConnection();