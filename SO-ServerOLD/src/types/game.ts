export interface Position {
  x: number;
  y: number;
}

export interface GameUnit {
  id: string;
  position: Position;
  type: string;
  playerId: string;
  health: number;
  moves: number;
}

export interface GameState {
  id: string;
  turn: number;
  currentPlayerId: string;
  player1Id: string;
  player2Id: string;
  units: GameUnit[];
  randomSeed: string;
  lastMoveTimestamp: number;
}

export interface GameMove {
  id: string;
  gameId: string;
  playerId: string;
  turn: number;
  unitId: string;
  fromPosition: Position;
  toPosition: Position;
  timestamp: number;
}