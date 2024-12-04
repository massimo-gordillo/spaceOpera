import dotenv from 'dotenv';
import { z } from 'zod';

// Load environment variables
dotenv.config();

// Schema for environment variables
const envSchema = z.object({
  SUPABASE_URL: z.string().url(),
  SUPABASE_ANON_KEY: z.string().min(1),
  PORT: z.string().transform(Number).default('3000'),
  NODE_ENV: z.enum(['development', 'production', 'test']).default('development'),
});

// Validate environment variables
try {
  const env = envSchema.parse(process.env);
  export default env;
} catch (error) {
  console.error('❌ Invalid environment variables:', error.errors);
  process.exit(1);
}