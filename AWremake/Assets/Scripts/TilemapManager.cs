using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Tilemaps;
using MessagePack;

public class TilemapManager : MonoBehaviour
{
    public Tilemap tilemap; // Reference to the Tilemap component

    public List<TileBase> tileAssets; // List of available Tile assets
    private Dictionary<byte, TileBase> byteToTileDictionary; // Map byte values to Tile assets
    private Dictionary<TileBase, byte> tileToByteDictionary; // Map Tile assets to byte values

    public byte[] tilemapByteArray;

    public TileBase baseEdgeTile;

    public int gridWidth;
    public int gridHeight;
    public int gridTrimOffset;
    public int gridWidthWithTrim;
    public int gridHeightWithTrim;

    public void initialize()
    {
        // Log the tilemap reference
        Debug.Log($"Initializing TilemapManager with tilemap: {tilemap.name}");

        gridWidth = 30;
        gridHeight = 20;
        gridTrimOffset = 5;
        gridWidthWithTrim = gridWidth + gridTrimOffset * 2;
        gridHeightWithTrim = gridHeight + gridTrimOffset * 2;

        foreach (TileBase t in Resources.LoadAll<TileBase>("Tilemap/Tiles/Tilemapv2"))
            tileAssets.Add(t);

        if (tileAssets == null || tileAssets.Count == 0)
        {
            Debug.LogError("TileAssets list is not assigned or empty.");
            return;
        }

        foreach (TileBase tile in tileAssets)
        {
            if (tile == null)
            {
                Debug.LogError("One of the TileAssets is null. Please check the assignments.");
                return;
            }
        }

        InitializeTileDictionaries();
        SaveTilemapToFile("myTilemap.dat");
        LoadTilemapFromFile("myTilemap.dat");
        //byte[] data = ExportTilemapToBytes(gridWidth, gridHeight);
        //ImportTilemapFromBytes(data, gridWidth, gridHeight);
    }

    private void InitializeTileDictionaries()
    {
        byteToTileDictionary = new Dictionary<byte, TileBase>();
        tileToByteDictionary = new Dictionary<TileBase, byte>();

        for (byte i = 0; i < tileAssets.Count; i++)
        {
            byteToTileDictionary.Add(i, tileAssets[i]);
            tileToByteDictionary.Add(tileAssets[i], i);
        }
    }

    public byte[] ExportTilemapToBytes(int width, int height)
    {
        byte[] data = new byte[width * height];
        BoundsInt bounds = tilemap.cellBounds;

        for (int y = 0; y < height; y++)
        {
            for (int x = 0; x < width; x++)
            {
                Vector3Int pos = new Vector3Int(x, y, 0);
                TileBase tile = tilemap.GetTile(pos);
                if (tile != null && tileToByteDictionary.TryGetValue(tile, out byte tileByte))
                {
                    data[y * width + x] = tileByte;
                }
                else
                {
                    data[y * width + x] = 255; // Use 255 for empty or unrecognized tiles
                }
            }
        }

        return MessagePackSerializer.Serialize(data);
    }

    public void ImportTilemapFromBytes(byte[] serializedData, int width, int height)
    {
        tilemapByteArray = MessagePackSerializer.Deserialize<byte[]>(serializedData);
        tilemap.ClearAllTiles();

        for (int y = -1 * gridTrimOffset; y < height + gridTrimOffset; y++)
        {
            for (int x = -1 * gridTrimOffset; x < width + gridTrimOffset; x++)
            {
                if (y < 0 || y >= height || x < 0 || x >= width)
                {
                    Vector3Int pos = new Vector3Int(x, y, 0);
                    tilemap.SetTile(pos, baseEdgeTile);
                }
                else
                {
                    byte tileByte = tilemapByteArray[y * width + x];
                    if (tileByte != 255 && byteToTileDictionary.TryGetValue(tileByte, out TileBase tile))
                    {
                        Vector3Int pos = new Vector3Int(x, y, 0);
                        tilemap.SetTile(pos, tile);
                    }
                    else
                    {
                        Debug.Log("Tilemap failed to find in byteToTileDict.");
                    }
                }
            }
        }

        Debug.Log("Tilemap imported from byte array.");
    }

    public byte[] getTilemapByteArray()
    {
        if (tilemapByteArray == null || tilemapByteArray.Length == 0)
        {
            Debug.LogWarning("Tilemap byte array is null or empty. Returning null.");
            return null;
        }

        int expectedMinSize = gridWidth * gridHeight;
        if (tilemapByteArray.Length < expectedMinSize)
        {
            Debug.LogWarning($"Tilemap byte array size {tilemapByteArray.Length} is less than expected minimum {expectedMinSize}. Returning null.");
            return null;
        }

        return tilemapByteArray;
    }

    public void SaveTilemapToFile(string fileName)
    {
        string directoryPath = Path.Combine(Application.dataPath, "Resources/SavedMapsTemp");
        if (!Directory.Exists(directoryPath))
        {
            Directory.CreateDirectory(directoryPath);
        }

        string filePath = Path.Combine(directoryPath, fileName);
        byte[] data = ExportTilemapToBytes(gridWidth, gridHeight);
        File.WriteAllBytes(filePath, data);
        Debug.Log($"Tilemap saved to file: {filePath}");
    }

    public void LoadTilemapFromFile(string fileName)
    {
        string filePath = Path.Combine(Application.dataPath, "Resources/SavedMapsTemp", fileName);

        if (File.Exists(filePath))
        {
            byte[] data = File.ReadAllBytes(filePath);
            ImportTilemapFromBytes(data, gridWidth, gridHeight);
            Debug.Log($"Tilemap loaded from file: {filePath}");
        }
        else
        {
            Debug.LogError($"File not found: {filePath}");
        }
    }
}
