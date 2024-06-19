using UnityEditor;
using UnityEngine;
using UnityEngine.Tilemaps;

[CustomEditor(typeof(TilemapManager))]
public class TilemapManagerEditor : Editor
{
    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();

        TilemapManager tilemapManager = (TilemapManager)target;

        if (GUILayout.Button("Reset Tile Assets"))
        {
            ResetTileAssets(tilemapManager);
        }
    }

    private void ResetTileAssets(TilemapManager tilemapManager)
    {
        // Clear the existing list
        tilemapManager.tileAssets.Clear();

        // Optionally, you can add default tiles back to the list
        // tilemapManager.tileAssets.Add(defaultTile);

        EditorUtility.SetDirty(tilemapManager);
        Debug.Log("Tile assets reset.");
    }
}
