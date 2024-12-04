import React from 'react';
import { supabase } from './config/supabase';

function App() {
  const [status, setStatus] = React.useState<'loading' | 'connected' | 'error'>('loading');
  const [error, setError] = React.useState<string | null>(null);

  React.useEffect(() => {
    async function checkConnection() {
      try {
        const { error } = await supabase.from('games').select('count').single();
        if (error) throw error;
        setStatus('connected');
      } catch (err) {
        setStatus('error');
        setError(err instanceof Error ? err.message : 'Failed to connect to Supabase');
      }
    }

    checkConnection();
  }, []);

  return (
    <div style={{ padding: '2rem' }}>
      <h1>Turn-Based Strategy Game</h1>
      {status === 'loading' && <p>Checking connection...</p>}
      {status === 'connected' && <p style={{ color: '#22c55e' }}>Connected to Supabase successfully!</p>}
      {status === 'error' && (
        <div style={{ color: '#ef4444' }}>
          <p>Failed to connect to Supabase</p>
          {error && <pre style={{ background: '#fee2e2', padding: '1rem', borderRadius: '0.375rem' }}>{error}</pre>}
        </div>
      )}
    </div>
  );
}

export default App;