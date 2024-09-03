using UnityEngine;
using System.Reflection;
using UnityEngine.U2D;
using System.Diagnostics;
using System;
//using System.Diagnostics;

public class PrefabManager
{
    private GameValuesSO gameValuesSO;

    public void setGameValues(GameValuesSO setGameValuesSO)
    {
        gameValuesSO = setGameValuesSO;
    }

    public GameObject getPrefab(string prefabPath)
    {
        GameObject prefab = Resources.Load<GameObject>(prefabPath.Replace("Assets/Resources/", "").Replace(".prefab", ""));
        if (prefab == null)
        {
            UnityEngine.Debug.LogError("Prefab not found at path: " + prefabPath);
        }
        return prefab;
    }

    public BaseUnit getUnitFromPrefab(string prefabPath)
    {
        BaseUnit prefab = Resources.Load<BaseUnit>(prefabPath.Replace("Assets/Resources/", "").Replace(".prefab", ""));
        if (prefab == null)
        {
            UnityEngine.Debug.LogError("Prefab not found at path: " + prefabPath);
        }
        return prefab;
    }


    public void modifyPrefab(string prefabPath, AttributesBaseUnit unitData)
    {
        //UnityEngine.Debug.Log($"Attempting to modify prefab at path: {prefabPath}");

        GameObject prefab = getPrefab(prefabPath);

        if (prefab == null)
        {
            UnityEngine.Debug.LogError("Prefab not found at path: " + prefabPath);
            return;
        }

        // Instantiate the prefab temporarily to modify its values
        GameObject tempInstance = UnityEngine.Object.Instantiate(prefab);
        //UnityEngine.Debug.Log("Prefab instantiated successfully.");

        try
        {
            BaseUnit unitScript = tempInstance.GetComponent<BaseUnit>();
            if (unitScript != null)
            {
                // Get all the public instance properties of AttributesBaseUnit
                var properties = typeof(AttributesBaseUnit).GetProperties(BindingFlags.Public | BindingFlags.Instance);

                foreach (var property in properties)
                {
                    // Get the value from the unitData object and set it on the unitScript object
                    var value = property.GetValue(unitData);
                    if (value == null)
                    {
                        UnityEngine.Debug.LogWarning($"For unit {unitData.unitName}, value for property {property.Name} is null.");
                        continue;
                    }

                    // Attempt to set the value on the corresponding field in BaseUnit
                    var targetField = typeof(BaseUnit).GetField(property.Name, BindingFlags.Public | BindingFlags.Instance);
                    if (targetField != null)
                        targetField.SetValue(unitScript, value);
                    else
                        UnityEngine.Debug.LogWarning($"For unit {unitData.unitName}, field {property.Name} not found in BaseUnit.");


                    /*                    if (property.Name == "sprite" && unitScript.spriteFillSR != null)
                                        {
                                            UnityEngine.Debug.Log($"For unit {unitData.unitName}, value is {value} as sprite {(Sprite)value} .");
                                        }*/
                    if (property.Name == "spriteAtlasPath" && unitScript.spriteFillSR != null)
                    {
                        setSpritesFromSpriteAtlas(unitScript.unitName, (string)value, unitScript.spriteContainer);
                        //UnityEngine.Debug.Log($"For unit {unitData.unitName}, value is {value} as sprite {(Sprite)value} .");
                    }
                }

                // Optional: UnityEngine.Debug log to verify properties
                //UnityEngine.Debug.Log($"For unit {unitData.unitName}, modified prefab at path: {prefabPath} with unitData properties.");

#if UNITY_EDITOR
            UnityEditor.EditorUtility.SetDirty(tempInstance);  // Ensure Unity knows the prefab has been modified
            string fullPath = "Assets/Resources/" + prefabPath.Replace("Assets/Resources/", "").Replace(".prefab", "") + ".prefab";
            UnityEditor.PrefabUtility.SaveAsPrefabAsset(tempInstance, fullPath);
            //UnityEngine.Debug.Log("Prefab saved successfully: " + fullPath);
#endif
            }
            else
            {
                UnityEngine.Debug.LogError("BaseUnit component not found on the prefab instance.");
            }
        }
        catch (System.Exception e)
        {
            UnityEngine.Debug.LogError("Error saving prefab: " + e.Message);
        }
        finally
        {
            // Destroy the temporary instance
            UnityEngine.Object.DestroyImmediate(tempInstance);
        }
    }

    public void ClonePrefab(string basePrefabPath, string newPrefabPath)
    {
        GameObject basePrefab = getPrefab(basePrefabPath);

        if (basePrefab == null)
        {
            UnityEngine.Debug.LogError("Base prefab not found at path: " + basePrefabPath);
            return;
        }

        GameObject newPrefabInstance = UnityEngine.Object.Instantiate(basePrefab);

#if UNITY_EDITOR
        string fullPath = "Assets/Resources/" + newPrefabPath.Replace("Assets/Resources/", "").Replace(".prefab", "") + ".prefab";
        UnityEditor.PrefabUtility.SaveAsPrefabAsset(newPrefabInstance, fullPath);
        //UnityEngine.Debug.Log("New prefab saved successfully: " + fullPath);
#endif

        UnityEngine.Object.DestroyImmediate(newPrefabInstance);
    }

    /*public void setSpritesFromSpriteAtlas(string unitName, string atlasPath, StaticSprite spritePrefab)
    {
        SpriteAtlas spriteAtlas = Resources.Load<SpriteAtlas>(atlasPath);
        string name = unitName.ToLower().Replace(" ", "");

        if (spriteAtlas != null)
        {
            // Assign sprites from the atlas to the SpriteRenderers
            // Check if the sprite exists in the sprite atlas
            if (spriteAtlas.GetSprite($"{name}Sprite_Fill") != null)
            {
                spritePrefab.fillSR.sprite = spriteAtlas.GetSprite($"{name}Sprite_Fill");
            }
            else
            {
                UnityEngine.UnityEngine.Debug.LogWarning($"Sprite {name}Sprite_Fill not found in the sprite atlas.");
            }

            if (spriteAtlas.GetSprite($"{name}Sprite_Trim") != null)
            {
                spritePrefab.trimSR.sprite = spriteAtlas.GetSprite($"{name}Sprite_Trim");
            }
            else
            {
                UnityEngine.UnityEngine.Debug.LogWarning($"Sprite {name}Sprite_Trim not found in the sprite atlas.");
            }

            if (spriteAtlas.GetSprite($"{name}Sprite_Lights") != null)
            {
                spritePrefab.lightsSR.sprite = spriteAtlas.GetSprite($"{name}Sprite_Lights");
            }
            else
            {
                UnityEngine.UnityEngine.Debug.LogWarning($"Sprite {name}Sprite_Lights not found in the sprite atlas.");
            }
            //spritePrefab.fillSR.sprite = Resources.Load<Sprite>("Sprites/progeny0/infantrySprite");
            spritePrefab.fillSR.sprite = Resources.Load<Sprite>("Sprites/progeny0/infantrySprites/infantrySprite_Fill");
            spritePrefab.trimSR.sprite = Resources.Load<Sprite>("Sprites/progeny0/infantrySprites/infantrySprite_Lights");
            spritePrefab.lightsSR.sprite = Resources.Load<Sprite>("Sprites/progeny0/infantrySprites/infantrySprite_Trim");
                   }
        else
        {
            UnityEngine.UnityEngine.Debug.LogWarning($"Failed to load spriteAtlas for {unitName} at path: {atlasPath}");
        }


    }*/

    public void setSpritesFromSpriteAtlas(string unitName, string atlasPath, StaticSprite spritePrefab)
    {
        SpriteAtlas spriteAtlas = Resources.Load<SpriteAtlas>(atlasPath);
        if (spriteAtlas == null)
        {
            UnityEngine.Debug.LogError($"Failed to load spriteAtlas at path: {atlasPath}");
            return;
        }

        string name = unitName.ToLower().Replace(" ", "");
        UnityEngine.Debug.Log($"Looking for sprites with base name: {name}");

        if (spritePrefab == null)
        {
            UnityEngine.Debug.LogError("spritePrefab is null.");
            return;
        }
        if (spritePrefab.fillSR == null || spritePrefab.trimSR == null || spritePrefab.lightsSR == null)
        {
            UnityEngine.Debug.LogError("One or more SpriteRenderers in spritePrefab are null.");
            return;
        }

        Sprite fillSprite = spriteAtlas.GetSprite($"{name}Sprite_Fill");
        if (fillSprite != null)
        {
            spritePrefab.fillSR.sprite = fillSprite;
        }
        else
        {
            UnityEngine.Debug.LogWarning($"Sprite {name}Sprite_Fill not found in the sprite atlas.");
        }

        Sprite trimSprite = spriteAtlas.GetSprite($"{name}Sprite_Trim");
        if (trimSprite != null)
        {
            spritePrefab.trimSR.sprite = trimSprite;
        }
        else
        {
            UnityEngine.Debug.LogWarning($"Sprite {name}Sprite_Trim not found in the sprite atlas.");
        }

        Sprite lightsSprite = spriteAtlas.GetSprite($"{name}Sprite_Lights");
        if (lightsSprite != null)
        {
            spritePrefab.lightsSR.sprite = lightsSprite;
        }
        else
        {
            UnityEngine.Debug.LogWarning($"Sprite {name}Sprite_Lights not found in the sprite atlas.");
        }
    }
}
