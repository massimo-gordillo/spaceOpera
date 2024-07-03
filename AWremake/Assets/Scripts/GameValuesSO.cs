using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Reflection;
using System;

[CreateAssetMenu(fileName = "UnitData", menuName = "ScriptableObjects/UnitData", order = 1)]
public class GameValuesSO : ScriptableObject
{
    private List<AttributesBaseUnit> attributesBaseUnits;
    //private List<AttributesTile> attributesTiles;
    private string[] progenyNames;
    private string[] unitTypes;
    private PrefabManager prefabManager = new PrefabManager();
    private Dictionary<byte, AttributesTile> byteToAttributesTileDictionary; // Map byte values to AttributeTiles (tile rules)

    public void initialize()
    {
        Debug.Log("GameValuesSO OnEnable called.");
        attributesBaseUnits = new List<AttributesBaseUnit>();
        //attributesTiles = new List<AttributesTile>();

        //need to sync these up with the UnitValues.csv until a better soln is implemented.
        progenyNames = new string[3];
        progenyNames[0] = "ertrian";
        progenyNames[1] = "virix";
        progenyNames[2] = "sentus";

        LoadUnitsFromCSV("Assets/StreamingAssets/SpaceOperaUnitValues - UnitValues.csv");
        LoadTilesFromCSV("Assets/StreamingAssets/SpaceOperaTileValues - TileValues.csv");


        /*
        unitTypes = new string[3];
        unitTypes[0] = "land";
        unitTypes[1] = "air";
        unitTypes[2] = "sea";
        populateGameValuesInfantry();
        populateGameValuesGattlingTank();
        populateGameValuesLightTank();*/

        /*      populateGameValuesPlainsTile();
                populateGameValuesForestTile();
                populateGameValuesWaterTile();
                populateGameValuesReefTile();
                populateGameValuesSmallMountainTile();
                populateGameValuesMountainTile();
                populateGameValuesSwampTile();
                populateGameValuesRoadTile();
                populateGameValuesStructureTile();
                populateGameValuesResourceTile();*/
    }

    public void LoadUnitsFromCSV(string filePath)
    {
        string[] lines = File.ReadAllLines(filePath);

        if (lines.Length <= 1)
        {
            Debug.LogError("CSV file (units) is empty or only contains headers.");
            return;
        }

        // Read headers
        string[] headers = lines[0].Split(',');

        for (int i = 1; i < lines.Length; i++) // Skip header line
        {
            string[] values = lines[i].Split(',');
            AttributesBaseUnit unit = new AttributesBaseUnit();

            for (int j = 0; j < headers.Length; j++)
            {
                string header = headers[j];
                string value = values[j];

                if (headers[j] == "isInfantry")
                    Debug.Log($"Is row {i} setting isInfantry to T? {values[j]}");

                PropertyInfo property = typeof(AttributesBaseUnit).GetProperty(header, BindingFlags.Public | BindingFlags.Instance);
                if (property != null && property.CanWrite)
                {
                    object convertedValue = null;

                    // Handle enum conversions
                    if (property.PropertyType.IsEnum)
                    {
                        convertedValue = Enum.Parse(property.PropertyType, value, true); // Convert string to enum
                    }
                    else
                    {
                        convertedValue = Convert.ChangeType(value, property.PropertyType);
                    }

                    property.SetValue(unit, convertedValue, null);
                }
            }

            // Handle sprite loading separately
            unit.sprite = Resources.Load<Sprite>($"sprites/{unit.unitName.ToLower().Replace(" ", "")}Sprite");
            unit.prefabPath = getPrefabLocationString(unit.unitName, unit.progeny);

            attributesBaseUnits.Add(unit);
            prefabManager.modifyPrefab(unit.prefabPath, unit);
        }
    }


    public void LoadTilesFromCSV(string filePath)
    {
        byteToAttributesTileDictionary = new Dictionary<byte, AttributesTile>();
        string[] lines = File.ReadAllLines(filePath);

        if (lines.Length <= 1)
        {
            Debug.LogError("CSV file (tiles) is empty or only contains headers.");
            return;
        }

        // Read headers
        string[] headers = lines[0].Split(',');

        for (int i = 1; i < lines.Length; i++) // Skip header line
        {
            string[] values = lines[i].Split(',');
            AttributesTile attributesTile = new AttributesTile();

            for (int j = 0; j < headers.Length; j++)
            {
                string header = headers[j];
                string value = values[j];

                PropertyInfo property = typeof(AttributesTile).GetProperty(header, BindingFlags.Public | BindingFlags.Instance);
                if (property != null && property.CanWrite)
                {
                    try
                    {
                        object convertedValue;

                        // Custom conversion for byte type
                        if (property.PropertyType == typeof(byte))
                        {
                            convertedValue = Convert.ToByte(value);
                        }
                        else
                        {
                            convertedValue = Convert.ChangeType(value, Nullable.GetUnderlyingType(property.PropertyType) ?? property.PropertyType);
                        }

                        property.SetValue(attributesTile, convertedValue, null);

                        //Debug.Log($"Set {header} to {convertedValue} for tile.");
                    }
                    catch (Exception ex)
                    {
                        Debug.LogError($"Error converting value '{value}' for property '{header}': {ex.Message}");
                    }
                }
                else
                {
                    Debug.LogWarning($"No property named '{header}' found in AttributesTile.");
                }
            }
            if (byteToAttributesTileDictionary.ContainsKey(attributesTile.byteValue))
                Debug.LogWarning($"Skipping tile with byteValue {attributesTile.byteValue} as it already exists in the dictionary.");
            else if (attributesTile.byteValue < 0 || attributesTile.byteValue > 255)
                Debug.LogError($"Invalid byteValue {attributesTile.byteValue} for AttributesTile. Must be between 0 and 255.");
            else
                byteToAttributesTileDictionary.Add(attributesTile.byteValue, attributesTile);
        }
    }

    

    //odd bug, this function calls a unit in the list with an empty name. May be worth investigating should I call on this function in future.
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
    
    public Dictionary<byte, AttributesTile> getAttributesTilesDictionary()
    {
        return byteToAttributesTileDictionary;
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

    private string getPrefabLocationString(string unitName, Progeny progeny)
    {
        string prefabPath = "unitPrefabs/";
        int progenyIndex = (int)progeny + 1;

        prefabPath = prefabPath + "progeny" + progenyIndex;

        prefabPath = prefabPath + "/" + unitName.Replace(" ", "") + "Prefab";

        return prefabPath;
    }

    private void finalizePopulateGameValues(AttributesBaseUnit unit)
    {
        //requires the sprite in the inspector to be in Resources/Sprites and named aaaaSprite

/*        string spritePath = ("sprites/" + unit.unitName.ToLower().Replace(" ", "") + "Sprite"));
        unit.sprite = Resources.Load<Sprite>(spritePath);*/
        unit.sprite = Resources.Load<Sprite>($"sprites/{unit.unitName.ToLower().Replace(" ", "")}Sprite");

        unit.prefabPath = getPrefabLocationString(unit.unitName, unit.progeny);
        attributesBaseUnits.Add(unit);
        prefabManager.modifyPrefab(unit.prefabPath, unit);
    }

    /*private void populateGameValuesInfantry()
    {
        string hardcodedUnitName = "Infantry";
        string hardcodedProgeny = progenyNames[0];
        AttributesBaseUnit infantryM = new AttributesBaseUnit
        {
            unitName = hardcodedUnitName,
            progeny = hardcodedProgeny,
            unitType = unitTypes[0],
            unitIsInfantry = true,
            isResourceUnit = true,
            healthMax = 100,
            healthType = "light",
            weaponType = "projectile",
            damageType = "light",
            baseDamage = 50,
            attackRange = 1,
            price = 105,
            movementRange = 4
        };
        finalizePopulateGameValues(infantryM);
    }

    private void populateGameValuesGattlingTank()
    {
        string hardcodedUnitName = "Gattling Tank";
        string hardcodedProgeny = progenyNames[0];
        AttributesBaseUnit gattlingTankM = new AttributesBaseUnit
        {
            unitName = hardcodedUnitName,
            progeny = hardcodedProgeny,
            unitType = unitTypes[0],
            unitIsInfantry = false,
            isResourceUnit = false,
            healthMax = 400,
            healthType = "medium",
            weaponType = "projectile",
            damageType = "light",
            baseDamage = 100,
            attackRange = 1,
            price = 600,
            movementRange = 6
        };
        finalizePopulateGameValues(gattlingTankM);
    }

    private void populateGameValuesLightTank()
    {
        string hardcodedUnitName = "Light Tank";
        string hardcodedProgeny = progenyNames[0];
        AttributesBaseUnit lightTankM = new AttributesBaseUnit
        {
            unitName = hardcodedUnitName,
            progeny = hardcodedProgeny,
            unitType = unitTypes[0],
            unitIsInfantry = false,
            isResourceUnit = false,
            healthMax = 700,
            healthType = "heavy",
            weaponType = "projectile",
            damageType = "heavy",
            baseDamage = 300,
            attackRange = 1,
            price = 700,
            movementRange = 7
        };
        finalizePopulateGameValues(lightTankM);
    }*/







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
