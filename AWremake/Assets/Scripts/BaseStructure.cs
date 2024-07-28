using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class BaseStructure : MonoBehaviour
{
    public int playerControl;
    public MasterGrid masterGrid;
    public int xPos;
    public int yPos;
    public int structureType; //0: resource, 1: factory, 2: airport, 5:command
    public BoxCollider2D spriteCollider;
    public GameMaster gameMaster;
    public int captureHealth;
    public int maxCaptureHealth;
    public TextMeshProUGUI healthTextContainer;
    private Color baseColor;
    public SpriteRenderer spriteRenderer;


    // Start is called before the first frame update
    void Start()
    {
        xPos = (int)transform.position.x;
        yPos = (int)transform.position.y;
        //private GameObject boxColliderComponent;
        gameMaster = GameObject.FindGameObjectWithTag("GameMasterTag").GetComponent<GameMaster>();
        maxCaptureHealth = 200;
        captureHealth = maxCaptureHealth;
        masterGrid = GameObject.FindGameObjectWithTag("MasterGridTag").GetComponent<MasterGrid>();
        masterGrid.setStructureInGrid(xPos, yPos, this);
        
        
        //set sprite. 
        Sprite spr = null;
        if (structureType == 0)
            spr = Resources.Load<Sprite>("sprites/BismuthV1/BismuthTilev1.1");
        else if (structureType == 1)
            spr = Resources.Load<Sprite>("sprites/factorySprite");
        else if (structureType == 2)
            spr = Resources.Load<Sprite>("sprites/airportSprite");
        else if (structureType == 5)
            spr = Resources.Load<Sprite>("sprites/commandStructureSprite");
        spriteRenderer.sprite = spr;
        baseColor = spriteRenderer.color;
        if(playerControl != 0)
            setColor(playerControl);
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

    public void setColor(int player) //Should this be combined with baseUnit.setColor? Maybe Mastergrid does this modification.
    {
        //float hue = ((float)player / (float)gameMaster.numPlayers) * 360f;
        float hue = ((float)player / 3.0f) * 360f;
        float saturation = 1.0f;
        float value = 1.0f;
        Color color = Color.HSVToRGB(hue / 360f, saturation, value);
        spriteRenderer.color = color;
    }

    public bool isCapturableBy(BaseUnit unit)
    {
        //"resource" probably shouldn't be hardcoded here. Should it instead reference the 1st item in the GameValuesSO unitTypes array?
        //What if I want to change the unitTypes array? Should I just have a "is resource unit" flag?
        return (unit.getPlayerControl() != playerControl && unit.isResourceUnit);  
    }

    public void switchAlliance(int capturePlayerInt)
    {
        if (structureType == 2 && playerControl != capturePlayerInt)
            gameMaster.playerLoses(playerControl);
        playerControl = capturePlayerInt;
        resetCaptureHealth();
        setColor(capturePlayerInt);
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
