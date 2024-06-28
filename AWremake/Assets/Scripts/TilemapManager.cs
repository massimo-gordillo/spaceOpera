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
    //private Dictionary<string, TileBase> tileDictionary; // Map tile types to Tile assets
    private Dictionary<byte, TileBase> byteToTileDictionary; // Map byte values to Tile assets
    private Dictionary<TileBase, byte> tileToByteDictionary; // Map Tile assets to byte values

    public byte[] tilemapByteArray;

    //trim tile to surround the map with.
    public TileBase baseEdgeTile;

    public int gridWidth;
    public int gridHeight;
    public int gridTrimOffset;
    public int gridWidthWithTrim;
    public int gridHeightWithTrim;

    public void initialize()
    {
        
        gridWidth = 30;
        gridHeight = 20;
        gridTrimOffset = 5;
        gridWidthWithTrim = gridWidth + gridTrimOffset * 2;
        gridHeightWithTrim = gridHeight + gridTrimOffset * 2;
        //load all tile Assets in location specified.
        foreach (TileBase t in Resources.LoadAll<TileBase>("Tilemap/Tiles/Tilemapv2"))
            tileAssets.Add(t);

        // Validate and Initialize the tileAssets list
        if (tileAssets == null || tileAssets.Count == 0)
        {
            Debug.LogError("TileAssets list is not assigned or empty.");
            return;
        }

        // Check for null tiles in the list
        foreach (TileBase tile in tileAssets)
        {
            if (tile == null)
            {
                Debug.LogError("One of the TileAssets is null. Please check the assignments.");
                return;
            }
        }
        //foreach (TileBase t in tileAssets)
        //   print(t);
        InitializeTileDictionaries();
        //byte[] data = ExportTilemapToBytes(gridWidthWithTrim, gridHeightWithTrim);
        byte[] data = ExportTilemapToBytes(gridWidth, gridHeight);
        /*int i = 0;
        foreach (byte b in data)
        {
            if (b > 3)
                print("data: "+b + "location x: " + i%(gridWidth+2) + "location y: " + (i - i % (gridWidth + 2)));
            i++;
        }
        print("iterations :" + i);*/
        //ImportTilemapFromBytes(data, gridWidthWithTrim, gridHeightWithTrim);
        ImportTilemapFromBytes(data, gridWidth, gridHeight);
    }

    private void InitializeTileDictionaries()
    {
        byteToTileDictionary = new Dictionary<byte, TileBase>();
        tileToByteDictionary = new Dictionary<TileBase, byte>();

        //set the trim tile
        //baseEdgeTile = tileAssets[0];

        for (byte i = 0; i < tileAssets.Count; i++)
        {
            byteToTileDictionary.Add(i, tileAssets[i]);
            tileToByteDictionary.Add(tileAssets[i], i);
        }
    }

    public byte[] ExportTilemapToBytes(int width, int height)
    {

        byte[] data = new byte[width * height];
        //Debug.Log(width * height);
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

        // Serialize the byte array using MessagePack
        return MessagePackSerializer.Serialize(data);
    }

    public void ImportTilemapFromBytes(byte[] serializedData, int width, int height)
    {
        // Deserialize the byte array using MessagePack
        tilemapByteArray = MessagePackSerializer.Deserialize<byte[]>(serializedData);
        //tilemapByteArray = data;

        tilemap.ClearAllTiles();

        for (int y = -1 * gridTrimOffset; y < height+gridTrimOffset; y++)
        {
            for (int x = -1 * gridTrimOffset; x < width+gridTrimOffset; x++)
            {
                //If outside the play area bounds, set to the default tile, else grab the appropriate tile from the dictionary.
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
                        Debug.Log("Tilemap failed to find in byteToTileDict.");
                }
              
            }
        }

        Debug.Log("Tilemap imported from byte array.");
    }

    public byte[] getTilemapByteArray()
    {
        // Check if tilemapByteArray is null or empty
        if (tilemapByteArray == null || tilemapByteArray.Length == 0)
        {
            Debug.LogWarning("Tilemap byte array is null or empty. Returning null.");
            return null;
        }

        // Additional validation: Check if the array has a minimum expected size or structure
        // Example: Ensure the array length is at least the size of a minimal tilemap structure
        int expectedMinSize = gridWidth*gridHeight;
        if (tilemapByteArray.Length < expectedMinSize)
        {
            Debug.LogWarning($"Tilemap byte array size {tilemapByteArray.Length} is less than expected minimum {expectedMinSize}. Returning null.");
            return null;
        }
        //Debug.Log("TilemapByteArray Size: " + tilemapByteArray.Length);
        return tilemapByteArray;
    }

}
