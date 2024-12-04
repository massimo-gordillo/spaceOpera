import { createClient } from '@supabase/supabase-js';
import type { Database } from '../types/supabase';
import { env, validateEnv } from './env';

// Validate environment variables
validateEnv();

export const supabase = createClient<Database>(
  env.supabase.url,
  env.supabase.anonKey
);