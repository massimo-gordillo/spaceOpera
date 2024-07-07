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


    /*public void modifyPrefab(string prefabPath, AttributesBaseUnit unitData)
    {
        GameObject prefab = getPrefab(prefabPath);

        if (prefab == null)
        {
            Debug.LogError("Prefab not found at path: " + prefabPath);
            return;
        }

        // Instantiate the prefab temporarily to modify its values
        GameObject tempInstance = Object.Instantiate(prefab);

        try
        {
            BaseUnit unitScript = tempInstance.GetComponent<BaseUnit>();
            if (unitScript != null)
            {
                // Get all the public instance properties of AttributesBaseUnit
                var properties = typeof(AttributesBaseUnit).GetProperties(BindingFlags.Public | BindingFlags.Instance);

                foreach (var property in properties)
                {
                    // Get the value from the unitData object
                    var value = property.GetValue(unitData);

                    // Find the corresponding property in BaseUnit
                    var targetProperty = typeof(BaseUnit).GetProperty(property.Name, BindingFlags.Public | BindingFlags.Instance);

                    // Ensure the target property exists and is writable
                    if (targetProperty != null && targetProperty.CanWrite)
                    {
                        targetProperty.SetValue(unitScript, value);
                    }
                    else
                    {
                        Debug.LogWarning($"Property '{property.Name}' does not exist or cannot be written to on BaseUnit.");
                    }
                }

                // Optional: Debug log to verify properties
                Debug.Log($"Modified prefab at path: {prefabPath} with unitData properties.");

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
    }*/




    /*public void modifyPrefab(string prefabPath, AttributesBaseUnit unitData)
    {
        GameObject prefab = getPrefab(prefabPath);

        if (prefab == null)
        {
            Debug.LogError("Prefab not found at path: " + prefabPath);
            return;
        }

        // Instantiate the prefab temporarily to modify its values
        GameObject tempInstance = Object.Instantiate(prefab);

        try
        {
            BaseUnit unitScript = tempInstance.GetComponent<BaseUnit>();
            if (unitScript != null)
            {
                unitScript.unitName = unitData.unitName;
                unitScript.progeny = unitData.progeny;
                unitScript.unitType = unitData.unitType;
                unitScript.healthMax = unitData.healthMax;
                unitScript.healthType = unitData.healthType;
                unitScript.damageType = unitData.damageType;
                unitScript.weaponType = unitData.weaponType;
                unitScript.baseDamage = unitData.baseDamage;
                unitScript.attackRange = unitData.attackRange;
                unitScript.price = unitData.price;
                unitScript.movementRange = unitData.movementRange;
                unitScript.sprite = unitData.sprite;
                unitScript.prefabPath = unitData.prefabPath;
                unitScript.isInfantry = unitData.isInfantry;
                unitScript.unitType = unitData.unitType;
            }
            else
            {
                Debug.LogError("BaseUnit component not found on the prefab instance.");
            }

            // Apply the changes to the prefab itself in an editor context
#if UNITY_EDITOR
                    UnityEditor.EditorUtility.SetDirty(tempInstance);  // Ensure Unity knows the prefab has been modified
                    string fullPath = "Assets/Resources/" + prefabPath.Replace("Assets/Resources/", "").Replace(".prefab", "") + ".prefab";
                    UnityEditor.PrefabUtility.SaveAsPrefabAsset(tempInstance, fullPath);
                    Debug.Log("Prefab saved successfully: " + fullPath);
#endif
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
}*/

   public void modifyPrefab(string prefabPath, AttributesBaseUnit unitData)
    {
        Debug.Log($"Attempting to modify prefab at path: {prefabPath}");

        GameObject prefab = getPrefab(prefabPath);

        if (prefab == null)
        {
            Debug.LogError("Prefab not found at path: " + prefabPath);
            return;
        }

        // Instantiate the prefab temporarily to modify its values
        GameObject tempInstance = Object.Instantiate(prefab);
        Debug.Log("Prefab instantiated successfully.");

        try
        {
            BaseUnit unitScript = tempInstance.GetComponent<BaseUnit>();
            if (unitScript != null)
            {
                // Get all the public instance properties of AttributesBaseUnit
                var properties = typeof(AttributesBaseUnit).GetProperties(BindingFlags.Public | BindingFlags.Instance);
                Debug.Log($"Found {properties.Length} properties in AttributesBaseUnit.");

                foreach (var property in properties)
                {
                    // Log the property name from AttributesBaseUnit
                    Debug.Log($"Processing property: {property.Name}");

                    // Get the value from the unitData object and set it on the unitScript object
                    var value = property.GetValue(unitData);
                    if (value == null)
                    {
                        Debug.LogWarning($"Value for property {property.Name} is null.");
                        continue;
                    }

                    // Attempt to set the value on the corresponding field in BaseUnit
                    var targetField = typeof(BaseUnit).GetField(property.Name, BindingFlags.Public | BindingFlags.Instance);
                    if (targetField != null)
                    {
                        targetField.SetValue(unitScript, value);
                        Debug.Log($"Successfully wrote to targetField {targetField.Name}, value: {value}");
                    }
                    else
                    {
                        Debug.LogWarning($"Field {property.Name} not found in BaseUnit.");
                    }
                }

                // Optional: Debug log to verify properties
                Debug.Log($"Modified prefab at path: {prefabPath} with unitData properties.");

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
            Debug.Log("Temporary instance destroyed.");
        }
    }


}
