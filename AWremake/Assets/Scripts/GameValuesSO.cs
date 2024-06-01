using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "UnitData", menuName = "ScriptableObjects/UnitData", order = 1)]
public class GameValuesSO : ScriptableObject
{

    /* I could make a unitValTypes object which contain the name and a title for each value type
     * and then in this scriptableObject I would create N instances of that unitValTypes object and
     * populate all the values for the N different units. 
     * Would be much more readable.
     * It's unclear if I can do that kind of operations in a ScriptableObject. 
     * Looks like it's possible. See:
    * https://unity.com/how-to/architect-game-code-scriptable-objects#:~:text=ScriptableObject%20is%20a%20serializable%20Unity,to%20manage%20changes%20and%20debugging.
    */
    //public string[] unitNames;
    //public int[,] unitvalues;



    //private List<AttributesBaseUnit> attributesBaseUnit = new List<AttributesBaseUnit>();
    private List<AttributesBaseUnit> attributesBaseUnits;
    private string[] progenyNames;
    private string[] unitTypes;
    private PrefabManager prefabManager;
    //public AttributesBaseUnit infantryM;

    // Start is called before the first frame update
    void OnEnable()
    {
        Debug.Log("GameValuesSO OnEnable called.");
        if (attributesBaseUnits == null)
        {
            attributesBaseUnits = new List<AttributesBaseUnit>();
        }
        progenyNames = new string[3];
        progenyNames[0] = "ertrian";
        progenyNames[1] = "virix";
        progenyNames[2] = "sentus";
        unitTypes = new string[4];
        unitTypes[0] = "resource";
        unitTypes[1] = "land";
        unitTypes[2] = "air";
        unitTypes[3] = "sea";
        //private string[] progenyNames = new string[] { "ertrian", "virix", "sentus" };
        prefabManager = new PrefabManager();
        populateGameValuesInfantry();
        //populateGameValuesGattlingTank();
    }

    //2024-05-31 this might be broken.
    public AttributesBaseUnit GetUnitDataByTitle(string unitName)
    {
        // Iterate through each AttributesBaseUnit in the list
        foreach (AttributesBaseUnit unitData in attributesBaseUnits)
        {
            // Log the unit name being checked
            Debug.Log($"Checking unit: {unitData.unitName}");

            // Check if the current unit's name matches the given unitName
            if (unitData.unitName == unitName)
            {
                // Log and return the matching unit
                printToLogs(unitData);
                Debug.Log($"Found unit: {unitData.unitName} it has prefabPath data : **{unitData.prefabPath}**");
                return unitData;
            }
        }

        // Log a warning if no matching unit was found
        Debug.LogWarning($"Unit with name {unitName} not found!");
        return null;
        //return attributesBaseUnit.Find(AttributesBaseUnit => AttributesBaseUnit.unitName == unitName);
    }

    private void printToLogs(AttributesBaseUnit unitData)
    {
        Debug.Log($"unitName: {unitData.unitName}");
        Debug.Log($".progeny: {unitData.progeny}");
        Debug.Log($"unitType: {unitData.unitType}");
        Debug.Log($"healthMax: {unitData.healthMax}");
        Debug.Log($"healthType: {unitData.healthType}");
        Debug.Log($"weaponType: {unitData.weaponType}");
        Debug.Log($"damageType: {unitData.damageType}");
        Debug.Log($"baseDamage: {unitData.baseDamage}");
        Debug.Log($"attackRange: {unitData.attackRange}");
        Debug.Log($".price: {unitData.price}");
        Debug.Log($"movementRange: {unitData.movementRange}");
        Debug.Log($".sprite: {unitData.sprite}");
        Debug.Log($"prefabPath: {unitData.prefabPath}");
    }

    private void populateGameValuesInfantry()
    {
        AttributesBaseUnit infantryM = new AttributesBaseUnit
        {
            unitName = "Infantry",
            progeny = progenyNames[0],
            unitType = unitTypes[0],
            healthMax = 100,
            healthType = "light",
            weaponType = "projectile",
            damageType = "light",
            baseDamage = 50,
            attackRange = 1,
            price = 800,
            movementRange = 6,
            sprite = Resources.Load<Sprite>("sprites/infantrySprite"),
            prefabPath = "Assets/Resources/unitPrefabs/progeny1/Infantry"
        };

        attributesBaseUnits.Add(infantryM);
        Debug.Log($"Adding prefab path: {infantryM.prefabPath}");
        prefabManager.modifyPrefab(infantryM.prefabPath, infantryM);

    }
    /*private void populateGameValuesInfantry()
    {
        AttributesBaseUnit infantryM = new AttributesBaseUnit();

        infantryM.unitName = "Infantry";
        infantryM.progeny = progenyNames[0];
        infantryM.unitType = unitTypes[0];
        infantryM.healthMax = 100;
        infantryM.healthType = "light";
        infantryM.weaponType = "projectile";
        infantryM.damageType = "light";
        infantryM.baseDamage = 50;
        infantryM.attackRange = 1;
        infantryM.price = 888;
        infantryM.movementRange = 6;
        infantryM.sprite = Resources.Load<Sprite>("sprites/infantrySprite");
        //infantryM.prefabPath = "Assets/Resources/unitPrefabs/progeny1/Infantry";
        infantryM.prefabPath = "helloworld";

        attributesBaseUnits.Add(infantryM);
        Debug.Log($"Adding prefab path: {infantryM.prefabPath}");
    }*/


}
