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
    public int gamePieceId;
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
    public int baseDamage ;
    public int attackRange;
    public int price;
    public int movementRange;
    public int playerControl;
    public int team;
    public int orientation;
    public Vector2Int pos;
    public bool movementNonExhausted;
    public bool nonExhausted;
    public bool undoingMovement = false;
    public Vector2Int? oldPos = null;
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
    public SpriteRenderer swordsSprite;
    public Animator explosionAnimator;

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
    public Image tooltipImage;

    //public bool CPU_isOn = true;
    //public bool CPU_controlled = false;
    //public Vector2Int CPU_Heading;
    public NetworkNode CPU_TargetNode;
    public bool CPU_IsCapturing;
    public List<Vector2Int> CPU_MoveSquaresList = new();
    public List<BaseStructure> CPU_StructureList = new();
    public List<BaseStructure> CPU_CapturableStructureList = new();
    public List<BaseUnit> CPU_CapturingUnitList = new();
    public List<BaseUnit> CPU_AttackableUnitList = new();
    public List<BaseUnit> CPU_AttackableResourceUnitList = new();




    void Start()
    {
        pos.x = (int)transform.position.x;
        pos.y = (int)transform.position.y;
        //print("BaseUnit initiated. xPos: " + transform.position.x + "ypos: " + transform.position.y +"instanceID: "+this.GetInstanceID());
        masterGrid = GameObject.FindGameObjectWithTag("MasterGridTag").GetComponent<MasterGrid>();
        masterGrid.setUnitInGrid(pos, this);
        MasterGrid.playerUnits[playerControl].Add(this);

        //if the unit is created after the structure on start, turn off the collider. BaseStructure has a similar check on start.
        BaseStructure onLocation = masterGrid.whatStructureIsInThisLocation(pos);
        if (onLocation != null)
        {
            onLocation.turnOffCollider();
        }

        //baseColor = spriteFillSR.color;
        //originalLightsColor = spriteLightsSR.color;

        //a good hack will probably want to fix later.
        if ((playerControl+1) % 2 == 1)
            flipSprites();

        setHealth(healthMax);
        if (unitNameTextContainer != null)
        {
            unitNameTextContainer.text = $"P{playerControl}'s {unitName}";
        }
        else
            Debug.LogError("No unitNameTextContainerFound");


        initializeColors();

        hideCrosshairs();
        hideCombatTooltip();
        //spriteContainer.SetColor(playerControl, true, false);
        showSelectedCorners(false);

        

/*        if (GameMaster.CPU_isOn && GameMaster.CPU_PlayersList[playerControl])
            CPU_AssignNewTarget();*/

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

    public void initializeColors()
    {
        Color playerColor = GameMaster.playerColors[playerControl];
        cornerSpriteTL.GetComponent<SpriteRenderer>().color = playerColor;  
        cornerSpriteTR.GetComponent<SpriteRenderer>().color = playerColor;
        cornerSpriteBL.GetComponent<SpriteRenderer>().color = playerColor;
        cornerSpriteBR.GetComponent<SpriteRenderer>().color = playerColor;
        unitNameTextContainer.color = playerColor;
        //defenceValueTextContainer.color = playerColor;
        //damageRangeTextContainer.color = playerColor;
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
        defenceValueTextContainer.text = $"Def: {defence}";
        if (sentusDefence > 0)
            defenceValueTextContainer.text += $" + {sentusDefence}";
        damageRangeTextContainer.text = $"{(int)(ceiling*100)}% - {(int)(floor*100)}%";
        Color playerColor = GameMaster.playerColors[playerControl];
        //make transparent
        Color transparentColor = new Color(playerColor.r, playerColor.g, playerColor.b, 0.6f);
        tooltipImage.color = transparentColor;
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
        StartCoroutine(AnimateTakeDamage());
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

    public IEnumerator AnimateTakeDamage()
    {
        swordsSprite.gameObject.SetActive(true);

        float scaleUpDuration = GameMaster.globalAnimationDuration/6;
        float holdDuration = GameMaster.globalAnimationDuration* 3  / 4;
        float scaleDownDuration = GameMaster.globalAnimationDuration / 12; ;

        Transform t = swordsSprite.transform;
        Vector3 startScale = new Vector3(0.01f, 0.01f, 1f);
        Vector3 endScale = new Vector3(0.9f, 0.9f, 1f);

        // Start small
        t.localScale = startScale;

        // Scale up
        float elapsed = 0f;
        while (elapsed < scaleUpDuration)
        {
            elapsed += Time.deltaTime;
            float tLerp = Mathf.SmoothStep(0f, 1f, elapsed / scaleUpDuration);
            t.localScale = Vector3.Lerp(startScale, endScale, tLerp);
            yield return null;
        }
        t.localScale = endScale;

        // Hold at full size
        yield return new WaitForSeconds(holdDuration);

        // Scale down
        elapsed = 0f;
        while (elapsed < scaleDownDuration)
        {
            elapsed += Time.deltaTime;
            float tLerp = Mathf.SmoothStep(0f, 1f, elapsed / scaleDownDuration);
            t.localScale = Vector3.Lerp(endScale, startScale, tLerp);
            yield return null;
        }
        t.localScale = startScale;

        swordsSprite.gameObject.SetActive(false);
    }


    public void setNonExhausted(bool b)
    {
        //Debug.Log($"{this.unitName} is being set to non-exhausted {b}");
        movementNonExhausted = b;
        nonExhausted = b;
        spriteContainer.SetColor(playerControl, b, false);
    }
    

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

    public IEnumerator AnimateDestroy()
    {
        healthTextContainer.text = "0";
        yield return new WaitForSeconds(GameMaster.globalAnimationDuration);
        healthTextContainer.gameObject.SetActive(false);
        StartCoroutine(AnimateCollapseAndBlacken());
        if (unitName != "seed")
        {
            explosionAnimator.gameObject.SetActive(true);
            explosionAnimator.Play("UnitExplosion");
            // Wait until the animation finishes
            float length = explosionAnimator.GetCurrentAnimatorStateInfo(0).length;
            yield return new WaitForSeconds(length);
        }



        
    }

    public IEnumerator AnimateCollapseAndBlacken()
    {
        StaticSprite sprite = spriteContainer.GetComponent<StaticSprite>();
        float duration = 0.2f;
        float elapsed = 0f;

        Vector3 originalScale = sprite.transform.localScale;
        Vector3 originalPosition = sprite.transform.localPosition;

        float originalYScale = originalScale.y;

        Color originalFillColor = sprite.fillSR.color;
        Color originalLightsColor = sprite.lightsSR.color;

        while (elapsed < duration)
        {
            elapsed += Time.deltaTime;
            float t = Mathf.Clamp01(elapsed / duration);

            // Collapse Y scale
            float newYScale = Mathf.Lerp(originalYScale, 0f, t);
            sprite.transform.localScale = new Vector3(originalScale.x, newYScale, originalScale.z);

            // Shift downward to collapse toward bottom
            float yOffset = (originalYScale - newYScale) * 0.5f;
            sprite.transform.localPosition = originalPosition - new Vector3(0f, yOffset, 0f);

            // Fade to black more aggressively
            float colorLerpFactor = t * t; // darkens faster
            Color newFillColor = Color.Lerp(originalFillColor, Color.black, colorLerpFactor);
            Color newLightsColor = Color.Lerp(originalLightsColor, Color.black, colorLerpFactor);
            sprite.fillSR.color = newFillColor;
            sprite.lightsSR.color = newLightsColor;

            yield return null;
        }

        // Final state
        sprite.transform.localScale = new Vector3(originalScale.x, 0f, originalScale.z);
        sprite.transform.localPosition = originalPosition - new Vector3(0f, originalYScale * 0.5f, 0f);
        sprite.fillSR.color = Color.black;
        sprite.lightsSR.color = Color.black;

        spriteContainer.gameObject.SetActive(false);
    }








}
