using System.Collections;
using System.Collections.Generic;
//using System.Drawing;
using UnityEngine;

public class MovementSquare : ClickableObject
{
    public MasterGrid mg;
    public SpriteRenderer sr;
    public Collider2D boxCollider2D;
    public SpriteRenderer stripeSprite;
    public GameObject shield1;
    public GameObject shield2;
    public GameObject shield3;


    protected override void Start()
    {
        base.Start();
        //set opacity
        //SpriteRenderer sr = gameObject.GetComponent<SpriteRenderer>();
        Color color = sr.color;
        setColor(new Color(color.r, color.b, color.g, 0.8f));
        sr.sortingLayerID = SortingLayer.NameToID("Drawing");
        //stripeSprite.gameObject.SetActive(false);
    }

    public override void HandleClick()
    {
        mg = GameObject.FindGameObjectWithTag("MasterGridTag").GetComponent<MasterGrid>();
        //print("Movement square moves you to: "+(int)transform.position.x +", "+ (int)transform.position.y);
        mg.moveSelectedUnit((int)transform.position.x, (int)transform.position.y);
    }

    public void setColor(Color c)
    {
        sr.color = c;
        Color shieldColor = new Color(c.r, c.b, c.g, 1.0f);
        //shield1.GetComponent<SpriteRenderer>().color = shieldColor;
        //shield2.GetComponent<SpriteRenderer>().color = shieldColor;
        //shield3.GetComponent<SpriteRenderer>().color = shieldColor;
    }

    public void showShields(int s)
    {
        shield1.SetActive(false);
        shield2.SetActive(false);
        shield3.SetActive(false);
        if (s < 0 || s > 3)
            Debug.LogWarning("incorrect number of shields shown");
        else
        {
            if (s >= 1)
                shield1.SetActive(true);
            if (s >= 2)
                shield2.SetActive(true);
            if (s >= 3)
                shield3.SetActive(true);
        }
    }
}
