using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementSquare : MonoBehaviour
{
    void Start()
    {
        //set opacity
        SpriteRenderer sr = gameObject.GetComponent<SpriteRenderer>();
        Color color = sr.color;
        sr.color = new Color(color.r, color.b, color.g, 0.8f);
        sr.sortingLayerID = SortingLayer.NameToID("Drawing");
    }

        void OnMouseDown()
    {
        MasterGrid mg = GameObject.FindGameObjectWithTag("MasterGridTag").GetComponent<MasterGrid>();
        print("Movement square moves you to: "+(int)transform.position.x +", "+ (int)transform.position.y);
        mg.moveTarget((int)transform.position.x, (int)transform.position.y);
    }
}
