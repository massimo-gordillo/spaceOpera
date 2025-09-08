using System;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GameStateData
{
    public TilemapData TilemapData;
    public List<GamePieceInfo> GamePieceList;

    public GameStateData(TilemapData tilemapData, List<GamePieceInfo> gamePieceList)
    {
        TilemapData = tilemapData;
        GamePieceList = gamePieceList;
    }

    public GameStateData() { }

/*    // Convert byte array to int array when needed
    public int[] GetTilemapDataInt()
    {
        if (TilemapData != null)
        {
            return Array.ConvertAll(TilemapData, b => (int)b);
        }
        else
        {
            Debug.Log("TilemapData is null");
            return null;
        }
    }*/

    // Serialize method to convert GameStateData to byte[] for storage (using JSON)
    public static byte[] Serialize(GameStateData data)
    {
        string json = JsonUtility.ToJson(data);
        return System.Text.Encoding.UTF8.GetBytes(json);
    }

    // Deserialize method to convert byte[] back to GameStateData object (using JSON)
    public static GameStateData Deserialize(byte[] data)
    {
        string json = System.Text.Encoding.UTF8.GetString(data);
        return JsonUtility.FromJson<GameStateData>(json);
    }

    // Convert back to byte array
    public TilemapData GetTilemapData()
    {
        return TilemapData;
    }

    public List<GamePieceInfo> GetGamePieceList()
    {
        return GamePieceList;
    }
}

[System.Serializable]
public class GameStateWrapper
{
    public int[] TilemapData;
    public GamePieceInfo[] GamePieceList;
}



