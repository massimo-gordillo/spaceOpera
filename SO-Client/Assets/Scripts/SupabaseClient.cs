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

    private protected string _supabaseUrl = "https://ezmafonauvkpalwjpaer.supabase.co";
    private protected string _supabaseAnonKey = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6ImV6bWFmb25hdXZrcGFsd2pwYWVyIiwicm9sZSI6ImFub24iLCJpYXQiOjE3MzYxMDE5NjUsImV4cCI6MjA1MTY3Nzk2NX0.i3E8rSHoMV1ThEWctZNU25oV_DfTjBu_jsQXQZiLO0s";

    //private protected string _supabaseUrl = "http://127.0.0.1:54321";
    //private protected string _supabaseAnonKey = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZS1kZW1vIiwicm9sZSI6ImFub24iLCJleHAiOjE5ODM4MTI5OTZ9.CRXP1A7WOeoJeXxjNni43kdQwgnWNReilDMblYTn_I0";


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

    public async Task<T> SendRequest<T>(string endpoint, HttpMethod method, object data = null)
    {
        endpoint = _supabaseUrl + endpoint;
        try
        {
            using (var request = new HttpRequestMessage(method, endpoint))
            {
                // Add Authorization header
                request.Headers.Add("Authorization",
                    _accessToken != null ? $"Bearer {_accessToken}" : $"Bearer {_supabaseAnonKey}");

                // Serialize data if provided
                if (data != null)
                {
                    if (data is HttpContent content)
                    {
                        request.Content = content; // Use provided HttpContent directly
                    }
                    else
                    {
                        var json = JsonConvert.SerializeObject(data);
                        request.Content = new StringContent(json, Encoding.UTF8, "application/json");
                    }
                }

                Debug.Log($"Sending Request..."); 
                // Send the request and handle response
                var response = await _httpClient.SendAsync(request);
                var responseBody = await response.Content.ReadAsStringAsync();

                Debug.Log($"Response Body: {responseBody}"); // Log the response body

                if (!response.IsSuccessStatusCode)
                {
                    Debug.LogError($"Request failed: {responseBody}");
                    throw new Exception($"Request failed: {response.StatusCode}");
                }

                // Handle plain text responses
                if (typeof(T) == typeof(string))
                {
                    return (T)(object)responseBody;
                }

                return JsonConvert.DeserializeObject<T>(responseBody);
            }
        }
        catch (Exception ex)
        {
            Debug.LogError($"Request error: {ex.Message}");
            throw;
        }
    }



}
