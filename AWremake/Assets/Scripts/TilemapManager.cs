using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Tilemaps;

public class TilemapManager : MonoBehaviour
{
    public Tilemap tilemap; // Reference to the Tilemap component
    public TileBase grassTile; // Reference to the Grass Tile asset
    public TileBase waterTile; // Reference to the Water Tile asset
    public TileBase hillTile; // Reference to the Sand Tile asset
    public TileBase forestTile; // Reference to the Sand Tile asset

    public List<TileBase> tileAssets; // List of available Tile assets
    private Dictionary<string, TileBase> tileDictionary; // Map tile types to Tile assets


    public int gridWidth = 10;
    public int gridHeight = 10;

    private void Start()
    {
        //InitializeTileDictionary();
        // Uncomment these to test export/import functionality
        // byte[] data = ExportTilemapToBytes();
        // ImportTilemapFromBytes(data);
    }

    
}
