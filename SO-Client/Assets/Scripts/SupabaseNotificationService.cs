using System;
using System.Threading.Tasks;
using Supabase;
using Supabase.Gotrue;
using Postgrest.Models;
using System.Collections.Generic;
using UnityEngine;

public class SupabaseNotificationService : MonoBehaviour
{
    private Supabase.Client _supabaseClient;
    private DeviceRegistrationService _deviceRegistrationService;

    // Singleton instance
    private static SupabaseNotificationService _instance;
    public static SupabaseNotificationService Instance
    {
        get
        {
            if (_instance == null)
            {
                GameObject go = new GameObject("NotificationService");
                _instance = go.AddComponent<NotificationService>();
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

        // Initialize device registration service
        _deviceRegistrationService = new DeviceRegistrationService(supabaseUrl, supabaseKey);
    }

    public async Task InitializeAsync()
    {
        await _supabaseClient.InitializeAsync();
        await _deviceRegistrationService.InitializeAsync();
    }

    // Register for push notifications
    public async Task RegisterForPushNotificationsAsync(string deviceToken, string platform)
    {
        try
        {
            // Validate platform
            if (platform != "ios" && platform != "android")
            {
                throw new ArgumentException("Platform must be either 'ios' or 'android'", nameof(platform));
            }

            // Register device
            await _deviceRegistrationService.RegisterDeviceAsync(deviceToken, platform);
            Debug.Log($"Successfully registered for push notifications on {platform}");
        }
        catch (Exception ex)
        {
            Debug.LogError($"Failed to register for push notifications: {ex.Message}");
            throw;
        }
    }

    // Unregister from push notifications
    public async Task UnregisterFromPushNotificationsAsync(string deviceToken)
    {
        try
        {
            await _deviceRegistrationService.UnregisterDeviceAsync(deviceToken);
            Debug.Log("Successfully unregistered from push notifications");
        }
        catch (Exception ex)
        {
            Debug.LogError($"Failed to unregister from push notifications: {ex.Message}");
            throw;
        }
    }

    // Subscribe to realtime turn changes
    public async Task SubscribeToTurnChangesAsync(string matchId, Action<string, int, string> onTurnChange)
    {
        try
        {
            // Subscribe to the turn_changes channel
            await _supabaseClient.Realtime.Channel("turn_changes")
                .On("*", (sender, e) =>
                {
                    try
                    {
                        var payload = e.Payload;
                        var data = payload.GetProperty("data");

                        // Extract match data
                        var payloadMatchId = data.GetProperty("match_id").GetString();

                        // Only process if it's the match we're interested in
                        if (payloadMatchId == matchId)
                        {
                            var currentPlayerId = data.GetProperty("current_player_id").GetString();
                            var turnNumber = data.GetProperty("turn_number").GetInt32();
                            var gameStateHash = data.GetProperty("game_state_hash").GetString();

                            // Invoke the callback
                            onTurnChange?.Invoke(currentPlayerId, turnNumber, gameStateHash);
                        }
                    }
                    catch (Exception ex)
                    {
                        Debug.LogError($"Error processing turn change event: {ex.Message}");
                    }
                })
                .Subscribe();

            Debug.Log($"Subscribed to turn changes for match {matchId}");
        }
        catch (Exception ex)
        {
            Debug.LogError($"Failed to subscribe to turn changes: {ex.Message}");
            throw;
        }
    }

    // Unsubscribe from realtime turn changes
    public async Task UnsubscribeFromTurnChangesAsync()
    {
        try
        {
            await _supabaseClient.Realtime.Channel("turn_changes").Unsubscribe();
            Debug.Log("Unsubscribed from turn changes");
        }
        catch (Exception ex)
        {
            Debug.LogError($"Failed to unsubscribe from turn changes: {ex.Message}");
            throw;
        }
    }

    // Handle incoming push notification
    public void HandlePushNotification(Dictionary<string, string> payload)
    {
        try
        {
            // Extract notification data
            if (payload.TryGetValue("type", out string type) && type == "turn_notification")
            {
                if (payload.TryGetValue("matchId", out string matchId) &&
                    payload.TryGetValue("turnNumber", out string turnNumberStr))
                {
                    int turnNumber = int.Parse(turnNumberStr);

                    // Notify game that it's the player's turn
                    Debug.Log($"Received turn notification for match {matchId}, turn {turnNumber}");

                    // Here you would typically:
                    // 1. Show a UI notification to the player
                    // 2. If the game is already open, update the game state
                    // 3. If the game is closed, store this info to load the correct match when opened

                    // Example: Broadcast event for other components to handle
                    GameEvents.OnTurnNotificationReceived?.Invoke(matchId, turnNumber);
                }
            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error handling push notification: {ex.Message}");
        }
    }
}

// Static class for game events
public static class GameEvents
{
    // Event triggered when a turn notification is received
    public static Action<string, int> OnTurnNotificationReceived;
}