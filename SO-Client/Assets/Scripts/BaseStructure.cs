using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class BaseStructure : MonoBehaviour
{
    public int playerControl;
    public MasterGrid masterGrid;
    public Vector2Int pos;
    public int structureType; //0: resource, 1: factory, 2: airport, 5:command
    public int gamePieceId;
    public BoxCollider2D spriteCollider;
    public GameMaster gameMaster;
    public int captureHealth;
    public int maxCaptureHealth;
    public TextMeshPro healthTextContainer;
    public GameObject healthCanvas;
    //private Color baseColor;
    public StaticSprite neutralSpriteContainer;
    public SpriteRenderer neutralSpriteFill;
    
/*    public SpriteRenderer progeny0SpriteRenderer;
    public SpriteRenderer progeny1SpriteRenderer;
    public SpriteRenderer progeny2SpriteRenderer;*/

    public StaticSprite progeny0CaptureSpriteContainer;
    public SpriteRenderer progeny0ResourceCaptureSpriteFillSR;
    public SpriteRenderer progeny0ResourceCaptureSpriteTrimSR;
    public SpriteRenderer progeny0ResourceCaptureSpriteLightsSR;
    public StaticSprite progeny1CaptureSpriteContainer;
    public SpriteRenderer progeny1CaptureSpriteFillSR;
    public SpriteRenderer progeny1CaptureSpriteTrimSR;
    public SpriteRenderer progeny1CaptureSpriteLightsSR;
    public StaticSprite progeny2ResourceCaptureSpriteContainer;
    public SpriteRenderer progeny2ResourceCaptureSpriteFillSR;
    public SpriteRenderer progeny2ResourceCaptureSpriteTrimSR;
    public SpriteRenderer progeny2ResourceCaptureSpriteLightsSR;
    public StaticSprite progeny2ProductionCaptureSpriteContainer;
    public SpriteRenderer progeny2ProductionCaptureSpriteFillSR;
    public SpriteRenderer progeny2ProductionCaptureSpriteTrimSR;
    public SpriteRenderer progeny2ProductionCaptureSpriteLightsSR;





    // Start is called before the first frame update
    void Start()
    {
        gamePieceId = 200 + structureType; //structure ids start at 200.
        pos = new Vector2Int((int)transform.position.x, (int)transform.position.y);
        //private GameObject boxColliderComponent;
        gameMaster = GameObject.FindGameObjectWithTag("GameMasterTag").GetComponent<GameMaster>();
        maxCaptureHealth = 200;
        captureHealth = maxCaptureHealth;
        masterGrid = GameObject.FindGameObjectWithTag("MasterGridTag").GetComponent<MasterGrid>();
        masterGrid.setStructureInGrid(pos, this);


        //baseColor = neutralSpriteFill.color;
        //turnOffCaptureSprites();
/*        if (structureType != 200)
                setColor(neutralSpriteFill);
        if (playerControl != 0)*/
        setCaptureSpritesAndColor();


        if (IsCoveredByUnit())
            turnOffCollider();

        //healthTextContainer = GetComponentInChildren<TextMeshProUGUI>();

        /*if (healthTextContainer != null)
        {
            setCaptureHealth(maxCaptureHealth);
        }*/
        if (structureType == 5)
        {
            MasterGrid.commandStructures[playerControl] = this;
        }

    }

    



    public bool isCapturableBy(BaseUnit unit)
    {
        //"resource" probably shouldn't be hardcoded here. Should it instead reference the 1st item in the GameValuesSO unitTypes array?
        //What if I want to change the unitTypes array? Should I just have a "is resource unit" flag?
        return (unit.playerControl != playerControl && unit.isResourceUnit);  
    }

    public void switchAlliance(int capturePlayerInt)
    {
        if (structureType == 5 && playerControl != capturePlayerInt)
            gameMaster.ConcedePlayer(playerControl);
        playerControl = (byte)capturePlayerInt;
        resetCaptureHealth();
        setCaptureSpritesAndColor();
    }

    public void setCaptureSpritesAndColor()
    {
        byte progeny = gameMaster.getPlayerProgeny((byte)playerControl);
/*        if (structureType == 0 && playerControl != 0)
        {
            Debug.Log($"Setting capture sprite for player {playerControl}, progeny: {progeny}, master grid says: {gameMaster.getPlayerProgeny(playerControl)}");
        }*/
        turnOffCaptureSprites();
        /*        if (structureType == 0)
                    setColor(neutralSpriteFill);*/
        if (playerControl != 0)
        {
            if (progeny == 0)
            {
                if (structureType == 0)
                {
                    /*                progeny0ResourceCaptureSpriteFillSR.gameObject.SetActive(true);
                                    progeny0ResourceCaptureSpriteTrimSR.gameObject.SetActive(true);
                                    progeny0ResourceCaptureSpriteLightsSR.gameObject.SetActive(true);*/
                    progeny0CaptureSpriteContainer.gameObject.SetActive(true);
                    //Debug.Log("Calling set color from baseStructure");
                    progeny0CaptureSpriteContainer.SetColor(playerControl, true, true);
                }
                else
                {
                    neutralSpriteContainer.SetColor(playerControl, true, true);
                }
                //progeny0SpriteRenderer.gameObject.SetActive(true);
            }
            else if (progeny == 1)
            {
                progeny1CaptureSpriteContainer.gameObject.SetActive(true);
                progeny1CaptureSpriteContainer.SetColor(playerControl, true, true);
                neutralSpriteContainer.SetColor(0, true, true);
            }
            else if (progeny == 2)
            {
                if (IsProduction())
                {
                    progeny2ProductionCaptureSpriteContainer.gameObject.SetActive(true);
                    progeny2ProductionCaptureSpriteContainer.SetColor(playerControl, true, true);
                    neutralSpriteContainer.SetColor((int)playerControl, true, true);
                    //neutralSpriteContainer.ToggleSprites(false);
                }
                else if(structureType == 0)
                {
                    progeny2ResourceCaptureSpriteContainer.gameObject.SetActive(true);
                    progeny2ResourceCaptureSpriteContainer.SetColor(playerControl, true, true);

                    //setColor(neutralSpriteFill);
                }
            }
            /*else if (gameMaster.getPlayerProgeny(playerControl) == 2)
                Debug.LogError("Structure: Progeny 2 not yet implemented");
            */
            else
                Debug.LogError($"No progeny for byte value {progeny} found, unable to set capture sprite");
        }
        else
        {
            //Debug.Log($"Player is 0 for structure {this.name}");
            neutralSpriteContainer.SetColor(0, true, true);
        }

    }

    public void captureByPercentage(int percentCapturing, int playerCapturing)
    {
        
        if (playerCapturing != playerControl)
        {
            if (percentCapturing < captureHealth)
                captureHealth -= percentCapturing;
            else
                switchAlliance(playerCapturing);
            //Debug.Log("capture health: " + captureHealth + "selectedUnithealth " + percentCapturing);
            setCaptureHealth(captureHealth);
        }else
            Debug.LogError("Player " + playerCapturing + " tried to capture their own structure");
    }

    public void setCaptureHealth(int health)
    {
        if (captureHealth >= maxCaptureHealth)
        {
            captureHealth = maxCaptureHealth;
            healthCanvas.SetActive(false);
        }
        else
        {
            captureHealth = health;
            healthCanvas.SetActive(true);
        }
        healthTextContainer.text = captureHealth.ToString()+"/"+maxCaptureHealth.ToString();
    }

    public void turnOffCaptureSprites()
    {
        neutralSpriteContainer.ToggleSprites(true);
        //progeny0SpriteRenderer.gameObject.SetActive(false);
        //progeny1SpriteRenderer.gameObject.SetActive(false);
        progeny1CaptureSpriteContainer.gameObject.SetActive(false);
        //progeny2SpriteRenderer.gameObject.SetActive(false);
        /*        progeny0ResourceCaptureSpriteFillSR.gameObject.SetActive(false);
                progeny0ResourceCaptureSpriteTrimSR.gameObject.SetActive(false);
                progeny0ResourceCaptureSpriteLightsSR.gameObject.SetActive(false);*/
        progeny0CaptureSpriteContainer.gameObject.SetActive(false);
        progeny2ResourceCaptureSpriteContainer.gameObject.SetActive(false);
        progeny2ProductionCaptureSpriteContainer.gameObject.SetActive(false);
    }

    public void staticSpriteHasBeenClicked()
    {
        gameMaster.structureHasBeenClicked(this);
    }

    public void turnOnCollider()
    {
        spriteCollider.enabled = true;
    }

    public void turnOffCollider()
    {
        spriteCollider.enabled = false;
        //print("turned off collider for: " + this);
    }

    public void resetCaptureHealth()
    {
        healthCanvas.SetActive(false);
        setCaptureHealth(maxCaptureHealth);
    }

    public bool IsProduction()
    {
        return (!(structureType == 0 || structureType == 5));
    }

    public bool IsCoveredByUnit()
    {
        //Debug.Log($"Structure {pos} is covered by unit? {masterGrid.whatUnitIsInThisLocation(pos) != null}");
        return (masterGrid.whatUnitIsInThisLocation(pos) != null);
    }
}
