using UnityEngine;
using PlayFab;
using PlayFab.ClientModels;
using System;
using System.IO;

public class PlayFabManager : MonoBehaviour
{
    public void Start()
    {
        // Set the Title Id for your PlayFab project
        PlayFabSettings.staticSettings.TitleId = "E0C5A";
        LoginWithCustomID(); // Call the login method


    }

    void LoginWithCustomID()
    {
        var request = new LoginWithCustomIDRequest
        {
            CustomId = System.Guid.NewGuid().ToString(), // Use a unique ID for testing
            CreateAccount = true
        };
        PlayFabClientAPI.LoginWithCustomID(request, OnLoginSuccess, OnLoginFailure);
    }

    void OnLoginSuccess(LoginResult result)
    {
        Debug.Log("PlayFab Login Successful!");
        SendTilemapToServer("Assets/InitializationData/Maps/Map3/Map3Tilemap.dat");
    }

    void OnLoginFailure(PlayFabError error)
    {
        Debug.LogError("PlayFab Login Failed: " + error.GenerateErrorReport());
    }

    public void SendTilemapToServer(string filePath)
    {
        // Read the file and encode it as Base64
        byte[] fileBytes = File.ReadAllBytes(filePath);
        string base64Content = Convert.ToBase64String(fileBytes);

        // Prepare the CloudScript request
        ExecuteCloudScriptRequest request = new ExecuteCloudScriptRequest
        {
            FunctionName = "uploadTerrainFile",
            FunctionParameter = new
            {
                fileName = Path.GetFileName(filePath),
                fileContent = base64Content
            }
        };

        PlayFabClientAPI.ExecuteCloudScript(request, OnSuccess, OnError);
    }

    private void OnSuccess(ExecuteCloudScriptResult result)
    {
        Debug.Log("Terrain file uploaded successfully.");

        // Parse and log the server response
        if (result.FunctionResult != null)
        {
            string jsonResponse = JsonUtility.ToJson(result.FunctionResult);
            Debug.Log($"Server Response: {jsonResponse}");

            // Optionally parse specific properties if the JSON structure is known
            var responseObject = JsonUtility.FromJson<UploadResponse>(jsonResponse);
            if (responseObject != null)
            {
                Debug.Log($"Message: {responseObject.message}");
                Debug.Log($"File Name: {responseObject.fileName}");
                Debug.Log($"File URL: {responseObject.fileUrl}");
                Debug.Log($"Storage Location: {responseObject.storageLocation}");
            }
        }
        else
        {
            Debug.LogWarning("No response returned from the server.");
        }
    }

    private void OnError(PlayFabError error)
    {
        Debug.LogError($"Failed to upload file: {error.GenerateErrorReport()}");
    }

    // Define a class to parse the server response
    [System.Serializable]
    private class UploadResponse
    {
        public string message;
        public string fileName;
        public string fileUrl;
        public string storageLocation;
    }

}
