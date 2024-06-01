using UnityEngine;

public class PrefabManager : MonoBehaviour
{
    //public GameValuesSO gameValuesSO;

    void Start()
    {

    }

    public void modifyPrefab(string prefabPath, AttributesBaseUnit unitData)
    {
        string tempPrefabPath = prefabPath;
        GameObject prefab = Resources.Load<GameObject>(tempPrefabPath);

        if (prefab == null)
        {
            Debug.LogError("Prefab not found at path: " + tempPrefabPath);
            return;
        }

        // Instantiate the prefab temporarily to modify its values
        GameObject tempInstance = Instantiate(prefab);

        // Assuming the prefab has a script with public variables "health" and "attackPower"
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

        // Apply the changes to the prefab itself
        #if UNITY_EDITOR
        UnityEditor.PrefabUtility.SaveAsPrefabAsset(tempInstance, prefabPath + ".prefab");
        #endif

        // Destroy the temporary instance
        Destroy(tempInstance);
    }
}