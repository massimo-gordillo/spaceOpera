import { createClient } from '@supabase/supabase-js';
import dotenv from 'dotenv';

dotenv.config();

const supabase = createClient(process.env.VITE_SUPABASE_URL, process.env.VITE_SUPABASE_ANON_KEY);

async function verifyStructure() {
  try {
    // Example: Fetch data from a table
    const { data, error } = await supabase.from('games').select('*');
    if (error) {
      console.error('Error fetching data:', error);
      return;
    }

    console.log('Data:', data);

    // Example: Check table structure
    const { data: columns, error: columnError } = await supabase
      .from('information_schema.columns')
      .select('column_name, data_type')
      .eq('table_name', 'your_table');
    if (columnError) {
      console.error('Error fetching table structure:', columnError);
      return;
    }

    console.log('Table structure:', columns);
  } catch (error) {
    console.error('Error verifying structure:', error);
  }
}

verifyStructure();