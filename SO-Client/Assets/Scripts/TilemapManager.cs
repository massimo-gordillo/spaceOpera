using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Tilemaps;
//using MessagePack;


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

    //private string tilemapFilePath;

    //receives a list of all the attributesTile each of which contain the rules for each tile type (defined as a byte)
    public (int, int) initialize()
    {
        //tilemapFilePath = "Assets/InitializationData/Maps/Map2";
        //byteToAttributesTileDictionary = inputAttributesTilesDictionary;
        // Log the tilemap reference
        //Debug.Log($"Initializing TilemapManager with tilemap: {tilemap.name}");

        (Vector2Int bounds, Vector2Int deltaFromZero) = GetTilemapBounds();
        gridWidth = bounds.x;// + deltaFromZero.x;
        gridHeight = bounds.y;// + deltaFromZero.y;

        gridTrimOffset = 5;
        gridWidthWithTrim = gridWidth + gridTrimOffset * 2;
        gridHeightWithTrim = gridHeight + gridTrimOffset * 2;
        mapFileLocation = "InitializationData/Maps/Map3";

        InitializeTileDictionaries();



        //uncomment the appropriate function for testing.

        //TilemapData byteData = ExportTilemapToBytes();
        //ImportTilemapFromBytes(byteData);

        //SaveTilemapToFile("Map3Tilemap.dat");
        //LoadTilemapFromFile("Map3Tilemap.dat");





        return (gridWidth, gridHeight);
    }

    private void InitializeTileDictionaries()
    {
        string tilemapName = "tilemapv4";
        string basePath = "Tilemap/Tiles/"+tilemapName;
        //string tilesName = "BasicTilemap v3_";

        byteToTilesListDictionary = new Dictionary<byte, List<TileBase>>();
        tileNameToByteDictionary = new Dictionary<string, byte>();

        // Load all tiles from the base path (including subdirectories in Resources)
        TileBase[] tiles = Resources.LoadAll<TileBase>(basePath);

        if (tiles == null || tiles.Length == 0)
        {
            Debug.LogError($"No tiles found in Resources/{basePath}");
            return;
        }

        foreach (TileBase tile in tiles)
        {
            if (tile == null)
            {
                Debug.LogError("One of the loaded tiles is null.");
                continue;
            }

            // Extract the folder name as a byte value from the tile's name
            string[] nameParts = tile.name.Split('_'); // Assuming tiles are named like "TileName_1"
            if (nameParts.Length > 1 && byte.TryParse(nameParts[1], out byte byteNumber))
            {
                //Debug.Log($"Tile {tile.name} has byte prefix {byteNumber}.");
                tileAssets.Add(tile);
                tileNameToByteDictionary[tile.name] = byteNumber;

                if (!byteToTilesListDictionary.ContainsKey(byteNumber))
                    byteToTilesListDictionary[byteNumber] = new List<TileBase>();

                byteToTilesListDictionary[byteNumber].Add(tile);
            }
            else
            {
                Debug.LogWarning($"Tile {tile.name} does not have a valid byte prefix and will be skipped.");
            }
        }
/*        foreach(KeyValuePair<byte, List<TileBase>> kvp in byteToTilesListDictionary)
        {
            Debug.Log($"Byte {kvp.Key} has {kvp.Value.Count} tiles.");
        }*/
    }


    /*private void InitializeTileDictionaries()
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


                *//*                if (tileNameToByteDictionary == null || tileNameToByteDictionary.Count == 0)
                                {
                                    Debug.Log("tileNameToByteDictionary is empty or null.");
                                }*//*


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
    }*/

    public TilemapData ExportTilemapToBytes()
    {
        (Vector2Int bounds, Vector2Int deltaFromZero) = GetTilemapBounds();
        int width = bounds.x;// + delta.x;
        int height = bounds.y;// + delta.y;
        Debug.Log($"Exporting tilemap to bytes: Width = {width}, Height = {height}");
        byte[] tilemapByteArray = new byte[width * height];
        //BoundsInt bounds = tilemap.cellBounds;

        for (int y = 0; y < height; y++)
        {
            //string debug = "createByteArray debug, line " + y + ": ";
            for (int x = 0; x < width; x++)
            {
                Vector3Int pos = new Vector3Int(x, y, 0);
                if(tilemap.GetTile(pos)==null)
                {
                    Debug.Log($"Tile at {pos} is null.");
                }
                TileBase tile = tilemap.GetTile(pos); //this is a built in tilemap function

                //temporary fix for switching to upgraded tilemap. Ugly fix but it will work for now.
                //Tilemap implementation needs to be improved but this might not matter once loading from server/bytemap becomes main way of retrieving.
                string modifiedTileName = null;
                if (tile.name.Contains("v2"))
                {
                    modifiedTileName = tile.name.Replace("v2", "-v4");
                }else
                    modifiedTileName = tile.name;
                //Debug.Log($"Tile name: {tile.name}, Modified name: {modifiedTileName}");
                if (tile != null && tileNameToByteDictionary.TryGetValue(modifiedTileName, out byte tileByte))
                {
/*                    if (tileByte == 252)
                    {
                        Debug.LogWarning($"Tile {tile.name} at {pos} is given byte value 252.");
                    }*/
                    tilemapByteArray[y * width + x] = tileByte;

                }
                else
                {
                    tilemapByteArray[y * width + x] = 255; // Use 255 for empty or unrecognized tiles
                }

            }
            //Debug.Log(debug);
        }
        return new TilemapData(width, height, tilemapByteArray);

        //to print the byte array to the console
        /*// Initialize a list to hold each byte as a string
        List<string> byteStrings = new List<string>();

        // Loop through each byte in the byte array and convert to string
        TilemapData tmd = _tilemapManager.ExportTilemapToBytes();
        foreach (byte b in tmd.TileBytes)
        {
            byteStrings.Add(b.ToString());
        }

        // Join the list into a single comma-separated string
        Debug.Log($"debugging: Tilemap byte array: {string.Join(",", byteStrings)}");*/
    }

    public void ImportTilemapFromBytes(TilemapData tilemapData)
    {
        try
        {
/*            // Deserialize from the raw byte array
            TilemapData tilemapDataDeserialized = MessagePackSerializer.Deserialize<TilemapData>(tilemapData);

            // Validate the deserialized data
            if (tilemapDataDeserialized == null)
            {
                throw new Exception("Tilemap data deserialization failed: the data is null.");
            }

            if (tilemapDataDeserialized.Width <= 0 || tilemapDataDeserialized.Height <= 0)
            {
                throw new Exception("Tilemap data validation failed: Width and Height must be greater than zero.");
            }*/

            if(tilemapData == null)
            {
                throw new Exception("Tilemap data import failed: the data is null.");
            }

            byte[] tilemapByteArray = tilemapData.TileBytes;

            if (tilemapByteArray == null || tilemapByteArray.Length != tilemapData.Width * tilemapData.Height)
            {
                throw new Exception("Tilemap data validation failed: tilemapByteArray is null or its size does not match the expected dimensions.");
            }

            //modify the global vars
            tilemap.ClearAllTiles();
            gridWidth = tilemapData.Width;
            gridHeight = tilemapData.Height;

            for (int y = -1 * gridTrimOffset; y < gridHeight + gridTrimOffset; y++)
            {
                for (int x = -1 * gridTrimOffset; x < gridWidth + gridTrimOffset; x++)
                {
                    if (y < 0 || y >= gridHeight || x < 0 || x >= gridWidth)
                    {
                        Vector3Int pos = new Vector3Int(x, y, 0);
                        tilemap.SetTile(pos, baseEdgeTile);
                    }
                    else
                    {
                        byte tileByte = tilemapByteArray[y * gridWidth + x];
                        TileBase tile = getTile(tileByte, null);
                        if (tileByte != 255 && tile != null)
                        {
                            Vector3Int pos = new Vector3Int(x, y, 0);
                            tilemap.SetTile(pos, tile);
                        }
                        else
                        {
                            Debug.LogWarning("Tilemap failed to find in byteToTileDict.");
                        }
                    }
                }
            }

            //Debug.Log("Tilemap imported from byte array.");
        }
        catch (Exception ex)
        {
            Debug.LogError($"Failed to import tilemap: {ex.Message}");
        }
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
            TilemapData data = ExportTilemapToBytes();
            if (data == null || data.TileBytes.Length == 0)
            {
                Debug.LogWarning("Tilemap byte array is null or empty. Returning null.");
                return null;
            }
            else
            {
                //Debug.Log($"TilemapData has size {data.TileBytes.Length}.");
                return data.TileBytes;
            }
                
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
        //byte[] byteData = MessagePackSerializer.Deserialize<byte[]>(ExportTilemapToBytes(new Vector2Int(gridWidth, gridHeight), Vector2Int.zero));


        TilemapData dataFile = ExportTilemapToBytes();

        // Write the serialized data to a file
        File.WriteAllBytes(filePath, TilemapData.Serialize(dataFile));

        //Messagepack implementation
        //File.WriteAllBytes(filePath, TilemapData.SerializeMP(dataFile));
        Debug.Log($"Tilemap saved to file: {filePath}");
    }

    public void LoadTilemapFromFile(string fileName)
    {
        string filePath = Path.Combine(Application.dataPath, mapFileLocation, fileName);

        if (File.Exists(filePath))
        {
            /*            // Read the file bytes
                        //byte[] serializedData = File.ReadAllBytes(filePath);

                        // Deserialize the byte array into a TilemapData object using MessagePack
                        //TilemapData dataFile = MessagePackSerializer.Deserialize<TilemapData>(serializedData);
                        //ImportTilemapFromBytes(dataFile.TileBytes, (int)dataFile.Width, (int)dataFile.Height);
                        ImportTilemapFromBytes(File.ReadAllBytes(filePath));
                        Debug.Log($"Tilemap loaded from file: {filePath}");*/

            // Read the raw data from the file
            //byte[] serializedTilemapData = File.ReadAllBytes(filePath);

            // Pass the serialized data to ImportTilemapFromBytes
            ImportTilemapFromBytes(TilemapData.Deserialize(File.ReadAllBytes(filePath)));

            //MessagePack implementation
            //ImportTilemapFromBytes(TilemapData.DeserializeMP(File.ReadAllBytes(filePath)));
        }
        else
        {
            Debug.LogError($"File not found: {filePath}");
        }
    }

    public (Vector2Int dimensions, Vector2Int deltas) GetTilemapBounds()
    {
        if (tilemap != null)
        {
            
            // Get the bounds of the tilemap in cell space
            BoundsInt bounds = tilemap.cellBounds;
            //OnDrawGizmos();

            // Calculate the width and height of the tilemap
            int width = bounds.size.x;  // Number of tiles in the X direction
            int height = bounds.size.y; // Number of tiles in the Y direction

            //Debug.Log($"Tilemap Dimensions: Width = {width}, Height = {height}, xMax = {bounds.xMax}, yMax = {bounds.yMax}, xMin = {bounds.xMin}, yMin = {bounds.yMin}");

/*            for (int x = bounds.xMin-1; x < bounds.xMax+1; x++)
            {
                for (int y = bounds.yMin-1; y < bounds.yMax+1; y++)
                {
                    Vector3Int position = new Vector3Int(x, y, 0);
                    if (tilemap.HasTile(position)) //&& (y>11 || x>21))
                    {
                        Debug.Log($"Tile found at: {position}");
                    }
                }
            }*/

            // Get the edges of the tilemap
            int minX = bounds.xMin; // Left edge
            int maxX = bounds.xMax - 1; // Right edge
            int minY = bounds.yMin; // Bottom edge
            int maxY = bounds.yMax - 1; // Top edge

            // Calculate deltaX and deltaY for the closest edge
            int deltaX = (Mathf.Abs(minX) <= Mathf.Abs(maxX)) ? minX : maxX;
            int deltaY = (Mathf.Abs(minY) <= Mathf.Abs(maxY)) ? minY : maxY;

            //Debug.Log($"deltaX: {deltaX}, deltaY: {deltaY}");

            return (new Vector2Int(width, height), new Vector2Int(deltaX, deltaY));
        }
        else
        {
            Debug.LogError("Tilemap is not assigned!");
            // Option 1: Throw an exception
            throw new System.InvalidOperationException("Tilemap is not assigned!");

            // Option 2: Return a default value (uncomment this line if you prefer this option)
            // return Vector2Int.zero;
        }
    }


    //initialize is too early to draw Gizmos
    /*private Vector2Int cachedTilemapBounds = Vector2Int.zero;
    // Method to draw the Gizmos
    void OnDrawGizmos()
    {
        // Ensure tilemap is valid
        if (tilemap != null)
        {
            // Call the GetTilemapDimensions function to get the dimensions based on active tiles
            Vector2Int tilemapDimensions = GetTilemapDimensionsForGizmos();

            // Now you can draw Gizmos using the calculated dimensions (tilemapDimensions)
            Gizmos.color = Color.green; // Set the Gizmo color
            Gizmos.DrawWireCube(new Vector3(tilemapDimensions.x / 2f, tilemapDimensions.y / 2f, 0), new Vector3(tilemapDimensions.x, tilemapDimensions.y, 1));
        }
    }
    // Function to calculate the dimensions of the tilemap based on the furthest set tiles
    public Vector2Int GetTilemapDimensionsForGizmos()
    {
        if (tilemap == null)
        {
            Debug.LogError("Tilemap is not assigned!");
            return Vector2Int.zero; // Return zero if tilemap is not assigned
        }

        // Get the bounds of the tilemap in cell space
        BoundsInt bounds = tilemap.cellBounds;

        // Initialize min and max values
        int minX = bounds.xMin;
        int maxX = bounds.xMax;
        int minY = bounds.yMin;
        int maxY = bounds.yMax;

        // Iterate through all tiles in the tilemap and track the furthest set tile positions
        foreach (var position in bounds.allPositionsWithin)
        {
            // If the tile at the current position is not null, update the min/max values
            if (tilemap.GetTile(position) != null)
            {
                minX = Mathf.Min(minX, position.x);
                maxX = Mathf.Max(maxX, position.x);
                minY = Mathf.Min(minY, position.y);
                maxY = Mathf.Max(maxY, position.y);
            }
        }

        // Calculate the width and height of the tilemap based on the furthest tiles
        int width = maxX - minX + 1;
        int height = maxY - minY + 1;

        // Return the dimensions as a Vector2Int
        Debug.Log($"Tilemap Dimensions: Width = {width}, Height = {height}");
        return new Vector2Int(width, height);
    }*/


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
