import dotenv from 'dotenv';
import { z } from 'zod';

// Load environment variables
dotenv.config();

// Schema for environment variables
const envSchema = z.object({
  SUPABASE_URL: z.string().url().default('http://localhost:54321'),
  SUPABASE_ANON_KEY: z.string().min(1).default('eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZS1kZW1vIiwicm9sZSI6ImFub24iLCJleHAiOjE5ODM4MTI5OTZ9.CRXP1A7WOeoJeXxjNni43kdQwgnWNReilDMblYTn_I0'),
  PORT: z.coerce.number().default(3000),
  NODE_ENV: z.enum(['development', 'production', 'test']).default('development'),
  JWT_SECRET: z.string().min(1).default('development-secret-key')
});

// Parse and validate environment variables
const env = envSchema.parse(process.env);

// Log environment mode
console.log(`Server running in ${env.NODE_ENV} mode`);

// Export the validated environment variables
export default env;