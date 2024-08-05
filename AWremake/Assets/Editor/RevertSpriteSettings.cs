using UnityEditor;
using UnityEngine;

public class RevertSpriteSettings : MonoBehaviour
{
    [MenuItem("Tools/Revert Sprite Settings")]
    static void RevertSettings()
    {
        string[] guids = AssetDatabase.FindAssets("t:Sprite");
        foreach (string guid in guids)
        {
            string path = AssetDatabase.GUIDToAssetPath(guid);
            TextureImporter importer = AssetImporter.GetAtPath(path) as TextureImporter;
            if (importer != null)
            {
                // Revert to previous settings
                importer.spritePixelsPerUnit = 100; // Example original PPU
                importer.filterMode = FilterMode.Bilinear; // Example original Filter Mode
                importer.textureCompression = TextureImporterCompression.Compressed; // Example original Compression

                AssetDatabase.ImportAsset(path, ImportAssetOptions.ForceUpdate);
            }
        }
        Debug.Log("Reverted settings for all sprites.");
    }
}
