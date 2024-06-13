using UnityEngine;
using UnityEngine.Tilemaps;

public class TilemapManager : MonoBehaviour
{
    public Tilemap tilemap; // Reference to the Tilemap component
    public TileBase grassTile; // Reference to the Grass Tile asset
    public TileBase waterTile; // Reference to the Water Tile asset
    public TileBase hillTile; // Reference to the Sand Tile asset
    public TileBase forestTile; // Reference to the Sand Tile asset

    public int gridWidth = 10;
    public int gridHeight = 10;

    void Start()
    {
        //SetTiles();
    }

    void SetTiles()
    {
        for (int x = 0; x < gridWidth; x++)
        {
            for (int y = 0; y < gridHeight; y++)
            {
                Vector3Int tilePosition = new Vector3Int(x, y, 0);

                // Set tiles based on some conditions
                if ((x + y) % 3 == 0)
                {
                    tilemap.SetTile(tilePosition, grassTile);
                }
                else if ((x + y) % 3 == 1)
                {
                    tilemap.SetTile(tilePosition, waterTile);
                }
                else
                {
                    tilemap.SetTile(tilePosition, forestTile);
                }
            }
        }
    }
}
