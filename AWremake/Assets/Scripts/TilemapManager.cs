using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Tilemaps;
using MessagePack;

[MessagePackObject]
public struct TilemapData
{
    [Key(0)]
    public int Width { get; set; }

    [Key(1)]
    public int Height { get; set; }

    [Key(2)]
    public byte[] TileBytes { get; set; }
}

public class TilemapManager : MonoBehaviour
{
    public Tilemap tilemap; // Reference to the Tilemap component

    //private List<AttributesTile> attributesTiles; 

    public List<TileBase> tileAssets; // List of available Tile assets
    //private Dictionary<byte, AttributesTile> byteToAttributesTileDictionary; // Map byte values to AttributeTiles (tile rules)
    private Dictionary<byte, List<TileBase>> byteToTilesListDictionary; //Map byte values to a list of Tiles that have that bytevalue.
    private Dictionary<String, byte> tileNameToByteDictionary; // Map Tile asset names to byte values, required to compare Tiles set in the Tilemap vs pairing of tiles to bytes

    public byte[] tilemapByteArray;

    public TileBase baseEdgeTile;

    public int gridWidth;
    public int gridHeight;
    public int gridTrimOffset;
    public int gridWidthWithTrim;
    public int gridHeightWithTrim;

    private string mapFileLocation;

    //receives a list of all the attributesTile each of which contain the rules for each tile type (defined as a byte)
    public void initialize()
    {
        //byteToAttributesTileDictionary = inputAttributesTilesDictionary;
        // Log the tilemap reference
        Debug.Log($"Initializing TilemapManager with tilemap: {tilemap.name}");

        gridWidth = 30;
        gridHeight = 20;
        gridTrimOffset = 5;
        gridWidthWithTrim = gridWidth + gridTrimOffset * 2;
        gridHeightWithTrim = gridHeight + gridTrimOffset * 2;
        mapFileLocation = "InitializationData/Maps/Map1";

        InitializeTileDictionaries();

        //uncomment the appropriate function for testing.
        
        //SaveTilemapToFile("TestTilemap.dat");
        LoadTilemapFromFile("TestTilemap.dat");
        //byte[] data = ExportTilemapToBytes(gridWidth, gridHeight);
        //ImportTilemapFromBytes(data, gridWidth, gridHeight);
    }

/*    private void InitializeTileDictionaries()
    {
        byteToTileDictionary = new Dictionary<byte, TileBase>();
        tileNameToByteDictionary = new Dictionary<TileBase, byte>();

        for (byte i = 0; i < tileAssets.Count; i++)
        {
            byteToTileDictionary.Add(i, tileAssets[i]);
            tileNameToByteDictionary.Add(tileAssets[i], i);
        }
    }  */  
    
    private void InitializeTileDictionaries()
    {
        string basePath = "Tilemap/Tiles/DynamicTilemapTest";
        //get all the directories at the basePath. You will find a series of folders with a single byte at the name of the folder.
        string[] directories = Directory.GetDirectories(Path.Combine(Application.dataPath, "Resources", basePath));

        byteToTilesListDictionary = new Dictionary<byte, List<TileBase>>();
        tileNameToByteDictionary = new Dictionary<String, byte>();

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
                    tileNameToByteDictionary.Add(tile.name, byteNumber);
                    //Debug.Log($"Inserted tile {tile} with name {tile.name} and gameID {tile.GetInstanceID()} to bytenum {byteNumber}");
                    if (!byteToTilesListDictionary.ContainsKey(byteNumber))
                        byteToTilesListDictionary[byteNumber] = new List<TileBase>();

                    byteToTilesListDictionary[byteNumber].Add(tile);

                }


/*                if (tileNameToByteDictionary == null || tileNameToByteDictionary.Count == 0)
                {
                    Debug.Log("tileNameToByteDictionary is empty or null.");
                }*/


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
        byte[] tilemapByteArray = new byte[width * height];
        BoundsInt bounds = tilemap.cellBounds;

        for (int y = 0; y < height; y++)
        {
            //string debug = "createByteArray debug, line " + y + ": ";
            for (int x = 0; x < width; x++)
            {
                Vector3Int pos = new Vector3Int(x, y, 0);
                TileBase tile = tilemap.GetTile(pos); //this is a built in tilemap function
                /*foreach (var kvp in tileNameToByteDictionary)
                {
                    TileBase t = kvp.Key;
                    byte b = kvp.Value;
                    Debug.Log($"HELLO WORLD ITS ME I WAS WONDERING IF YOU Loaded tile {t} from tileNameToByteDictionary with bytevalue {b}");
                    Debug.Log($"tile t has type: {t.GetType()}, tile from TileMap has type {tile.GetType()}");

                    if (tile == t)
                        Debug.Log("They're the same picture");
                }*/
                //Debug.Log($"What is tile: {tile} and am I getting anything out of the dictionary: { tileNameToByteDictionary.TryGetValue(tile, out byte tileByteTest)}");
                //Debug.Log($"What is tile: {tile} with name {tile.name} and gameID {tile.GetInstanceID()}");
                if (tile != null && tileNameToByteDictionary.TryGetValue(tile.name, out byte tileByte))
                {
                    tilemapByteArray[y * width + x] = tileByte;
                    //debug = debug + "" + tileByte + ", ";
                }
                else
                {
                    tilemapByteArray[y * width + x] = 255; // Use 255 for empty or unrecognized tiles
                    //debug = debug + "X, ";
                }
                
            }
            //Debug.Log(debug);
        }

        return MessagePackSerializer.Serialize(tilemapByteArray);
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
                    //if (tileByte != 255 && getTile(tileByte, null) is TileBase tile) //MG:24-07-02 this is how you define a var in an if statement
                    TileBase tile = getTile(tileByte, null);
                    if (tileByte != 255 && tile != null)
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
        string directoryPath = Path.Combine(Application.dataPath, mapFileLocation);
        if (!Directory.Exists(directoryPath))
        {
            Directory.CreateDirectory(directoryPath);
        }

        string filePath = Path.Combine(directoryPath, fileName);
        byte[] byteData = ExportTilemapToBytes(gridWidth, gridHeight);
        TilemapData dataFile = new TilemapData
        {
            Width = (byte)gridWidth,
            Height = (byte)gridHeight,
            TileBytes = byteData
        };

        // Serialize the TilemapData object using MessagePack
        byte[] serializedData = MessagePackSerializer.Serialize(dataFile);

        // Write the serialized data to a file
        File.WriteAllBytes(filePath, serializedData);
        Debug.Log($"Tilemap saved to file: {filePath}");
    }

    public void LoadTilemapFromFile(string fileName)
    {
        string filePath = Path.Combine(Application.dataPath, mapFileLocation, fileName);

        if (File.Exists(filePath))
        {
            // Read the file bytes
            byte[] serializedData = File.ReadAllBytes(filePath);

            // Deserialize the byte array into a TilemapData object using MessagePack
            TilemapData dataFile = MessagePackSerializer.Deserialize<TilemapData>(serializedData);

            ImportTilemapFromBytes(dataFile.TileBytes, (int)dataFile.Width, (int)dataFile.Height);
            Debug.Log($"Tilemap loaded from file: {filePath}");
        }
        else
        {
            Debug.LogError($"File not found: {filePath}");
        }
    }



    /*public void SaveTilemapToFile(string fileName)
    {
        string directoryPath = Path.Combine(Application.dataPath, "InitializationData/Maps/Map1");
        if (!Directory.Exists(directoryPath))
        {
            Directory.CreateDirectory(directoryPath);
        }

        string filePath = Path.Combine(directoryPath, fileName);
        byte[] byteData = ExportTilemapToBytes(gridWidth, gridHeight);
        TilemapData dataFile = new TilemapData
        {
            Width = (byte)gridWidth,
            Height = (byte)gridHeight,
            TileBytes = byteData
        };
        File.WriteAllBytes(filePath, dataFile);
        Debug.Log($"Tilemap saved to file: {filePath}");
    }

    public void LoadTilemapFromFile(string fileName)
    {
        string filePath = Path.Combine(Application.dataPath, "InitializationData/Maps/Map1", fileName);

        if (File.Exists(filePath))
        {
            TilemapData dataFile = File.ReadAllBytes(filePath);
            ImportTilemapFromBytes(dataFile.TileBytes, (int)dataFile.Width, (int)dataFile.Height);
            Debug.Log($"Tilemap loaded from file: {filePath}");
        }
        else
        {
            Debug.LogError($"File not found: {filePath}");
        }
    }*/
}
