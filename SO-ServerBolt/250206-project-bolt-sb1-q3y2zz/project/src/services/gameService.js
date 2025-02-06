import { supabase } from '../config/supabase.js';
import { TurnValidationService } from './turnValidationService.js';
import { AuthService } from './authService.js';

export class GameService {
  constructor(gameLogic) {
    this.turnValidator = new TurnValidationService(gameLogic);
    this.authService = new AuthService();
  }

  async createMatch(playerAId, playerBId, mapId) {
    try {
      // Validate both players exist
      const [isPlayerAValid, isPlayerBValid] = await Promise.all([
        this.authService.validateUser(playerAId),
        this.authService.validateUser(playerBId)
      ]);

      if (!isPlayerAValid || !isPlayerBValid) {
        throw new Error('Invalid player ID(s)');
      }

      // Get map data
      const { data: map } = await supabase
        .from('maps')
        .select('name, width, height, init_piece_data')
        .eq('id', mapId)
        .single();

      if (!map) {
        throw new Error('Invalid map ID');
      }

      // Initialize grids with the correct dimensions
      const unitGrid = Array(map.height).fill(null).map(() => Array(map.width).fill(null));
      const structureGrid = Array(map.height).fill(null).map(() => Array(map.width).fill(null));

      // Parse the init_piece_data (assuming it's a Buffer containing JSON)
      const pieceData = JSON.parse(map.init_piece_data.toString());

      // Place pieces in appropriate grids based on their type
      for (const piece of pieceData) {
        const { x, y, typeNum } = piece;
        
        // Validate coordinates are within bounds
        if (x >= 0 && x < map.width && y >= 0 && y < map.height) {

          
          if (typeNum === 200 || typeNum === 201) {
            structureGrid[y][x] = typeNum;
          } else if (typeNum >= 0 && typeNum <= 99) {
            unitGrid[y][x] = typeNum;
          }
        }
      }

      // Randomly determine player order
      const [player1Id, player2Id] = Math.random() < 0.5 
        ? [playerAId, playerBId] 
        : [playerBId, playerAId];

      // Create new match
      const { data: match, error } = await supabase
        .from('matches')
        .insert({
          player1_id: player1Id,
          player2_id: player2Id,
          map_id: mapId,
          map_name: map.name,
          current_player_id: player1Id, // First player starts
          unit_grid: JSON.stringify(unitGrid),
          structure_grid: JSON.stringify(structureGrid),
          terrain_grid: '[]' // Empty terrain grid initially
        })
        .select()
        .single();

      if (error) throw error;
      return match;
    } catch (error) {
      console.error('Failed to create match:', error);
      throw error;
    }
  }

  async submitTurn(gameId, playerId, actions, finalStateHash, previousStateHash) {
    // Validate user exists
    const isValidUser = await this.authService.validateUser(playerId);
    if (!isValidUser) {
      throw new Error('Invalid user');
    }

    // Get current game state
    const { data: game } = await supabase
      .from('games')
      .select('*, turn_moves(state_hash)')
      .eq('id', gameId)
      .single();

    if (!game) throw new Error('Game not found');
    if (game.current_player !== playerId) throw new Error('Not your turn');
    
    // Validate turn number and previous state hash
    const lastTurn = game.turn_moves[game.turn_moves.length - 1];
    if (lastTurn && lastTurn.state_hash !== previousStateHash) {
      throw new Error('Invalid previous state hash');
    }

    // Validate the turn actions and final state
    const isValid = await this.turnValidator.validateTurn(
      game.game_state,
      actions,
      finalStateHash
    );

    if (!isValid) {
      throw new Error('Invalid turn: state hash mismatch');
    }

    const nextPlayer = game.current_player === game.player1_id ? game.player2_id : game.player1_id;

    // Store the turn moves and update game state
    const { error } = await supabase.rpc('submit_turn', {
      p_game_id: gameId,
      p_player_id: playerId,
      p_moves: actions,
      p_state_hash: finalStateHash,
      p_next_player: nextPlayer
    });

    if (error) throw error;
  }
}

