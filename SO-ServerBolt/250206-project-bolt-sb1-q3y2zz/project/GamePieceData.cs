using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class GamePiece
{
    public int x;
    public int y;
    public int typeId;      // Unit type or structure type
    public int ownerId;     // Player ID who owns this piece
    public int health;      // Current health
    public bool isUnit;     // True if unit, false if structure
}

[Serializable]
public class InitialGameState
{
    public string mapId;
    public List<GamePiece> pieces;
    public int width;
    public int height;

    public string ToJson()
    {
        return JsonUtility.ToJson(this);
    }
}

public static class GameStateConverter
{
    public static (JsonObject unitGrid, JsonObject structureGrid) ConvertToGrids(List<GamePiece> pieces, int width, int height)
    {
        var unitGrid = new JsonObject[height][];
        var structureGrid = new JsonObject[height][];

        // Initialize empty grids
        for (int y = 0; y < height; y++)
        {
            unitGrid[y] = new JsonObject[width];
            structureGrid[y] = new JsonObject[width];
        }

        // Place pieces in appropriate grids
        foreach (var piece in pieces)
        {
            var pieceData = new JsonObject();
            pieceData.Add("type", piece.typeId);
            pieceData.Add("owner", piece.ownerId);
            pieceData.Add("health", piece.health);

            if (piece.isUnit)
                unitGrid[piece.y][piece.x] = pieceData;
            else
                structureGrid[piece.y][piece.x] = pieceData;
        }

        return (unitGrid, structureGrid);
    }
}