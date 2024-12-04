import { createClient } from '@supabase/supabase-js';
import env from './environment.js';

export const supabase = createClient(env.SUPABASE_URL, env.SUPABASE_ANON_KEY);