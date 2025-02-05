using UnityEngine;

public enum Progeny
{
    Ertrian,
    Virix,
    Sentus
}

public enum UnitType
{
    Land,
    Air,
    Sea
}

public enum HealthType
{
    Light,
    Medium,
    Heavy
} 

public enum WeaponType
{
    Melee,
    Projectile,
    None
}

public enum DamageType
{
    Light,
    Heavy,
    None
}

[System.Serializable]
public class AttributesBaseUnit
{
    public string unitName { get; set; }
    public byte unitIdNum { get; set; }
    public byte baseUnitVariantIdentifier { get; set; }
    public Progeny progeny { get; set; } //Ertiran, Virix, Sentus
    public UnitType unitType { get; set; } //land, sea, air
    public bool isInfantry { get; set; }
    public bool isResourceUnit { get; set; }
    public int healthMax { get; set; }
    public HealthType healthType { get; set; } //light, medium, heavy
    public WeaponType weaponType { get; set; } //melee, projectile
    public DamageType damageType { get; set; } //light, heavy
    public int baseDamage { get; set; }
    public int attackRange { get; set; }
    public bool canAttackLand { get; set; }
    public bool canAttackAir { get; set; }
    public bool canAttackSea { get; set; }
    public bool canFireBack { get; set; }
    public int price { get; set; }
    public int movementRange { get; set; }
    public bool canMoveAndAttack { get; set; }
    public int minimumAttackRangeDistance { get; set; }
    //public Sprite sprite { get; set; }
    public string spriteAtlasPath { get; set; }
    public string prefabPath { get; set; }
}