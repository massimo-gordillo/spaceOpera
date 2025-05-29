using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StaticSprite : ClickableObject
{
    public GameObject parentGameObject;
    public BaseUnit parentComponentBaseUnit;
    public BaseStructure parentComponentBaseStructure;
    public Color baseColor;
    public Color lightsColor;
    public SpriteRenderer fillSR;
    public SpriteRenderer trimSR;
    public SpriteRenderer lightsSR;
    public Image fillImage;
    public Image trimImage;
    public Image lightsImage;
    public bool isUIVariant;

    // Start is called before the first frame update
    protected override void Start()
    {
        base.Start(); //call the start function in ClickableObject class this inherets from.
        if (transform.parent != null && parentGameObject!=null)
        {
            //parentGameObject = transform.parent.gameObject;
            parentComponentBaseUnit = parentGameObject.GetComponent<BaseUnit>();
            parentComponentBaseStructure = parentGameObject.GetComponent<BaseStructure>();
            //baseColor = fillSR.color;
            //lightsColor = lightsSR.color;
            baseColor = new Color(255, 255, 255, 255);
            lightsColor = new Color(255, 255, 255, 255);
            
        }
/*        else
        {
            Debug.Log("No parent found for StaticSprite " + this.GetInstanceID());
        }*/
    }

    // Update is called once per frame
    void Update()
    {
        //SetColor(2, true, true);
        //if(parentGameObject != null && parentComponentBaseStructure!=null && parentComponentBaseStructure.playerControl != 0) 
         //   Debug.Log($"Main sprite color for type {parentComponentBaseStructure.structureType} is: {fillSR.color}");
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

/*    public void destroyMe()
    {
        Destroy(this);
    }*/

    public void ToggleSprites(bool b)
    {
        fillSR.GetComponent<SpriteRenderer>().enabled = b;
        trimSR.GetComponent<SpriteRenderer>().enabled = b;
        lightsSR.GetComponent<SpriteRenderer>().enabled = b;

    }

    public IEnumerator WaitedSetColor(int player, bool nonExhausted, bool isStructure)
    {
        yield return null; 
        //Debug.Log($"Setting Color for {this.name}");
        Color playerColor = GameMaster.playerColors[player];
        Color white = new Color (255, 255, 255, 255);
        /*        if(parentGameObject == null)
                {
                    Debug.Log($"No parent object for sprite {this.name}");
                    parentGameObject = transform.parent.gameObject;
                    Debug.Log($"parent set to {parentGameObject.name}");
                }*/
        /*        if (isStructure && player != 0)
                    Debug.LogWarning($"Setting sprite color for stuct type {this.name}, player control = {player}, color = {playerColor}");
                else if (player != 0)
                    Debug.LogWarning($"Setting sprite color for unit type {this.name}, player control = {player}, color = {playerColor}");*/

        /*        if (isStructure && fillSR.color != white)
                {
                    Debug.Log($"Setting fill color for structure to {playerColor}, player is {player}, original color was {fillSR.color}");
                    amIColouredSpriteGuy = true;
                }*/

        if (isStructure && player != 0)
        {
            //Debug.Log($"Setting color for {this.name} to {playerColor}");
            float h, s, v;
            Color.RGBToHSV(playerColor, out h, out s, out v);

            s *= 0.95f; // reduce saturation
            fillSR.color = Color.HSVToRGB(h, Mathf.Clamp01(s), v);
        }
        else if (!isStructure && player != 0)
        {
            /*            if (!originalLightsColorSet)
                        {
                            originalLightsColor = spriteLightsSR.color;
                            originalLightsColorSet = true;
                        }*/

            // Convert provided baseColor to HSV so we can modify saturation and value
            float hue, saturation, value;
            Color.RGBToHSV(playerColor, out hue, out saturation, out value);

            float oldSaturation = saturation;
            float oldValue = value;

            // Adjust saturation and brightness for exhaustion
            saturation = nonExhausted ? 0.9f : 0.5f;
            value = nonExhausted ? 0.95f : 0.60f;

            //Debug.Log($"for nonexhausted unit {nonExhausted}, saturation changed from {oldSaturation} to {saturation}, and value changed from {oldValue}, to {value}");

            Color adjustedFillColor = Color.HSVToRGB(hue, saturation, value);
            SetFillColor(adjustedFillColor);

            // Adjust brightness of spriteLightsSR, keeping its original hue and saturation
            float lightsHue, lightsSaturation, lightsValue;
            Color.RGBToHSV(lightsColor, out lightsHue, out lightsSaturation, out lightsValue);

            float adjustedLightsValue = nonExhausted ? lightsValue : lightsValue * 0.3f;
            Color adjustedLightsColor = Color.HSVToRGB(lightsHue, lightsSaturation, adjustedLightsValue);
            SetLightsColor(adjustedLightsColor);

            // Debug.Log($"Adjusted fill: {adjustedFillColor}, adjusted lights: {lightsColor}");
        } else if (player == 0)
        {
            SetFillColor(baseColor);
            SetLightsColor(lightsColor);
        }
    
    }

    public void SetColor(int player, bool nonExhausted, bool isStructure)
    {
        if (this.isActiveAndEnabled == true)
        {
            StartCoroutine(WaitedSetColor(player, nonExhausted, isStructure));
        }
    }

    public void SetFillColor(Color c)
    {
        if(fillSR != null)
            fillSR.color = c;
        if (fillImage != null)
            fillImage.color = c;
    }

    public void SetLightsColor(Color c)
    {
        if (lightsSR != null)
            lightsSR.color = c;
        if (lightsImage != null)
            lightsImage.color = c;
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