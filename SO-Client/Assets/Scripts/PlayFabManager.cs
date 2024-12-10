using UnityEngine;
using PlayFab;
using PlayFab.ClientModels;

public class PlayFabManager : MonoBehaviour
{
    void Start()
    {
        // Set the Title Id for your PlayFab project
        PlayFabSettings.staticSettings.TitleId = "E0C5A"; // Replace with your actual Title Id
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
    }

    void OnLoginFailure(PlayFabError error)
    {
        Debug.LogError("PlayFab Login Failed: " + error.GenerateErrorReport());
    }
}
