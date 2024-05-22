using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClickFunction : MonoBehaviour
{
    void OnMouseDown()
    {
        print("I've been clicked");
        //DrawMovement(movementRange);
        //BaseUnit ParentScript = transform.parent.GetComponent<BaseUnit>();
        //ParentScript.DrawMovement(3);
    }

}
