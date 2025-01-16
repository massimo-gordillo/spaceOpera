using System;
using UnityEngine;

[System.Serializable]
public class GamePieceInfo
{
    public byte x;
    public byte y;
    public byte typeNum; // Type of the unit/structure. Structures are 200+
    public byte playerID; // Player ID (0 for neutral, 1 for player 1, etc.)
    public byte healthVal; // % health the unit has, number 1-200 for structure health

    // Constructor to initialize GamePieceInfo
    public GamePieceInfo(byte x, byte y, byte typeNum, byte playerID, byte healthVal)
    {
        this.x = x;
        this.y = y;
        this.typeNum = typeNum;
        this.playerID = playerID;
        this.healthVal = healthVal;
    }

    // Convert the struct to a byte array for JSON serialization
    public byte[] ToByteArray()
    {
        return new byte[5] { x, y, typeNum, playerID, healthVal };
    }

    // Convert the byte array to base64 for JSON serialization
    public string ToBase64String()
    {
        byte[] byteArray = ToByteArray();
        return Convert.ToBase64String(byteArray);
    }

    // Convert a base64 string back to a GamePieceInfo object
    public static GamePieceInfo FromBase64String(string base64String)
    {
        byte[] byteArray = Convert.FromBase64String(base64String);
        return new GamePieceInfo(byteArray[0], byteArray[1], byteArray[2], byteArray[3], byteArray[4]);
    }
}

//MessagePack version of GamePieceInfo

/*using System;
using System.Collections.Generic;
using MessagePack;

[MessagePackObject]
public struct GamePieceInfo
{
    [Key(0)]
    public byte x;
    [Key(1)]
    public byte y;
    [Key(2)]
    public byte typeNum; // Type of the unit/structure. Structures are 200+
    [Key(3)]
    public byte playerID; // Player ID (0 for neutral, 1 for player 1, etc.)
    [Key(4)]
    public byte healthVal; // % health the unit has, number 1-200 for structure health
}*/