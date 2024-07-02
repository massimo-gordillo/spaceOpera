using UnityEngine;

[System.Serializable]
public class AttributesBaseUnit
{
    public string unitName { get; set; }
    public string progeny { get; set; }
    public string unitType { get; set; }
    public bool unitIsInfantry { get; set; }
    public bool isResourceUnit { get; set; }
    public int healthMax { get; set; }
    public string healthType { get; set; }
    public string weaponType { get; set; }
    public string damageType { get; set; }
    public int baseDamage { get; set; }
    public int attackRange { get; set; }
    public int price { get; set; }
    public int movementRange { get; set; }
    public Sprite sprite { get; set; }
    public string prefabPath { get; set; }

}
