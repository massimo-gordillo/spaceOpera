using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GameMaster : MonoBehaviour
{

    public MasterGrid masterGrid;
    public TilemapManager tilemapManager;
    public PrefabManager prefabManager;

    public Canvas canvas;
    public BaseStructure selectedStructure;
    public GameObject choicePanel;
    public MenuProductionPanel productionPanel;
    public GameObject unitChoicePanel;
    public int playerTurn;
    public int numPlayers;
    private bool[] playersNotLost;
    public TMP_Text playerTurnText;
    public TMP_Text playerResourceText;
    private int[] playerResources;
    private int baseResourcePerTurn;
    private int structureResourcePerTurn;
    public Transform unitList;
    public Transform structureList;
    public GameValuesSO gameValues;
    public BaseUnit infantryUnitPrefab;
    public Button attackButton;
    public Button captureButton;
    public Button undoMovementButton;
    public Button endTurnButton;

    public GameObject playerWinCard;
    public TMP_Text playerWinText;

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
        masterGrid.startup(gridX, gridY, tilemapManager.getTilemapByteArray(), gameValues.getAttributesTilesDictionary(), gameValues.getCombatMultiplierDictionary());

        hideChoicePanel();
        playerWinCard.SetActive(false);
        playerTurn = 1; //player 0 is neutral
        numPlayers = 2; //will set dynamically later
        playersNotLost = new bool[numPlayers+1];
        for (int i = 0; i <= numPlayers; i++)
        {
            playersNotLost[i] = true;
        }
        playersNotLost[0] = false;
        setPlayerTurnText(playerTurn);
        baseResourcePerTurn = 100;
        structureResourcePerTurn = 1027;
        playerResources = new int[numPlayers + 1];
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

        BaseUnit unit2 = Instantiate(infantryUnitPrefab, new Vector2(14, 14), Quaternion.identity, unitList);
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
        if (structure.playerControl == playerTurn && structure.structureType != 0)
        {
            choicePanel.SetActive(true);
            productionPanel.gameObject.SetActive(true);
            productionPanel.presentProdList(structure.structureType);
            selectedStructure = structure;
        }
    }

    public void captureButtonPressed()
    {
        if (selectedStructure != null)
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
        int i = -1;
        do
        { //always increment player number once, then check if that player is still in the game. Go next, never repeat more than num players.
            if (playerTurn >= numPlayers)
                playerTurn = 1;
            else
                playerTurn++;
            i++;
        } while (!playersNotLost[playerTurn] && i < numPlayers);

        if (i >= numPlayers)
            playerWins(-1); //error case
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

    public void showUnitChoicePanel(bool attackableUnitsBool, bool capturableStructureBool, bool hasMoved)
    {
        //print(structure);
        if (attackableUnitsBool || capturableStructureBool )
        {
            choicePanel.SetActive(true);
            unitChoicePanel.SetActive(true);

            //clickableAttackButton(attackableUnitsBool);
            //clickableCaptureButton(capturableStructureBool);
            attackButton.interactable = attackableUnitsBool;
            captureButton.interactable = capturableStructureBool;
            undoMovementButton.interactable = hasMoved;
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
        productionPanel.gameObject.SetActive(false);
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

    public void playerLoses (int player)
    {
        playersNotLost[player] = false;
        int count=0;
        int playerWinner = -1;
        for (int i = 1; i <= numPlayers; i++)
        {
            if (playersNotLost[i] == true)
                playerWinner = i;
            else
                count++;
        }
        if (numPlayers - count <= 1)
            playerWins(playerWinner);
    }

    private void playerWins (int player)
    {
        if (player == -1)
            Debug.LogError($"Player {player} has won the game, this is a failcase");
        else
            displayWinnerCard(player);
    }

    private void displayWinnerCard(int player)
    {
        playerWinCard.SetActive(true);
        playerWinText.text = $"Player {player} wins!";
        endTurnButton.interactable = false;
        masterGrid.playerWins(player);
    }

    public List<GamePieceInfo> ConvertGameStateToList()
    {
        List<GamePieceInfo> gameStateList = new List<GamePieceInfo>();

        // Iterate through the grid to find units and structures
        for (int x = 0; x < gridX; x++)
        {
            for (int y = 0; y < gridY; y++)
            {
                BaseUnit unit = masterGrid.whatUnitIsInThisLocation(x, y);
                if (unit != null)
                {
                    GamePieceInfo info = new GamePieceInfo
                    {
                        x = (byte)x,
                        y = (byte)y,
                        typeNum = unit.baseUnitVariantIdentifier,
                        playerID = (byte)unit.playerControl,
                        healthVal = (byte)((double)unit.healthCurrent / (double)unit.healthMax * 100)
                    };
                    gameStateList.Add(info);
                }

                BaseStructure structure = masterGrid.whatStructureIsInThisLocation(x, y);
                if (structure != null)
                {
                    GamePieceInfo info = new GamePieceInfo
                    {
                        x = (byte)x,
                        y = (byte)y,
                        typeNum = (byte)(200 + structure.structureType),
                        playerID = (byte)structure.playerControl,
                        healthVal = (byte)structure.captureHealth
                    };
                    gameStateList.Add(info);
                }
            }
        }

        return gameStateList;
    }


    public void ConvertListToGameState(List<GamePieceInfo> gameStateList)
    {
        foreach (var pieceInfo in gameStateList)
        {
            if (pieceInfo.typeNum < 200)
            {
                int x = pieceInfo.x;
                int y = pieceInfo.y;
                AttributesBaseUnit data = gameValues.GetUnitDataByByte(pieceInfo.typeNum);

                BaseUnit unit = prefabManager.getUnitFromPrefab(data.prefabPath);
                Instantiate(unit, new Vector2(x, y), Quaternion.identity, unitList);
                unit.playerControl = pieceInfo.playerID;
                unit.setHealth((int)((double)(pieceInfo.healthVal*unit.healthMax)/100));
                unit.xPos = x;
                unit.yPos = y;
                masterGrid.setUnitInGrid(x, y, unit);
            }
            else if (pieceInfo.typeNum >= 200 && pieceInfo.typeNum < 255)
            {
                int x = pieceInfo.x;
                int y = pieceInfo.y;
                BaseStructure structure = Instantiate(new BaseStructure(), new Vector2(x, y), Quaternion.identity, structureList);
                structure.playerControl = pieceInfo.playerID;
                structure.captureHealth = pieceInfo.healthVal;
                structure.xPos = x;
                structure.yPos = y;
                masterGrid.setStructureInGrid(x, y, structure);
            }
        }
    }
}
