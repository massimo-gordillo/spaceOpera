using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gameValuesScriptableObject : ScriptableObject
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



    private List<metadataBaseUnit> metadataBaseUnits = new List<metadataBaseUnit>();
    private string[] progenyNames;
    //public metadataBaseUnit infantryM;

    // Start is called before the first frame update
    void Start()
    {
        progenyNames = new string[3];
        progenyNames[0]="ertrian";
        progenyNames[1]="virix";
        progenyNames[2]="sentus";
        //private string[] progenyNames = new string[] { "ertrian", "virix", "sentus" };
        instantiateInfantry();
        instantiateGattlingTank();



    }

    private void instantiateInfantry()
    {
        metadataBaseUnit infantryM = new metadataBaseUnit();

        infantryM.unitName = "Infanty";
        infantryM.progeny = progenyNames[0];
        infantryM.healthMax = 100;
        infantryM.healthType = "light";
        infantryM.weaponType = "projectile";
        infantryM.damageType = "light";
        infantryM.baseDamage = 50;
        infantryM.attackRange = 1;
        infantryM.price = 100;
        infantryM.movementRange = 3;
        infantryM.sprite = Resources.Load<Sprite>("sprites/infantrySprite");

        metadataBaseUnits.Add(infantryM);
    }

    private void instantiateGattlingTank()
    {
        metadataBaseUnit gattlingTankM = new metadataBaseUnit();

        gattlingTankM.unitName = "Gattling Tank";
        gattlingTankM.progeny = progenyNames[0];
        gattlingTankM.healthMax = 400;
        gattlingTankM.healthType = "light";
        gattlingTankM.weaponType = "projectile";
        gattlingTankM.damageType = "light";
        gattlingTankM.baseDamage = 100;
        gattlingTankM.attackRange = 1;
        gattlingTankM.price = 600;
        gattlingTankM.movementRange = 6;
        gattlingTankM.sprite = Resources.Load<Sprite>("sprites/gattlingTankSprite");

        metadataBaseUnits.Add(gattlingTankM);
    }

    private void instantiateLightTank()
    {
        metadataBaseUnit lightTankM = new metadataBaseUnit();

        lightTankM.unitName = "Light Tank";
        lightTankM.progeny = progenyNames[0];
        lightTankM.healthMax = 700;
        lightTankM.healthType = "light";
        lightTankM.weaponType = "projectile";
        lightTankM.damageType = "light";
        lightTankM.baseDamage = 300;
        lightTankM.attackRange = 1;
        lightTankM.price = 700;
        lightTankM.movementRange = 7;
        lightTankM.sprite = Resources.Load<Sprite>("sprites/lightTankSprite");

        metadataBaseUnits.Add(lightTankM);
    }
}
