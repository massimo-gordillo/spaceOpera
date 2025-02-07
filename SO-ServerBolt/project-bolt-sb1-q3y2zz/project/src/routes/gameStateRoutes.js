import express from 'express';
import { GameService } from '../services/gameService.js';

const router = express.Router();
const gameService = new GameService();

// Initialize game state with pieces
router.post('/init', async (req, res) => {
  try {
    const { mapId, pieces, width, height } = req.body;
    
    // Convert piece list to grid format
    const { unitGrid, structureGrid } = convertPiecesToGrids(pieces, width, height);
    
    const gameState = await gameService.initializeGame(mapId, unitGrid, structureGrid);
    res.json(gameState);
  } catch (error) {
    res.status(400).json({ error: error.message });
  }
});

function convertPiecesToGrids(pieces, width, height) {
  // Initialize empty grids
  const unitGrid = Array(height).fill(null).map(() => Array(width).fill(null));
  const structureGrid = Array(height).fill(null).map(() => Array(width).fill(null));
  
  // Place pieces in appropriate grids
  pieces.forEach(piece => {
    const pieceData = {
      type: piece.typeId,
      owner: piece.ownerId,
      health: piece.health
    };
    
    if (piece.isUnit) {
      unitGrid[piece.y][piece.x] = pieceData;
    } else {
      structureGrid[piece.y][piece.x] = pieceData;
    }
  });
  
  return { unitGrid, structureGrid };
}

export default convertPiecesToGrids