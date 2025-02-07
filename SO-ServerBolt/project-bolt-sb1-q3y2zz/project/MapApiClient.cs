using UnityEngine;
using UnityEngine.Networking;
using System;
using System.Threading.Tasks;
using System.Text;

public class MapApiClient : MonoBehaviour
{
    private const string BaseUrl = "http://localhost:3000"; // Change this to your actual server URL
    private readonly string _supabaseUrl;
    private readonly string _supabaseAnonKey;

    void Awake()
    {
        // Initialize Supabase configuration
        _supabaseUrl = Environment.GetEnvironmentVariable("SUPABASE_URL");
        _supabaseAnonKey = Environment.GetEnvironmentVariable("SUPABASE_ANON_KEY");

        if (string.IsNullOrEmpty(_supabaseUrl) || string.IsNullOrEmpty(_supabaseAnonKey))
        {
            Debug.LogError("Supabase configuration is missing. Please ensure SUPABASE_URL and SUPABASE_ANON_KEY are set.");
        }
    }
    
    public async Task<MatchData> CreateMatchAsync(string playerAId, string playerBId, string mapId)
    {
        try
        {
            if (string.IsNullOrEmpty(_supabaseUrl) || string.IsNullOrEmpty(_supabaseAnonKey))
            {
                throw new InvalidOperationException("Supabase configuration is missing");
            }

            // Define the endpoint for creating a match using Supabase REST API
            string url = $"{_supabaseUrl}/rest/v1/rpc/create_match";

            Debug.Log($"Sending request to: {url}");

            // Create the request data
            var requestData = new CreateMatchRequest
            {
                player_a_id = playerAId,
                player_b_id = playerBId,
                map_id = mapId
            };

            string jsonData = JsonUtility.ToJson(requestData);
            Debug.Log($"Request payload: {jsonData}");

            // Create the request
            using var request = new UnityWebRequest(url, "POST");
            byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonData);
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            
            // Add required Supabase headers
            request.SetRequestHeader("apikey", _supabaseAnonKey);
            request.SetRequestHeader("Authorization", $"Bearer {_supabaseAnonKey}");
            request.SetRequestHeader("Content-Type", "application/json");
            request.SetRequestHeader("Prefer", "return=representation");

            try
            {
                // Send request and await response
                await request.SendWebRequest().ToTask();

                if (request.result == UnityWebRequest.Result.Success)
                {
                    string responseJson = request.downloadHandler.text;
                    Debug.Log($"Response received: {responseJson}");
                    return JsonUtility.FromJson<MatchData>(responseJson);
                }
                else
                {
                    Debug.LogError($"Request failed with error: {request.error}");
                    Debug.LogError($"Response body: {request.downloadHandler?.text}");
                    throw new Exception($"Failed to create match: {request.error}");
                }
            }
            catch (Exception ex)
            {
                Debug.LogError($"Request execution failed: {ex.Message}");
                throw;
            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error creating match: {ex.Message}");
            throw;
        }
    }
    
    // Test connection to the server
    public async Task<bool> PingServer()
    {
        try
        {
            using var request = UnityWebRequest.Get($"{BaseUrl}/health");
            await request.SendWebRequest().ToTask();
            
            if (request.result == UnityWebRequest.Result.Success)
            {
                Debug.Log("Server connection successful!");
                return true;
            }
            else
            {
                Debug.LogError($"Server connection failed: {request.error}");
                return false;
            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error connecting to server: {ex.Message}");
            return false;
        }
    }
}

// Extension method to convert UnityWebRequestAsyncOperation to Task
public static class UnityWebRequestExtensions
{
    public static TaskAwaiter<UnityWebRequest> GetAwaiter(this UnityWebRequestAsyncOperation operation)
    {
        var tcs = new TaskCompletionSource<UnityWebRequest>();
        operation.completed += asyncOp => tcs.TrySetResult(((UnityWebRequestAsyncOperation)asyncOp).webRequest);
        return tcs.Task.GetAwaiter();
    }

    public static Task<UnityWebRequest> ToTask(this UnityWebRequestAsyncOperation operation)
    {
        var tcs = new TaskCompletionSource<UnityWebRequest>();
        operation.completed += asyncOp => tcs.TrySetResult(((UnityWebRequestAsyncOperation)asyncOp).webRequest);
        return tcs.Task;
    }
}

[Serializable]
public class CreateMatchRequest
{
    public string player_a_id;
    public string player_b_id;
    public string map_id;
}

[Serializable]
public class MatchData
{
    public string id;
    public string player1_id;
    public string player2_id;
    public string map_id;
    public string map_name;
    public string current_player_id;
    public string unit_grid;
    public string structure_grid;
    public string terrain_grid;
    public bool is_completed;
    public string created_at;
    public string ended_at;
    public string winner_id;
    public int turn_number;
}