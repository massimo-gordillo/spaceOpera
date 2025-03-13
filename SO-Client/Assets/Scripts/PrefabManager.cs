using UnityEngine;
using System.Reflection;
using UnityEngine.U2D;
using System.Diagnostics;
using System;
using System.Collections.Generic;
//using System.Diagnostics;

public class PrefabManager
{
    private GameValuesSO gameValuesSO;

    /*    public void setGameValues(GameValuesSO setGameValuesSO)
        {
            gameValuesSO = setGameValuesSO;
        }*/

    public void managePrefabOnStartUp(AttributesBaseUnit unitAttributes)
    {
        string prefabPath = unitAttributes.prefabPath;
        BaseUnit prefab = getUnitFromPrefab(prefabPath);
        bool updateSpritesFlag = false;
        if (prefab == null || prefab.attributesHash != unitAttributes.attributesHash || updateSpritesFlag)
        {
            if (prefab.attributesHash != unitAttributes.attributesHash && prefab != null)
            {
                UnityEngine.Debug.Log($"prefab {unitAttributes.unitName} has different attribute hash, rebuilding.");
            }
            //Assets/Resources/UnitPrefabs/progeny1/BasePrefab.prefab
            string basePrefabPath = "UnitPrefabs/BaseUnitBasePrefab";
            ClonePrefab(basePrefabPath, prefabPath);
            modifyPrefab(prefabPath, unitAttributes);
        }
/*        else
        {
            UnityEngine.Debug.Log($"for unit {unitAttributes.unitName}, prefab check ok");
        }*/
    }

    public GameObject getPrefab(string prefabPath)
    {
        GameObject prefab = Resources.Load<GameObject>(prefabPath.Replace("Assets/Resources/", "").Replace(".prefab", ""));
        if (prefab == null)
        {
            UnityEngine.Debug.LogWarning("Prefab not found at path: " + prefabPath);
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
                        //setSpritesFromSpriteAtlas(unitScript.unitName, (string)value, unitScript.spriteContainer);
                        //UnityEngine.Debug.Log($"For unit {unitData.unitName}, value is {value} as sprite {(Sprite)value} .");
                        setSprites(unitData, unitScript.spriteContainer);
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



    //need to separate StaticSprite from AttributesBaseUnit because MenuProductionPanel passes a different sprite.
    public void setSprites(AttributesBaseUnit attributes, StaticSprite spritePrefab)
    {


        // Check for null parameters
        if (attributes == null)
        {
            UnityEngine.Debug.LogError("AttributesBaseUnit is null.");
            return;
        }

        if (spritePrefab == null)
        {
            UnityEngine.Debug.LogError("StaticSprite prefab is null.");
            return;
        }

        //UnityEnginer.Debug.LogError($"Setting sprites for {attributes.unitName}.");

        // Validate enum conversion
        int progenyIndex;
        try
        {
            progenyIndex = GameValuesSO.GetEnumIndex(attributes.progeny);
        }
        catch (Exception ex)
        {
            UnityEngine.Debug.LogError($"Error converting progeny enum to index: {ex.Message}");
            return;
        }
        string basePath;
        string fillSpritePath;
        string lightsSpritePath;
        string trimSpritePath;
        string unitNameLower = attributes.unitName.ToLower().Replace(" ", "");

        // Construct paths. Old implementation for progeny0. 
        if (progenyIndex == 0) { 
            basePath = $"Sprites/progeny{progenyIndex}/{unitNameLower}Sprites/{attributes.unitName.ToLower().Replace(" ", "")}";
            fillSpritePath = $"{basePath}Sprite_Fill";
            trimSpritePath = $"{basePath}Sprite_Trim";
            lightsSpritePath = $"{basePath}Sprite_Lights";
            //UnityEngine.Debug.Log($"Setting sprites for: {attributes.unitName}");
            //UnityEngine.Debug.Log($"spritePrefab instance ID: {spritePrefab.GetInstanceID()} for unit: {attributes.unitName}");
            //UnityEngine.Debug.Log($"spritePrefab path: {basePath} for unit: {attributes.unitName}");

            // Load sprites and check for errors
            Sprite fillSprite = Resources.Load<Sprite>(fillSpritePath);
            if (fillSprite == null)
            {
                //UnityEngine.Debug.Log($"Failed to load fill sprite from path: {fillSpritePath}");
            }
            else
            {
                spritePrefab.fillSR.sprite = fillSprite;
            }

            Sprite trimSprite = Resources.Load<Sprite>(trimSpritePath);
            if (trimSprite == null)
            {
                //UnityEngine.Debug.Log($"Failed to load trim sprite from path: {trimSpritePath}");
            }
            else
            {
                spritePrefab.trimSR.sprite = trimSprite;
            }

            Sprite lightsSprite = Resources.Load<Sprite>(lightsSpritePath);
            if (lightsSprite == null)
            {
                //UnityEngine.Debug.Log($"Failed to load lights sprite from path: {lightsSpritePath}");
                spritePrefab.lightsSR.sprite = null;
            }
            else
            {
                spritePrefab.lightsSR.sprite = lightsSprite;
            }


        }
        else //newer implementation
        {
            basePath = $"Sprites/progeny{progenyIndex}/{unitNameLower}Sprites";
/*            basePath = $"Sprites/progeny{progenyIndex}/{unitNameLower}Sprites/{unitNameLower}_";
            fillSpritePath = $"{basePath}1";
            trimSpritePath = $"{basePath}2";
            lightsSpritePath = $"{basePath}3";*/
            Sprite[] sprites = Resources.LoadAll<Sprite>(basePath);
            if (sprites == null || sprites.Length == 0)
            {
                UnityEngine.Debug.LogError($"Failed to load sprites from path: {basePath}");
                return;
            }
            /*            //sprite image has to be a multi sprites and in the order of 0: full sprite, 1: fill, 2: trim, 3:lights.
                        spritePrefab.fillSR.sprite = sprites[1];
                        spritePrefab.trimSR.sprite = sprites[2];
                        spritePrefab.trimSR.sprite = sprites[3];*/
            UnityEngine.Debug.Log($"Loaded {sprites.Length} sprites for {attributes.unitName} at path: {basePath}");

            // Ensure we have enough sprites to assign
            if (sprites.Length > 1) spritePrefab.fillSR.sprite = sprites[1];
            if (sprites.Length > 2) spritePrefab.trimSR.sprite = sprites[2];
            if (sprites.Length > 3) spritePrefab.lightsSR.sprite = sprites[3];
        }


    }

}
