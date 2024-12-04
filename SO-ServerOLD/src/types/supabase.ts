export type Database = {
  public: {
    Tables: {
      games: {
        Row: {
          id: string;
          created_at: string;
          current_state: any; // GameState
          player1_id: string;
          player2_id: string;
          current_player_id: string;
          random_seed: string;
          status: 'waiting' | 'active' | 'completed';
        };
        Insert: {
          id?: string;
          created_at?: string;
          current_state: any;
          player1_id: string;
          player2_id?: string;
          current_player_id: string;
          random_seed: string;
          status?: 'waiting' | 'active' | 'completed';
        };
        Update: {
          current_state?: any;
          player2_id?: string;
          current_player_id?: string;
          status?: 'waiting' | 'active' | 'completed';
        };
      };
      moves: {
        Row: {
          id: string;
          created_at: string;
          game_id: string;
          player_id: string;
          turn: number;
          move_data: any; // GameMove
        };
        Insert: {
          id?: string;
          created_at?: string;
          game_id: string;
          player_id: string;
          turn: number;
          move_data: any;
        };
      };
    };
  };
};