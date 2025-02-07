using UnityEngine;
using UnityEngine.Networking;
using System;
using System.Threading.Tasks;

public class MapClient : MonoBehaviour
{
    private const string API_URL = "http://your-server:3000/maps";

    [System.Serializable]
    private class MapSubmitRequest
    {
        public string name;
        public string gridData;
        public int width;
        public int height;
        public string initPieceData;
        public double compressionMethod;
    }

    public async Task<bool> SubmitMap(string name, byte[] gridData, int width, int height, byte[] initPieceData, double compressionMethod)
    {
        try
        {
            var request = new MapSubmitRequest
            {
                name = name,
                gridData = Convert.ToBase64String(gridData),
                width = width,
                height = height,
                initPieceData = Convert.ToBase64String(initPieceData),
                compressionMethod = compressionMethod
            };

            string jsonBody = JsonUtility.ToJson(request);
            
            using var webRequest = new UnityWebRequest(API_URL, "POST");
            byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonBody);
            webRequest.uploadHandler = new UploadHandlerRaw(bodyRaw);
            webRequest.downloadHandler = new DownloadHandlerBuffer();
            webRequest.SetRequestHeader("Content-Type", "application/json");

            var operation = webRequest.SendWebRequest();
            
            while (!operation.isDone)
                await Task.Yield();

            if (webRequest.result == UnityWebRequest.Result.Success)
            {
                Debug.Log("Map submitted successfully!");
                return true;
            }
            else
            {
                Debug.LogError($"Failed to submit map: {webRequest.error}");
                return false;
            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error submitting map: {ex.Message}");
            return false;
        }
    }
}