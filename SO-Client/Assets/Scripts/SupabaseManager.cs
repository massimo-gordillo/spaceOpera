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
    //private SupabaseClient _client;

    public Button loginButton;
    //public TMP_Text loginButtonText;
    public Button executeFunctionButton;

    //private readonly string _supabaseUrl = "https://ezmafonauvkpalwjpaer.supabase.co";
    //private readonly string _supabaseAnonKey = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6ImV6bWFmb25hdXZrcGFsd2pwYWVyIiwicm9sZSI6ImFub24iLCJpYXQiOjE3MzYxMDE5NjUsImV4cCI6MjA1MTY3Nzk2NX0.i3E8rSHoMV1ThEWctZNU25oV_DfTjBu_jsQXQZiLO0s";

    //private readonly string _supabaseUrl = "http://127.0.0.1:54321";
    //private readonly string _supabaseAnonKey = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZS1kZW1vIiwicm9sZSI6ImFub24iLCJleHAiOjE5ODM4MTI5OTZ9.CRXP1A7WOeoJeXxjNni43kdQwgnWNReilDMblYTn_I0";
    [SerializeField] private TMP_InputField emailInput;
    [SerializeField] private TMP_InputField passwordInput;

    private protected bool callServerOverLocal = false;


    private void Start()
    {
        //StartCoroutine(CallHelloWorldFunction());
        //_client = new SupabaseClient;

        loginButton.onClick.AddListener(HandleLogin);
        executeFunctionButton.onClick.AddListener(SendCurrentMapToServer);
        //executeFunctionButton.onClick.AddListener(HandleRetrieveInitialStateFromServer);
        //executeFunctionButton.onClick.AddListener(() => HandleAsyncCall(() => CreateMatchAsync("aa2e6df3-4200-4469-8353-dd41d2a28781", "d0172820-32bc-4fc7-870f-be940517c008", "96fe6e44-5362-49a4-9d59-0cf04e353d0b")));
        //executeFunctionButton.onClick.AddListener(() => HandleAsyncCall(() => RetrieveGameInitialStateFromServer("96fe6e44-5362-49a4-9d59-0cf04e353d0b")));
        //executeFunctionButton.onClick.AddListener(() => HandleAsyncCall(() => SendCurrentMapToServer()));

        executeFunctionButton.interactable = true;

    }

    private async void HandleAsyncCall(Func<Task> asyncFunc)
    {
        try
        {
            await asyncFunc();
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error: {ex.Message}");
            serverResponseOutputViewer.text = $"Error: {ex.Message}";
        }
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
            serializedMapData = JsonUtility.ToJson(mapObject.TileBytes);
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
            name = mapName,
            tiles = serializedMapData,
            width = mapObject.Width,
            height = mapObject.Height,
            pieces = serializedPieceData
        };

        /*        string jsonPayload;
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
                request.SetRequestHeader("apikey", _supabaseAnonKey);*/

        string endpoint = "/rest/v1/maps";
        //uncomment when ready to send to server
 /*       try
        {
            // Send request and await response
            var responseBody = await SupabaseClient.Instance.SendRequest<string>(endpoint, HttpMethod.Post, payload);

            // Check if response is valid
            if (!string.IsNullOrEmpty(responseBody))
            {
                Debug.Log($"Map saved successfully: {responseBody}");
            }
            else
            {
                Debug.LogError("Error saving map: Empty response from server.");
            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"Exception occurred while saving map: {ex.Message}");
        }*/

    }

    public async Task RetrieveGameInitialStateFromServer(string mapId)
    {
        string endpoint = $"/rest/v1/maps?id=eq.{mapId}";
        try
        {
            var response = await SupabaseClient.Instance.SendRequest<string>(endpoint, HttpMethod.Get, null);

            if (!string.IsNullOrEmpty(response))
            {
                Debug.Log($"Raw server response: {response}");
                serverResponseOutputViewer.text = $"Map retrieved successfully: \nResponse: {response}";

                JArray responseArray = JArray.Parse(response);
                if (responseArray.Count > 0)
                {
                    JObject mapDataObject = (JObject)responseArray[0];
                    string mapData = mapDataObject["grid_data"]?.ToString();
                    string pieceData = mapDataObject["init_piece_data"]?.ToString();

                    Debug.Log($"Raw map data: {mapData}");
                    Debug.Log($"Raw piece data: {pieceData}");

                    TilemapData mapObject = null;
                    GamePieceList gamePieceList = null;

                    try
                    {
                        mapObject = JsonConvert.DeserializeObject<TilemapData>(mapData);
                        Debug.Log($"Deserialized TilemapData: {mapObject}");
                    }
                    catch (Exception ex)
                    {
                        Debug.LogError($"Error deserializing TilemapData: {ex.Message}");
                    }

                    try
                    {
                        gamePieceList = JsonConvert.DeserializeObject<GamePieceList>(pieceData);
                        Debug.Log($"Deserialized GamePieceList: {gamePieceList}");
                    }
                    catch (Exception ex)
                    {
                        Debug.LogError($"Error deserializing GamePieceList: {ex.Message}");
                    }

                    if (mapObject != null)
                        _tilemapManager.ImportTilemapFromBytes(mapObject);

                    if (gamePieceList != null)
                        _gameMaster.ConvertListToGameState(gamePieceList.gamePieceInfos);
                }
                else
                {
                    Debug.LogError("No map data found.");
                    serverResponseOutputViewer.text = "No map data found.";
                }
            }
            else
            {
                Debug.LogError("Error retrieving map: Response was empty.");
                serverResponseOutputViewer.text = "Error retrieving map: Response was empty.";
            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error retrieving map: {ex.Message}");
            serverResponseOutputViewer.text = $"Error retrieving map: {ex.Message}";
        }
    }



    /*        using UnityWebRequest request = new UnityWebRequest(url, "GET");
            request.SetRequestHeader("Content-Type", "application/json");
            request.SetRequestHeader("apikey", _supabaseAnonKey);
            request.downloadHandler = new DownloadHandlerBuffer();*/

    // No need for uploadHandler since we're using GET


    /*try
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

                *//*                    try
                                    {
                                        TilemapData incomingTilemapData = new TilemapData(1, 2, null);
                                        incomingTilemapData.tileBytesBase64 = JsonConvert.DeserializeObject<String>(mapData);
                                        Debug.Log($"Deserialized TilemapData via drop: {incomingTilemapData.tileBytesBase64}");
                                    }
                                    catch (Exception ex)
                                    {
                                        Debug.LogError($"Error dropping into TilemapData: {ex.Message}");
                                    }*//*

                TilemapData mapObject = new TilemapData();
                GamePieceList gamePieceList = new GamePieceList(new List<GamePieceInfo>());

                try
                {
                    mapObject = JsonUtility.FromJson<TilemapData>(mapData); ;
                    Debug.Log($"Deserialized TilemapData: {mapObject}");
                }
                catch (Exception ex)
                {
                    Debug.LogError($"Error deserializing TilemapData: {ex.Message}");
                }

                try
                {
                    gamePieceList = JsonUtility.FromJson<GamePieceList>(pieceData);
                    Debug.Log($"Deserialized GamePieceList: {gamePieceList}");

                }
                catch (Exception ex)
                {
                    Debug.LogError($"Error deserializing GamePieceList: {ex.Message}");
                }
                //Debug.Log($"mapObject and gamePieceList deserialized:\nmap: {mapObject.TileBytes}\n%%%%\nfirst list obj: {gamePieceList.gamePieceInfos[0].ToByteArray()}");
                // Import the map object
                _tilemapManager.ImportTilemapFromBytes(mapObject);

                // Import the game state
                _gameMaster.ConvertListToGameState(gamePieceList.gamePieceInfos);
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
    }*/
    //}


    //send gameActionsList to server for verification
    public async Task SendGameActionsListToServer(List<GameAction> gameActionsList)
    {
        // Serialize the game actions list to JSON
        string serializedGameActionsList;
        try
        {
            serializedGameActionsList = JsonUtility.ToJson(gameActionsList);
            Debug.Log("Serialized game actions list: " + serializedGameActionsList);
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error serializing game actions list: {ex.Message}");
            return;
        }

        // Construct JSON payload
        var payload = new
        {
            game_actions_list = serializedGameActionsList
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

        //send the payload to the server using SupabaseClient.sendRequest
        try
        {
            var response = await SupabaseClient.Instance.SendRequest<string>(
                "/rest/v1/game_actions",
                HttpMethod.Post,
                payload
            );

            Debug.Log($"Game actions list sent successfully: {response}");
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error sending game actions list: {ex.Message}");
        }

    }

    public async Task CreateMatchAsync(string playerAId, string playerBId, string mapId)
    {
        string _supabaseUrl = "https://ezmafonauvkpalwjpaer.supabase.co";
        string _supabaseAnonKey = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6ImV6bWFmb25hdXZrcGFsd2pwYWVyIiwicm9sZSI6ImFub24iLCJpYXQiOjE3MzYxMDE5NjUsImV4cCI6MjA1MTY3Nzk2NX0.i3E8rSHoMV1ThEWctZNU25oV_DfTjBu_jsQXQZiLO0s";


        if (string.IsNullOrEmpty(_supabaseUrl) || string.IsNullOrEmpty(_supabaseAnonKey))
        {
            Debug.LogError("Supabase configuration is missing");
            throw new InvalidOperationException("Supabase configuration is missing");
        }

        string url = $"{_supabaseUrl}/rest/v1/rpc/create_match";
        Debug.Log($"Sending request to: {url}");

        var requestData = new
        {
            player_a_id = playerAId,
            player_b_id = playerBId,
            map_id = mapId
        };

        string jsonData = JsonConvert.SerializeObject(requestData); // Better JSON serialization
        Debug.Log($"Request payload: {jsonData}");

        using (UnityWebRequest request = new UnityWebRequest(url, "POST"))
        {
            byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonData);
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();

            request.SetRequestHeader("apikey", _supabaseAnonKey);
            request.SetRequestHeader("Authorization", $"Bearer {_supabaseAnonKey}");
            request.SetRequestHeader("Content-Type", "application/json");
            request.SetRequestHeader("Prefer", "return=representation");

            try
            {
                await SendWebRequestAsync(request); // Custom async wrapper

                if (request.result == UnityWebRequest.Result.Success)
                {
                    string responseJson = request.downloadHandler.text;
                    Debug.Log($"Response received: {responseJson}");
                }
                else
                {
                    Debug.LogError($"Request failed: {request.error}");
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
    }

    private static Task SendWebRequestAsync(UnityWebRequest request)
    {
        var completionSource = new TaskCompletionSource<object>();
        request.SendWebRequest().completed += _ =>
        {
            if (request.result == UnityWebRequest.Result.Success)
                completionSource.SetResult(null);
            else
                completionSource.SetException(new Exception(request.error));
        };
        return completionSource.Task;
    }


    /*public async Task CreateMatchAsync(string playerAId, string playerBId, string mapId)
    {
        try
        {
            // Define the endpoint for creating a match
            string endpoint = $"{_supabaseUrl}/rest/v1/rpc/createMatch";
            //string endpoint = $"{_supabaseUrl}/rest/v1/game/matches";

            var requestData = new
            {
                player_a_id = playerAId,
                player_b_id = playerBId,
                map_id = mapId
            };

            string jsonData = JsonUtility.ToJson(requestData);

            *//*            // Use the generic SendRequest method to call the server
                        MatchData match = await SupabaseClient.Instance.Functions.Invoke<MatchData>(
                            endpoint,
                            requestData,
                            new Supabase.Functions.FunctionsRequestOptions { Method = HttpMethod.Post }
                        );*//*

            var response = await SupabaseClient.Instance.SendRequest<string>(endpoint, HttpMethod.Post, jsonData);
            Debug.Log("Match creation request sent successfully.");

            //Debug.Log("Match created successfully.");
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error creating match: {ex.Message}");
            throw;
        }
    }*/





    /// ///////////////////////////////////////////////////////



    //is this still needed?
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

    //is this still needed?
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

    /*private async void HandleHelloWorld()
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
    }*/

    public async void SendCurrentMapToServer()  // Change to async Task for better error handling and await usage
    {
        try
        {
            // Save the map to the server
            TilemapData tilemapData = _tilemapManager.ExportTilemapToBytes();
            List<GamePieceInfo> initPieceInfo = _gameMaster.ConvertGameStateToList();

            // Directly await the SaveGameInitialStateToServer method
            await SaveGameInitialStateToServer(tilemapData, "testMap1.1", initPieceInfo);
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error sending map to server: {ex.Message}");
            serverResponseOutputViewer.text = $"Error sending map to server: {ex.Message}";
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

    /*public async void HandleRetrieveInitialStateFromServer()
    {
        try
        {
            // Directly await the RetrieveGameInitialStateFromServer method
            await RetrieveGameInitialStateFromServer("573a4f2f-378f-4159-ab77-899c407ba5be");
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error retrieving map from server: {ex.Message}");
            serverResponseOutputViewer.text = $"Error retrieving map from server: {ex.Message}";
        }
    }*/

}
