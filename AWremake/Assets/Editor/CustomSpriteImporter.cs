using UnityEngine;
using UnityEditor;

public class CustomSpriteImporter : AssetPostprocessor
{
    void OnPreprocessTexture()
    {
        TextureImporter importer = (TextureImporter)assetImporter;

        // Only apply to sprites
        if (importer.textureType == TextureImporterType.Sprite)
        {
            // Check if the asset has already been imported
            if (AssetDatabase.LoadAssetAtPath<Texture2D>(importer.assetPath) == null)
            {
                // This is a new asset, apply the custom settings
                importer.spritePixelsPerUnit = 32;
                importer.filterMode = FilterMode.Point;
                importer.textureCompression = TextureImporterCompression.Uncompressed;
                importer.mipmapEnabled = false;
                importer.maxTextureSize = 512;
                importer.wrapMode = TextureWrapMode.Clamp;
            }
        }
    }
}
