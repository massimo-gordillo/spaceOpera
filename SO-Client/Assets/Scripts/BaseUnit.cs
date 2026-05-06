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
    public LineRenderer CPUDebugLine;



    void Start()
    {
        pos.x = (int)transform.position.x;
        pos.y = (int)transform.position.y;
        //print("BaseUnit initiated. xPos: " + transform.position.x + "ypos: " + transform.position.y +"instanceID: "+this.GetInstanceID());
        masterGrid = GameObject.FindGameObjectWithTag("MasterGridTag").GetComponent<MasterGrid>();
        masterGrid.SetUnitInGrid(pos, this);
        MasterGrid.playerUnits[playerControl].Add(this);

        //if the unit is created after the structure on start, turn off the collider. BaseStructure has a similar check on start.
        BaseStructure onLocation = masterGrid.WhatStructureIsInThisLocation(pos);
        if (onLocation != null)
        {
            onLocation.TurnOffCollider();
        }

        //baseColor = spriteFillSR.color;
        //originalLightsColor = spriteLightsSR.color;
        spriteContainer.SetColor(playerControl, false, false);

        //a good hack will probably want to fix later.
        if ((playerControl+1) % 2 == 1)
            FlipSprites();

        //Debug.Log($"Setting health {healthCurrent} to health max {healthMax}");
        healthCurrent = healthMax; //set current health to max health on start
        SetHealth(healthMax);
        if (unitNameTextContainer != null)
        {
            unitNameTextContainer.text = $"P{playerControl}'s {unitName}";
        }
        else
            Debug.LogError("No unitNameTextContainerFound");


        InitializeColors();

        HideCrosshairs();
        HideCombatTooltip();
        //spriteContainer.SetColor(playerControl, true, false);
        ShowSelectedCorners(false);

        

/*        if (GameMaster.CPU_isOn && GameMaster.CPU_PlayersList[playerControl])
            CPU_AssignNewTarget();*/
        if(unitTerrainType == UnitTerrainType.Air)
        {
            spriteContainer.isFlyingUnit = true;
        }

    }
    
/*    void Update()
    {
        if(CPU_TargetNode!=null)
            UpdateLine(CPU_TargetNode.pos);
    }*/

    void UpdateLine(Vector2 targetPos)
    {
        CPUDebugLine.positionCount = 2;
        CPUDebugLine.SetPosition(0, transform.position); // Start at unit
        CPUDebugLine.SetPosition(1, targetPos);          // End at target square
        CPUDebugLine.startColor = GameMaster.playerColors[playerControl];
        if (isResourceUnit)
        {
            CPUDebugLine.endColor = Color.white;
        }
        else
        {
            CPUDebugLine.endColor = Color.black;
        }
    }

    /*    public void StartupPopulateValues(AttributesBaseUnit data)
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


    public void StaticSpriteHasBeenClicked()
    {
        if(unitName != "seed")
            masterGrid.UnitHasBeenClicked(this);
    }

    public void DrawCrosshairs()
    {
        if (crosshairSpriteRenderer != null)
        {
            crosshairSpriteRenderer.enabled = true;
        }
    }

    public void HideCrosshairs()
    {
        if (crosshairSpriteRenderer != null)
        {
            crosshairSpriteRenderer.enabled = false;
        }
    }
    public void HideCombatTooltip()
    {
        if (combatTooltip != null)
        {
            combatTooltip.SetActive(false);
        }
    }

    public void ShowSelectedCorners(bool b)
    {
        cornerSpriteTL.SetActive(b);
        cornerSpriteTR.SetActive(b);
        cornerSpriteBL.SetActive(b);
        cornerSpriteBR.SetActive(b);
    }

    public void InitializeColors()
    {
        Color playerColor = MatchSettings.playerColors[playerControl];
        cornerSpriteTL.GetComponent<SpriteRenderer>().color = playerColor;  
        cornerSpriteTR.GetComponent<SpriteRenderer>().color = playerColor;
        cornerSpriteBL.GetComponent<SpriteRenderer>().color = playerColor;
        cornerSpriteBR.GetComponent<SpriteRenderer>().color = playerColor;
        unitNameTextContainer.color = playerColor;
        //defenceValueTextContainer.color = playerColor;
        //damageRangeTextContainer.color = playerColor;
    }

    public void ShowCombatTooltip(int defence, int sentusDefence, double floor, double ceiling)
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
        if (floor >= 1)
            damageRangeTextContainer.text = "100%";
        else
            damageRangeTextContainer.text = $"{(int)(floor * 100)} - {(int)(ceiling * 100)}%";
        Color playerColor = MatchSettings.playerColors[playerControl];
        //make transparent
        Color transparentColor = new Color(playerColor.r, playerColor.g, playerColor.b, 0.6f);
        tooltipImage.color = transparentColor;
    }

    public void SetHealth(double health)
    {
        if (health != healthCurrent)
        {
            //round down to the nearest 1% of max health
            int healthStep = Math.Max(1, healthMax / 100); // Ensure healthStep is at least 1
            healthCurrent = (int)(health - (health % healthStep));
            UpdateHealthUI();
        }
        //if CPU resource unit, unclaim target node if below ratio threshold.  
        if(isResourceUnit && GameMaster.CPU_isOn && health/healthMax < 0.65)
        {
            if (!CPU_IsCapturing && CPU_TargetNode != null)
            {
                CPU_TargetNode.UnclaimedByPlayer(playerControl);
                isResourceUnit = false;
                CPU_TargetNode = null;
                CPUManager.GiveCombatUnitNextNodeAssignment(this);
            }
        }
    }

    public int GetHealthPercentage()
    {
        //Debug.Log($"Calculating health percentage for {unitName}: Current Health = {healthCurrent} vs {(double)healthCurrent}, Max Health = {(double)healthMax}");
        return (int)(((double)healthCurrent / (double)healthMax) * 100);
    }

    public void UpdateHealthUI()
    {
        int healthPercentage = GetHealthPercentage();
        if (healthPercentage == 100){
            healthCanvas.SetActive(false);
        }else
        {
            healthCanvas.SetActive(true);
        }
        healthTextContainer.text = healthPercentage.ToString();
    }

    public void TakeDamage(double damage)
    {
        StartCoroutine(AnimateTakeDamage());
        if (damage <= 0)
            SetHealth(healthCurrent);
        else if (healthCurrent <= damage){
            SetHealth(0);
            DeleteMe(true);
        }else if ((healthCurrent - damage) < 0.05 * healthMax)
        {
            SetHealth(0);
            DeleteMe(true);
        }
        else
        {
            SetHealth(healthCurrent - damage);
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


    public void SetNonExhausted(bool ready)
    {
        //Debug.Log($"{this.unitName} is being set to non-exhausted {b}");
        movementNonExhausted = ready;
        nonExhausted = ready;
        //spriteContainer.SetColor(playerControl, b, false);
        /*        if (GameMaster.CPU_PlayersList[playerControl])
                    DelaySetColor(b);
                else
                    spriteContainer.SetColor(playerControl, b, false);*/
        /*        if (unitName.ToLower() != "seed")
                    StartCoroutine(DelaySetColor(ready));
                else
                {
                    spriteFillSR.color = GameMaster.playerColors[GameMaster.playerTurn - 1];
                    spriteLightsSR.color = Color.white;
                }*/
/*        if (unitName.ToLower() == "seed")
        {
            //debug print hglight colour
            Debug.Log($"Seed highlight color: {spriteLightsSR.color}");
        }*/

        StartCoroutine(DelaySetColor(ready));
    }

    public IEnumerator DelaySetColor(bool ready)
    {
        if (ready)
            yield return null;
        else
            yield return new WaitForSeconds(GameMaster.globalAnimationDuration);
        spriteContainer.SetColor(playerControl, ready, false);
    }


    public void FlipSprites()
    {
        spriteFillSR.flipX = true;
        spriteTrimSR.flipX = true;
        spriteLightsSR.flipX = true;
    }


/*    public int GetPlayerControl()
    {
        return playerControl;
    }*/

    public void DeleteMe(bool animate)
    {
        masterGrid.DeleteUnit(this, animate);
    }

    public IEnumerator AnimateDestroy()
    {
        healthTextContainer.text = "0";
        yield return new WaitForSeconds(GameMaster.globalAnimationDuration);
        if(healthTextContainer.isActiveAndEnabled)
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
