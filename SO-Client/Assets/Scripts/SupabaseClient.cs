using System;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class SupabaseClient
{
    private static SupabaseClient _instance;
    private readonly HttpClient _httpClient;
    private string _accessToken;

    private protected string _supabaseUrl = "http://127.0.0.1:54321";
    private protected string _supabaseAnonKey = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZS1kZW1vIiwicm9sZSI6ImFub24iLCJleHAiOjE5ODM4MTI5OTZ9.CRXP1A7WOeoJeXxjNni43kdQwgnWNReilDMblYTn_I0";
        

    public static SupabaseClient Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = new SupabaseClient();
            }
            return _instance;
        }
    }

    private SupabaseClient()
    {
        _httpClient = new HttpClient();
        _httpClient.DefaultRequestHeaders.Add("apikey", _supabaseAnonKey);
        // Add the User-Agent header
        _httpClient.DefaultRequestHeaders.Add("User-Agent", "UnityClient/1.0");
        _httpClient.BaseAddress = new Uri(_supabaseUrl);
    }

    public async Task<bool> SignInWithEmail(string email, string password)
    {
        try
        {
            var payload = new
            {
                email = email,
                password = password
            };

            var content = new StringContent(
                JsonConvert.SerializeObject(payload),
                Encoding.UTF8,
                "application/json"
            );

            var response = await _httpClient.PostAsync("/auth/v1/token?grant_type=password", content);
            var responseBody = await response.Content.ReadAsStringAsync();

            if (response.IsSuccessStatusCode)
            {
                var json = JObject.Parse(responseBody);
                _accessToken = json["access_token"].ToString();
                Debug.Log($"Access token: {_accessToken}");
                _httpClient.DefaultRequestHeaders.Remove("Authorization");
                _httpClient.DefaultRequestHeaders.Add("Authorization", $"Bearer {_accessToken}");
                //_httpClient.DefaultRequestHeaders.Add("Authorization", $"Bearer {_supabaseAnonKey}");

                return true;
            }

            Debug.LogError($"Authentication failed: {responseBody}");
            return false;
        }
        catch (Exception ex)
        {
            Debug.LogError($"Authentication error: {ex.Message}");
            return false;
        }
    }

    public async Task<string> CallHelloWorld()
    {
        //_httpClient.DefaultRequestHeaders.Add("Content-Type", "application/json");
        try
        {

            var payload = new
            {
                name = "Functions"
            };

            var content = new StringContent(
            JsonConvert.SerializeObject(payload),
            Encoding.UTF8,
            "application/json"
            );

            var response = await _httpClient.PostAsync("/functions/v1/hello-world2", content);
            var responseBody = await response.Content.ReadAsStringAsync();

            if (response.IsSuccessStatusCode)
            {
                return responseBody;
            }

            Debug.LogError($"Hello World call failed: {responseBody}");
            Debug.LogError($"Response headers: {response.Headers.ToString()}");

            return $"Error: {responseBody}";
        }
        catch (Exception ex)
        {
            Debug.LogError($"Hello World call error: {ex.Message}");
            return $"Error: {ex.Message}";
        }
    }
}