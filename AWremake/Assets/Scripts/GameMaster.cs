using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GameMaster : MonoBehaviour
{

    public MasterGrid masterGrid;
    public TilemapManager tilemapManager;

    public Canvas canvas;
    public BaseStructure selectedStructure;
    public GameObject choicePanel;
    public GameObject productionPanel;
    public GameObject unitChoicePanel;
    public int playerTurn;
    public int numPlayers;
    public TMP_Text playerTurnText;
    public TMP_Text playerResourceText;
    private int[] playerResources;
    private int baseResourcePerTurn;
    private int structureResourcePerTurn;
    public Transform unitList;
    public GameValuesSO gameValues;
    public BaseUnit infantryUnitPrefab;
    public Button attackButton;
    public Button captureButton;
    public Button undoMovementButton;

    public int gridX = 30;
    public int gridY = 20;

    // Start is called before the first frame update
    void Awake()
    {
        //gameValues = AssetDatabase.LoadAssetAtPath<GameValuesSO>("Assets/Scripts/Assets/Scripts/GameValuesSO.cs.cs");

        //initializes all unit values, modifies their prefab and sprites.
        //initializes all Tilebases for tilemap
        gameValues.initialize();

        //initializes the TilemapManager
        tilemapManager.initialize();

        //initializes the masterGrid arrays etc with the map size
        masterGrid.startup(gridX, gridY, tilemapManager.getTilemapByteArray(), gameValues.getAttributesTilesDictionary(),gameValues.getCombatMultiplierDictionary());

        hideChoicePanel();
        playerTurn = 1;
        numPlayers = 2; //will set dynamically later
        setPlayerTurnText(playerTurn);
        baseResourcePerTurn = 100;
        structureResourcePerTurn = 1027;
        playerResources = new int[numPlayers+1];
        playerResources[0] = 0;
        for (int i = 1; i <= numPlayers; i++)
            setPlayerResources(i);
        startupInstantiateUnits();
    }

    private void startupInstantiateUnits()
    {
        BaseUnit infantryUnitPrefab = Resources.Load<BaseUnit>("UnitPrefabs/progeny1/InfantryPrefab");

        if (infantryUnitPrefab == null)
        {
            Debug.LogError("Infantry prefab not found at the specified path.");
            return;
        }

        BaseUnit unit = Instantiate(infantryUnitPrefab, new Vector2(20, 17), Quaternion.identity, unitList);
        unit.playerControl = 1;

        BaseUnit unit2 = Instantiate(infantryUnitPrefab, new Vector2(18, 17), Quaternion.identity, unitList);
        unit2.playerControl = 2;
        BaseUnit unit3 = Instantiate(infantryUnitPrefab, new Vector2(22, 18), Quaternion.identity, unitList);
        unit3.playerControl = 1;
        BaseUnit unit4 = Instantiate(infantryUnitPrefab, new Vector2(24, 18), Quaternion.identity, unitList);
        unit4.playerControl = 2;
        BaseUnit unit5 = Instantiate(infantryUnitPrefab, new Vector2(24, 15), Quaternion.identity, unitList);
        unit5.playerControl = 1;
    }

    public int getIncomeForPlayer(int player)
    {
        return 0;
    }

    public void structureHasBeenClicked(BaseStructure structure)
    {
        //should probably try/catch if structure is null
        if(structure.playerControl == playerTurn && structure.structureType == 1)
        {
            choicePanel.SetActive(true);
            productionPanel.SetActive(true);
            selectedStructure = structure;
        }
    }

    public void captureButtonPressed()
    {
        if(selectedStructure != null)
        {
            masterGrid.captureStructure(selectedStructure);
            hideChoicePanel();
        }
    }

    public void attackButtonPressed()
    {
        //MG 24-06-11 this currently doesn't do anything.
        masterGrid.attackButtonPressed();
        hideChoicePanel();
    }
    
    public void undoMovementButtonPressed()
    {
        masterGrid.undoMovementButtonPressed();
        hideChoicePanel();
    }

    public void unitProductionButtonPressed(BaseUnit unit)
    {
        int price = unit.price;
        print(price);
        if (playerResources[playerTurn] >= price)
        {
            playerResources[playerTurn] -= price;
            unit.playerControl = playerTurn;
            //need a way to set to exhausted from here so the units don't have to start exhausted on the 1st turn.
            Instantiate(unit, new Vector2(selectedStructure.xPos, selectedStructure.yPos), Quaternion.identity, unitList);
            playerResourceText.text = "" + playerResources[playerTurn];
            selectedStructure.turnOffCollider();
            hideChoicePanel();
        }
        else
            print("You must mine more minerals!");
    }

    public void exitButtonPressed()
    {
        if (masterGrid.selectedUnit != null)
            masterGrid.exhaustSelectedUnit(masterGrid.selectedUnit, true);
        hideChoicePanel();
    }

    public void endTurnButtonPressed()
    {
        hideChoicePanel();
        masterGrid.refreshUnits(playerTurn);
        masterGrid.clearMovement();
        masterGrid.clearSelectedUnit();
        if (playerTurn >= numPlayers)
            playerTurn = 1;
        else
            playerTurn++;
        setPlayerTurnText(playerTurn);
        setPlayerResources(playerTurn);
    }

    public void setPlayerTurnText(int playerTurn) //this should probably be combined with BaseUnit.setColor
    {
        playerTurnText.text = "Player Turn: " + (playerTurn);
        
        float hue = ((float)playerTurn / 3.0f) * 360f;
        float saturation = 1.0f;
        float value = 1.0f;
        Color color = Color.HSVToRGB(hue / 360f, saturation, value);
        playerTurnText.color = color;
    }

    public void showUnitChoicePanel(bool attackableUnitsBool, bool capturableStructureBool)
    {
        //print(structure);
        if (attackableUnitsBool || capturableStructureBool)
        {
            choicePanel.SetActive(true);
            unitChoicePanel.SetActive(true);

            //clickableAttackButton(attackableUnitsBool);
            //clickableCaptureButton(capturableStructureBool);
            attackButton.interactable = attackableUnitsBool;
            captureButton.interactable = capturableStructureBool;
        }
    }

/*    public void clickableAttackButton(bool b)
    {
        attackButton.interactable = b;
    }
    public void clickableCaptureButton(bool b)
    {
        captureButton.interactable = b;
    }*/

    public void hideChoicePanel()
    {
        selectedStructure = null;
        choicePanel.SetActive(false);
        hideAllSubPanels();
    }

    public void hideAllSubPanels()
    {
        unitChoicePanel.SetActive(false);
        productionPanel.SetActive(false);
    }

    public int getPlayerTurn()
    {
        return playerTurn;
    }

    private void setPlayerResources(int playerTurn)
    {
        int num = masterGrid.numCapturedResourceLocations(playerTurn);
        playerResources[playerTurn] = playerResources[playerTurn] + baseResourcePerTurn + structureResourcePerTurn * num;
        playerResourceText.text = ""+playerResources[playerTurn];
    }
}
