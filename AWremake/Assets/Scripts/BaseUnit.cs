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
    public byte baseUnitVariantIdentifier;

    //enums as defined in AttributesBaseUnit
    public Progeny progeny; 
    public UnitType unitType;
    public HealthType healthType;
    public DamageType damageType;
    public WeaponType weaponType;

    public bool isResourceUnit;
    public bool isInfantry;
    public int healthMax;
    public int healthCurrent;
    public int type;
    public int baseDamage = 50;
    public int attackRange = 1;
    public int price = 999;
    public int movementRange = 3;
    public int playerControl;
    public int team;
    public int orientation = 1;
    public int xPos;
    public int yPos;
    private Color baseColor;
    public bool movementNonExhausted;
    public bool nonExhausted;
    public bool undoingMovement = false;
    public int? oldXPos = null;
    public int? oldYPos = null;
    public Sprite sprite; //will need to kill this value eventually. Just for data initialization PoC.
    public SpriteRenderer crosshairSpriteRenderer;
    public SpriteRenderer unitSpriteRenderer;
    public MasterGrid masterGrid;
    public string prefabPath;
    public bool canAttackLand;
    public bool canAttackAir;
    public bool canAttackSea;
    public bool canFireBack;

    public TMP_Text healthTextContainer;
    public TMP_Text unitNameTextContainer;
    public TMP_Text defenceValueTextContainer;
    public TMP_Text damageRangeTextContainer;
    public GameObject combatTooltip;
    //use healthTextContainer.text= to update text.

    void Start()
    {
        xPos = (int)transform.position.x;
        yPos = (int)transform.position.y;
        //print("BaseUnit initiated. xPos: " + transform.position.x + "ypos: " + transform.position.y +"instanceID: "+this.GetInstanceID());
        masterGrid = GameObject.FindGameObjectWithTag("MasterGridTag").GetComponent<MasterGrid>();
        masterGrid.setUnitInGrid(xPos, yPos, this);

        baseColor = unitSpriteRenderer.color;

        if (playerControl == masterGrid.getPlayerTurn())
            setNonExhausted(false);
        else
            setNonExhausted(true);

        //playerControl = 1; //will have to set dynamically later

        //healthMax = 100;
        //healthCurrent= healthMax;
        setHealth(healthMax);
        if (unitNameTextContainer != null)
        {
            unitNameTextContainer.text = $"P{playerControl}'s {progeny} {unitName}";
        }
        else
            Debug.LogError("No unitNameTextContainerFound");

        unitNameTextContainer.color = new Color32(255, 0, 0, 255);
        defenceValueTextContainer.color = new Color32(255, 0, 0, 255);
        damageRangeTextContainer.color = new Color32(255, 0, 0, 255);

        hideCrosshairs();
        hideCombatTooltip();
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

    public void startupPopulateValues(AttributesBaseUnit data)
    {
        if (data != null)
        {
            unitName = data.unitName;
            unitType = data.unitType;
            healthMax = data.healthMax;
            healthType = data.healthType;
            damageType = data.damageType;
            weaponType = data.weaponType;
            baseDamage = data.baseDamage;
            attackRange = data.attackRange;
            movementRange = data.movementRange;
            sprite = data.sprite;
            progeny = data.progeny;
            price = data.price;
        }
        else
            print("nodata found");
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
    public void hideCombatTooltip()
    {
        if (combatTooltip != null)
        {
            combatTooltip.SetActive(false);
        }
    }

    public void showCombatTooltip(int defence, double floor, double ceiling)
    {
        combatTooltip.SetActive(true);
        if (floor > 1)
            floor = 1;
        if (ceiling > 1)
            ceiling = 1;
        if (floor < 0)
            floor = 0;
        if (ceiling < 0)
            ceiling = 0;
        defenceValueTextContainer.text = $"Defence: {defence}";
        damageRangeTextContainer.text = $"{(int)(floor*100)}% - {(int)(ceiling*100)}%";
    }

    public void setHealth(int health)
    {
        healthCurrent = health;
        //round down to the nearest 1% of max health
        healthCurrent = healthCurrent - healthCurrent % (healthMax / 100);
        updateHealthUI();
    }

    public void updateHealthUI()
    {
        healthTextContainer.text = ((int)((double)healthCurrent/(double)healthMax *100)).ToString();
    }

    public void takeDamage(int damage)
    {
        if (damage <= 0)
            setHealth(healthCurrent);
        else if (healthCurrent <= damage){
            setHealth(0);
            deleteMe();
        }else if (healthCurrent - damage < 0.1 * healthMax)
        {
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
