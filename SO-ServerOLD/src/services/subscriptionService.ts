import { supabase } from '../config/supabase';
import { GameState } from '../types/game';

export class SubscriptionService {
  subscribeToGame(gameId: string, onUpdate: (state: GameState) => void) {
    return supabase
      .channel(`game:${gameId}`)
      .on(
        'postgres_changes',
        {
          event: 'UPDATE',
          schema: 'public',
          table: 'games',
          filter: `id=eq.${gameId}`
        },
        (payload) => {
          onUpdate(payload.new.current_state);
        }
      )
      .subscribe();
  }

  unsubscribeFromGame(gameId: string) {
    return supabase.channel(`game:${gameId}`).unsubscribe();
  }
}