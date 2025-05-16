using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.IO;
using UnityEngine.SceneManagement;
using JetBrains.Annotations;
//using System.Diagnostics;
//using MessagePack;

public class GameMaster : MonoBehaviour
{
    //private static GameMaster _instance;

    public MasterGrid masterGrid;
    public TilemapManager tilemapManager;
    //private PrefabManager prefabManager = new PrefabManager();
    public SupabaseManager supabaseManager;
    public CPUManager CPUManager;
    public CameraManager cameraManager;

    public Guid match_id;

    public Canvas canvas;
    public BaseStructure selectedStructure;
    public GameObject choicePanel;
    public MenuProductionPanel productionPanel;
    public GameObject unitChoicePanel;
    public static int playerTurn;
    public static int numPlayers;
    public short turnNumber;
    private bool[] playersNotLost;
    public static bool isGameComplete = false;
    /*public byte[] playerProgeny;*/
    public static Dictionary<byte, byte> playerProgeny = new Dictionary<byte, byte>();
    public TMP_Text playerTurnText;
    public TMP_Text playerResourceText;
    private int[] playerResources;
    private int baseResourcePerTurn;
    private int structureResourcePerTurn;
    public Transform unitContainer;
    public Transform structureContainer;
    public GameValuesSO gameValues;
    public BaseUnit infantryUnitPrefab;
    public Button attackButton;
    public Button captureButton;
    public Button undoMovementButton;
    public Button endTurnButton;
    public TMP_Text bottomButtonText;

    public static bool isAnimating;
    public GameObject announcementCard;
    public TMP_Text announcementCardText;
    public GameObject promptCard;
    public TMP_Text promptCardMainText;
    public TMP_Text promptCardQuestionText;
    public TMP_Text promptCardButtonLeftText;
    public TMP_Text promptCardButtonRightText;
    public Button concedeMenuButton;
    public Button backToMenuButton;
    public GameObject endTurnConfirmCard;
    public Button endTurnConfirmCardBackButton;
    public TMP_Text endTurnConfirmCardText;
    public static float animationDuration = 0.6f;

    private RectTransform announcementCardRT;
    private Vector2 offScreenLeft;
    private Vector2 offScreenRight;
    private Vector2 centerPosition;

    public int gridX;
    public int gridY;

    public BaseStructure commandStructurePrefab;
    public BaseStructure productionAirportStructurePrefab;
    public BaseStructure productionFactoryStructurePrefab;
    public BaseStructure resourceStructurePrefab;
    private string gameStateFilePath = "Assets/InitializationData/Maps/Map3/Map3GameState.dat";

    static int player1ProgenySelected;
    static int player2ProgenySelected;
    public static Color32[] playerColors;

    public static bool CPU_isOn = true;
    public static bool[] CPU_PlayersList;
    //public static List<(BaseUnit, int)>[] CPU_unitMatchupWeights;
    public int virixCheapestUnit;
    public int airportCheapestUnit;

    //public static List<BaseUnit>[] playerUnits = new List<BaseUnit>[GameMaster.numPlayers + 1];
    public static List<(BaseUnit, int)>[] unitCosts;



    public int loopSafetyLimit = 10000;
    public int recusionSafetyLimit = 100;
    public static int recursionSafetyCounter = 0;
    public static int loopSafetyCounter = 0;

    /*    public static GameMaster Instance
        {
            get
            {
                if (_instance == null)
                {
                    _instance = FindObjectOfType<GameMaster>();
                    if (_instance == null)
                    {
                        // Optionally, create the instance if it's not found (this depends on your use case)
                        _instance = new GameObject("GameMaster").AddComponent<GameMaster>();
                    }
                }
                return _instance;
            }
        }*/

    private void Awake()
    {
        //Debug.Log("Initializing game");
        match_id = Guid.Parse("aaaaaaaa-8761-4e77-a086-a7365ae9e0b4");
        turnNumber = 1;
        if(MatchSettings.isInit==false)
        {
            //Debug.LogWarning("MatchSettings.numPlayers is null, defaulting to 2");
            MatchSettings.SetNumPlayers(2);
            numPlayers = 2; //will set dynamically later
        }else
            numPlayers = 2;

        if (MatchSettings.playerProgenys[0]>=0 && MatchSettings.playerProgenys[1] >= 0)
        {   
            playerProgeny.Add(1, (byte)MatchSettings.playerProgenys[0]);
            playerProgeny.Add(2, (byte)MatchSettings.playerProgenys[1]);
        }
        else {
            Debug.LogWarning("Progeny set to -1 selected, defaulting to hard values");
            playerProgeny.Add(1, 0);
            playerProgeny.Add(2, 0);
        }

        
        playerColors = new Color32[numPlayers + 1];
        playerColors[0] = new Color32(255, 255, 255, 255);
        playerColors[1] = new Color32(63, 44, 255, 255);
        playerColors[2] = new Color32(230, 19, 53, 255);
        //Debug.Log($"player 1 is progeny {getPlayerProgeny(0)}, player 2 is progeny {getPlayerProgeny(1)}");

        unitCosts = new List<(BaseUnit, int)>[3];
        for(int i = 0; i<3; i++)
        {
            unitCosts[i] = new List<(BaseUnit, int)>();
        }
/*        CPU_unitMatchupWeights = new List<(BaseUnit, int)>[3];
        for (int i = 0; i < 3; i++)
        {
            CPU_unitMatchupWeights[i] = new List<(BaseUnit, int)>();
        }*/
        /*        foreach(List<(BaseUnit, int)> pair in unitCosts)
                {
                    pair = new List<(BaseUnit, int)>();
                }*/
        //initializes all unit values, modifies their prefab and sprites.
        //initializes all Tilebases for tilemap
        //only does anything if it hasn't already been initialized.
        gameValues.initialize();

        //initializes the TilemapManager
        (gridX, gridY) = tilemapManager.initialize();

        //initializes the masterGrid arrays etc with the map size
        masterGrid.startup(gridX, gridY, tilemapManager.getTilemapByteArray(), gameValues.getAttributesTilesDictionary(), gameValues.getCombatMultiplierDictionary());

        hideChoicePanel();
        announcementCard.SetActive(false);
        playerTurn = 1; //player 0 is neutral

        playersNotLost = new bool[numPlayers+1];
        //playerProgeny = new byte[numPlayers + 1];
        


        for (int i = 0; i <= numPlayers; i++)
        {
            playersNotLost[i] = true;
            //playerProgeny[i] = 0;
        }
        playersNotLost[0] = false;
        setPlayerTurnText(playerTurn);
        baseResourcePerTurn = 200;
        structureResourcePerTurn = 100;
        playerResources = new int[numPlayers + 1];
        playerResources[0] = 0;
        for (int i = 1; i <= numPlayers; i++)
            setPlayerResources(i);

        SetCheapestUnits();
        //startupInstantiateUnits();
        //productionPanel.Start();

        //unitCosts = new List<(BaseUnit, int)>[numPlayers];
        if (CPU_isOn)
        {
            CPU_PlayersList[1] = false;
            CPU_PlayersList[2] = true;
        }



    }

    void Start()
    {
        //have to wait until start to init the production panel because it needs to wait for GameValuesSO.
        productionPanel.init();

        //animation
        isAnimating = true;
        announcementCard.SetActive(true);
        announcementCardRT = announcementCard.GetComponent<RectTransform>();

        // Define positions based on screen width
        float screenWidth = Screen.width;
        centerPosition = announcementCardRT.anchoredPosition;
        offScreenLeft = new Vector2(-screenWidth, centerPosition.y);
        offScreenRight = new Vector2(screenWidth, centerPosition.y);

        // Start hidden off-screen
        
        announcementCardRT.anchoredPosition = offScreenRight;
        announcementCardRT.position = offScreenRight;

        //WaitForSeconds(0.5);
        if(isAnimating)
            AnimateStartTurnCard(1);
        cameraManager.SetPosition(MasterGrid.commandStructures[1].pos);

        startupInstantiateUnits();

        if (CPU_isOn)
        {
            StartCoroutine(WaitForCPUFirstTurn());
        }
    }

    private IEnumerator CallConvertGameStateToList()
    {
        // Wait until the next frame to ensure all Start() methods are called
        yield return null;
        // Now it is safe to call ConvertGameStateToList
        //SaveGameStateListToFile(ConvertGameStateToList());
        //ConvertListToGameState(gameState);
    }

    private IEnumerator WaitForCPUFirstTurn()
    {
        yield return null;
        CPUManager.naiveV1Start();
        if (CPU_isOn && CPU_PlayersList[playerTurn] && !isGameComplete)
        {
            Debug.Log($"Running player 1 CPU actions");
            RunCPUForPlayer(playerTurn);
        }
    }

    public void startupInstantiateUnits()
    {

        for (int player = 1; player <= numPlayers; player++)
        {
            byte progeny = getPlayerProgeny((byte)player);
            List <BaseStructure> initProdStructures = masterGrid.GetProductionStructures(player);
            if (player != 1)
                initProdStructures.Add(MasterGrid.commandStructures[player]);
            foreach (BaseStructure prod in initProdStructures)
            {
                if (prod.structureType != 1 && prod.structureType != 5)
                    continue;
                if (progeny == 0)
                {
                    //BaseUnit infantryUnitPrefab = Resources.Load<BaseUnit>("UnitPrefabs/progeny1/InfantryPrefab");
                    BaseUnit infantryUnitPrefab = PrefabManager.getBaseUnitFromName("Infantry", 0);
                    infantryUnitPrefab.playerControl = player;
                    BaseUnit unit = GetInstantiateUnit(infantryUnitPrefab, prod.pos, player);
                    unit.setNonExhausted(true);
                    //BaseUnit unit = Instantiate(infantryUnitPrefab, new Vector2(x, y), Quaternion.identity, unitContainer);

                }
                else if (progeny == 1)
                {
                    BaseUnit sporeUnitPrefab = PrefabManager.getBaseUnitFromName("Spore", 1);
                    sporeUnitPrefab.playerControl = player;
                    BaseUnit unit = GetInstantiateUnit(sporeUnitPrefab, prod.pos, player);
                    unit.setNonExhausted(true);
                    //BaseUnit unit = Instantiate(sporeUnitPrefab, new Vector2(x, y), Quaternion.identity, unitContainer);

                }
                else if (progeny == 2)
                {
                    BaseUnit blacksmithUnitPrefab = PrefabManager.getBaseUnitFromName("Blacksmith", 2);
                    blacksmithUnitPrefab.playerControl = player;
                    BaseUnit unit = GetInstantiateUnit(blacksmithUnitPrefab, prod.pos, player);
                    unit.setNonExhausted(true);
                    //BaseUnit unit = Instantiate(blacksmithUnitPrefab, new Vector2(x, y), Quaternion.identity, unitContainer);

                }
            }
        
        }

/*        foreach (BaseStructure prod in masterGrid.GetProductionStructures(player)){
            if(prod.structureType == 1)
            {

            }
        }*/

    }

    public int getIncomeForPlayer(int player)
    {
        return 0;
    }

    public void structureHasBeenClicked(BaseStructure structure)
    {
        //Debug.Log("Structure at pos " + structure.xPos + ", " + structure.yPos + " has been clicked.");
        //should probably try/catch if structure is null
        if (structure!=null && structure.playerControl == playerTurn && (structure.structureType != 0 && structure.structureType != 5) || (getPlayerProgeny((byte)playerTurn)==1 && playerTurn == structure.playerControl) )
        {
            choicePanel.SetActive(true);

            productionPanel.presentProdList(structure.structureType, getPlayerProgeny((byte)playerTurn), playerResources[playerTurn]);
            productionPanel.gameObject.SetActive(true);
            bottomButtonText.text = "Exit";
            selectedStructure = structure;
        }
    }

    public void captureButtonPressed()
    {
        if (selectedStructure != null)
        {
            StartCoroutine(masterGrid.captureStructure(selectedStructure));
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
/*        int price = unit.price;
        print(price);*/
        if (playerResources[playerTurn] >= unit.price)
        {
            ProduceUnit(unit, playerTurn, false);
            hideChoicePanel();
        }
        else
            print("You must mine more minerals!");
    }

    public BaseUnit ProduceResourceUnit(BaseStructure prod, int player)
    {
        if (masterGrid.whatUnitIsInThisLocation(prod.pos) != null)
            return null;

        if (playerResources[player] >= 100) //assumes base unit cost 100
        {
            selectedStructure = prod;
            int progeny = getPlayerProgeny((byte)player);
            if (progeny == 0)
            {
                BaseUnit infantry = PrefabManager.getBaseUnitFromName("Infantry", 0);
                ProduceUnit(infantry, player, false);
                return infantry;
            }
            if (progeny == 1)
            {
                BaseUnit spore = PrefabManager.getBaseUnitFromName("Spore", 1);
                ProduceUnit(spore, player, true); //true for virix in current implementation
                return spore;
            }
            if (progeny == 2)
            {
                BaseUnit blacksmith = PrefabManager.getBaseUnitFromName("Blacksmith", 2);
                ProduceUnit(blacksmith, player, false);
                return blacksmith;
            }
        }
        return null;
    }

    public void ProduceUnit(BaseUnit unit, int playerControl, bool isNonExhausted)
    {
        if(playerResources[playerTurn] < unit.price)
        {
            Debug.LogWarning($"Trying to produce a {unit.unitName} at {selectedStructure.pos} but not enough funds");
            return;
        }

        if (masterGrid.whatUnitIsInThisLocation(selectedStructure.pos) != null)
        {
            Debug.LogWarning($"Trying to produce a unit at {selectedStructure.pos} but it is covered by a unit");
            selectedStructure = null;
            return;
        }

        playerResources[playerTurn] -= unit.price;
        //unit.playerControl = playerTurn;
        

        //need a way to set to exhausted from here so the units don't have to start exhausted on the 1st turn.
        BaseUnit tempUnit = GetInstantiateUnit(unit, selectedStructure.pos, null);
        //BaseUnit tempUnit = Instantiate(unit, new Vector2(selectedStructure.xPos, selectedStructure.yPos), Quaternion.identity, unitContainer);
        tempUnit.setNonExhausted(isNonExhausted);

        //GameObject tempInstance = Object.Instantiate(unit, new Vector2(selectedStructure.xPos, selectedStructure.yPos), Quaternion.identity, unitContainer);
        //BaseUnit tempUnit = tempInstance.GetComponent<BaseUnit>();

        //3 is produce a unit
        //not sure why the unit x and y coordiantes aren't available here but this works.
        masterGrid.addGameAction(3, (byte)tempUnit.gamePieceId, (byte)selectedStructure.pos.x, (byte)selectedStructure.pos.y, (byte)selectedStructure.pos.x, (byte)selectedStructure.pos.y);
        playerResourceText.text = "" + playerResources[playerTurn];
        selectedStructure.turnOffCollider();
    }

    public void exitButtonPressed()
    {
        if (masterGrid.selectedUnit != null && masterGrid.selectedUnit.movementNonExhausted == false)
        {
            masterGrid.exhaustSelectedUnit(masterGrid.selectedUnit, true);
        }
        hideChoicePanel();
        if (masterGrid.selectedUnit != null)
            masterGrid.clearSelectedUnit();
    }

    public void endTurnButtonPressed()
    {
        hideChoicePanel();
        endTurnButton.interactable = false;
        if(!isGameComplete)
            CheckNoAvailableActions(playerTurn);
    }

    public void initiateEndTurn()
    {
        var (gameActions, preTurnHash, postTurnHash) = masterGrid.endTurn(playerTurn);
        SubmitTurnToServer(gameActions, preTurnHash, postTurnHash);
        masterGrid.refreshUnits(playerTurn);

        if (getPlayerProgeny((byte)playerTurn) == 1)
        {
            foreach (BaseStructure structure in masterGrid.GetStructures(playerTurn))
            {
                BaseUnit coveringUnit = masterGrid.whatUnitIsInThisLocation(structure.pos);
                if (coveringUnit != null && coveringUnit.unitName == "seed")
                {
                    masterGrid.deleteUnit(coveringUnit);
                }
            }
        }
        StartTurn();
    }

    public void CheckNoAvailableActions(int player)
    {
        int playerProgeny = getPlayerProgeny((byte)player);
        BaseUnit unitFocus = null;
        int unitCount = 0;
        foreach (BaseUnit unit in MasterGrid.playerUnits[player])
        {
            if (unit.movementNonExhausted)
            {
                unitCount++;
                if (unitFocus == null)
                {
                    unitFocus = unit;
                }
            }
        }
        BaseStructure prodFocus = null;

        int prodCount = 0;
        if(playerProgeny != 1)
            foreach(BaseStructure prod in masterGrid.GetProductionStructures(player))
            {
                if (prod.IsCoveredByUnit())
                    continue;
                if (playerResources[player] < 100)
                    continue;
                if (prod.gamePieceId == 202 && playerProgeny == 0 && playerResources[player] < airportCheapestUnit)
                    continue;

                //if it's not covered, and player has more than 100 OR is an airport can can't afford cheapest airport unit.

                prodCount++;
                if (prodFocus == null)
                {
                    prodFocus = prod;
                } 
            }
        if (prodCount + unitCount > 0)
        {
            endTurnConfirmCard.SetActive(true);
            String message = "";
            if (unitCount > 0)
            {
                if(unitCount == 1)
                    message += $"You have {unitCount} unit which you can still move!\n";
                else
                    message += $"You have {unitCount} units which you can still move!\n";
            }
            if (prodCount > 0 && playerResources[player] >= 100 && getPlayerProgeny((byte)player) != 1)
            {
                if(prodCount == 1)
                    message += $"You have {prodCount} production location which hasn't produced!\n";
                else
                    message += $"You have {prodCount} production locations which haven't produced!\n";
            }
            if (getPlayerProgeny((byte)player) == 1 && playerResources[player] >= virixCheapestUnit)
            {
                message += $"You have {playerResources[player]} unspent bismuth!\n";
            }
            //message += "Are you sure you want to end your turn?";
            endTurnConfirmCardText.text = message;

            if (unitFocus != null)
                endTurnConfirmCardBackButton.onClick.AddListener(delegate { cameraManager.SetPosition(unitFocus.pos); });
            else if (prodFocus != null)
                endTurnConfirmCardBackButton.onClick.AddListener(delegate { cameraManager.SetPosition(prodFocus.pos); });
            else
                Debug.LogWarning("Confirmation card triggered but neither unit nor prod found.");
        }
        else
            initiateEndTurn();
        
    }

    

    public void StartTurn()
    {
        loopSafetyCounter = 0;
        recursionSafetyCounter = 0;
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
        turnNumber++;

        if (isAnimating)
            AnimateStartTurnCard(playerTurn);
        cameraManager.SnapCameraToUnitCluster(playerTurn);


        setPlayerTurnText(playerTurn);
        setPlayerResources(playerTurn);

        //Debug.Log("Player " + playerTurn + " turn, progeny:" + getPlayerProgeny((byte)playerTurn));

        //special virix handling
        if (getPlayerProgeny((byte)playerTurn) == 1)
        {
            foreach (BaseStructure structure in masterGrid.GetProductionStructures(playerTurn))
            {
                //create a virix spore on all production structures except on the first turn.
                if (turnNumber > numPlayers)
                {
                    ProduceResourceUnit(structure, playerTurn);
                }
            }
        }
        masterGrid.refreshUnits(playerTurn);

        if (CPU_isOn && CPU_PlayersList[playerTurn] && !isGameComplete)
        {
            RunCPUForPlayer(playerTurn);
        }
    }

    public void RunCPUForPlayer(int playerTurn)
    {
        endTurnButton.interactable = false;
        //CPUManager.GetUnitAssignment(playerTurn);
        StartCoroutine(RunCPUForPlayerDelay(playerTurn));
        //CPUManager.ProduceUnits(playerTurn, playerProgeny[(byte)playerTurn]);
    }

    public IEnumerator RunCPUForPlayerDelay(int playerTurn)
    {
        if (isAnimating)
            yield return new WaitForSeconds(1.0f);
        yield return StartCoroutine(CPUManager.CommandUnits(playerTurn));
        yield return StartCoroutine(CPUManager.ProduceUnits(playerTurn, playerProgeny[(byte)playerTurn]));
        if (isAnimating)
            yield return new WaitForSeconds(0.5f);
        yield return CPUManager.LogicCheckUnits(playerTurn);
        endTurnButton.interactable = true;
        endTurnButtonPressed();
    }


    public async void SubmitTurnToServer(List<GameAction> gameActions, long preTurnHash, long postTurnHash)
    {
        bool success = await supabaseManager.SendSubmitTurn(gameActions, preTurnHash, postTurnHash);
    }

    public void setPlayerTurnText(int playerTurn) //this should probably be combined with BaseUnit.setColor
    {
        playerTurnText.text = "Player Turn: " + (playerTurn);

/*        float hue = ((float)playerTurn / 3.0f) * 360f;
        float saturation = 1.0f;
        float value = 1.0f;
        Color color = Color.HSVToRGB(hue / 360f, saturation, value);*/
        playerTurnText.color = playerColors[playerTurn];
    }

    public void showUnitChoicePanel(bool attackableUnitsBool, bool capturableStructureBool, bool hasMoved)
    {
        if (CPU_PlayersList[playerTurn]) //don't display player choices if it's a cpu player
            return;

        if (attackableUnitsBool || capturableStructureBool)
        {
            choicePanel.SetActive(true);
            unitChoicePanel.SetActive(true);

            // Set interactable and color for attack button
            attackButton.interactable = attackableUnitsBool;
            var attackColor = attackableUnitsBool ? new Color32(255, 183, 0, 255) : new Color32(100, 100, 100, 255);
            attackButton.GetComponentInChildren<TMP_Text>().color = attackColor;
            attackButton.GetComponent<Image>().color = attackColor;

            // Set interactable and color for capture button
            captureButton.interactable = capturableStructureBool;
            var captureColor = capturableStructureBool ? new Color32(255, 183, 0, 255) : new Color32(100, 100, 100, 255);
            captureButton.GetComponentInChildren<TMP_Text>().color = captureColor;
            captureButton.GetComponent<Image>().color = captureColor;

            // Set interactable and color for undo movement button
            undoMovementButton.interactable = hasMoved;
            var undoColor = hasMoved ? new Color32(255, 183, 0, 255) : new Color32(100, 100, 100, 255);
            undoMovementButton.GetComponentInChildren<TMP_Text>().color = undoColor;
            undoMovementButton.GetComponent<Image>().color = undoColor;

            // Set bottom button text
            if (hasMoved)
                bottomButtonText.text = "Do Nothing";
            else
                bottomButtonText.text = "Exit";
        }
    }

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

/*    public static int GameMaster.playerTurn
    {
        return playerTurn;
    }*/

    private void setPlayerResources(int playerTurn)
    {
        int num = masterGrid.numCapturedResourceLocations(playerTurn);
        playerResources[playerTurn] = playerResources[playerTurn] + baseResourcePerTurn + structureResourcePerTurn * num;
        playerResourceText.text = ""+playerResources[playerTurn];
    }

/*    public void playerLoses (int player)
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
    }*/

    private void playerWins (int player)
    {
        if (player == -1)
            Debug.LogError($"Player {player} has won the game, this is a failcase");
        else
        {
            isGameComplete = true;
            concedeMenuButton.interactable = false;
            backToMenuButton.interactable = true;
            endTurnButton.interactable = false;
            displayWinnerCard(player);
        }
    }

    public void ReturnToMainMenu()
    {
        SceneManager.LoadSceneAsync("MenuScene");
    }

    private void displayWinnerCard(int player)
    {
        promptCard.SetActive(true);
        endTurnButton.interactable = false;
        bool humanPlayer = false;
        foreach(bool p in CPU_PlayersList)
            humanPlayer = humanPlayer || !p;
        if (humanPlayer)
        {
            string openText = "Player ";
            if (CPU_PlayersList[player])
                openText = "CPU P";
            promptCardMainText.text = openText + $"{player} wins!";
            promptCardMainText.color = playerColors[player];
            promptCardQuestionText.text = "Return to main menu?";
        }else
        {
            promptCardMainText.text = $"Game Ended";
            promptCardQuestionText.text = "Return to main menu?";
        }


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
                BaseUnit unit = masterGrid.whatUnitIsInThisLocation(new Vector2Int(x, y));
                if (unit != null)
                {
                    GamePieceInfo info = new GamePieceInfo
                    (
                        (byte)x,
                        (byte)y,
                        (byte)unit.gamePieceId,
                        (byte)unit.playerControl,
                        (byte)((double)unit.healthCurrent / (double)unit.healthMax * 100)
                    );
                    Debug.Log($"Added baseUnit to GameStateList x: {info.x}, y: {info.y}, bytenum: {info.typeNum}, health: {info.healthVal}");
                    gameStateList.Add(info);
                }

                BaseStructure structure = masterGrid.whatStructureIsInThisLocation(new Vector2Int(x, y));
                if (structure != null)
                {
                    GamePieceInfo info = new GamePieceInfo(
                        (byte)x,
                        (byte)y,
                        (byte)(200 + structure.structureType),
                        (byte)structure.playerControl,
                        (byte)structure.captureHealth
                    );
                    gameStateList.Add(info);
                }
            }
        }

        return gameStateList;

        //to print the game state to the console
        /*List<GamePieceInfo> currentGameState = _gameMaster.ConvertGameStateToList();
        string itemString = "";
        foreach (var item in currentGameState)
        {
            itemString += $"{item.x},{item.y},{item.typeNum},{item.playerID},{item.healthVal}\n";

        }

        Debug.Log($"debugging: Current game state item: {itemString}");*/
    }

/*    private void SaveGameStateListToFile(List<GamePieceInfo> gameStateList)
    {
        byte[] bytes = MessagePackSerializer.Serialize(gameStateList);
        File.WriteAllBytes(gameStateFilePath, bytes);
        Debug.Log("Game state saved to " + gameStateFilePath);
    }*/

    //need error checking here.
    //Cannot have two units on the same hex.
    //Cannot hvae two structures on the same hex.
    //Structure can only be placed on grass
    //units must be placed on a legal square
    //units and structures must not be outside of boundaries
    public void ConvertListToGameState(List<GamePieceInfo> gameStateList)
    {
        if (gameStateList != null && gameStateList.Count != 0)
        {
            int i = 0;
            foreach (var pieceInfo in gameStateList)
            {
                i++;
                //Debug.Log($"gameState item #{i}, x: {pieceInfo.x}, y: {pieceInfo.y}, bytenum: {pieceInfo.typeNum}, health: {pieceInfo.healthVal}");
                if (pieceInfo.typeNum < 200)
                {
                    int x = pieceInfo.x;
                    int y = pieceInfo.y;
                    AttributesBaseUnit data = gameValues.GetUnitDataByByte(pieceInfo.typeNum);

                    BaseUnit unit = PrefabManager.getBaseUnitFromPath(data.prefabPath);
                    if (unit == null)
                    {
                        Debug.LogError($"No unit prefab found for byte value {pieceInfo.typeNum}");
                        continue;
                    }
                    unit.playerControl = pieceInfo.playerID;
                    unit.setHealth((int)((double)(pieceInfo.healthVal * unit.healthMax) / 100));
                    unit.pos = new Vector2Int(x, y);
                    InstantiateUnit(unit, unit.pos);
                    //Instantiate(unit, new Vector2(x, y), Quaternion.identity, unitContainer);
                    masterGrid.setUnitInGrid(unit.pos, unit);
                }
                else if (pieceInfo.typeNum >= 200 && pieceInfo.typeNum < 255)
                {
                    int x = pieceInfo.x;
                    int y = pieceInfo.y;
                    BaseStructure structure = null;
                    if (pieceInfo.typeNum == 200)
                        structure = resourceStructurePrefab.GetComponent<BaseStructure>();
                    else if (pieceInfo.typeNum == 201)
                        structure = productionFactoryStructurePrefab.GetComponent<BaseStructure>();
                    else if (pieceInfo.typeNum == 202)
                        structure = productionAirportStructurePrefab.GetComponent<BaseStructure>();
                    else if (pieceInfo.typeNum == 205)
                        structure = commandStructurePrefab.GetComponent<BaseStructure>();
                    else
                        Debug.LogError($"No structure for byte value {pieceInfo.typeNum} found.");
                    structure.playerControl = pieceInfo.playerID;
                    structure.captureHealth = pieceInfo.healthVal;
                    structure.pos = new Vector2Int(x, y);
                    Instantiate(structure, new Vector2(x, y), Quaternion.identity, structureContainer);
                    masterGrid.setStructureInGrid(structure.pos, structure);
                }
            }

            masterGrid.generateInitHash();
        }
        else
            Debug.LogError("gameStateList is empty!");
    }

    public void InstantiateUnit(BaseUnit unit, Vector2Int pos)
    {
        Instantiate(unit, (Vector2)pos, Quaternion.identity, unitContainer);
        //playerUnits[unit.playerControl].Add(unit);
    }
    
    public BaseUnit GetInstantiateUnit(BaseUnit unit, Vector2Int pos, int? player)
    {
        if(player==null)
            unit.playerControl = playerTurn;
        else
            unit.playerControl = (int)player;
        unit.spriteContainer.transform.localScale = new Vector2(0.01f, 0.01f);
        unit = Instantiate(unit, (Vector2)pos, Quaternion.identity, unitContainer);
        if(isAnimating)
            StartCoroutine(AnimateCreateUnit(unit));
        return unit;
    }

    public IEnumerator AnimateCreateUnit(BaseUnit unit)
    {
        float duration = 0.1f;
        float elapsed = 0f;
        Transform t = unit.spriteContainer.transform;
        Vector3 startScale = new Vector3(0.01f, 0.01f, 1f);
        Vector3 endScale = Vector3.one;

        t.localScale = startScale;

        while (elapsed < duration)
        {
            elapsed += Time.deltaTime;
            float tLerp = Mathf.SmoothStep(0f, 1f, elapsed / duration);
            t.localScale = Vector3.Lerp(startScale, endScale, tLerp);
            yield return null;
        }

        t.localScale = endScale;
    }



    /*    public void ConvertFileToGameState()
        {
            if (File.Exists(gameStateFilePath))
            {
                byte[] bytes = File.ReadAllBytes(gameStateFilePath);
                List<GamePieceInfo> gameStateList = MessagePackSerializer.Deserialize<List<GamePieceInfo>>(bytes);
                ConvertListToGameState(gameStateList);
            }
            else
            {
                Debug.LogError("Game state file not found at " + gameStateFilePath);
            }
        }*/

    public void setMatchId(Guid matchId)
    {
        Debug.Log("Setting match id to: " + matchId);
        match_id = matchId;
        masterGrid.setMatchId(matchId);
    }
    public byte getPlayerProgeny(byte b)
    {
        playerProgeny.TryGetValue(b, out byte p);
        return p;
    }

    public void AnimateStartTurnCard(int player)
    {
        
        Vector2 endPos = (player % 2 == 0) ? offScreenRight : offScreenLeft;
        Vector2 startPos = (player % 2 == 0) ? offScreenLeft : offScreenRight;

        string openText = "Player ";
        if (CPU_PlayersList[player])
            openText = "CPU P";

        announcementCardText.text = openText + $"{player}'s turn!";
        announcementCardRT.anchoredPosition = startPos;

        StartCoroutine(SwoopInAndOutTurnCard(startPos, centerPosition, endPos));
    }

    private IEnumerator SwoopInAndOutTurnCard(Vector2 startPos, Vector2 centerPos, Vector2 endPos)
    {
        endTurnButton.GetComponent<Button>().interactable = false; 
        yield return SwoopTurnCard(startPos, centerPos, animationDuration*1.5f, easeOutCubic);
        yield return new WaitForSeconds(animationDuration);
        yield return SwoopTurnCard(centerPos, endPos, animationDuration, easeInCubic);
        //I don't like this being here but I need to wait.
        //endTurnButton.GetComponent<Button>().interactable = !CPU_PlayersList[playerTurn];
        endTurnButton.GetComponent<Button>().interactable = true;
    }

    private IEnumerator SwoopTurnCard(Vector2 startPos, Vector2 endPos, float duration, System.Func<float, float> easingFunction)
    {
        float time = 0;
        while (time < duration)
        {
            float t = easingFunction(time / duration); // Apply easing
            announcementCardRT.anchoredPosition = Vector2.Lerp(startPos, endPos, t);
            time += Time.deltaTime;
            yield return null;
        }
        announcementCardRT.anchoredPosition = endPos;
    }

    // Easing functions for smoother animation
    private float easeOutCubic(float t) => 1 - Mathf.Pow(1 - t, 3);
    private float easeInCubic(float t) => Mathf.Pow(t, 3);

    public void ConcedeCurrentPlayer()
    {
        ConcedePlayer(playerTurn);
    }

    public void ConcedePlayer(int p)
    {
        playersNotLost[p] = false;
        CheckIfWinner();
        if (p == playerTurn)
        {
            endTurnButtonPressed();
        }
    }

    private void CheckIfWinner()
    {
        int? winner = null;
        int playerNotLostCount = 0;

        for (int i = 1; i <= GameMaster.numPlayers; i++)
        {
            //Debug.LogError($"PlayersNotLost {i} = {playersNotLost[i]}");
            if (playersNotLost[i] == true)
            {
                playerNotLostCount++;
                winner = i;
            }
        }

        if (winner!=null && playerNotLostCount == GameMaster.numPlayers - 1)
        {
            playerWins((int)winner);
        }else if(playerNotLostCount > 1)
        {
            Debug.Log("More than 1 player remains");
        }
        else if (playerNotLostCount <= 0)
        {
            Debug.LogError("No players have not lost");
        }

    }

    public int GetPlayerResources(int p)
    {
        return playerResources[p];
    }

    public void SetCheapestUnits() //virix implementation
    {
        List<(BaseUnit, int)> virixCosts = unitCosts[1];
        int virixLowest = int.MaxValue;
        foreach((BaseUnit, int) pair in virixCosts)
        {
            if(pair.Item2 < virixLowest && pair.Item1.unitName != "Spore")
            {
                virixLowest = pair.Item2;
            }
        }
        virixCheapestUnit = virixLowest;
        if (virixCheapestUnit == int.MaxValue)
        {
            Debug.LogWarning("No cheapest virix unit found");
        }

        int airportLowest = int.MaxValue;
        List<(BaseUnit, int)> ertrianCosts = unitCosts[0];
        foreach ((BaseUnit, int) pair in ertrianCosts)
        {
            if (pair.Item2 < airportLowest && pair.Item1.unitTerrainType == UnitTerrainType.Air)
            {
                airportLowest = pair.Item2;
            }
        }
        airportCheapestUnit = airportLowest;
        if (airportCheapestUnit == int.MaxValue)
        {
            Debug.LogWarning("No cheapest airport unit found");
        }
    }
}
