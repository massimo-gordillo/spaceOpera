using System;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;
using MessagePack;

public class SupabaseManager
{
    private readonly string _supabaseUrl;
    private readonly string _supabaseKey;

    public SupabaseManager(string supabaseUrl, string supabaseKey)
    {
        _supabaseUrl = supabaseUrl;
        _supabaseKey = supabaseKey;
    }

    public async Task SaveMapToServer(object mapObject, string mapName, int width, int height)
    {
        if (width <= 0 || height <= 0)
        {
            Debug.LogError("Width and height must be greater than 0.");
            return;
        }

        // Serialize the map object using MessagePack
        byte[] serializedData;
        try
        {
            serializedData = MessagePackSerializer.Serialize(mapObject);
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error serializing map data: {ex.Message}");
            return;
        }

        // Prepare the payload
        var payload = new
        {
            name = mapName,
            data = Convert.ToBase64String(serializedData),
            width = width,
            height = height
        };
        string jsonPayload = JsonUtility.ToJson(payload);

        // Construct the request
        string url = $"{_supabaseUrl}/rest/v1/maps";
        using UnityWebRequest request = new UnityWebRequest(url, "POST");
        request.SetRequestHeader("Content-Type", "application/json");
        request.SetRequestHeader("apikey", _supabaseKey);
        request.uploadHandler = new UploadHandlerRaw(Encoding.UTF8.GetBytes(jsonPayload));
        request.downloadHandler = new DownloadHandlerBuffer();

        try
        {
            var operation = request.SendWebRequest();
            while (!operation.isDone)
            {
                await Task.Yield();
            }

            if (request.result == UnityWebRequest.Result.Success)
            {
                Debug.Log("Map saved successfully.");
            }
            else
            {
                Debug.LogError($"Error saving map: {request.error}\nResponse: {request.downloadHandler.text}");
            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"Exception occurred while saving map: {ex.Message}");
        }
    }
}
