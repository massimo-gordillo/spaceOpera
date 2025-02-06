import { supabase, validateConnection } from '../config/supabase.js';

async function insertMapManually({
  name,
  width,
  height,
  tiles,
  pieces
}) {
  try {
    console.log('Validating Supabase connection...');
    const isConnected = await validateConnection();
    if (!isConnected) {
      throw new Error('Failed to connect to Supabase. Please check your configuration.');
    }

    // Sanitize the map name to avoid SQL issues
    const sanitizedName = name.replace(/[^a-zA-Z0-9\s]/g, '_');

    console.log('Starting manual map insertion...');
    console.log('Configuration:', {
      url: process.env.SUPABASE_URL ? 'Set' : 'Not set',
      anonKey: process.env.SUPABASE_ANON_KEY ? 'Set' : 'Not set'
    });

    // Use the save_map RPC function instead of direct table operations
    const { data: map, error: mapError } = await supabase
      .rpc('save_map', {
        p_name: sanitizedName,
        p_width: width,
        p_height: height,
        p_tiles: tiles,
        p_pieces: pieces
      });

    if (mapError) {
      console.error('Map creation failed:', {
        error: mapError,
        request: { 
          name: sanitizedName,
          width,
          height,
          tilesLength: tiles.length,
          piecesLength: pieces.length
        }
      });
      throw mapError;
    }

    console.log('Map creation completed successfully:', map);
    return map;

  } catch (error) {
    console.error('Error inserting map:', {
      message: error.message,
      details: error.details,
      hint: error.hint,
      code: error.code
    });
    throw error;
  }
}

// Example map data
const mapData = {
  name: "TestMap21", // Changed from TestMap2.1 to avoid special characters
  width: 16,
  height: 19,
  tiles: [
    1,1,3,2,2,1,1,3,2,2,2,3,1,1,2,2,3,1,1,1,1,3,2,2,1,3,3,2,1,2,3,3,1,2,2,3,1,1,3,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,3,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,1,1,1,1,3,2,1,1,1,1,1,2,3,1,1,1,1,3,3,1,1,1,3,3,2,1,2,2,2,1,2,3,3,1,1,1,3,1,1,1,1,2,2,2,1,4,4,4,1,2,2,2,1,1,1,1,2,1,1,1,1,2,4,4,4,4,4,4,4,2,1,1,1,1,2,1,1,1,1,1,2,4,4,4,4,4,4,4,2,1,1,1,1,2,2,1,1,1,1,2,4,4,4,4,4,4,4,3,1,1,1,1,1,2,1,1,1,1,3,3,4,4,4,4,4,2,3,1,1,1,1,2,1,1,1,1,1,2,3,4,4,4,4,4,3,2,1,1,1,1,1,2,2,1,1,2,2,2,2,4,4,4,2,2,2,2,1,1,2,3,3,3,3,2,2,2,2,1,4,4,4,1,2,2,2,1,1,2,3
  ],
  pieces: [
  {isUnit: false, x: 0, y: 0, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 0, y: 13, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 1, y: 1, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 1, y: 11, "typeId":201, "ownerId":1, "health":200},
{isUnit: false, x: 2, y: 3, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 2, y: 8, "typeId":201, "ownerId":1, "health":200},
{isUnit: false, x: 3, y: 3, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 3, y: 12, "typeId":205, "ownerId":1, "health":200},
{isUnit: false, x: 3, y: 14, "typeId":200, "ownerId":1, "health":200},
{isUnit: false, x: 4, y: 9, "typeId":200, "ownerId":1, "health":200},
{isUnit: false, x: 4, y: 10, "typeId":200, "ownerId":1, "health":200},
{isUnit: false, x: 6, y: 0, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 6, y: 3, "typeId":201, "ownerId":0, "health":200},
{isUnit: false, x: 7, y: 8, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 7, y: 15, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 8, y: 2, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 10, y:2, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 11, y:8, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 11, y:15, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 12, y:0, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 12, y:3, "typeId":201, "ownerId":0, "health":200},
{isUnit: false, x: 14, y:9, "typeId":200, "ownerId":2, "health":200},
{isUnit: false, x: 14, y:10, "typeId":200, "ownerId":2, "health":200},
{isUnit: false, x: 15, y:3, "typeId":200, "ownerId":0, "health":200},
{isUnit: true, x: 15, y:12, "typeId":0, "ownerId":2, "health":100},
{isUnit: false, x: 15, y:12, "typeId":205, "ownerId":2, "health":200},
{isUnit: false, x: 15, y:14, "typeId":200, "ownerId":2, "health":200},
{isUnit: false, x: 16, y:3, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 16, y:8, "typeId":201, "ownerId":2, "health":200},
{isUnit: false, x: 17, y:1, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 17, y:11, "typeId":201, "ownerId":2, "health":200},
{isUnit: false, x: 18, y:0, "typeId":200, "ownerId":0, "health":200},
{isUnit: false, x: 18, y:13, "typeId":200, "ownerId":0, "health":200}


    
  ]
};

// Run the insertion
insertMapManually(mapData).catch(err => {
  console.error('Failed to insert map:', err);
  process.exit(1);
});