import { supabase, validateConnection } from '../config/supabase.js';
import env from '../config/environment.js';

// Test map data
const mapData = {
  name: "TestMap1",
  width: 8,
  height: 8,
  tiles: [
    // 8x8 grid with alternating plains (1) and forest (2)
    1,2,1,2,1,2,1,2,
    2,1,2,1,2,1,2,1,
    1,2,1,2,1,2,1,2,
    2,1,2,1,2,1,2,1,
    1,2,1,2,1,2,1,2,
    2,1,2,1,2,1,2,1,
    1,2,1,2,1,2,1,2,
    2,1,2,1,2,1,2,1
  ],
  pieces: [
    // Two base structures at opposite corners
    {isUnit: false, x: 0, y: 0, typeId: 200, ownerId: 0, health: 200},
    {isUnit: false, x: 7, y: 7, typeId: 200, ownerId: 1, health: 200},
    // Two units for each player
    {isUnit: true, x: 1, y: 0, typeId: 1, ownerId: 0, health: 100},
    {isUnit: true, x: 0, y: 1, typeId: 2, ownerId: 0, health: 100},
    {isUnit: true, x: 6, y: 7, typeId: 1, ownerId: 1, health: 100},
    {isUnit: true, x: 7, y: 6, typeId: 2, ownerId: 1, health: 100}
  ]
};

async function testMapInsertion() {
  try {
    // Check if Supabase URL and key are set
    if (!env.SUPABASE_URL || !env.SUPABASE_ANON_KEY) {
      console.error('Error: Supabase configuration is missing.');
      console.error('Please make sure to click "Connect to Supabase" button to set up your environment variables.');
      process.exit(1);
    }

    console.log('Starting map insertion test...');
    console.log('Using Supabase URL:', env.SUPABASE_URL);
    
    // Validate connection first
    const isConnected = await validateConnection();
    if (!isConnected) {
      console.error('Error: Could not connect to Supabase.');
      console.error('Please verify your Supabase connection and try again.');
      process.exit(1);
    }
    
    console.log('Connection validated, inserting map...');
    
    // Call the save_map RPC function
    const { data: map, error } = await supabase
      .rpc('save_map', {
        p_name: mapData.name,
        p_width: mapData.width,
        p_height: mapData.height,
        p_tiles: mapData.tiles,
        p_pieces: mapData.pieces
      });

    if (error) {
      console.error('Error during map insertion:', error.message);
      if (error.details) console.error('Details:', error.details);
      if (error.hint) console.error('Hint:', error.hint);
      process.exit(1);
    }

    console.log('Map inserted successfully:', map);
    return map;
  } catch (error) {
    console.error('Unexpected error during map insertion:', error.message);
    if (error.stack) console.error(error.stack);
    process.exit(1);
  }
}

// Run the test
console.log('Environment check:', {
  SUPABASE_URL: env.SUPABASE_URL ? 'Set' : 'Not set',
  SUPABASE_ANON_KEY: env.SUPABASE_ANON_KEY ? 'Set' : 'Not set'
});

testMapInsertion().catch(error => {
  console.error('Fatal error:', error);
  process.exit(1);
});