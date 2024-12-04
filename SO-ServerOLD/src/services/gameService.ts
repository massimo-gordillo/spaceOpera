import { supabase } from '../config/supabase';
import { GameState, GameMove } from '../types/game';
import { validateMove } from '../utils/moveValidator';
import { generateRandomSeed, getRandomNumberGenerator } from '../utils/random';

export class GameService {
  async createGame(player1Id: string): Promise<string> {
    const initialState: GameState = {
      id: crypto.randomUUID(),
      turn: 1,
      currentPlayerId: player1Id,
      player1Id: player1Id,
      player2Id: '',
      units: [], // Initialize with starting units
      randomSeed: generateRandomSeed(),
      lastMoveTimestamp: Date.now()
    };

    const { data, error } = await supabase
      .from('games')
      .insert({
        player1_id: player1Id,
        current_player_id: player1Id,
        current_state: initialState,
        random_seed: initialState.randomSeed,
        status: 'waiting'
      })
      .select()
      .single();

    if (error) throw error;
    return data.id;
  }

  async joinGame(gameId: string, player2Id: string): Promise<void> {
    const { data: game, error: fetchError } = await supabase
      .from('games')
      .select()
      .eq('id', gameId)
      .single();

    if (fetchError) throw fetchError;
    if (game.status !== 'waiting') throw new Error('Game is not available to join');

    const { error: updateError } = await supabase
      .from('games')
      .update({
        player2_id: player2Id,
        status: 'active'
      })
      .eq('id', gameId);

    if (updateError) throw updateError;
  }

  async submitMove(gameId: string, playerId: string, move: GameMove): Promise<void> {
    const { data: game, error: fetchError } = await supabase
      .from('games')
      .select()
      .eq('id', gameId)
      .single();

    if (fetchError) throw fetchError;
    
    const currentState: GameState = game.current_state;
    const rng = getRandomNumberGenerator(currentState.randomSeed);

    // Validate the move
    if (!validateMove(currentState, move, rng)) {
      throw new Error('Invalid move');
    }

    // Apply move and update game state
    const newState = this.applyMove(currentState, move, rng);

    const { error: updateError } = await supabase
      .from('games')
      .update({
        current_state: newState,
        current_player_id: newState.currentPlayerId
      })
      .eq('id', gameId);

    if (updateError) throw updateError;

    // Record the move
    const { error: moveError } = await supabase
      .from('moves')
      .insert({
        game_id: gameId,
        player_id: playerId,
        turn: currentState.turn,
        move_data: move
      });

    if (moveError) throw moveError;
  }

  private applyMove(state: GameState, move: GameMove, rng: () => number): GameState {
    // Deep clone the current state
    const newState: GameState = JSON.parse(JSON.stringify(state));
    
    // Update unit position
    const unit = newState.units.find(u => u.id === move.unitId);
    if (unit) {
      unit.position = move.toPosition;
    }

    // Update turn and current player
    newState.turn++;
    newState.currentPlayerId = 
      state.currentPlayerId === state.player1Id ? state.player2Id : state.player1Id;
    newState.lastMoveTimestamp = Date.now();

    return newState;
  }

  async getGameState(gameId: string): Promise<GameState> {
    const { data, error } = await supabase
      .from('games')
      .select()
      .eq('id', gameId)
      .single();

    if (error) throw error;
    return data.current_state;
  }
}