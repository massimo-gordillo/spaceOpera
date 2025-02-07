import express from 'express';
import { MapService } from '../services/mapService.js';

const router = express.Router();
const mapService = new MapService();

// Submit new map
router.post('/', async (req, res) => {
  try {
    const { name, tiles, width, height, pieces } = req.body;
    
    // Validate input
    if (!Array.isArray(tiles) || tiles.length !== width * height) {
      throw new Error('Invalid tiles data: must be an array matching width * height');
    }

    if (!Array.isArray(pieces)) {
      throw new Error('Invalid pieces data: must be an array');
    }

    // Validate pieces
    pieces.forEach(piece => {
      if (
        typeof piece.x !== 'number' ||
        typeof piece.y !== 'number' ||
        typeof piece.typeId !== 'number' ||
        typeof piece.ownerId !== 'number' ||
        typeof piece.health !== 'number' ||
        typeof piece.isUnit !== 'boolean' ||
        piece.x < 0 || piece.x >= width ||
        piece.y < 0 || piece.y >= height
      ) {
        throw new Error('Invalid piece data format');
      }
    });
    
    const map = await mapService.saveMap({
      name,
      width,
      height,
      tiles,
      pieces
    });
    
    res.json(map);
  } catch (error) {
    res.status(400).json({ error: error.message });
  }
});

// Get specific map with tiles and pieces
router.get('/:id', async (req, res) => {
  try {
    const mapId = req.params.id;
    const map = await mapService.getMap(mapId);
    
    if (!map) {
      return res.status(404).json({ error: 'Map not found' });
    }

    // Return map data in a format suitable for Unity
    res.json({
      id: map.id,
      name: map.name,
      width: map.width,
      height: map.height,
      tiles: map.tiles.flat(), // Convert 2D array to 1D for Unity
      pieces: map.pieces.map(piece => ({
        isUnit: piece.isUnit,
        x: piece.x,
        y: piece.y,
        typeId: piece.typeId,
        ownerId: piece.ownerId,
        health: piece.health
      }))
    });
  } catch (error) {
    console.error('Error fetching map:', error);
    res.status(500).json({ error: 'Failed to fetch map' });
  }
});

// List all maps
router.get('/', async (req, res) => {
  try {
    const maps = await mapService.listMaps();
    res.json(maps.map(map => ({
      id: map.id,
      name: map.name,
      width: map.width,
      height: map.height
    })));
  } catch (error) {
    res.status(500).json({ error: error.message });
  }
});

export default router;