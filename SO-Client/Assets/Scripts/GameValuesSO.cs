using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using UnityEngine;
using UnityEngine.Networking;

[CreateAssetMenu(fileName = "UnitData", menuName = "ScriptableObjects/UnitData", order = 1)]
public class GameValuesSO : ScriptableObject
{
    public bool isInit;
    private Dictionary<byte, AttributesBaseUnit> attributesBaseUnits = new Dictionary<byte, AttributesBaseUnit>();
    //private Dictionary<byte, AttributesBaseUnit> attributesBaseUnits;
    //private List<AttributesTile> attributesTiles;
    private string[] unitTerrainTypes;
    private PrefabManager prefabManager = new PrefabManager();
    private Dictionary<byte, AttributesTile> byteToAttributesTileDictionary; // Map byte values to AttributeTiles (tile rules)
    private Dictionary<string, Dictionary<string, double>> combatMultipliersDictionary;


    void OnEnable()
    {
        isInit = false;
    }

    public void initialize()
    {
        //Debug.Log("GameValuesSO OnEnable called.");
        //attributesBaseUnits = new Dictionary<byte, AttributesBaseUnit>();
        //attributesTiles = new List<AttributesTile>();
        if (!isInit) { 
            //Debug.Log("GameValuesSO OnEnable called.");
            LoadUnitsFromCSV();
            //LoadUnitsFromCSV("SpaceOperaUnitValues - UnitValues.csv");
            LoadTilesFromCSV();
            LoadCombatMultipliersFromCSV();
            isInit = true;
        }else
            {
            Debug.Log("GameValuesSO already initialized.");
        }
    }


    /*public static List<string> LoadCSVFromJSON(string fileName)
    {
        string filePath = Path.Combine(Application.streamingAssetsPath, fileName);
        string csvText = null;

        if (filePath.StartsWith("jar:") || filePath.StartsWith("file://"))
        {
            UnityWebRequest request = UnityWebRequest.Get(filePath);
            request.SendWebRequest();

            while (!request.isDone) { }  // Block execution

            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Failed to load CSV: " + request.error);
                return null;
            }
            csvText = request.downloadHandler.text;
            *//*            using (UnityWebRequest request = UnityWebRequest.Get(filePath))
                        {
                            var operation = request.SendWebRequest();
                            while (!operation.isDone) { }  // Block execution

                            if (request.result != UnityWebRequest.Result.Success)
                            {
                                Debug.LogError("Failed to load CSV: " + request.error);
                                return null;
                            }

                            csvText = request.downloadHandler.text;
                        }*//*
        }
        else
        {
            if (File.Exists(filePath))
            {
                csvText = File.ReadAllText(filePath);
            }
            else
            {
                Debug.LogError("CSV file not found: " + filePath);
                return null;
            }
        }

        return !string.IsNullOrEmpty(csvText)
            ? new List<string>(csvText.Split(new string[] { "\r\n", "\n" }, StringSplitOptions.None))
            : null;
    }*/

    public static List<string> LoadCSVFromJSON(string fileNameWithoutExtension)
    {
        // Load the CSV as a TextAsset from the Resources folder
        TextAsset csvFile = Resources.Load<TextAsset>("GameValues/"+fileNameWithoutExtension);

        if (csvFile == null)
        {
            Debug.LogError("CSV file not found in Resources: " + fileNameWithoutExtension);
            return null;
        }

        // Split the CSV text into lines
        return new List<string>(
            csvFile.text.Split(new[] { "\r\n", "\n" }, StringSplitOptions.None)
        );
    }




    public void LoadUnitsFromCSV()
    {
        //Don't load twice. 
        if(isInit)
            return;
        //MG: 25-03-31: an improvement could exist here, where you only load the units relevant to the level/progeny. Future performance improvement.

        if (GameMaster.unitCosts == null)
        {
            GameMaster.unitCosts = new List<(BaseUnit, int)>[3];
            for (int i = 0; i < GameMaster.unitCosts.Length; i++)
            {
                GameMaster.unitCosts[i] = new List<(BaseUnit, int)>();
            }
        }

        //string filePath = Path.Combine(Application.streamingAssetsPath, fileName);

        //string[] lines = File.ReadAllLines(filePath);
        //string csv = loadCSVFromJSON(fileName);
        List<string> lines = LoadCSVFromJSON("UnitValues");
        //List<string> lines = LoadCSVFromJSON("UnitValues.json");

        //loop to iterate through the JSON output and convert it to a string array
        //string[] lines = csv.Split(new string[] {"\r\n", "\n" }, StringSplitOptions.None);


        if (lines == null || lines.Count <= 1)
        {
            Debug.LogError("CSV file (units) is empty or only contains headers.");
            return;
        }

        // Read headers
        string[] headers = lines[0].Split(',');

        for (int i = 1; i < lines.Count; i++) // Skip header line
        {
            string[] values = lines[i].Split(',');
            AttributesBaseUnit unitAttributes = new AttributesBaseUnit();

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

                    /*                    //debug statement if value is health and unit is spore then tell me the health value
                                        if (header == "healthMax" && unit.unitName == "Spore")
                                        {
                                            Debug.Log($"Spore health value: {convertedValue}");
                                        }*/
                    property.SetValue(unitAttributes, convertedValue, null);
                }
            }

            unitAttributes.spriteAtlasPath = $"Sprites/progeny{GetEnumIndex(unitAttributes.progeny)}/{unitAttributes.unitName.ToLower().Replace(" ", "")}SpriteAtlas";


            /*if (unit.sprite == null)
            {
                Debug.LogError($"Failed to load sprite at path: {unitSpritePath}");
            }*/



            unitAttributes.prefabPath = generatePrefabLocationString(unitAttributes.unitName, unitAttributes.progeny);
            //unitAttributes.gamePieceId = (byte)(i - 1);
            unitAttributes.attributesHash = ComputeUnitHash(unitAttributes);
            //add unit attributes to list of attributesBaseUnit.
            attributesBaseUnits.Add((byte)unitAttributes.gamePieceId, unitAttributes);

            prefabManager.managePrefabOnStartUp(unitAttributes);
/*            if (Resources.Load(unitAttributes.prefabPath) == null)// || Resources.Load(unitAttributes.prefabPath) != )
            {
                //Assets/Resources/UnitPrefabs/progeny1/BasePrefab.prefab
                string basePrefabPath = "UnitPrefabs/BaseUnitBasePrefab";
                prefabManager.ClonePrefab(basePrefabPath, unitAttributes.prefabPath);
                prefabManager.modifyPrefab(unitAttributes.prefabPath, unitAttributes);
            }
            else
            {
                Debug.Log($"for unit {unitAttributes.unitName}, prefab exists at: {unitAttributes.prefabPath}");
            }*/
        }
    }


    public void LoadTilesFromCSV()
    {
        if (isInit)
            return;

        byteToAttributesTileDictionary = new Dictionary<byte, AttributesTile>();
        List<string> lines = LoadCSVFromJSON("TileValues");
        //string[] lines = File.ReadAllLines(filePath);

        if (lines == null || lines.Count <= 1)
        {
            Debug.LogError("CSV file (tiles) is empty or only contains headers.");
            return;
        }

        // Read headers
        string[] headers = lines[0].Split(',');

        for (int i = 1; i < lines.Count; i++) // For each row in the array (skip header line)
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

    /*public void LoadCombatMultipliersFromCSV(string fileName)
    {
        List <string> lines = LoadCSVFromJSON(fileName);
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
    }*/

    public void LoadCombatMultipliersFromCSV()
    {
        //if already initialized, skip this operation. Important for loading a new game from menu after completing one
        if (isInit)
            return;

        List<string> lines = LoadCSVFromJSON("UnitValuesCombatMultipliers");

        if (lines == null || lines.Count < 2) // Ensure there are at least headers + 1 row
        {
            Debug.LogError("CSV file is empty or only contains headers.");
            return;
        }

        combatMultipliersDictionary = new Dictionary<string, Dictionary<string, double>>();

        string[] headers = lines[0].Split(',');

        for (int i = 1; i < lines.Count; i++) // Skip the header row
        {
            string[] values = lines[i].Split(',');
            if (values.Length != headers.Length)
            {
                Debug.LogWarning($"Skipping malformed line {i}: {lines[i]}");
                continue; // Skip if row doesn't match header length
            }

            string healthType = values[0];
            var innerDict = new Dictionary<string, double>();

            for (int j = 1; j < headers.Length; j++) // Start from 1 to skip healthType column
            {
                if (double.TryParse(values[j], out double multiplier))
                {
                    innerDict[headers[j]] = multiplier;
                }
                else
                {
                    Debug.LogWarning($"Invalid number at row {i}, column {headers[j]}: {values[j]}");
                }
            }

            combatMultipliersDictionary[healthType] = innerDict;
        }
    }

    private long ComputeUnitHash(AttributesBaseUnit unitAttributes)
    {
        long hash=3;
        long hashInstance;
        int i = 0;

        foreach (PropertyInfo property in typeof(AttributesBaseUnit).GetProperties(BindingFlags.Public | BindingFlags.Instance))
        {
            hashInstance = 7;
            i++;
            object value = property.GetValue(unitAttributes);

            if (value is int intValue)
            {
                hashInstance += intValue;
            }
            else if (value is float floatValue)
            {
                hashInstance += (int)floatValue; 
            }
            else if (value is double doubleValue)
            {
                hashInstance += (int)doubleValue;
            }
            else if (value is byte byteValue)
            {
                hashInstance += byteValue + 1;
            }
            else if (value is Enum enumValue)
            {
                hashInstance += Convert.ToInt64(enumValue);
            }
            else if (value is string stringValue)
            {
                int stringHash = 1;
                unchecked
                {
                    foreach (char c in stringValue)
                    {
                        stringHash += c;
                    }
                }
                hashInstance += stringHash;
                //hash += HashString(stringValue);
            }
            hashInstance *= i;
            hash *= hashInstance;
        }

        return hash;
    }

/*    private int HashString(string str)
    {
        unchecked
        {
            int hash = 0;
            foreach (char c in str)
            {
                hash = (hash * 31) + c; // Prime number multiplication
            }
            return hash;
        }
    }*/





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
