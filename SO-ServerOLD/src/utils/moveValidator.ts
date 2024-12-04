import { GameState, GameMove, Position } from '../types/game';

export function validateMove(
  state: GameState,
  move: GameMove,
  rng: () => number
): boolean {
  // Verify it's the player's turn
  if (state.currentPlayerId !== move.playerId) {
    return false;
  }

  // Find the unit being moved
  const unit = state.units.find(u => u.id === move.unitId);
  if (!unit) {
    return false;
  }

  // Verify unit belongs to the player
  if (unit.playerId !== move.playerId) {
    return false;
  }

  // Verify unit's current position matches the move's from position
  if (!positionsEqual(unit.position, move.fromPosition)) {
    return false;
  }

  // Verify move distance is within unit's movement range
  if (!isWithinMoveRange(move.fromPosition, move.toPosition, unit.moves)) {
    return false;
  }

  // Verify destination is not occupied
  if (isPositionOccupied(state, move.toPosition)) {
    return false;
  }

  return true;
}

function positionsEqual(pos1: Position, pos2: Position): boolean {
  return pos1.x === pos2.x && pos1.y === pos2.y;
}

function isWithinMoveRange(from: Position, to: Position, moveRange: number): boolean {
  const distance = Math.abs(to.x - from.x) + Math.abs(to.y - from.y);
  return distance <= moveRange;
}

function isPositionOccupied(state: GameState, position: Position): boolean {
  return state.units.some(unit => 
    unit.position.x === position.x && unit.position.y === position.y
  );
}