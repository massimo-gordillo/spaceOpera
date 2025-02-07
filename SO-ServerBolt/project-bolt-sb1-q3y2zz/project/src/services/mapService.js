import { supabase } from '../config/supabase.js';

export class MapService {
  constructor(maxRetries = 3) {
    this.maxRetries = maxRetries;
  }

  async withRetry(operation, context) {
    let lastError;
    for (let attempt = 1; attempt <= this.maxRetries; attempt++) {
      try {
        console.log(`Attempt ${attempt}/${this.maxRetries} for operation:`, context);
        return await operation();
      } catch (error) {
        lastError = error;
        console.error(`Attempt ${attempt}/${this.maxRetries} failed:`, {
          error: {
            name: error.name,
            message: error.message,
            code: error.code,
            details: error.details
          },
          context
        });
        
        if (attempt < this.maxRetries) {
          const delay = Math.min(1000 * Math.pow(2, attempt - 1), 5000);
          console.log(`Retrying in ${delay}ms...`);
          await new Promise(resolve => setTimeout(resolve, delay));
        }
      }
    }
    throw lastError;
  }

  async getMap(mapId) {
    return this.withRetry(async () => {
      console.log('Fetching map:', mapId);

      // Get basic map info
      const { data: map, error: mapError } = await supabase
        .from('maps')
        .select('*')
        .eq('id', mapId)
        .single();

      if (mapError) throw mapError;
      if (!map) return null;

      // Get tiles
      const { data: tiles, error: tilesError } = await supabase
        .from('map_tiles')
        .select('x_loc, y_loc, tile_type')
        .eq('map_id', mapId);

      if (tilesError) throw tilesError;

      // Get pieces
      const { data: pieces, error: piecesError } = await supabase
        .from('map_init_pieces')
        .select('piece_type, x_loc, y_loc, type_num, player_controller, health_val')
        .eq('map_id', mapId);

      if (piecesError) throw piecesError;

      // Convert tiles to 1D array
      const tileGrid = Array(map.height * map.width).fill(0);
      tiles.forEach(tile => {
        const index = tile.y_loc * map.width + tile.x_loc;
        tileGrid[index] = tile.tile_type;
      });

      // Format pieces
      const formattedPieces = pieces.map(piece => ({
        isUnit: piece.piece_type,
        x: piece.x_loc,
        y: piece.y_loc,
        typeId: piece.type_num,
        ownerId: piece.player_controller,
        health: piece.health_val
      }));

      return {
        id: map.id,
        name: map.name,
        width: map.width,
        height: map.height,
        tiles: tileGrid,
        pieces: formattedPieces
      };
    }, 'getMap');
  }

  async saveMap({ name, width, height, tiles, pieces }) {
    return this.withRetry(async () => {
      console.log('Saving map:', {
        name,
        width,
        height,
        tilesLength: tiles.length,
        piecesLength: pieces.length
      });

      // Validate input
      if (!Array.isArray(tiles) || tiles.length !== width * height) {
        throw new Error(`Invalid tiles array length. Expected ${width * height}, got ${tiles?.length}`);
      }

      if (!Array.isArray(pieces)) {
        throw new Error('Pieces must be an array');
      }

      // Call the save_map RPC function
      const { data: map, error } = await supabase
        .rpc('save_map', {
          p_name: name,
          p_width: width,
          p_height: height,
          p_tiles: tiles,
          p_pieces: pieces
        });

      if (error) {
        console.error('Map creation failed:', {
          error: {
            message: error.message,
            details: error.details,
            hint: error.hint,
            code: error.code
          },
          request: {
            name,
            width,
            height,
            tilesLength: tiles.length,
            piecesLength: pieces.length
          }
        });
        throw error;
      }

      console.log('Map created successfully:', map);
      return map;
    }, 'saveMap');
  }

  async listMaps() {
    return this.withRetry(async () => {
      console.log('Fetching map list');
      const { data, error } = await supabase
        .from('maps')
        .select('id, name, width, height')
        .order('created_at', { ascending: false });

      if (error) throw error;

      console.log(`Retrieved ${data.length} maps`);
      return data;
    }, 'listMaps');
  }
}