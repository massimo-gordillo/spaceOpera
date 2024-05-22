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

    /*
    edorum = eaters. e dorum = out of the house. idorum = of the people
    e solis, a sole = from the sun
    etulus = ate
    avarus = greedy, evarus = evasive
    earthus = earthy
    erthus = shock
    herthus = garden
    */

    private List<metadataBaseUnit> metadataBaseUnits = new List<metadataBaseUnit>();
    //public metadataBaseUnit infantryM;

    // Start is called before the first frame update
    void Start()
    {
        instantiateInfantry();
        instantiateGattlingTank();



    }

    private void instantiateInfantry()
    {
        metadataBaseUnit infantryM = new metadataBaseUnit();

        infantryM.unitName = "infanty";
        infantryM.progeny = "erthus";
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

        gattlingTankM.unitName = "infanty";
        gattlingTankM.progeny = "erthus";
        gattlingTankM.healthMax = 100;
        gattlingTankM.healthType = "light";
        gattlingTankM.weaponType = "projectile";
        gattlingTankM.damageType = "light";
        gattlingTankM.baseDamage = 50;
        gattlingTankM.attackRange = 1;
        gattlingTankM.price = 100;
        gattlingTankM.movementRange = 3;
        gattlingTankM.sprite = Resources.Load<Sprite>("sprites/gattlingTankSprite");

        metadataBaseUnits.Add(gattlingTankM);
    }



}
