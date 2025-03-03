using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using Supabase;

public class SupabaseGameTurnManager : MonoBehaviour
{
    private Supabase.Client _supabaseClient;
    private SupabaseNotificationService _notificationService;
    private string _currentMatchId;
    private int _currentTurnNumber;
    private string _currentPlayerId;
    private bool _isPlayerTurn;

    // Events
    public event Action<bool> OnTurnChanged;
    public event Action<List<GameAction>> OnOpponentActionsReceived;

    // Singleton instance
    private static SupabaseGameTurnManager _instance;
    public static SupabaseGameTurnManager Instance
    {
        get
        {
            if (_instance == null)
            {
                GameObject go = new GameObject("GameTurnManager");
                _instance = go.AddComponent<GameTurnManager>();
                DontDestroyOnLoad(go);
            }
            return _instance;
        }
    }

    void Awake()
    {
        // Ensure only one instance exists
        if (_instance != null && _instance != this)
        {
            Destroy(gameObject);
            return;
        }

        _instance = this;
        DontDestroyOnLoad(gameObject);

        // Initialize Supabase client
        string supabaseUrl = Environment.GetEnvironmentVariable("SUPABASE_URL");
        string supabaseKey = Environment.GetEnvironmentVariable("SUPABASE_ANON_KEY");

        if (string.IsNullOrEmpty(supabaseUrl) || string.IsNullOrEmpty(supabaseKey))
        {
            Debug.LogError("Supabase configuration is missing. Please ensure SUPABASE_URL and SUPABASE_ANON_KEY are set.");
            return;
        }

        var options = new SupabaseOptions
        {
            AutoRefreshToken = true,
            AutoConnectRealtime = true
        };

        _supabaseClient = new Supabase.Client(supabaseUrl, supabaseKey, options);

        // Get notification service
        _notificationService = NotificationService.Instance;

        // Subscribe to turn notification events
        GameEvents.OnTurnNotificationReceived += HandleTurnNotification;
    }

    void OnDestroy()
    {
        // Unsubscribe from events
        GameEvents.OnTurnNotificationReceived -= HandleTurnNotification;
    }

    public async Task InitializeAsync()
    {
        await _supabaseClient.InitializeAsync();
    }

    // Load a match and set up turn handling
    public async Task LoadMatchAsync(string matchId)
    {
        try
        {
            _currentMatchId = matchId;

            // Get match data
            var response = await _supabaseClient.From<Match>()
                .Select("*, player1_id, player2_id, current_player_id, turn_number")
                .Where(m => m.Id == matchId)
                .Single();

            if (response == null)
            {
                Debug.LogError($"Match {matchId} not found");
                return;
            }

            // Get current user
            var session = await _supabaseClient.Auth.CurrentSession;
            if (session == null)
            {
                Debug.LogError("User not authenticated");
                return;
            }

            _currentPlayerId = session.User.Id;
            _currentTurnNumber = response.TurnNumber;

            // Determine if it's the player's turn
            _isPlayerTurn = response.CurrentPlayerId == _currentPlayerId;

            // Subscribe to turn changes
            await _notificationService.SubscribeToTurnChangesAsync(matchId, HandleTurnChange);

            // Notify listeners
            OnTurnChanged?.Invoke(_isPlayerTurn);

            Debug.Log($"Loaded match {matchId}, turn {_currentTurnNumber}, isPlayerTurn: {_isPlayerTurn}");

            // If it's not the player's turn, load opponent's actions
            if (!_isPlayerTurn)
            {
                await LoadOpponentActionsAsync();
            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error loading match: {ex.Message}");
            throw;
        }
    }

    // Submit player's turn
    public async Task<bool> SubmitTurnAsync(List<GameAction> actions, long preStateHash, long expectedPostStateHash)
    {
        try
        {
            if (!_isPlayerTurn)
            {
                Debug.LogError("Cannot submit turn: not player's turn");
                return false;
            }

            // Convert actions to JSON array
            var actionsJson = new List<object>();
            foreach (var action in actions)
            {
                actionsJson.Add(new
                {
                    actionType = (int)action.Type,
                    gamePieceId = action.GamePieceId,
                    unitTerrainType = action.UnitTerrainType,
                    fromLocationX = action.FromX,
                    fromLocationY = action.FromY,
                    toLocationX = action.ToX,
                    toLocationY = action.ToY
                });
            }

            // Call the submit_turn RPC function
            var response = await _supabaseClient.Rpc<TurnSubmitResponse>(
                "submit_turn",
                new Dictionary<string, object>
                {
                    { "p_match_id", _currentMatchId },
                    { "p_turn_number", _currentTurnNumber },
                    { "p_actions", actionsJson },
                    { "p_pre_turn_hash", preStateHash },
                    { "p_expected_post_turn_hash", expectedPostStateHash }
                }
            );

            if (response == null || !response.Success)
            {
                Debug.LogError($"Failed to submit turn: {(response != null ? $"Pre-hash mismatch: {response.PreHashMismatch}, Post-hash mismatch: {response.PostHashMismatch}" : "No response")}");
                return false;
            }

            Debug.Log("Turn submitted successfully");

            // Update local state (turn will change via realtime notification)
            _isPlayerTurn = false;
            OnTurnChanged?.Invoke(_isPlayerTurn);

            return true;
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error submitting turn: {ex.Message}");
            return false;
        }
    }

    // Load opponent's actions for the current turn
    private async Task LoadOpponentActionsAsync()
    {
        try
        {
            // Get previous turn number
            int previousTurn = _currentTurnNumber - 1;

            // Get opponent's player ID
            var match = await _supabaseClient.From<Match>()
                .Select("player1_id, player2_id")
                .Where(m => m.Id == _currentMatchId)
                .Single();

            if (match == null)
            {
                Debug.LogError("Match not found");
                return;
            }

            string opponentId = match.Player1Id == _currentPlayerId ? match.Player2Id : match.Player1Id;

            // Get opponent's actions for the previous turn
            var actions = await _supabaseClient.From<MatchMove>()
                .Select("actions")
                .Where(m => m.MatchId == _currentMatchId && m.TurnNumber == previousTurn && m.PlayerId == opponentId)
                .Order("action_type", Postgrest.Constants.Ordering.Ascending)
                .Get();

            if (actions == null || actions.Count == 0)
            {
                Debug.LogWarning("No opponent actions found for previous turn");
                return;
            }

            // Convert to game actions
            var gameActions = new List<GameAction>();
            foreach (var move in actions)
            {
                var actionJson = move.Actions;

                gameActions.Add(new GameAction
                {
                    Type = (GameActionType)actionJson.GetProperty("type").GetInt32(),
                    GamePieceId = actionJson.GetProperty("gamePieceId").GetInt32(),
                    UnitTerrainType = actionJson.TryGetProperty("unitTerrainType", out var terrainType) ? terrainType.GetInt32() : 0,
                    FromX = actionJson.GetProperty("fromX").GetInt32(),
                    FromY = actionJson.GetProperty("fromY").GetInt32(),
                    ToX = actionJson.GetProperty("toX").GetInt32(),
                    ToY = actionJson.GetProperty("toY").GetInt32()
                });
            }

            // Notify listeners
            OnOpponentActionsReceived?.Invoke(gameActions);

            Debug.Log($"Loaded {gameActions.Count} opponent actions for turn {previousTurn}");
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error loading opponent actions: {ex.Message}");
        }
    }

    // Handle turn change from realtime subscription
    private void HandleTurnChange(string currentPlayerId, int turnNumber, string gameStateHash)
    {
        try
        {
            Debug.Log($"Turn changed: player {currentPlayerId}, turn {turnNumber}");

            _currentTurnNumber = turnNumber;
            bool wasPlayerTurn = _isPlayerTurn;
            _isPlayerTurn = currentPlayerId == _currentPlayerId;

            // If turn changed to player's turn, load opponent's actions
            if (!wasPlayerTurn && _isPlayerTurn)
            {
                LoadOpponentActionsAsync().ConfigureAwait(false);
            }

            // Notify listeners
            OnTurnChanged?.Invoke(_isPlayerTurn);
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error handling turn change: {ex.Message}");
        }
    }

    // Handle turn notification from push notification
    private void HandleTurnNotification(string matchId, int turnNumber)
    {
        try
        {
            // If this is for the current match, update turn state
            if (matchId == _currentMatchId)
            {
                Debug.Log($"Received turn notification for current match: turn {turnNumber}");

                _currentTurnNumber = turnNumber;
                _isPlayerTurn = true;

                // Notify listeners
                OnTurnChanged?.Invoke(_isPlayerTurn);

                // Load opponent's actions
                LoadOpponentActionsAsync().ConfigureAwait(false);
            }
            else
            {
                Debug.Log($"Received turn notification for different match: {matchId}, turn {turnNumber}");

                // Here you would typically show a notification to the player
                // that they have a turn in another match
            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error handling turn notification: {ex.Message}");
        }
    }
}
/*
// Data models
public class Match : BaseModel
{
    [PrimaryKey("id")]
    public string Id { get; set; }

    [Column("player1_id")]
    public string Player1Id { get; set; }

    [Column("player2_id")]
    public string Player2Id { get; set; }

    [Column("current_player_id")]
    public string CurrentPlayerId { get; set; }

    [Column("turn_number")]
    public int TurnNumber { get; set; }

    [Column("is_completed")]
    public bool IsCompleted { get; set; }

    [Column("game_state_hash")]
    public long GameStateHash { get; set; }
}

public class MatchMove : BaseModel
{
    [PrimaryKey("id")]
    public string Id { get; set; }

    [Column("match_id")]
    public string MatchId { get; set; }

    [Column("player_id")]
    public string PlayerId { get; set; }

    [Column("turn_number")]
    public int TurnNumber { get; set; }

    [Column("action_type")]
    public int ActionType { get; set; }

    [Column("actions")]
    public System.Text.Json.JsonElement Actions { get; set; }
}

public class TurnSubmitResponse
{
    [Column("success")]
    public bool Success { get; set; }

    [Column("pre_hash_mismatch")]
    public bool PreHashMismatch { get; set; }

    [Column("post_hash_mismatch")]
    public bool PostHashMismatch { get; set; }

    [Column("actual_pre_hash")]
    public long ActualPreHash { get; set; }

    [Column("actual_post_hash")]
    public long ActualPostHash { get; set; }
}

public enum GameActionType
{
    Move = 0,
    Attack = 1,
    Capture = 2,
    Produce = 3
}

public class GameAction
{
    public GameActionType Type { get; set; }
    public int GamePieceId { get; set; }
    public int UnitTerrainType { get; set; }
    public int FromX { get; set; }
    public int FromY { get; set; }
    public int ToX { get; set; }
    public int ToY { get; set; }
}*/