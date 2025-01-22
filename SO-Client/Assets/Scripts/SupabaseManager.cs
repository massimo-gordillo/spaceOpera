using System;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using MessagePack;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using System.Net.Http;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class SupabaseManager : MonoBehaviour
{
    public TilemapManager _tilemapManager;
    public TextMeshProUGUI serverResponseOutputViewer;
    public GameMaster _gameMaster;

    public Button loginButton;
    //public TMP_Text loginButtonText;
    public Button executeFunctionButton;


    //private readonly string _supabaseUrl = "http://127.0.0.1:54321";
    private readonly string _supabaseUrl = "https://ezmafonauvkpalwjpaer.supabase.co";
    private readonly string _supabaseAnonKey = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6ImV6bWFmb25hdXZrcGFsd2pwYWVyIiwicm9sZSI6ImFub24iLCJpYXQiOjE3MzYxMDE5NjUsImV4cCI6MjA1MTY3Nzk2NX0.i3E8rSHoMV1ThEWctZNU25oV_DfTjBu_jsQXQZiLO0s";

    //private readonly string _supabaseAnonKey = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZS1kZW1vIiwicm9sZSI6ImFub24iLCJleHAiOjE5ODM4MTI5OTZ9.CRXP1A7WOeoJeXxjNni43kdQwgnWNReilDMblYTn_I0";
    [SerializeField] private TMP_InputField emailInput;
    [SerializeField] private TMP_InputField passwordInput;

    private protected bool callServerOverLocal = false;


    private void Start()
    {
        //StartCoroutine(CallHelloWorldFunction());
        
        
        loginButton.onClick.AddListener(HandleLogin);
        //executeFunctionButton.onClick.AddListener(SendCurrentMapToServer);
        executeFunctionButton.onClick.AddListener(HandleRetrieveInitialStateFromServer);
        executeFunctionButton.interactable = true;

    }

    public async void HandleLogin()
    {
        loginButton.interactable = false;
        serverResponseOutputViewer.text += "\nLogging in...";

        var success = await SupabaseClient.Instance.SignInWithEmail(
            emailInput.text,
            passwordInput.text
        );

        if (success)
        {
            serverResponseOutputViewer.text += "\nLogin successful!";
            Debug.Log("Login successful!");
            executeFunctionButton.interactable = true;
        }
        else
        {
            serverResponseOutputViewer.text += "\nLogin failed!";
            loginButton.interactable = true;
        }
    }

    private async void HandleHelloWorld()
    {
        executeFunctionButton.interactable = false;
        serverResponseOutputViewer.text = "Calling Hello World...";

        try
        {
            var payload = new { name = "Functions" };

            var response = await SupabaseClient.Instance.SendRequest<string>(
                "/functions/v1/hello-world2",
                HttpMethod.Post,
                payload
            );

            serverResponseOutputViewer.text = response;
        }
        catch (System.Exception ex)
        {
            serverResponseOutputViewer.text = $"Error: {ex.Message}";
        }
        finally
        {
            executeFunctionButton.interactable = true;
        }
    }

    public async void SendCurrentMapToServer()  // Change to async Task for better error handling and await usage
    {
        try
        {
            // Save the map to the server
            TilemapData tilemapData = _tilemapManager.ExportTilemapToBytes();
            List<GamePieceInfo> initPieceInfo = _gameMaster.ConvertGameStateToList();

            // Directly await the SaveGameInitialStateToServer method
            await SaveGameInitialStateToServer(tilemapData, "testMap3", initPieceInfo);
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error sending map to server: {ex.Message}");
            serverResponseOutputViewer.text = $"Error sending map to server: {ex.Message}";
        }
    }

    public async Task SaveGameInitialStateToServer(TilemapData mapObject, string mapName, List<GamePieceInfo> initPieceData)
    {
        if (mapObject.Width <= 0 || mapObject.Height <= 0)
        {
            Debug.LogError("Width and height must be greater than 0.");
            return;
        }

        // Serialize map data to JSON
        string serializedMapData;
        try
        {
            serializedMapData = JsonUtility.ToJson(mapObject);
            Debug.Log("Serialized map data: " + serializedMapData);
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error serializing map data: {ex.Message}");
            return;
        }

        // Serialize initial piece data to JSON
        string serializedPieceData;
        try
        {
            GamePieceList gamePieceList = new GamePieceList(initPieceData);
            serializedPieceData = JsonUtility.ToJson(gamePieceList);
            Debug.Log("Serialized piece data: " + serializedPieceData);
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error serializing piece data: {ex.Message}");
            return;
        }

        // Construct JSON payload
        var payload = new
        {
            map_name = mapName,
            grid_data = serializedMapData,
            width = mapObject.Width,
            height = mapObject.Height,
            init_piece_data = serializedPieceData,
            compression_method = 0.01
    };

        string jsonPayload;
        try
        {
            jsonPayload = JsonConvert.SerializeObject(payload);
            Debug.Log("JSON Payload: " + jsonPayload);
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error creating JSON payload: {ex.Message}");
            return;
        }

        // Send payload to server
        string url = $"{_supabaseUrl}/rest/v1/maps";
        using UnityWebRequest request = new UnityWebRequest(url, "POST")
        {
            uploadHandler = new UploadHandlerRaw(Encoding.UTF8.GetBytes(jsonPayload)),
            downloadHandler = new DownloadHandlerBuffer(),
            method = UnityWebRequest.kHttpVerbPOST
        };

        request.SetRequestHeader("Content-Type", "application/json");
        request.SetRequestHeader("apikey", _supabaseAnonKey);

        try
        {
            var operation = request.SendWebRequest();
            while (!operation.isDone)
            {
                await Task.Yield();
            }

            if (request.result == UnityWebRequest.Result.Success)
            {
                Debug.Log($"Map saved successfully: {request.downloadHandler.text}");
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


    //for sending data in bytea format
    /*public async Task SaveGameInitialStateToServer(TilemapData mapObject, string mapName, List<GamePieceInfo> init_piece_data)
    {
        int width = mapObject.Width;
        int height = mapObject.Height;
        GamePieceList gamePieceList = new GamePieceList(init_piece_data);
        *//*Debug.Log($"mapObject: {mapObject.TileBytesBase64}");
        Debug.Log($"init_piece_data: {gamePieceList}");
        Debug.Log($"mapName: {mapName}, width: {width}, height: {height}");*//*

        if (width <= 0 || height <= 0)
        {
            Debug.LogError("Width and height must be greater than 0.");
            return;
        }
        // Serialize the map object to JSON
        string serializedMapData;
        try
        {
            serializedMapData = JsonUtility.ToJson(mapObject);
            Debug.Log("Serialized map object: " + serializedMapData); // Debug log for map object
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error serializing map data: {ex.Message}");
            return;
        }

        // Serialize the game state to JSON
        string serializedPieceData;
        try
        {
            serializedPieceData = JsonUtility.ToJson(gamePieceList);
            Debug.Log("Serialized piece data: " + serializedPieceData); // Debug log for piece data
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error serializing game piece data: {ex.Message}");
            return;
        }
        //create JSON payload
        var payload = new JSONPayloadSendMapData(mapName, serializedMapData, width, height, serializedPieceData);
        string jsonPayload = JsonUtility.ToJson(payload);
        Debug.Log("JSON Payload: " + jsonPayload); 

        // Construct the request
        string url = $"{_supabaseUrl}/rest/v1/maps";
        //string url = $"{_supabaseUrl}/functions/v1/save-map";
        using UnityWebRequest request = new UnityWebRequest(url, "POST");
        request.SetRequestHeader("Content-Type", "application/json");
        request.SetRequestHeader("apikey", _supabaseAnonKey);
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
                //Debug.Log("Map saved successfully.");
                serverResponseOutputViewer.text = $"Map saved successfully: \n Response:{request.downloadHandler.text}";
                Debug.Log($"Map saved successfully: \n Response:\n{request.downloadHandler.text}");
            }
            else
            {
                Debug.LogError($"Error saving map: {request.error}\nResponse: {request.downloadHandler.text}");
                serverResponseOutputViewer.text = $"Error saving map: {request.error}\nResponse: {request.downloadHandler.text}";
            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"Exception occurred while saving map: {ex.Message}");
            serverResponseOutputViewer.text = $"Client: Exception occurred while saving map: {ex.Message}";
        }
    }*/

    public async void HandleRetrieveInitialStateFromServer()
    {
        try
        {
            // Directly await the RetrieveGameInitialStateFromServer method
            await RetrieveGameInitialStateFromServer("testMap3");
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error retrieving map from server: {ex.Message}");
            serverResponseOutputViewer.text = $"Error retrieving map from server: {ex.Message}";
        }
    }

    /*public async Task RetrieveGameInitialStateFromServer(string mapName)
    {
        // Construct the request
        string url = $"{_supabaseUrl}/rest/v1/maps";
        using UnityWebRequest request = new UnityWebRequest(url, "GET");
        request.SetRequestHeader("Content-Type", "application/json");
        request.SetRequestHeader("apikey", _supabaseAnonKey);
        request.uploadHandler = new UploadHandlerRaw(Encoding.UTF8.GetBytes($"{{\"mapName\":\"{mapName}\"}}"));
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
                Debug.Log("Map retrieved successfully.");
                serverResponseOutputViewer.text = $"Map retrieved successfully: \n Response:{request.downloadHandler.text}";

                // Deserialize the response using JObject
                JObject response = JObject.Parse(request.downloadHandler.text);
                string mapData = response["grid_data"]?.ToString();
                string pieceData = response["init_piece_data"]?.ToString();

                TilemapData mapObject = JsonUtility.FromJson<TilemapData>(mapData);
                GamePieceList gamePieceList = JsonUtility.FromJson<GamePieceList>(pieceData);

                Debug.Log($"mapObject and gamepiecelist deserialized:\n ${mapObject}\n%%%%\n ${gamePieceList}");
                // Import the map object
                //_tilemapManager.ImportTilemapFromBytes(mapObject);

                // Import the game state
                //_gameMaster.ImportGameStateFromList(gamePieceList.gamePieceList);
            }
            else
            {
                Debug.LogError($"Error retrieving map: {request.error}\nResponse: {request.downloadHandler.text}");
                serverResponseOutputViewer.text = $"Error retrieving map: {request.error}\nResponse: {request.downloadHandler.text}";
            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"Exception occurred while retrieving map: {ex.Message}");
            serverResponseOutputViewer.text = $"Client: Exception occurred while retrieving map: {ex.Message}";
        }
    }*/

    public async Task RetrieveGameInitialStateFromServer(string mapName)
    {
        string url = $"{_supabaseUrl}/rest/v1/maps";
        using UnityWebRequest request = new UnityWebRequest(url, "GET");
        request.SetRequestHeader("Content-Type", "application/json");
        request.SetRequestHeader("apikey", _supabaseAnonKey);
        request.uploadHandler = new UploadHandlerRaw(Encoding.UTF8.GetBytes($"{{\"mapName\":\"{mapName}\"}}"));
        request.downloadHandler = new DownloadHandlerBuffer();

        try
        {
            var operation = request.SendWebRequest();
            while (!operation.isDone)
            {
                await Task.Yield();
            }
            Debug.Log($"Raw server response: {request.downloadHandler.text}");
            if (request.result == UnityWebRequest.Result.Success)
            {
                Debug.Log("Map retrieved successfully.");
                serverResponseOutputViewer.text = $"Map retrieved successfully: \nResponse: {request.downloadHandler.text}";

                // Deserialize the response as an array
                JArray responseArray = JArray.Parse(request.downloadHandler.text);
                if (responseArray.Count > 0)
                {
                    JObject mapDataObject = (JObject)responseArray[0];
                    string mapData = mapDataObject["grid_data"]?.ToString();
                    string pieceData = mapDataObject["init_piece_data"]?.ToString();

                    Debug.Log($"Raw map data: {mapData}");
                    Debug.Log($"Raw piece data: {pieceData}");

                    try
                    {
                        TilemapData mapObjectx = JsonConvert.DeserializeObject<TilemapData>(mapData);
                        Debug.Log($"Deserialized TilemapData: {mapObjectx}");
                    }
                    catch (Exception ex)
                    {
                        Debug.LogError($"Error deserializing TilemapData: {ex.Message}");
                    }

                    try
                    {
                        GamePieceList gamePieceListx = JsonConvert.DeserializeObject<GamePieceList>(pieceData);
                        Debug.Log($"Deserialized GamePieceList: {gamePieceListx}");
                    }
                    catch (Exception ex)
                    {
                        Debug.LogError($"Error deserializing GamePieceList: {ex.Message}");
                    }

                    TilemapData mapObject = JsonUtility.FromJson<TilemapData>(mapData);
                    GamePieceList gamePieceList = JsonUtility.FromJson<GamePieceList>(pieceData);

                    Debug.Log($"mapObject and gamePieceList deserialized:\n{mapObject}\n%%%%\n{gamePieceList}");
                    // Import the map object
                    //_tilemapManager.ImportTilemapFromBytes(mapObject);

                    // Import the game state
                    //_gameMaster.ImportGameStateFromList(gamePieceList.gamePieceList);
                }
                else
                {
                    Debug.LogError("No map data found.");
                    serverResponseOutputViewer.text = "No map data found.";
                }
            }
            else
            {
                Debug.LogError($"Error retrieving map: {request.error}\nResponse: {request.downloadHandler.text}");
                serverResponseOutputViewer.text = $"Error retrieving map: {request.error}\nResponse: {request.downloadHandler.text}";
            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"Exception occurred while retrieving map: {ex.Message}");
            serverResponseOutputViewer.text = $"Client: Exception occurred while retrieving map: {ex.Message}";
        }
    }


    public static string SerializeGamePieceInfoListToBase64(List<GamePieceInfo> pieces)
    {
        List<string> base64List = new List<string>();

        // Convert each GamePieceInfo to byte array, then base64 string
        foreach (var piece in pieces)
        {
            byte[] byteArray = System.Text.Encoding.UTF8.GetBytes(JsonUtility.ToJson(piece)); // Serialize to JSON string and then convert to byte array
            string base64String = Convert.ToBase64String(byteArray);
            base64List.Add(base64String);
        }

        // Combine all base64 strings into one long string
        return string.Join(",", base64List);
    }

    //putting this here as a placeholder, will move to a different script later
    public static List<GamePieceInfo> DeserializeGamePieceInfoListFromBase64(string base64Data)
    {
        List<GamePieceInfo> pieces = new List<GamePieceInfo>();

        // Split the long base64 string into individual base64 segments
        string[] base64List = base64Data.Split(',');

        foreach (var base64String in base64List)
        {
            byte[] byteArray = Convert.FromBase64String(base64String);
            string json = System.Text.Encoding.UTF8.GetString(byteArray);
            GamePieceInfo piece = JsonUtility.FromJson<GamePieceInfo>(json); // Deserialize JSON string to GamePieceInfo
            pieces.Add(piece);
        }

        return pieces;
    }

}
