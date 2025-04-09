using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.U2D;
using TMPro;

public class BaseUnit : MonoBehaviour
{

    //in future this values will be pulled from a UnitValues table/function.
    public string unitName;
    public byte baseUnitVariantIdentifier;

    //enums as defined in AttributesBaseUnit
    public Progeny progeny; 
    public UnitTerrainType unitTerrainType;
    public byte gamePieceId;
    public bool isNotPrototype;
    public HealthType healthType;
    public DamageType damageType;
    public WeaponType weaponType;

    public long attributesHash;
    public bool isResourceUnit;
    public bool isInfantry;
    public int healthMax;
    public int healthCurrent;
    //public int type;
    public int baseDamage = 50;
    public int attackRange = 1;
    public int price = 999;
    public int movementRange = 3;
    public int playerControl;
    public int team;
    public int orientation = 1;
    public int xPos;
    public int yPos;
    //private Color baseColor; //currently unused.
    private Color originalLightsColor;
    private bool originalLightsColorSet = false;
    public bool movementNonExhausted;
    public bool nonExhausted;
    public bool undoingMovement = false;
    public int? oldXPos = null;
    public int? oldYPos = null;
    //if infantry unit was capturing a structure, this will hold the value of the structure capture progress in case of an undo.
    public int? prevStructureCaptureVal = null;
    //public Sprite sprite; //MG 24-08-04: You cannot kill this var. It is used by AttributesBaseUnit, GameValuesSO and PrefabManager to work with the sprite values.
    public SpriteRenderer crosshairSpriteRenderer;
    public GameObject healthCanvas;
    public StaticSprite spriteContainer;
    public SpriteRenderer spriteFillSR;
    public SpriteRenderer spriteTrimSR;
    public SpriteRenderer spriteLightsSR;
    public GameObject cornerSpriteTL;
    public GameObject cornerSpriteTR;
    public GameObject cornerSpriteBL;
    public GameObject cornerSpriteBR;


    public MasterGrid masterGrid;
    public string prefabPath;
    public string spriteAtlasPath;
    public bool canAttackLand;
    public bool canAttackAir;
    public bool canAttackSea;
    public bool canFireBack;
    public bool canMoveAndAttack;
    public int minimumAttackRangeDistance;

    public TMP_Text healthTextContainer;
    public TMP_Text unitNameTextContainer;
    public TMP_Text defenceValueTextContainer;
    public TMP_Text damageRangeTextContainer;
    public GameObject combatTooltip;
    //use healthTextContainer.text= to update text.
    private Color playerColor;

    void Start()
    {
        xPos = (int)transform.position.x;
        yPos = (int)transform.position.y;
        //print("BaseUnit initiated. xPos: " + transform.position.x + "ypos: " + transform.position.y +"instanceID: "+this.GetInstanceID());
        masterGrid = GameObject.FindGameObjectWithTag("MasterGridTag").GetComponent<MasterGrid>();
        masterGrid.setUnitInGrid(xPos, yPos, this);

        //if the unit is created after the structure on start, turn off the collider. BaseStructure has a similar check on start.
        BaseStructure onLocation = masterGrid.whatStructureIsInThisLocation(xPos, yPos);
        if (onLocation != null)
        {
            onLocation.turnOffCollider();
        }

        //baseColor = spriteFillSR.color;
        //originalLightsColor = spriteLightsSR.color;

        //a good hack will probably want to fix later.
        if ((playerControl+1) % 2 == 1)
            flipSprites();



/*        if (playerControl == masterGrid.getPlayerTurn())
            setNonExhausted(false);
        else
            setNonExhausted(true);*/

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

        playerColor = GameMaster.playerColors[playerControl];
        unitNameTextContainer.color = playerColor;
        defenceValueTextContainer.color = playerColor;
        damageRangeTextContainer.color = playerColor;

        hideCrosshairs();
        hideCombatTooltip();
        //spriteContainer.SetColor(playerControl, true, false);
        showSelectedCorners(false);
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

/*    public void startupPopulateValues(AttributesBaseUnit data)
    {
        if (data != null)
        {
            unitName = data.unitName;
            unitTerrainType = data.unitTerrainType;
            healthMax = data.healthMax;
            healthType = data.healthType;
            damageType = data.damageType;
            weaponType = data.weaponType;
            baseDamage = data.baseDamage;
            attackRange = data.attackRange;
            movementRange = data.movementRange;
            spriteFillSR.sprite = data.sprite;
            progeny = data.progeny;
            price = data.price;
        }
        else
            print("nodata found");
    }*/

    public void staticSpriteHasBeenClicked()
    {
        if(unitName != "seed")
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

    public void showSelectedCorners(bool b)
    {
        cornerSpriteTL.SetActive(b);
        cornerSpriteTR.SetActive(b);
        cornerSpriteBL.SetActive(b);
        cornerSpriteBR.SetActive(b);
    }

    public void showCombatTooltip(int defence, int sentusDefence, double floor, double ceiling)
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
        if (sentusDefence > 0)
            defenceValueTextContainer.text += $" + {sentusDefence}";
        damageRangeTextContainer.text = $"{(int)(floor*100)}% - {(int)(ceiling*100)}%";
    }

    public void setHealth(double health)
    {
        //round down to the nearest 1% of max health
        int healthStep = Math.Max(1, healthMax / 100); // Ensure healthStep is at least 1
        healthCurrent = (int)(health - (health % healthStep));
        updateHealthUI();
    }

    public int getHealthPercentage()
    {
        return (int)((double)healthCurrent / (double)healthMax * 100);
    }

    public void updateHealthUI()
    {
        int healthPercentage = getHealthPercentage();
        if (healthPercentage == 100){
            healthCanvas.SetActive(false);
        }else
        {
            healthCanvas.SetActive(true);
        }
        healthTextContainer.text = healthPercentage.ToString();
    }

    public void takeDamage(double damage)
    {
        if (damage <= 0)
            setHealth(healthCurrent);
        else if (healthCurrent <= damage){
            setHealth(0);
            deleteMe();
        }else if ((healthCurrent - damage) < 0.05 * healthMax)
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
        //Debug.Log($"{this.unitName} is being set to non-exhausted {b}");
        movementNonExhausted = b;
        nonExhausted = b;
        spriteContainer.SetColor(playerControl, b, false);
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
        spriteFillSR.color = newColor;
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
        spriteFillSR.color = finalColor;
    }*/

    /*    public void setSpritesFromSpriteAtlas(string atlasPath)
        {       
            SpriteAtlas spriteAtlas = Resources.Load<SpriteAtlas>(atlasPath);
            string name = unitName.ToLower().Replace(" ", "");
            if (spriteAtlas != null)
            {
                // Assign sprites from the atlas to the SpriteRenderers
                spriteFillSR.sprite = spriteAtlas.GetSprite($"{name}Sprite_Fill");
                spriteTrimSR.sprite = spriteAtlas.GetSprite($"{name}Sprite_Trim");
                spriteLightsSR.sprite = spriteAtlas.GetSprite($"{name}Sprite_Lights");
            }
            else
            {
                Debug.LogWarning($"Failed to load spriteAtlas for {unitName} at path: {atlasPath}");
            }
        }
    */
    

    public void flipSprites()
    {
        spriteFillSR.flipX = true;
        spriteTrimSR.flipX = true;
        spriteLightsSR.flipX = true;
    }


/*    public int getPlayerControl()
    {
        return playerControl;
    }*/

    public void deleteMe()
    {
        masterGrid.deleteUnit(this);
    }

}
