using System;
using System.Threading.Tasks;
using Supabase;
using Supabase.Gotrue;
using Postgrest.Models;
using Postgrest.Attributes;

public class PlayerDevice : BaseModel
{
    [PrimaryKey("id", false)]
    public Guid Id { get; set; }

    [Column("player_id")]
    public Guid PlayerId { get; set; }

    [Column("device_token")]
    public string DeviceToken { get; set; }

    [Column("platform")]
    public string Platform { get; set; }

    [Column("created_at")]
    public DateTime CreatedAt { get; set; }

    [Column("updated_at")]
    public DateTime UpdatedAt { get; set; }
}

public class DeviceRegistrationService
{
    private readonly Supabase.Client _supabaseClient;

    public DeviceRegistrationService(string supabaseUrl, string supabaseKey)
    {
        var options = new SupabaseOptions
        {
            AutoRefreshToken = true,
            AutoConnectRealtime = true
        };

        _supabaseClient = new Supabase.Client(supabaseUrl, supabaseKey, options);
    }

    public async Task InitializeAsync()
    {
        await _supabaseClient.InitializeAsync();
    }

    public async Task RegisterDeviceAsync(string deviceToken, string platform)
    {
        // Validate platform
        if (platform != "ios" && platform != "android")
            throw new ArgumentException("Platform must be either 'ios' or 'android'", nameof(platform));

        // Get current user
        var session = _supabaseClient.Auth.CurrentSession;
        if (session == null)
            throw new InvalidOperationException("User must be authenticated to register a device");

        var playerId = new Guid(session.User.Id);

        try
        {
            // Check if device is already registered
            var existing = await _supabaseClient.From<PlayerDevice>()
                .Where(d => d.PlayerId == playerId && d.DeviceToken == deviceToken)
                .Single();

            if (existing != null)
            {
                // Update platform if it changed
                if (existing.Platform != platform)
                {
                    existing.Platform = platform;
                    existing.UpdatedAt = DateTime.UtcNow;
                    await _supabaseClient.From<PlayerDevice>().Update(existing);
                }
                return;
            }

            // Register new device
            var device = new PlayerDevice
            {
                PlayerId = playerId,
                DeviceToken = deviceToken,
                Platform = platform,
                CreatedAt = DateTime.UtcNow,
                UpdatedAt = DateTime.UtcNow
            };

            await _supabaseClient.From<PlayerDevice>().Insert(device);
        }
        catch (Exception ex)
        {
            throw new Exception("Failed to register device", ex);
        }
    }

    public async Task UnregisterDeviceAsync(string deviceToken)
    {
        //var session = await _supabaseClient.Auth.CurrentSession;
        var session = _supabaseClient.Auth.CurrentSession;
        if (session == null)
            throw new InvalidOperationException("User must be authenticated to unregister a device");

        var playerId = new Guid(session.User.Id);

        try
        {
            await _supabaseClient.From<PlayerDevice>()
                .Where(d => d.PlayerId == playerId && d.DeviceToken == deviceToken)
                .Delete();
        }
        catch (Exception ex)
        {
            throw new Exception("Failed to unregister device", ex);
        }
    }
}

// Example usage:
public class Example
{
    public static async Task Main()
    {
        var service = new DeviceRegistrationService(
            Environment.GetEnvironmentVariable("SUPABASE_URL"),
            Environment.GetEnvironmentVariable("SUPABASE_ANON_KEY")
        );

        await service.InitializeAsync();

        // Register a device
        try
        {
            await service.RegisterDeviceAsync("device-token-123", "ios");
            Console.WriteLine("Device registered successfully");
        }
        catch (Exception ex)
        {
            Console.WriteLine($"Failed to register device: {ex.Message}");
        }

        // Unregister a device
        try
        {
            await service.UnregisterDeviceAsync("device-token-123");
            Console.WriteLine("Device unregistered successfully");
        }
        catch (Exception ex)
        {
            Console.WriteLine($"Failed to unregister device: {ex.Message}");
        }
    }
}