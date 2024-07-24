using System;
using System.Collections.Generic;
using MessagePack;

public class NetworkingManager 
{ 

    [Serializable]
    public struct UnitStructureInfo
    {
        //this unitName should later be turned into a unitByte value, every unit should have a specific byte value.
        public string unitName; // Type of the unit/structure
        public byte playerID; // Player ID (0 for neutral, 1 for player 1, etc.)
        public byte healthPercent; //% health the unit has
    }

    [Serializable]
    public struct GridData
    {
        public byte x;
        public byte y;
        public UnitStructureInfo info;
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

/*    public Dictionary<(byte, byte), UnitStructureInfo> ConvertGameStateToDictionary()
    {

    }*/

    public List<GridData> SerializeGameStateDictionary(Dictionary<(byte, byte), UnitStructureInfo> grid)
    {
        List<GridData> state = new List<GridData>();

        foreach (var kvp in grid)
        {
            state.Add(new GridData
            {
                x = kvp.Key.Item1,
                y = kvp.Key.Item2,
                info = kvp.Value
            });
        }

        return state;
    }

    public Dictionary<(byte, byte), UnitStructureInfo> DeserializeGameStateFromDictionary(List<GridData> state)
    {
        var grid = new Dictionary<(byte, byte), UnitStructureInfo>();

        foreach (var gridData in state)
        {
            grid[(gridData.x, gridData.y)] = gridData.info;
        }

        return grid;
    }


}
