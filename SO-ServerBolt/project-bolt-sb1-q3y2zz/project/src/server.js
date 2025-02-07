import express from 'express';
import cors from 'cors';
import rateLimit from 'express-rate-limit';
import { GameService } from './services/gameService.js';
import mapRoutes from './routes/mapRoutes.js';
import gameStateRoutes from './routes/gameStateRoutes.js';
import env from './config/environment.js';

const app = express();
const gameService = new GameService();

// Rate limiter configuration
const limiter = rateLimit({
  windowMs: 15 * 60 * 1000, // 15 minutes
  max: 100, // limit each IP to 100 requests per windowMs
  standardHeaders: true,
  legacyHeaders: false,
  keyGenerator: (req) => {
    return req.ip || req.headers['x-forwarded-for'] || 'default-development-ip';
  },
  skip: (req) => env.NODE_ENV === 'development'
});

// Trust proxy to get correct IP addresses
app.set('trust proxy', 1);

// Middleware
app.use(cors());
app.use(express.json({ limit: '1mb' }));
app.use(limiter);

// Health check endpoint
app.get('/health', (req, res) => {
  res.status(200).json({ status: 'ok' });
});

// Routes
app.use('/maps', mapRoutes);
app.use('/game', gameStateRoutes);

// Improved server startup with proper promise handling
const startServer = async () => {
  const ports = [env.PORT, 3001, 3002, 3003];
  
  for (const port of ports) {
    try {
      await new Promise((resolve, reject) => {
        const server = app.listen(port)
          .once('listening', () => {
            console.log(`Server running on port ${port} in ${env.NODE_ENV} mode`);
            resolve(server);
          })
          .once('error', (err) => {
            if (err.code === 'EADDRINUSE') {
              console.log(`Port ${port} is in use, trying next port...`);
              resolve(false);
            } else {
              reject(err);
            }
          });
      });
      
      // If we get here and haven't moved to the next port, we've successfully started
      break;
    } catch (err) {
      console.error(`Failed to start server on port ${port}:`, err);
      if (port === ports[ports.length - 1]) {
        throw new Error('No available ports found');
      }
    }
  }
};

// Start the server
startServer().catch(err => {
  console.error('Failed to start server:', err);
  process.exit(1);
});