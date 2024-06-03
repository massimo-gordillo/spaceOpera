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
        populateGameValuesGattlingTank();
        populateGameValuesLightTank();
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

    public List<AttributesBaseUnit> getAttributesBaseUnits()
    {
        return attributesBaseUnits;
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

    private string getPrefabLocationString(string unitName, string progeny)
    {
        string prefabPath = "unitPrefabs/";
        int i = 1;

        foreach (string s in progenyNames)
        {
            if (s == progeny)
                prefabPath = prefabPath + "progeny" + i;
            i++;
        }

        unitName = unitName.Replace(" ", "");
        prefabPath = prefabPath + "/" + unitName + "Prefab";
        return prefabPath;
    }

    private void populateGameValuesInfantry()
    {
        string hardcodedUnitName = "Infantry";
        string hardcodedProgeny = progenyNames[0];
        AttributesBaseUnit infantryM = new AttributesBaseUnit
        {
            unitName = hardcodedUnitName,
            progeny = hardcodedProgeny,
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
            //prefabPath = "unitPrefabs/progeny1/Infantry"
            prefabPath = getPrefabLocationString(hardcodedUnitName, hardcodedProgeny)
        };
        Debug.Log($"prefabPath: {infantryM.prefabPath}");
        attributesBaseUnits.Add(infantryM);
        prefabManager.modifyPrefab(infantryM.prefabPath, infantryM);

    }


    private void populateGameValuesGattlingTank()
    {
        string hardcodedUnitName = "Gattling Tank";
        string hardcodedProgeny = progenyNames[0];
        AttributesBaseUnit gattlingTankM = new AttributesBaseUnit
        {
            unitName = hardcodedUnitName,
            progeny = hardcodedProgeny,
            unitType = unitTypes[1],
            healthMax = 400,
            healthType = "medium",
            weaponType = "projectile",
            damageType = "light",
            baseDamage = 100,
            attackRange = 1,
            price = 600,
            movementRange = 6,
            sprite = Resources.Load<Sprite>("sprites/GattlingTankSprite"),
            //prefabPath = "unitPrefabs/progeny1/gattlingTank"
            prefabPath = getPrefabLocationString(hardcodedUnitName, hardcodedProgeny)
        };
        Debug.Log($"prefabPath: {gattlingTankM.prefabPath}");
        attributesBaseUnits.Add(gattlingTankM);
        prefabManager.modifyPrefab(gattlingTankM.prefabPath, gattlingTankM);

    }

    private void populateGameValuesLightTank()
    {
        string hardcodedUnitName = "Light Tank";
        string hardcodedProgeny = progenyNames[0];
        AttributesBaseUnit lightTankM = new AttributesBaseUnit
        {
            unitName = hardcodedUnitName,
            progeny = hardcodedProgeny,
            unitType = unitTypes[1],
            healthMax = 700,
            healthType = "heavy",
            weaponType = "projectile",
            damageType = "heavy",
            baseDamage = 300,
            attackRange = 1,
            price = 700,
            movementRange = 7,
            sprite = Resources.Load<Sprite>("sprites/lightTankSprite"),
            //prefabPath = "unitPrefabs/progeny1/lightTank"
            prefabPath = getPrefabLocationString(hardcodedUnitName, hardcodedProgeny)
        };
        Debug.Log($"prefabPath: {lightTankM.prefabPath}");
        attributesBaseUnits.Add(lightTankM);
        prefabManager.modifyPrefab(lightTankM.prefabPath, lightTankM);

    }








    /*private void populateGameValuesGattlingTank()
    {
        MetadataBaseUnit gattlingTankM = new MetadataBaseUnit();

        gattlingTankM.unitName = "Gattling Tank";
        gattlingTankM.progeny = progenyNames[0];
        gattlingTankM.healthMax = 400;
        gattlingTankM.healthType = "medium";
        gattlingTankM.weaponType = "projectile";
        gattlingTankM.damageType = "light";
        gattlingTankM.baseDamage = 100;
        gattlingTankM.attackRange = 1;
        gattlingTankM.price = 600;
        gattlingTankM.movementRange = 6;
        gattlingTankM.sprite = Resources.Load<Sprite>("sprites/gattlingTankSprite");

        metadataBaseUnits.Add(gattlingTankM);
    }

    private void populateGameValuesLightTank()
    {
        MetadataBaseUnit lightTankM = new MetadataBaseUnit();

        lightTankM.unitName = "Light Tank";
        lightTankM.progeny = progenyNames[0];
        lightTankM.healthMax = 700;
        lightTankM.healthType = "heavy";
        lightTankM.weaponType = "projectile";
        lightTankM.damageType = "heavy";
        lightTankM.baseDamage = 300;
        lightTankM.attackRange = 1;
        lightTankM.price = 700;
        lightTankM.movementRange = 7;
        lightTankM.sprite = Resources.Load<Sprite>("sprites/lightTankSprite");

        metadataBaseUnits.Add(lightTankM);
    }*/
}
