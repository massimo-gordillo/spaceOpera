using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "UnitData", menuName = "ScriptableObjects/UnitData", order = 1)]
public class GameValuesSO : ScriptableObject
{
    private List<AttributesBaseUnit> attributesBaseUnits;
    private string[] progenyNames;
    private string[] unitTypes;
    private PrefabManager prefabManager = new PrefabManager();

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
        populateGameValuesInfantry();
        //populateGameValuesGattlingTank();
    }

    //this function calls a unit in the list with an empty name. May be worth investigating should I call on this function in future.
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

    //debugging function
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
            price = 105,
            movementRange = 4,
            sprite = Resources.Load<Sprite>("sprites/infantrySprite"),
            //prefabPath = "Assets/Resources/unitPrefabs/progeny1/Infantry.prefab"
            prefabPath = "unitPrefabs/progeny1/Infantry"
        };

        attributesBaseUnits.Add(infantryM);
        prefabManager.modifyPrefab(infantryM.prefabPath, infantryM);

    }
}
