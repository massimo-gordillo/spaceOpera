using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StaticSprite : ClickableObject
{
    private GameObject parentGameObject;
    private BaseUnit parentComponentBaseUnit;
    private BaseStructure parentComponentBaseStructure;
    public Color baseColor;
    public Color lightsColor;
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
            //baseColor = fillSR.color;
            //lightsColor = lightsSR.color;
            baseColor = new Color(255, 255, 255, 255);
            lightsColor = new Color(255, 255, 255, 255);

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

    public void ToggleSprites(bool b)
    {
        fillSR.GetComponent<SpriteRenderer>().enabled = b;
        trimSR.GetComponent<SpriteRenderer>().enabled = b;
        lightsSR.GetComponent<SpriteRenderer>().enabled = b;

    }

    public void SetColor(int player, bool nonExhausted, bool isStructure)
    {
        Color playerColor = GameMaster.playerColors[player];
        if (isStructure && player != 0)
        {
            fillSR.color = playerColor;
        } else if (!isStructure && player != 0)
        {
            /*            if (!originalLightsColorSet)
                        {
                            originalLightsColor = spriteLightsSR.color;
                            originalLightsColorSet = true;
                        }*/

            // Convert provided baseColor to HSV so we can modify saturation and value
            float hue, saturation, value;
            Color.RGBToHSV(baseColor, out hue, out saturation, out value);

            // Adjust saturation and brightness for exhaustion
            saturation = nonExhausted ? 0.9f : 0.6f;
            value = nonExhausted ? 0.95f : 0.75f;

            Color adjustedFillColor = Color.HSVToRGB(hue, saturation, value);
            fillSR.color = adjustedFillColor;

            // Adjust brightness of spriteLightsSR, keeping its original hue and saturation
            float lightsHue, lightsSaturation, lightsValue;
            Color.RGBToHSV(lightsColor, out lightsHue, out lightsSaturation, out lightsValue);

            float adjustedLightsValue = nonExhausted ? lightsValue : lightsValue * 0.7f;
            Color adjustedLightsColor = Color.HSVToRGB(lightsHue, lightsSaturation, adjustedLightsValue);
            lightsSR.color = adjustedLightsColor;

            // Debug.Log($"Adjusted fill: {adjustedFillColor}, adjusted lights: {lightsColor}");
        } else if (player == 0)
        {
            lightsSR.color = lightsColor;
            fillSR.color = baseColor;
        }
    
    }

    /*public void setColorStructure(SpriteRenderer sprite) //Should this be combined with baseUnit.setColor? Maybe Mastergrid does this modification.
    {
        int player = playerControl;
        if (player != 0)
        {
            //float hue = ((float)player / (float)gameMaster.numPlayers) * 360f;
            float hue = ((float)player / 3.0f) * 360f;
            float saturation = 1.0f;
            float value = 1.0f;
            Color color = Color.HSVToRGB(hue / 360f, saturation, value);
            sprite.color = color;
            *//*if(structureType != 0)
            {
                neutralSpriteFill.color = color;
            }*//*
        }
        else
        {
            sprite.color = baseColor;
        }

    }

    public void setColorBaseUnit(int player, bool nonExhausted)
    {
        if (!originalLightsColorSet)
        {
            originalLightsColor = spriteLightsSR.color;
            originalLightsColorSet = true;
        }
        float hue = ((float)player / 3.0f) * 360f;
        float saturation = nonExhausted ? 0.9f : 0.6f; // Medium difference in saturation
        float value = nonExhausted ? 0.95f : 0.75f;    // Slightly more noticeable difference in brightness
        Color color = Color.HSVToRGB(hue / 360f, saturation, value);
        spriteFillSR.color = color;

        // Use originalLightsColor to adjust brightness based on exhaustion
        float lightsHue, lightsSaturation, lightsValue;
        Color.RGBToHSV(originalLightsColor, out lightsHue, out lightsSaturation, out lightsValue);

        float adjustedLightsValue = nonExhausted ? lightsValue : lightsValue * 0.7f; // Darken when exhausted
        Color lightsColor = Color.HSVToRGB(lightsHue, lightsSaturation, adjustedLightsValue);
        spriteLightsSR.color = lightsColor;
        // Debug.Log($"lights color: {lightsColor}");

        cornerSpriteTL.GetComponent<SpriteRenderer>().color = color;
        cornerSpriteTR.GetComponent<SpriteRenderer>().color = color;
        cornerSpriteBL.GetComponent<SpriteRenderer>().color = color;
        cornerSpriteBR.GetComponent<SpriteRenderer>().color = color;
    }*/
}