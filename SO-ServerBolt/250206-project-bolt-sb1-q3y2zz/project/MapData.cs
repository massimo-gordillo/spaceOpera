using System;
using UnityEngine;
using System.Text.Json;

[Serializable]
public class GridCell
{
    public int type;        // Terrain type
    public int elevation;   // Height/elevation
    public int movement;    // Movement cost
    // Add other cell properties as needed
}

[Serializable]
public class MapDataPayload
{
    public string name;
    public GridCell[][] gridData;
    public int width;
    public int height;
    
    public string ToJson()
    {
        return JsonUtility.ToJson(this);
    }
}

public static class MapDataConverter
{
    public static MapDataPayload ConvertFromBytes(string name, byte[] rawGridData, int width, int height)
    {
        var gridData = new GridCell[height][];
        for (int y = 0; y < height; y++)
        {
            gridData[y] = new GridCell[width];
            for (int x = 0; x < width; x++)
            {
                int index = (y * width) + x;
                if (index < rawGridData.Length)
                {
                    gridData[y][x] = new GridCell
                    {
                        type = rawGridData[index],
                        // Add other conversions as needed
                    };
                }
            }
        }

        return new MapDataPayload
        {
            name = name,
            gridData = gridData,
            width = width,
            height = height
        };
    }
}