using UnityEngine;
using UnityEditor;

public class CustomSpriteImporter : AssetPostprocessor
{
/*    void OnPreprocessTexture()
    {
        TextureImporter importer = (TextureImporter)assetImporter;

        // Only apply to new sprites
        if (importer.textureType == TextureImporterType.Sprite)
        {
            if (AssetDatabase.LoadAssetAtPath<Texture2D>(importer.assetPath) == null)
            {
                // Only set PPU if it is still at Unity's default (100)
                if (importer.spritePixelsPerUnit == 100)
                {
                    importer.spritePixelsPerUnit = 32;
                }

                importer.filterMode = FilterMode.Point;
                importer.textureCompression = TextureImporterCompression.Uncompressed;
                importer.mipmapEnabled = false;
                importer.maxTextureSize = 512;
                importer.wrapMode = TextureWrapMode.Clamp;
            }
        }
    }*/

}
