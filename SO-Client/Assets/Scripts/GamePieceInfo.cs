using System;
using System.Text;
using UnityEngine;

[System.Serializable]
public class GamePieceInfo
{
    public byte x;
    public byte y;
    public byte typeNum; // Type of the unit/structure. Structures are 200+
    public byte playerID; // Player ID (0 for neutral, 1 for player 1, etc.)
    public byte healthVal; // % health the unit has, number 1-200 for structure health
    public string sequenceId; // Optional stable ID for scripted/tutorial units.

    // Constructor to Initialize GamePieceInfo
    public GamePieceInfo(byte x, byte y, byte typeNum, byte playerID, byte healthVal, string sequenceId = null)
    {
        this.x = x;
        this.y = y;
        this.typeNum = typeNum;
        this.playerID = playerID;
        this.healthVal = healthVal;
        this.sequenceId = string.IsNullOrWhiteSpace(sequenceId) ? null : sequenceId;
    }

    // Convert the struct to a byte array for JSON serialization
    public byte[] ToByteArray()
    {
        if (string.IsNullOrWhiteSpace(sequenceId))
        {
            return new byte[5] { x, y, typeNum, playerID, healthVal };
        }

        

        byte[] idBytes = Encoding.UTF8.GetBytes(sequenceId);

        if (idBytes.Length > ushort.MaxValue)
            throw new ArgumentException($"sequenceId too long: {idBytes.Length} bytes");

        byte[] lengthBytes = BitConverter.GetBytes((ushort)idBytes.Length);
        byte[] buffer = new byte[7 + idBytes.Length];
        buffer[0] = x;
        buffer[1] = y;
        buffer[2] = typeNum;
        buffer[3] = playerID;
        buffer[4] = healthVal;
        buffer[5] = lengthBytes[0];
        buffer[6] = lengthBytes[1];
        Array.Copy(idBytes, 0, buffer, 7, idBytes.Length);
        return buffer;
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
        if (byteArray.Length < 5)
        {
            throw new ArgumentException("Invalid GamePieceInfo byte array. Expected at least 5 bytes.");
        }

        if (byteArray.Length == 5)
        {
            return new GamePieceInfo(byteArray[0], byteArray[1], byteArray[2], byteArray[3], byteArray[4]);
        }

        if (byteArray.Length < 7)
        {
            return new GamePieceInfo(byteArray[0], byteArray[1], byteArray[2], byteArray[3], byteArray[4]);
        }

        ushort idLength = BitConverter.ToUInt16(byteArray, 5);
        if (idLength == 0 || byteArray.Length < 7 + idLength)
        {
            return new GamePieceInfo(byteArray[0], byteArray[1], byteArray[2], byteArray[3], byteArray[4]);
        }

        string id = Encoding.UTF8.GetString(byteArray, 7, idLength);
        return new GamePieceInfo(byteArray[0], byteArray[1], byteArray[2], byteArray[3], byteArray[4], id);
    }
}