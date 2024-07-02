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
    private Dictionary<byte, AttributesTile> byteToAttributesTileDictionary; // Map byte values to AttributeTiles (tile rules)
    private Dictionary<byte, List<TileBase>> byteToTilesListDictionary; //Map byte values to a list of Tiles that have that bytevalue.
    private Dictionary<TileBase, byte> tileToByteDictionary; // Map Tile assets to byte values (MG:24-07-02 

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

        /*foreach (TileBase t in Resources.LoadAll<TileBase>("Tilemap/Tiles/Tilemapv2"))
            tileAssets.Add(t);*/

        InitializeTileDictionaries();

        
        SaveTilemapToFile("myTilemap.dat");
        LoadTilemapFromFile("myTilemap.dat");
        //byte[] data = ExportTilemapToBytes(gridWidth, gridHeight);
        //ImportTilemapFromBytes(data, gridWidth, gridHeight);
    }

/*    private void InitializeTileDictionaries()
    {
        byteToTileDictionary = new Dictionary<byte, TileBase>();
        tileToByteDictionary = new Dictionary<TileBase, byte>();

        for (byte i = 0; i < tileAssets.Count; i++)
        {
            byteToTileDictionary.Add(i, tileAssets[i]);
            tileToByteDictionary.Add(tileAssets[i], i);
        }
    }  */  
    
    private void InitializeTileDictionaries()
    {
        string basePath = "Tilemap/Tiles/DynamicTilemapTest";
        //get all the directories at the basePath. You will find a series of folders with a single byte at the name of the folder.
        string[] directories = Directory.GetDirectories(Path.Combine(Application.dataPath, "Resources", basePath));

        byteToAttributesTileDictionary = new Dictionary<byte, AttributesTile>();
        byteToTilesListDictionary = new Dictionary<byte, List<TileBase>>();
        tileToByteDictionary = new Dictionary<TileBase, byte>();
        
        foreach (string dir in directories)
        {
            string folderName = Path.GetFileName(dir);
            if (byte.TryParse(folderName, out byte byteNumber)) //if the folder name is a bytevalue
            {
                string folderPath = $"{basePath}/{folderName}";
                //for each tile in that folder, add it to the total tileAssets list
                //add it to the a list of tiles (the list goes into its own dictionary matched the byte value)
                foreach (TileBase tile in Resources.LoadAll<TileBase>(folderPath)) 
                {
                    tileAssets.Add(tile);
                    tileToByteDictionary.Add(tile, byteNumber);
                    if (!byteToTilesListDictionary.ContainsKey(byteNumber))
                    {
                        byteToTilesListDictionary[byteNumber] = new List<TileBase>();
                    }
                    byteToTilesListDictionary[byteNumber].Add(tile);

                    Debug.Log($"Loaded tile {tile.name} from folder {byteNumber}");
                }
            }
        }

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
                    if (tileByte != 255 && getTile(tileByte) is TileBase tile) //MG:24-07-02 this is how you define a var in an if statement
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

    //if index is null return a random tile from Tilelist with byte b
    public TileBase getTile(byte b, int? index = null)
    {
        if (byteToTilesListDictionary.TryGetValue(b, out List<TileBase> tiles))
        {
            int length = tiles.Count;
            if (length == 0)
            {
                Debug.LogError($"List of Tiles for byte {b} is empty.");
                return null;
            }

            if (index == null)
            {
                if (length == 1)
                    return tiles[0];
                else
                    return tiles[UnityEngine.Random.Range(0, length)];
            }
            else if (index >= 0 && index < length)
                return tiles[index.Value];
            else
            {
                Debug.LogError($"Index {index} is out of range for the list of Tiles for byte {b}.");
                return null;
            }
        }
        else
        {
            Debug.LogError($"No tiles found for byte {b}.");
            return null;
        }
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
