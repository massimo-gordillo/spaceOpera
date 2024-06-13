using UnityEngine;

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
}
