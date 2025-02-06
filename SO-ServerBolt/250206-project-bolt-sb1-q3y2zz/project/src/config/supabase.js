import { createClient } from '@supabase/supabase-js';
import env from './environment.js';

// Add better error handling for connection validation
async function validateConnection() {
  if (!env.SUPABASE_URL || !env.SUPABASE_ANON_KEY) {
    console.error('Missing Supabase configuration:');
    console.error('- SUPABASE_URL:', env.SUPABASE_URL ? 'Set' : 'Not set');
    console.error('- SUPABASE_ANON_KEY:', env.SUPABASE_ANON_KEY ? 'Set' : 'Not set');
    return false;
  }

  const client = createClient(env.SUPABASE_URL, env.SUPABASE_ANON_KEY, {
    auth: {
      autoRefreshToken: true,
      persistSession: false
    }
  });

  try {
    const { error } = await client.from('maps').select('count').limit(1);
    if (error) {
      console.error('Supabase connection validation failed:', error.message);
      return false;
    }
    console.log('Successfully connected to Supabase');
    return true;
  } catch (err) {
    console.error('Failed to validate Supabase connection:', err.message);
    return false;
  }
}

// Create client with better error handling
const supabase = createClient(env.SUPABASE_URL, env.SUPABASE_ANON_KEY, {
  auth: {
    autoRefreshToken: true,
    persistSession: false
  }
});

// Export both client and validation function
export { supabase, validateConnection };