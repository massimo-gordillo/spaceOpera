using System;
using System.Collections.Generic;
using MessagePack;

[Serializable]
public struct GamePieceInfo
{
    public byte x;          // X-coordinate on the grid
    public byte y;          // Y-coordinate on the grid
    public byte typeNum;    // Type of the unit/structure. Structures are 200+
    public byte playerID;   // Player ID (0 for neutral, 1 for player 1, etc.)
    public byte healthVal;  // % health the unit has, number 1-200 for structure health
}

public class NetworkingManager
{
    // Start is called before the first frame update
    void Start()
    {

    }

    // Convert a list of game pieces to a byte array for network transmission
    public byte[] SerializeGameState(List<GamePieceInfo> gameStateList)
    {
        return MessagePackSerializer.Serialize(gameStateList);
    }

    // Convert a byte array received over the network back to a list of game pieces
    public List<GamePieceInfo> DeserializeGameState(byte[] data)
    {
        return MessagePackSerializer.Deserialize<List<GamePieceInfo>>(data);
    }
}
