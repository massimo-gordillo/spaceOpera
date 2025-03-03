using System;
using System.Collections.Generic;
using UnityEngine;

#if UNITY_IOS
using Unity.Notifications.iOS;
#endif

#if UNITY_ANDROID
using Unity.Notifications.Android;
#endif

public class SupabasePushNotificationHandler : MonoBehaviour
{
    private SupabaseNotificationService _notificationService;
    private string _deviceToken;

    // Singleton instance
    private static SupabasePushNotificationHandler _instance;
    public static SupabasePushNotificationHandler Instance
    {
        get
        {
            if (_instance == null)
            {
                GameObject go = new GameObject("PushNotificationHandler");
                _instance = go.AddComponent<PushNotificationHandler>();
                DontDestroyOnLoad(go);
            }
            return _instance;
        }
    }

    void Awake()
    {
        // Ensure only one instance exists
        if (_instance != null && _instance != this)
        {
            Destroy(gameObject);
            return;
        }

        _instance = this;
        DontDestroyOnLoad(gameObject);

        // Get notification service
        _notificationService = NotificationService.Instance;

        // Initialize push notifications
        InitializePushNotifications();
    }

    private void InitializePushNotifications()
    {
#if UNITY_IOS
        // Request authorization
        iOSNotificationCenter.RequestAuthorization(
            AuthorizationOption.Alert | AuthorizationOption.Badge | AuthorizationOption.Sound,
            (granted, error) =>
            {
                if (granted)
                {
                    Debug.Log("iOS notification authorization granted");
                    
                    // Register for remote notifications
                    UnityEngine.iOS.NotificationServices.RegisterForNotifications(
                        UnityEngine.iOS.NotificationType.Alert | 
                        UnityEngine.iOS.NotificationType.Badge | 
                        UnityEngine.iOS.NotificationType.Sound);
                }
                else
                {
                    Debug.LogWarning($"iOS notification authorization denied: {error}");
                }
            });
            
        // Set notification categories
        var turnCategory = new iOSNotificationCategory("turn_notification", new List<iOSNotificationAction>
        {
            new iOSNotificationAction("view_match", "View Match", iOSNotificationActionOptions.Foreground)
        });
        
        iOSNotificationCenter.SetNotificationCategories(new List<iOSNotificationCategory> { turnCategory });
        
        // Register for device token
        iOSNotificationCenter.OnRemoteNotificationReceived += OnRemoteNotificationReceived;
        
        // Get device token
        _deviceToken = UnityEngine.iOS.NotificationServices.deviceToken;
        if (!string.IsNullOrEmpty(_deviceToken))
        {
            RegisterDeviceToken(_deviceToken, "ios");
        }
#endif

#if UNITY_ANDROID
        // Create notification channel
        var channel = new AndroidNotificationChannel()
        {
            Id = "turn_notifications",
            Name = "Turn Notifications",
            Importance = Importance.High,
            Description = "Notifications for when it's your turn in a game",
        };
        
        AndroidNotificationCenter.RegisterNotificationChannel(channel);
        
        // Register for token
        AndroidNotificationCenter.OnNotificationReceived += OnAndroidNotificationReceived;
        
        // Get device token
        Firebase.Messaging.FirebaseMessaging.TokenReceived += OnTokenReceived;
        Firebase.Messaging.FirebaseMessaging.MessageReceived += OnMessageReceived;
#endif
    }

#if UNITY_IOS
    private void OnRemoteNotificationReceived(iOSNotification notification)
    {
        Debug.Log("Received remote notification");
        
        // Extract data from notification
        var userInfo = notification.UserInfo;
        var payload = new Dictionary<string, string>();
        
        foreach (var key in userInfo.Keys)
        {
            payload[key] = userInfo[key].ToString();
        }
        
        // Handle notification
        _notificationService.HandlePushNotification(payload);
    }
#endif

#if UNITY_ANDROID
    private void OnAndroidNotificationReceived(AndroidNotificationIntentData data)
    {
        Debug.Log("Received Android notification");
        
        // Extract data from notification
        var notification = data.Notification;
        var payload = new Dictionary<string, string>();
        
        // Add all extras to payload
        foreach (var key in notification.IntentData.Keys)
        {
            payload[key] = notification.IntentData[key];
        }
        
        // Handle notification
        _notificationService.HandlePushNotification(payload);
    }
    
    private void OnTokenReceived(object sender, Firebase.Messaging.TokenReceivedEventArgs token)
    {
        Debug.Log($"Received FCM token: {token.Token}");
        _deviceToken = token.Token;
        RegisterDeviceToken(_deviceToken, "android");
    }
    
    private void OnMessageReceived(object sender, Firebase.Messaging.MessageReceivedEventArgs e)
    {
        Debug.Log("Received FCM message");
        
        // Extract data from message
        var payload = new Dictionary<string, string>();
        
        // Add data fields
        foreach (var key in e.Message.Data.Keys)
        {
            payload[key] = e.Message.Data[key];
        }
        
        // Handle notification
        _notificationService.HandlePushNotification(payload);
    }
#endif

    private async void RegisterDeviceToken(string token, string platform)
    {
        try
        {
            Debug.Log($"Registering device token for {platform}");
            await _notificationService.RegisterForPushNotificationsAsync(token, platform);
        }
        catch (Exception ex)
        {
            Debug.LogError($"Failed to register device token: {ex.Message}");
        }
    }

    private async void OnApplicationQuit()
    {
        // Unsubscribe from turn changes
        await _notificationService.UnsubscribeFromTurnChangesAsync();
    }
}