import { supabase } from '../config/supabase.js';

async function createMatch(playerAId, playerBId, mapId) {
  try {
    const { data, error } = await supabase
      .rpc('create_match', {
        player_a_id: playerAId,
        player_b_id: playerBId,
        map_id: mapId
      });

    if (error) {
      console.error('Error creating match:', error);
      return;
    }

    console.log('Match created successfully:', data);
    return data;
  } catch (err) {
    console.error('Failed to create match:', err);
    throw err;
  }
}

// Example UUIDs - replace these with actual UUIDs from your database
const playerAId = 'aa2e6df3-4200-4469-8353-dd41d2a28781';
const playerBId = 'd0172820-32bc-4fc7-870f-be940517c008';
const mapId = '84fe0458-c742-4bc5-b35a-b9334a0f3c90';

createMatch(playerAId, playerBId, mapId);