using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttributesTile
{
    public string tileName { get; set; }
    public byte byteValue { get; set; }
    public int defenceValue { get; set; }
    public int movementCost { get; set; }
    public bool canInfantyTraverse { get; set; }
    public bool canVehicleTraverse { get; set; }
}
