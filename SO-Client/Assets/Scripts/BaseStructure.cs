using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class BaseStructure : MonoBehaviour
{
    public byte playerControl;
    public MasterGrid masterGrid;
    public int xPos;
    public int yPos;
    public int structureType; //0: resource, 1: factory, 2: airport, 5:command
    public int gamePieceId;
    public BoxCollider2D spriteCollider;
    public GameMaster gameMaster;
    public int captureHealth;
    public int maxCaptureHealth;
    public TextMeshProUGUI healthTextContainer;
    private Color baseColor;
    public SpriteRenderer neutralSpriteRenderer;
/*    public SpriteRenderer progeny0SpriteRenderer;
    public SpriteRenderer progeny1SpriteRenderer;
    public SpriteRenderer progeny2SpriteRenderer;*/

    public StaticSprite progeny0CaptureSpriteContainer;
    public SpriteRenderer progeny0spriteFillSR;
    public SpriteRenderer progeny0spriteTrimSR;
    public SpriteRenderer progeny0spriteLightsSR;
    public StaticSprite progeny1spriteContainer;
    public SpriteRenderer progeny1spriteFillSR;
    public SpriteRenderer progeny1spriteTrimSR;
    public SpriteRenderer progeny1spriteLightsSR;




    // Start is called before the first frame update
    void Start()
    {
        gamePieceId = 200 + structureType; //structure ids start at 200.
        xPos = (int)transform.position.x;
        yPos = (int)transform.position.y;
        //private GameObject boxColliderComponent;
        gameMaster = GameObject.FindGameObjectWithTag("GameMasterTag").GetComponent<GameMaster>();
        maxCaptureHealth = 200;
        captureHealth = maxCaptureHealth;
        masterGrid = GameObject.FindGameObjectWithTag("MasterGridTag").GetComponent<MasterGrid>();
        masterGrid.setStructureInGrid(xPos, yPos, this);
        
        baseColor = neutralSpriteRenderer.color;
        //turnOffCaptureSprites();
/*        if (structureType != 200)
                setColor(neutralSpriteRenderer);
        if (playerControl != 0)*/
        setCaptureSpritesAndColor();


        if (masterGrid.whatUnitIsInThisLocation(xPos, yPos) != null)
            turnOffCollider();

        //healthTextContainer = GetComponentInChildren<TextMeshProUGUI>();

        /*if (healthTextContainer != null)
        {
            setCaptureHealth(maxCaptureHealth);
        }*/

    }

    // Update is called once per frame
    void Update()
    {
        healthTextContainer.text = captureHealth.ToString();
    }

    public void setColor(SpriteRenderer sprite) //Should this be combined with baseUnit.setColor? Maybe Mastergrid does this modification.
    {
        int player = playerControl;
        if (player != 0) {
            //float hue = ((float)player / (float)gameMaster.numPlayers) * 360f;
            float hue = ((float)player / 3.0f) * 360f;
            float saturation = 1.0f;
            float value = 1.0f;
            Color color = Color.HSVToRGB(hue / 360f, saturation, value);
            sprite.color = color;
            /*if(structureType != 0)
            {
                neutralSpriteRenderer.color = color;
            }*/
        }else{
            sprite.color = baseColor;
        }

    }

    public bool isCapturableBy(BaseUnit unit)
    {
        //"resource" probably shouldn't be hardcoded here. Should it instead reference the 1st item in the GameValuesSO unitTypes array?
        //What if I want to change the unitTypes array? Should I just have a "is resource unit" flag?
        return (unit.getPlayerControl() != playerControl && unit.isResourceUnit);  
    }

    public void switchAlliance(int capturePlayerInt)
    {
        if (structureType == 5 && playerControl != capturePlayerInt)
            gameMaster.playerLoses(playerControl);
        playerControl = (byte)capturePlayerInt;
        resetCaptureHealth();
        setCaptureSpritesAndColor();
    }

    public void setCaptureSpritesAndColor()
    {
        byte progeny = gameMaster.getPlayerProgeny(playerControl);
        if (structureType == 0 && playerControl != 0)
        {
            Debug.Log($"Setting capture sprite for player {playerControl}, progeny: {progeny}, master grid says: {gameMaster.getPlayerProgeny(playerControl)}");
        }
        turnOffCaptureSprites();
/*        if (structureType == 0)
            setColor(neutralSpriteRenderer);*/
        if (playerControl != 0)
        {
            if (progeny == 0)
            {
                if (structureType == 0)
                {
                    /*                progeny0spriteFillSR.gameObject.SetActive(true);
                                    progeny0spriteTrimSR.gameObject.SetActive(true);
                                    progeny0spriteLightsSR.gameObject.SetActive(true);*/
                    progeny0CaptureSpriteContainer.gameObject.SetActive(true);
                    setColor(progeny0spriteFillSR);
                }
                else
                { 
                    setColor(neutralSpriteRenderer); 
                }
                //progeny0SpriteRenderer.gameObject.SetActive(true);
            }
            else if (progeny == 1)
            {
                progeny1spriteContainer.gameObject.SetActive(true);
                setColor(progeny1spriteFillSR);
                neutralSpriteRenderer.color = baseColor;
            }
            else if (gameMaster.getPlayerProgeny(playerControl) == 2)
                Debug.LogError("Structure: Progeny 2 not yet implemented");
            else
                Debug.LogError($"No progeny for byte value {progeny} found, unable to set capture sprite");
        }
        else
            setColor(neutralSpriteRenderer);

    }

    public void turnOffCaptureSprites()
    {
        //progeny0SpriteRenderer.gameObject.SetActive(false);
        //progeny1SpriteRenderer.gameObject.SetActive(false);
        progeny1spriteContainer.gameObject.SetActive(false);
        //progeny2SpriteRenderer.gameObject.SetActive(false);
        /*        progeny0spriteFillSR.gameObject.SetActive(false);
                progeny0spriteTrimSR.gameObject.SetActive(false);
                progeny0spriteLightsSR.gameObject.SetActive(false);*/
        progeny0CaptureSpriteContainer.gameObject.SetActive(false);
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
        captureHealth = maxCaptureHealth;
    }
}
