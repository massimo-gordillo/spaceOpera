using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GameMaster : MonoBehaviour
{

    public Canvas canvas;
    public BaseStructure selectedStructure;
    public MasterGrid masterGrid;
    public GameObject structurePanel;
    public GameObject productionPanel;
    public GameObject resourcePanel;
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
    // Start is called before the first frame update
    void Awake()
    {
        //gameValues = AssetDatabase.LoadAssetAtPath<GameValuesSO>("Assets/Scripts/Assets/Scripts/GameValuesSO.cs.cs");
        hideStructurePanel();
        playerTurn = 1;
        numPlayers = 2; //will set dynamically later
        setPlayerTurnText(playerTurn);
        baseResourcePerTurn = 100;
        structureResourcePerTurn = 1027;
        playerResources = new int[numPlayers+1];
        playerResources[0] = 0;
        for (int i = 1; i <= numPlayers; i++)
            setPlayerResources(i);
        print("player turn initated: " + getPlayerTurn());
        startupInstantiateUnits();
    }

    private void startupInstantiateUnits()
    {
        BaseUnit unit = infantryUnitPrefab;
        //AttributesBaseUnit infantryData = gameValues.GetUnitDataByTitle("Infantry");

        //unit.xPos = 18;
        //unit.yPos = 19;
        //Instantiate(unit, new Vector2(unit.xPos, unit.yPos), Quaternion.identity, unitList);
        Instantiate(unit, new Vector2(18, 19), Quaternion.identity, unitList);
        //unit.startupPopulateValues(infantryData);

        /*
        BaseUnit unit2 = infantryUnitPrefab;
        unit2.unitName = "Infantry";
        AttributesBaseUnit infantryData = gameValues.GetUnitDataByTitle("Infantry");
        unit2.xPos = 16;
        unit2.yPos = 18;
        Instantiate(unit2, new Vector2(unit2.xPos, unit2.yPos), Quaternion.identity, unitList); BaseUnit unit2 = infantryUnitPrefab;
        */
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
            structurePanel.SetActive(true);
            productionPanel.SetActive(true);
            selectedStructure = structure;
        }
    }

    public void captureButtonPressed()
    {
        if(selectedStructure != null)
        {
            masterGrid.captureStructure(selectedStructure);
            hideStructurePanel();
        }
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
            hideStructurePanel();
        }
        else
            print("You must mine more minerals!");
    }

    public void exitButtonPressed()
    {
        if (masterGrid.selectedUnit != null)
            masterGrid.exhaustSelectedUnit(masterGrid.selectedUnit, true);
        hideStructurePanel();
    }

    public void endTurnButtonPressed()
    {
        hideStructurePanel();
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

    public void showStructureCapturePanel(BaseStructure structure)
    {
        print(structure);
        if(structure != null)
        {
            selectedStructure = structure;
            structurePanel.SetActive(true);
            resourcePanel.SetActive(true);
        }
    }

    public void hideStructurePanel()
    {
        selectedStructure = null;
        structurePanel.SetActive(false);
        hideAllSubPanels();
    }

    public void hideAllSubPanels()
    {
        resourcePanel.SetActive(false);
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
