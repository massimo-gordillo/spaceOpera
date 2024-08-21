using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Infantry : BaseUnit
{
    void start()
    {
        Debug.Log("Startedx2" + orientation);
    }
    // Start is called before the first frame update
    void setStats()
    {
        healthMax=100;
        healthCurrent=100;
        type=0;
        baseDamage=50;
        attackRange=1;
        movementRange=3;
        team=0;
        orientation = 3;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
