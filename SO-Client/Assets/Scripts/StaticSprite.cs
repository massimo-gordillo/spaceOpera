using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StaticSprite : ClickableObject
{
    private GameObject parentGameObject;
    private BaseUnit parentComponentBaseUnit;
    private BaseStructure parentComponentBaseStructure;
    public SpriteRenderer fillSR;
    public SpriteRenderer trimSR;
    public SpriteRenderer lightsSR;
    // Start is called before the first frame update
    protected override void Start()
    {
        base.Start(); //call the start function in ClickableObject class this inherets from.
        if (transform.parent != null)
        {
            parentGameObject = transform.parent.gameObject;
            //parentGameObject = transform.parent.gameObject;
            parentComponentBaseUnit = parentGameObject.GetComponent<BaseUnit>();
            parentComponentBaseStructure = parentGameObject.GetComponent<BaseStructure>();
        }
        else
        {
            Debug.Log("No parent found for StaticSprite " + this.GetInstanceID());
        }
    }

    // Update is called once per frame
    void Update()
    {

    }

    public override void HandleClick()
    {
        //Debug.Log("Clicked on: " + gameObject.name);
        if (parentComponentBaseUnit != null)
            parentComponentBaseUnit.staticSpriteHasBeenClicked();
        else if (parentComponentBaseStructure != null)
            parentComponentBaseStructure.staticSpriteHasBeenClicked();
        else
            Debug.Log("No parent of StaticSprite " + this.GetInstanceID()+" found");
    }

    public void destroyMe()
    {
        Destroy(this);
    }
}