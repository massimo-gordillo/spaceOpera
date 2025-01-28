using System;
using UnityEngine;
using System.IO;

[System.Serializable]
public class TilemapData
{
    public int Width;
    public int Height;
    public string tileBytesBase64;

    public byte[] TileBytes
    {
        get
        {
            try
            {
                return Convert.FromBase64String(tileBytesBase64);
            }
            catch (Exception ex)
            {
                Debug.LogError($"TileBytes error: {ex.Message}");
                return null;
            }
        }
        set => tileBytesBase64 = Convert.ToBase64String(value);
    }

    public TilemapData(int width, int height, byte[] tileBytes)
    {
        Width = width;
        Height = height;
        TileBytes = tileBytes;
    }

    public TilemapData() { }


    // Serialize method to convert TilemapData to byte[] for storage (using JSON)
    public static byte[] Serialize(TilemapData data)
    {
        // Convert to JSON string and then to byte array
        string json = JsonUtility.ToJson(data);
        return System.Text.Encoding.UTF8.GetBytes(json);
    }

    // Deserialize method to convert byte[] back to TilemapData object (using JSON)
    public static TilemapData Deserialize(byte[] data)
    {
        // Convert byte array to JSON string and then to TilemapData object
        string json = System.Text.Encoding.UTF8.GetString(data);
        return JsonUtility.FromJson<TilemapData>(json);
    }

    // Optional: Convert byte array to base64 for JSON serialization
    public string TileBytesBase64 => Convert.ToBase64String(TileBytes);

    // Optional: Method to convert TileBytesBase64 back to byte array
    public void SetTileBytesFromBase64(string base64)
    {
        TileBytes = Convert.FromBase64String(base64);
    }
}

//Messagepack implementation:

/*using MessagePack;

[MessagePackObject]
public class TilemapData
{
*//*    [IgnoreMember] // This ensures RawData isn't part of serialized data
    public byte[] RawData { get; set; }*//*

    [Key(0)]
    public int Width { get; set; }

    [Key(1)]
    public int Height { get; set; }

    [Key(2)]
    public byte[] TileBytes { get; set; }

    // Constructor for easy instantiation
    public TilemapData(int width, int height, byte[] tileBytes)//, byte[] rawData = null)
    {
        Width = width;
        Height = height;
        TileBytes = tileBytes;
        //RawData = rawData ?? new byte[0];
    }

        // Serialize method to convert TilemapData to byte[] for storage
        public static byte[] SerializeMP(TilemapData data)
        {
            return MessagePackSerializer.Serialize(data);
        }

        // Deserialize method to convert byte[] back to TilemapData object
        public static TilemapData DeserializeMP(byte[] data)
        {
            return MessagePackSerializer.Deserialize<TilemapData>(data);
        }

    // Optional: Convert byte array to base64 for JSON serialization
    public string TileBytesBase64 => System.Convert.ToBase64String(TileBytes);

    // Optional: Method to convert TileBytesBase64 back to byte array
    public void SetTileBytesFromBase64(string base64)
    {
        TileBytes = System.Convert.FromBase64String(base64);
    }
}
*/