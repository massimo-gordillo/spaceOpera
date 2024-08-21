using UnityEngine;
using System.Reflection;
using UnityEngine.U2D;
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
            Debug.LogError("Prefab not found at path: " + prefabPath);
        }
        return prefab;
    }

    public BaseUnit getUnitFromPrefab(string prefabPath)
    {
        BaseUnit prefab = Resources.Load<BaseUnit>(prefabPath.Replace("Assets/Resources/", "").Replace(".prefab", ""));
        if (prefab == null)
        {
            Debug.LogError("Prefab not found at path: " + prefabPath);
        }
        return prefab;
    }


    public void modifyPrefab(string prefabPath, AttributesBaseUnit unitData)
    {
        //Debug.Log($"Attempting to modify prefab at path: {prefabPath}");

        GameObject prefab = getPrefab(prefabPath);

        if (prefab == null)
        {
            Debug.LogError("Prefab not found at path: " + prefabPath);
            return;
        }

        // Instantiate the prefab temporarily to modify its values
        GameObject tempInstance = Object.Instantiate(prefab);
        //Debug.Log("Prefab instantiated successfully.");

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
                        Debug.LogWarning($"For unit {unitData.unitName}, value for property {property.Name} is null.");
                        continue;
                    }

                    // Attempt to set the value on the corresponding field in BaseUnit
                    var targetField = typeof(BaseUnit).GetField(property.Name, BindingFlags.Public | BindingFlags.Instance);
                    if (targetField != null)
                        targetField.SetValue(unitScript, value);
                    else
                        Debug.LogWarning($"For unit {unitData.unitName}, field {property.Name} not found in BaseUnit.");
                        

/*                    if (property.Name == "sprite" && unitScript.spriteFillSR != null)
                    {
                        Debug.Log($"For unit {unitData.unitName}, value is {value} as sprite {(Sprite)value} .");
                    }*/
                    if (property.Name == "spriteAtlasPath" && unitScript.spriteFillSR != null)
                    {
                        setSpritesFromSpriteAtlas(unitScript.unitName,(string)value,unitScript.spriteContainer);
                        //Debug.Log($"For unit {unitData.unitName}, value is {value} as sprite {(Sprite)value} .");
                    }
                }

                // Optional: Debug log to verify properties
                //Debug.Log($"For unit {unitData.unitName}, modified prefab at path: {prefabPath} with unitData properties.");

#if UNITY_EDITOR
            UnityEditor.EditorUtility.SetDirty(tempInstance);  // Ensure Unity knows the prefab has been modified
            string fullPath = "Assets/Resources/" + prefabPath.Replace("Assets/Resources/", "").Replace(".prefab", "") + ".prefab";
            UnityEditor.PrefabUtility.SaveAsPrefabAsset(tempInstance, fullPath);
            //Debug.Log("Prefab saved successfully: " + fullPath);
#endif
            }
            else
            {
                Debug.LogError("BaseUnit component not found on the prefab instance.");
            }
        }
        catch (System.Exception e)
        {
            Debug.LogError("Error saving prefab: " + e.Message);
        }
        finally
        {
            // Destroy the temporary instance
            Object.DestroyImmediate(tempInstance);
        }
    }

    public void ClonePrefab(string basePrefabPath, string newPrefabPath)
    {
        GameObject basePrefab = getPrefab(basePrefabPath);

        if (basePrefab == null)
        {
            Debug.LogError("Base prefab not found at path: " + basePrefabPath);
            return;
        }

        GameObject newPrefabInstance = Object.Instantiate(basePrefab);

#if UNITY_EDITOR
        string fullPath = "Assets/Resources/" + newPrefabPath.Replace("Assets/Resources/", "").Replace(".prefab", "") + ".prefab";
        UnityEditor.PrefabUtility.SaveAsPrefabAsset(newPrefabInstance, fullPath);
        //Debug.Log("New prefab saved successfully: " + fullPath);
#endif

        Object.DestroyImmediate(newPrefabInstance);
    }

    public void setSpritesFromSpriteAtlas(string unitName, string atlasPath, StaticSprite spritePrefab)
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
                UnityEngine.Debug.LogWarning($"Sprite {name}Sprite_Fill not found in the sprite atlas.");
            }

            if (spriteAtlas.GetSprite($"{name}Sprite_Trim") != null)
            {
                spritePrefab.trimSR.sprite = spriteAtlas.GetSprite($"{name}Sprite_Trim");
            }
            else
            {
                UnityEngine.Debug.LogWarning($"Sprite {name}Sprite_Trim not found in the sprite atlas.");
            }

            if (spriteAtlas.GetSprite($"{name}Sprite_Lights") != null)
            {
                spritePrefab.lightsSR.sprite = spriteAtlas.GetSprite($"{name}Sprite_Lights");
            }
            else
            {
                UnityEngine.Debug.LogWarning($"Sprite {name}Sprite_Lights not found in the sprite atlas.");
            }
            //spritePrefab.fillSR.sprite = Resources.Load<Sprite>("Sprites/progeny0/infantrySprite");
            /*spritePrefab.fillSR.sprite = Resources.Load<Sprite>("Sprites/progeny0/infantrySprites/infantrySprite_Fill");
            spritePrefab.trimSR.sprite = Resources.Load<Sprite>("Sprites/progeny0/infantrySprites/infantrySprite_Lights");
            spritePrefab.lightsSR.sprite = Resources.Load<Sprite>("Sprites/progeny0/infantrySprites/infantrySprite_Trim");
            */
        }
        else
        {
            UnityEngine.Debug.LogWarning($"Failed to load spriteAtlas for {unitName} at path: {atlasPath}");
        }


    }


}
