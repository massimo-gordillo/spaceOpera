import { supabase } from '../config/supabase.js';
import { validateMoves } from '../utils/gameValidation.js';

export class GameService {
  async findOrJoinGame(playerId, mapId) {
    // Call the stored procedure to find or join a game
    const { data, error } = await supabase
      .rpc('find_or_create_game', {
        p_player_id: playerId,
        p_map_id: mapId
      });

    if (error) throw error;

    // Check if a game was created (player matched)
    const { data: game } = await supabase
      .from('games')
      .select('*')
      .or(`player1_id.eq.${playerId},player2_id.eq.${playerId}`)
      .order('created_at', { ascending: false })
      .limit(1)
      .maybeSingle();

    return {
      status: game ? 'matched' : 'waiting',
      game: game
    };
  }

  async cancelMatchmaking(playerId) {
    const { error } = await supabase
      .from('waiting_players')
      .delete()
      .eq('player_id', playerId);

    if (error) throw error;
  }

  async checkMatchStatus(playerId) {
    // Check if player is still waiting
    const { data: waitingPlayer } = await supabase
      .from('waiting_players')
      .select()
      .eq('player_id', playerId)
      .single();

    if (waitingPlayer) {
      return { status: 'waiting' };
    }

    // Check if player was matched to a game
    const { data: game } = await supabase
      .from('games')
      .select('*')
      .or(`player1_id.eq.${playerId},player2_id.eq.${playerId}`)
      .order('created_at', { ascending: false })
      .limit(1)
      .maybeSingle();

    return {
      status: game ? 'matched' : 'none',
      game: game
    };
  }

  async submitTurn(gameId, playerId, moves, stateHash) {
    const { data: game } = await supabase
      .from('games')
      .select('*')
      .eq('id', gameId)
      .single();

    if (!game) throw new Error('Game not found');
    if (game.current_player !== playerId) throw new Error('Not your turn');

    // Validate moves and state hash
    const isValid = await validateMoves(moves, game.game_state, game.random_seed);
    if (!isValid) throw new Error('Invalid moves');

    const nextPlayer = game.current_player === game.player1_id ? game.player2_id : game.player1_id;

    // Transaction to update game state and store moves
    const { error } = await supabase.rpc('submit_turn', {
      p_game_id: gameId,
      p_player_id: playerId,
      p_moves: moves,
      p_state_hash: stateHash,
      p_next_player: nextPlayer,
    });

    if (error) throw error;
  }

  async getGameState(gameId, playerId) {
    const { data, error } = await supabase
      .from('games')
      .select(`
        *,
        turn_moves(*)
      `)
      .eq('id', gameId)
      .single();

    if (error) throw error;
    if (data.player1_id !== playerId && data.player2_id !== playerId) {
      throw new Error('Not authorized to view this game');
    }

    return data;
  }
}