using System;
using UnityEngine;

[System.Serializable]
public class TilemapData
{
    public int Width;
    public int Height;
    public byte[] TileBytes; //length = Width * Height

    public TilemapData(int width, int height, byte[] tileBytes)
    {
        Width = width;
        Height = height;
        TileBytes = tileBytes;
    }

    public TilemapData() { }

    // Convert byte array to int array when needed
    public int[] GetTileBytesInt()
    {
        if (TileBytes != null)
        {
            return Array.ConvertAll(TileBytes, b => (int)b);
        }
        else
        {
            Debug.Log("TileBytes is null");
            return null;
        }
    }

    // Serialize method to convert TilemapData to byte[] for storage (using JSON)
    public static byte[] Serialize(TilemapData data)
    {
        string json = JsonUtility.ToJson(data);
        return System.Text.Encoding.UTF8.GetBytes(json);
    }

    // Deserialize method to convert byte[] back to TilemapData object (using JSON)
    public static TilemapData Deserialize(byte[] data)
    {
        string json = System.Text.Encoding.UTF8.GetString(data);
        return JsonUtility.FromJson<TilemapData>(json);
    }

    // Convert back to byte array
    public byte[] GetTileBytes()
    {
        return TileBytes;
    }
}

[System.Serializable]
public class TileBytesWrapper
{
    public int[] TileBytes;
}



