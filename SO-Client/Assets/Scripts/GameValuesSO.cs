using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Reflection;
using System;

[CreateAssetMenu(fileName = "UnitData", menuName = "ScriptableObjects/UnitData", order = 1)]
public class GameValuesSO : ScriptableObject
{
    private Dictionary<byte, AttributesBaseUnit> attributesBaseUnits;
    //private List<AttributesTile> attributesTiles;
    private string[] unitTerrainTypes;
    private PrefabManager prefabManager = new PrefabManager();
    private Dictionary<byte, AttributesTile> byteToAttributesTileDictionary; // Map byte values to AttributeTiles (tile rules)
    private Dictionary<string, Dictionary<string, double>> combatMultipliersDictionary;

    public void initialize()
    {
        //Debug.Log("GameValuesSO OnEnable called.");
        attributesBaseUnits = new Dictionary<byte, AttributesBaseUnit>();
        //attributesTiles = new List<AttributesTile>();

        LoadUnitsFromCSV("Assets/StreamingAssets/SpaceOperaUnitValues - UnitValues.csv");
        LoadTilesFromCSV("Assets/StreamingAssets/SpaceOperaTileValues - TileValues.csv");
        LoadCombatMultipliersFromCSV("Assets/StreamingAssets/SpaceOperaUnitValues - Combat Multipliers.csv");
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

            /*String unitSpriteString = "sprites/progeny" + GetEnumIndex(unit.progeny) + "/" + unit.unitName.ToLower().Replace(" ", "") + "Sprite";
            Debug.Log($"Unit Sprite should be here: {unitSpriteString}");
            unit.sprite = Resources.Load<Sprite>(unitSpriteString);
            //unit.sprite = Resources.Load<Sprite>($"sprites/{unit.unitName.ToLower().Replace(" ", "")}Sprite");*/

            // Handle sprite loading separately
            //string unitSpritePath = $"sprites/progeny{GetEnumIndex(unit.progeny)}/{unit.unitName.ToLower().Replace(" ", "")}Sprite";
            //Debug.Log($"Attempting to load sprite from path: {unitSpritePath}");
            //unit.sprite = Resources.Load<Sprite>(unitSpritePath);
            //unit.spriteAtlasPath = $"Sprites/progeny{GetEnumIndex(unit.progeny)}/{unit.unitName.ToLower().Replace(" ", "")}SpriteAtlas.spriteatlas";
            unit.spriteAtlasPath = $"Sprites/progeny{GetEnumIndex(unit.progeny)}/{unit.unitName.ToLower().Replace(" ", "")}SpriteAtlas";


            /*if (unit.sprite == null)
            {
                Debug.LogError($"Failed to load sprite at path: {unitSpritePath}");
            }*/



            unit.prefabPath = generatePrefabLocationString(unit.unitName, unit.progeny);
            unit.baseUnitVariantIdentifier = (byte)(i - 1);
            //add unit attributes to list of attributesBaseUnit.
            attributesBaseUnits.Add(unit.baseUnitVariantIdentifier, unit);

            //Assets/Resources/UnitPrefabs/progeny1/BasePrefab.prefab
            string basePrefabPath = "UnitPrefabs/BaseUnitBasePrefab";
            prefabManager.ClonePrefab(basePrefabPath, unit.prefabPath);
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

        for (int i = 1; i < lines.Length; i++) // For each row in the array (skip header line)
        {
            string[] values = lines[i].Split(',');
            AttributesTile attributesTile = new AttributesTile();

            for (int j = 0; j < headers.Length; j++) //for each column 
            {
                string header = headers[j]; //the header for column j
                string value = values[j]; //the values in row j
                PropertyInfo property = typeof(AttributesTile).GetProperty(header, BindingFlags.Public | BindingFlags.Instance);
                if (property != null && property.CanWrite)
                {
                    try
                    {
                        object convertedValue;

                        // Custom conversion for byte type
                        if (property.PropertyType == typeof(byte))
                            convertedValue = Convert.ToByte(value);
                        else
                            convertedValue = Convert.ChangeType(value, Nullable.GetUnderlyingType(property.PropertyType) ?? property.PropertyType);

                        property.SetValue(attributesTile, convertedValue, null);

                    }
                    catch (Exception ex)
                    {
                        Debug.LogError($"Error converting value '{value}' for property '{header}': {ex.Message}");
                    }
                }
                else
                    Debug.LogWarning($"No property named '{header}' found in AttributesTile.");
            }
            if (byteToAttributesTileDictionary.ContainsKey(attributesTile.byteValue))
                Debug.LogWarning($"Skipping tile with byteValue {attributesTile.byteValue} as it already exists in the dictionary.");
            else if (attributesTile.byteValue < 0 || attributesTile.byteValue > 255)
                Debug.LogError($"Invalid byteValue {attributesTile.byteValue} for AttributesTile. Must be between 0 and 255.");
            else
                byteToAttributesTileDictionary.Add(attributesTile.byteValue, attributesTile);
        }
    }

    private void LoadCombatMultipliersFromCSV(string csvFilePath)
    {
        combatMultipliersDictionary = new Dictionary<string, Dictionary<string, double>>();
        using (var reader = new StreamReader(csvFilePath))
        {
            var header = reader.ReadLine().Split(',');

            while (!reader.EndOfStream)
            {
                var line = reader.ReadLine().Split(',');
                var healthType = line[0];

                var innerDict = new Dictionary<string, double>();
                for (int i = 1; i < header.Length; i++)
                {
                    innerDict[header[i]] = double.Parse(line[i]);
                }

                combatMultipliersDictionary[healthType] = innerDict;


            }
        }
    }



    //odd bug, this function calls a unit in the list with an empty name. May be worth investigating should I call on this function in future.
    public AttributesBaseUnit GetUnitDataByTitle(string unitName)
    {
        // Iterate through each AttributesBaseUnit in the list
        //foreach (AttributesBaseUnit unitData in attributesBaseUnits)
        foreach (var kvp in attributesBaseUnits)
        {
            AttributesBaseUnit unitData = kvp.Value;
            // Log the unit name being checked
            //Debug.Log($"Checking unit: {unitData.unitName}");

            // Check if the current unit's name matches the given unitName
            if (unitData.unitName == unitName)
            {
                // Log and return the matching unit
                printToLogs(unitData);
                //Debug.Log($"Found unit: {unitData.unitName} it has prefabPath data : **{unitData.prefabPath}**");
                return unitData;
            }
        }

        // Log a warning if no matching unit was found
        Debug.LogWarning($"Unit with name {unitName} not found!");
        return null;
        //return attributesBaseUnit.Find(AttributesBaseUnit => AttributesBaseUnit.unitName == unitName);
    }
    

    public AttributesBaseUnit GetUnitDataByByte(byte b)
    {
        try
        {
            return attributesBaseUnits[b];
        }
        catch (KeyNotFoundException)
        {
            Debug.LogError($"Key not found for byte {b} in AttributesBaseUnits");
            return null;
        }
    }

    public Dictionary<byte, AttributesBaseUnit> getAttributesBaseUnits()
    {
        return attributesBaseUnits;
    }    
    
    public Dictionary<byte, AttributesTile> getAttributesTilesDictionary()
    {
        return byteToAttributesTileDictionary;
    }

    public Dictionary<string, Dictionary<string, double>>  getCombatMultiplierDictionary()
    {
        return combatMultipliersDictionary;
    }

    //debugging function
    private void printToLogs(AttributesBaseUnit unitData)
    {
        Debug.Log($"unitName: {unitData.unitName}");
        Debug.Log($".progeny: {unitData.progeny}");
        Debug.Log($"unitTerrainType: {unitData.unitTerrainType}");
        Debug.Log($"healthMax: {unitData.healthMax}");
        Debug.Log($"healthType: {unitData.healthType}");
        Debug.Log($"weaponType: {unitData.weaponType}");
        Debug.Log($"damageType: {unitData.damageType}");
        Debug.Log($"baseDamage: {unitData.baseDamage}");
        Debug.Log($"attackRange: {unitData.attackRange}");
        Debug.Log($".price: {unitData.price}");
        Debug.Log($"movementRange: {unitData.movementRange}");
        //Debug.Log($".sprite: {unitData.sprite}");
        Debug.Log($"prefabPath: {unitData.prefabPath}");
    }

    private string generatePrefabLocationString(string unitName, Progeny progeny)
    {
        string prefabPath = "unitPrefabs/";
        int progenyIndex = (int)progeny + 1;

        prefabPath = prefabPath + "progeny" + progenyIndex;

        prefabPath = prefabPath + "/" + unitName.Replace(" ", "") + "Prefab";

        return prefabPath;
    }

/*    private void finalizePopulateGameValues(AttributesBaseUnit unit)
    {
        //requires the sprite in the inspector to be in Resources/Sprites and named aaaaSprite

*//*        string spritePath = ("sprites/" + unit.unitName.ToLower().Replace(" ", "") + "Sprite"));
        unit.sprite = Resources.Load<Sprite>(spritePath);*//*
        unit.sprite = Resources.Load<Sprite>($"sprites/{unit.unitName.ToLower().Replace(" ", "")}Sprite");

        unit.prefabPath = generatePrefabLocationString(unit.unitName, unit.progeny);
        attributesBaseUnits.Add(unit.baseUnitVariantIdentifier, unit);
        prefabManager.modifyPrefab(unit.prefabPath, unit);
    }*/

    public static int GetEnumIndex<TEnum>(TEnum value) where TEnum : Enum
    {
        return Array.IndexOf(Enum.GetValues(value.GetType()), value);
    }
}
