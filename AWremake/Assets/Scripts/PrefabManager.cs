using UnityEngine;
using System.Reflection;

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

                    if (property.Name == "sprite" && unitScript.unitSpriteRenderer != null)
                    {
                        unitScript.unitSpriteRenderer.sprite = (Sprite)value;
                        Debug.Log($"Sprite for unit {unitData.unitName} updated.");
                    }
                }

                // Optional: Debug log to verify properties
                //Debug.Log($"For unit {unitData.unitName}, modified prefab at path: {prefabPath} with unitData properties.");

#if UNITY_EDITOR
            UnityEditor.EditorUtility.SetDirty(tempInstance);  // Ensure Unity knows the prefab has been modified
            string fullPath = "Assets/Resources/" + prefabPath.Replace("Assets/Resources/", "").Replace(".prefab", "") + ".prefab";
            UnityEditor.PrefabUtility.SaveAsPrefabAsset(tempInstance, fullPath);
            Debug.Log("Prefab saved successfully: " + fullPath);
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
        Debug.Log("New prefab saved successfully: " + fullPath);
#endif

        Object.DestroyImmediate(newPrefabInstance);
    }


}
