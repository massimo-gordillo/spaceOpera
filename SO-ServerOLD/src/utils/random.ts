export function generateRandomSeed(): string {
  return Math.random().toString(36).substring(2, 15);
}

export function getRandomNumberGenerator(seed: string): () => number {
  let state = hashCode(seed);
  
  return () => {
    state = (state * 1597 + 51749) % 244944;
    return state / 244944;
  };
}

function hashCode(str: string): number {
  let hash = 0;
  for (let i = 0; i < str.length; i++) {
    const char = str.charCodeAt(i);
    hash = ((hash << 5) - hash) + char;
    hash = hash & hash;
  }
  return Math.abs(hash);
}