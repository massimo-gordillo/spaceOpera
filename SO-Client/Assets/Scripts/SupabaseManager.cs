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

public class SupabaseManager : MonoBehaviour
{
    public TilemapManager _tilemapManager;
    public TMP_Text serverResponseOutputViewer;
    public GameMaster _gameMaster;

    public Button loginButton;
    //public TMP_Text loginButtonText;
    public Button executeFunctionButton;


    private protected string _supabaseUrl;
    private protected string _supabaseAnonKey;
    [SerializeField] private TMP_InputField emailInput;
    [SerializeField] private TMP_InputField passwordInput;

    //private readonly string _supabaseLocalUrl = 127.0.0.1;

    private protected bool callServerOverLocal = false;

    /*    public SupabaseManager(string supabaseUrl, string supabaseKey)
        {
            _supabaseUrl = supabaseUrl;
            _supabaseKey = supabaseKey;
        }*/

    private void Start()
    {
        //StartCoroutine(CallHelloWorldFunction());
/*        if (callServerOverLocal)
        {
            _supabaseUrl = "SUPABASE_SERVER_URL";
            _supabaseKey = "SUPABASE_SERVER_KEY";
        }
        else
        {
            _supabaseUrl = "SUPABASE_LOCAL_URL";
            _supabaseKey = "SUPABASE_LOCAL_KEY";
        }*/
        _supabaseUrl = "http://127.0.0.1:54321";
        _supabaseAnonKey = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZS1kZW1vIiwicm9sZSI6ImFub24iLCJleHAiOjE5ODM4MTI5OTZ9.CRXP1A7WOeoJeXxjNni43kdQwgnWNReilDMblYTn_I0";
        loginButton.onClick.AddListener(HandleLogin);
        executeFunctionButton.onClick.AddListener(HandleHelloWorld);
        executeFunctionButton.interactable = false;

    }

    public async void HandleLogin()
    {
        loginButton.interactable = false;
        serverResponseOutputViewer.text = "Logging in...";

        var success = await SupabaseClient.Instance.SignInWithEmail(
            emailInput.text,
            passwordInput.text
        );

        if (success)
        {
            serverResponseOutputViewer.text = "Login successful!";
            Debug.Log("Login successful!");
            executeFunctionButton.interactable = true;
        }
        else
        {
            serverResponseOutputViewer.text = "Login failed!";
            loginButton.interactable = true;
        }
    }

    private async void HandleHelloWorld()
    {
        executeFunctionButton.interactable = false;
        serverResponseOutputViewer.text = "Calling Hello World...";

        var response = await SupabaseClient.Instance.CallHelloWorld();
        serverResponseOutputViewer.text = response;
        Debug.Log(response);
        executeFunctionButton.interactable = true;
    }

    public async void CallHelloWorldFunctionButton()
    {
        string result = await CallHelloWorldBOLT();
    }

    public async Task<string> CallHelloWorldBOLT()
    {
        using (UnityWebRequest request = new UnityWebRequest($"{_supabaseUrl}/functions/v1/hello-world2", "POST"))
        {
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("apikey", _supabaseAnonKey);
            request.SetRequestHeader("Content-Type", "application/json");


            var operation = request.SendWebRequest();
            while (!operation.isDone)
                await Task.Yield();

            if (request.result == UnityWebRequest.Result.Success)
            {
                return request.downloadHandler.text;
            }
            else
            {
                Debug.LogError($"Error: {request.error}");
                return $"Error: {request.error}";
            }
        }
    }

    private IEnumerator CallHelloWorldFunctionCHATGPT()
    {
        // The URL for the edge function
        string functionUrl = $"{_supabaseUrl}/functions/v1/hello-world2";

        // Create the JSON data you want to send in the body
        string jsonData = "{\"name\":\"Functions\"}";

        // Create a UnityWebRequest for POST
        UnityWebRequest request = new UnityWebRequest(functionUrl, "POST");

        // Set the body and content type
        byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonData);
        request.uploadHandler = new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = new DownloadHandlerBuffer();

        // Set request headers
        request.SetRequestHeader("Authorization", $"Bearer {_supabaseAnonKey}");
        request.SetRequestHeader("Content-Type", "application/json");

        Debug.Log($"Function URL: {functionUrl}");
        Debug.Log($"Headers: Authorization=Bearer {_supabaseAnonKey}");

        // Send the request
        yield return request.SendWebRequest();

        // Handle the response
        if (request.result == UnityWebRequest.Result.Success)
        {
            Debug.Log($"Success: {request.downloadHandler.text}");
        }
        else
        {
            Debug.LogError($"Error: {request.error}");
        }
    }


    /* private IEnumerator CallHelloWorldFunction()
     {
         // The URL for the edge function
         string functionUrl = $"{_supabaseUrl}/functions/v1/hello-world2";

         // Set up the web request
         UnityWebRequest request = new UnityWebRequest(functionUrl, "GET");
         request.downloadHandler = new DownloadHandlerBuffer();

         // Add the Supabase key to the header
         request.SetRequestHeader("apikey", _supabaseKey);
         request.SetRequestHeader("Authorization", $"Bearer {_supabaseKey}");

         Debug.Log($"Function URL: {functionUrl}");
         Debug.Log($"Headers: apikey={_supabaseKey}");

         // Send the request
         yield return request.SendWebRequest();

         // Handle the response
         if (request.result == UnityWebRequest.Result.Success)
         {
             Debug.Log($"Success: {request.downloadHandler.text}");
         }
         else
         {
             Debug.LogError($"Error: {request.error}");
         }
     }*/

    public void sendCurrentMapToServer()
    {
        // Save the map to the server
        TilemapData tilemapData = _tilemapManager.ExportTilemapToBytes();
        List<GamePieceInfo> initPieceInfo= _gameMaster.ConvertGameStateToList();
        Task.Run(async () => await SaveGameInitialStateToServer (tilemapData, "testMap3", _tilemapManager.gridWidth, _tilemapManager.gridHeight, initPieceInfo));

    }

    public async Task SaveGameInitialStateToServer(object mapObject, string mapName, int width, int height, object init_piece_data)
    {
        if (width <= 0 || height <= 0)
        {
            Debug.LogError("Width and height must be greater than 0.");
            return;
        }

        // Serialize the map object using MessagePack
        byte[] serializedMapData;
        try
        {
            serializedMapData = MessagePackSerializer.Serialize(mapObject);
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error serializing map data: {ex.Message}");
            return;
        }

        // Serialize the game state using MessagePack
        byte[] serializedPieceData;
        try
        {
            serializedPieceData = MessagePackSerializer.Serialize(init_piece_data);
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error serializing game piece data: {ex.Message}");
            return;
        }

        // Prepare the payload
        var payload = new
        {
            name = mapName,
            data = Convert.ToBase64String(serializedMapData),
            width = width,
            height = height,
            init_piece_data = Convert.ToBase64String(serializedPieceData)
        };
        string jsonPayload = JsonUtility.ToJson(payload);

        // Construct the request
        string url = $"{_supabaseUrl}/functions/v1/save-map";
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
                Debug.Log("Map saved successfully.");
                serverResponseOutputViewer.text = $"Map saved successfully: \n Response:{request.downloadHandler.text}";
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
    }
}
