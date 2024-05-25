using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class BaseUnit : MonoBehaviour
{

    //in future this values will be pulled from a UnitValues table/function.
    public string unitName;
    public int healthMax;
    public int healthCurrent;
    public int type;
    public int baseDamage = 50;
    public int attackRange = 1;
    public int price = 100;
    public int movementRange = 3;
    public int playerControl;
    public int team;
    public int orientation = 1;
    public int xPos;
    public int yPos;
    private Color baseColor;
    public bool movementNonExhausted;
    public bool nonExhausted;
    public SpriteRenderer crosshairSpriteRenderer;
    public SpriteRenderer unitSpriteRenderer;
    public MasterGrid masterGrid;

    public TMP_Text healthTextContainer;
    //use healthTextContainer.text= to update text.

    void Start()
    {

        //print("BaseUnit initiated. xPos: " + transform.position.x + "ypos: " + transform.position.y +"instanceID: "+this.GetInstanceID());
        masterGrid = GameObject.FindGameObjectWithTag("MasterGridTag").GetComponent<MasterGrid>();
        masterGrid.setUnitInGrid((int)transform.position.x, (int)transform.position.y, this);

        baseColor = unitSpriteRenderer.color;

        if (playerControl == masterGrid.getPlayerTurn())
            setNonExhausted(false);
        else
            setNonExhausted(true);

        //playerControl = 1; //will have to set dynamically later
        xPos = (int)transform.position.x;
        yPos = (int)transform.position.y;
        healthMax = 100;
        healthCurrent=100;
        setHealth(healthMax);

        
        hideCrosshairs();
        //setColor(playerControl, nonExhausted);

    }
    // Update is called once per frame
    void Update()
    {
        /*if (healthText != null)
        {
            Vector2 newPosition = healthText.transform.parent.position;
            newPosition.x = (float)(xPos - 0.5);
            newPosition.y = (float)(yPos - 0.5);
            healthText.transform.parent.position = newPosition;
            print(healthText.transform.parent.position.x);
            print(healthText.transform.parent.position.y);
            //healthText.transform.parent.position.x = healthText.parent.transform.position.x - 0.5;
            //healthText.transform.parent.position.y = healthText.parent.transform.position.y - 0.5;
        }*/
    }



    public void staticSpriteHasBeenClicked()
    {
        masterGrid.unitHasBeenClicked(this);
    }

    public void drawCrosshairs()
    {
        if (crosshairSpriteRenderer != null)
        {
            crosshairSpriteRenderer.enabled = true;
        }
    }

    public void hideCrosshairs()
    {
        if (crosshairSpriteRenderer != null)
        {
            crosshairSpriteRenderer.enabled = false;
        }
    }

    public void setHealth(int health)
    {
        healthCurrent = health;
        updateHealthUI();
    }

    public void updateHealthUI()
    {
        healthTextContainer.text = healthCurrent.ToString();
    }

    public void takeDamage(int damage)
    {
        if (healthCurrent <= damage){
            setHealth(0);
            deleteMe();
        }
        else
        {
            setHealth(healthCurrent - damage);
        }
    }

    public bool getNonExhausted()
    {
        return nonExhausted;
    }

    public void setNonExhausted(bool b)
    {
        movementNonExhausted = b;
        nonExhausted = b;
        setColor(playerControl, b);
    }

    /*public void setColour(int player, bool nonExhausted)
    {
        Color color = baseColor;
        int nonExhaustInt;
        if (nonExhausted)
            nonExhaustInt = 0;
        else
            nonExhaustInt = 1;
        //Color newColor = new Color((float)nonExhaustInt/2, (float)player/7, (float)player / 7, color.a);
        Color newColor = new Color((float)(player / 9), (float)(player/9), (float)(player / 9), color.a);
        //Color newColor = new Color(0.5f,0f,0f, 1f);
        print(newColor);
        unitSpriteRenderer.color = newColor;
    }

    public void setColour(int player, bool nonExhausted)
    {
        int nonExhaustInt;
        if (nonExhausted)
            nonExhaustInt = 0;
        else
            nonExhaustInt = 1;
        float t = Mathf.InverseLerp(1, 3, player);
        Color finalColor = Color.Lerp(Color.red, Color.blue, t);
        unitSpriteRenderer.color = finalColor;
    }*/

    public void setColor(int player, bool nonExhausted)
    {
        float hue = ((float)player / 3.0f) * 360f;
        float saturation = nonExhausted ? 1.0f : 0.3f;
        float value = 1.0f;
        Color color = Color.HSVToRGB(hue / 360f, saturation, value);
        unitSpriteRenderer.color = color;
    }

    public int getPlayerControl()
    {
        return playerControl;
    }

    public void deleteMe()
    {
        masterGrid.deleteUnit(this);
    }

}
