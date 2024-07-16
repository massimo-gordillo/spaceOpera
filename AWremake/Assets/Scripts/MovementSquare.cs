using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementSquare : ClickableObject
{
    public MasterGrid mg;
    public SpriteRenderer sr;

    protected override void Start()
    {
        base.Start();
        //set opacity
        //SpriteRenderer sr = gameObject.GetComponent<SpriteRenderer>();
        Color color = sr.color;
        setColor(new Color(color.r, color.b, color.g, 0.8f));
        sr.sortingLayerID = SortingLayer.NameToID("Drawing");
    }

    public override void HandleClick()
    {
        mg = GameObject.FindGameObjectWithTag("MasterGridTag").GetComponent<MasterGrid>();
        //print("Movement square moves you to: "+(int)transform.position.x +", "+ (int)transform.position.y);
        mg.moveTarget((int)transform.position.x, (int)transform.position.y);
    }

    public void setColor(Color c)
    {
        sr.color = c;
    }
}
