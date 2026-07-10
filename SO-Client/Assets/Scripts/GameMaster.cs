using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.IO;
using UnityEngine.SceneManagement;
using JetBrains.Annotations;
using UnityEngine.InputSystem;
//using System.Diagnostics;
//using MessagePack;

public class GameMaster : MonoBehaviour
{
    //private static GameMaster _instance;

    [Header("Managers")]
    public MasterGrid masterGrid;
    public TilemapManager tilemapManager;
    //private PrefabManager prefabManager = new PrefabManager();
    public SupabaseManager supabaseManager;
    public CPUManager CPUManager;
    public CameraManager cameraManager;
    public SequenceManager sequenceManager;
    public Canvas canvas;
    

    [Header("Game Values")]
    public Guid match_id;
    public GameValuesSO gameValues;
    public int gridX;
    public int gridY;
    public BaseStructure selectedStructure;
    public static int playerTurn;
    public static int numPlayers;
    public short turnNumber;
    private bool[] playersNotLost;
    public static bool isGameComplete = false;
    /// <summary>Tutorial-only: when true, command capture does not eliminate opponents or show the win screen.</summary>
    bool tutorialMatchVictorySuppressed;
    public static Dictionary<byte, byte> playerProgeny;
    private int[] playerResources;
    private int baseResourcePerTurn = 200;
    private int structureResourcePerTurn = 100;
    public byte inspectorInputProgenyPlayer1;
    public byte inspectorInputProgenyPlayer2;
    //private string gameStateFilePath = "Assets/InitializationData/Maps/Map3/Map3GameState.dat";


    [Header("Game Prefab References")]
    public Structure_Command commandStructurePrefab;
    public BaseStructure productionAirportStructurePrefab;
    public BaseStructure productionFactoryStructurePrefab;
    public BaseStructure resourceStructurePrefab;


    [Header("Transform Containers")]
    public Transform unitContainer;
    public Transform structureContainer;
    public Transform toggleGamePiecesContainer;

    [Header("Game State Export")]
    [Tooltip("When true, loads a .gsdat on startup. Turn off while laying out a new map in the scene.")]
    public bool loadGameStateOnStartup = true;
    [Tooltip("When true, writes a .gsdat at the end of Start(). Replaces uncommenting SaveGameStateToFile in code.")]
    public bool saveGameStateOnPlayStart;
    public string exportMapType = "multi";
    public int exportMapNum = 8;
    public int exportMapVersion = 1;
    bool hasSequence = true;
    bool matchSettingsWereUnsetOnAwake;

    [Header("UI Items")]
    public GameObject choicePanel;
    public MenuProductionPanel productionPanel;
    public GameObject unitChoicePanel;
    public TMP_Text playerTurnText;
    public TMP_Text playerResourceText;
    public Button attackButton;
    public Button captureButton;
    public Button undoMovementButton;
    public Button endTurnButton;
    public TMP_Text bottomButtonText;
    public GameObject endTurnConfirmCard;
    public Button endTurnConfirmCardBackButton;
    public TMP_Text endTurnConfirmCardText;

    [Header("Menus")]
    public GameObject announcementCard;
    public TMP_Text announcementCardText;
    public GameObject promptCard;
    public TMP_Text promptCardMainText;
    public TMP_Text promptCardQuestionText;
    public TMP_Text promptCardButtonLeftText;
    public TMP_Text promptCardButtonRightText;
    public TMP_Text concedeCardText;
    public Button concedeMenuButton;
    public Button backToMenuButton;
    public GameObject loadingScreen;
    public Slider loadingBar;
    public TMP_Text loadPromptText;
    public AsyncOperation sceneLoadingOperation = null;
    private InputAction continueAction;
    public Button openDevMenuButton;

    [Header("Animations")]
    public static bool isAnimating;
    public static float globalAnimationDuration = 0.6f;
    public static float swoopCardAnimationDuration = 2.4f;
    private Coroutine turnCardAnimationCoroutine;
    private RectTransform announcementCardRT;
    private Vector2 offScreenLeft;
    private Vector2 offScreenRight;
    private Vector2 centerPosition;
    public static Color32[] playerColors;
    public AudioSource musicAudio;

    [Header("CPU")]
    public static bool CPU_isOn = false;
    public bool CPU_isOn_manual;
    private static bool CPU_isMasterDebugging = false;
    public static bool[] CPU_PlayersList;
    public int virixCheapestUnit;
    public int airportCheapestUnit;
    public static List<(BaseUnit, int)>[] unitCosts;
    //public static List<(BaseUnit, int)>[] CPU_unitMatchupWeights;
    //public static List<BaseUnit>[] playerUnits = new List<BaseUnit>[GameMaster.numPlayers + 1];




    [Header("Loop/Recursion Safety")]
    public int loopSafetyLimit = 10000;
    public int recusionSafetyLimit = 100;
    public static int recursionSafetyCounter = 0;
    public static int loopSafetyCounter = 0;


    private void Awake()
    {
        //Debug.Log("GameMaster Awake called");
        matchSettingsWereUnsetOnAwake = !MatchSettings.isInit;
        tutorialMatchVictorySuppressed = false;
        match_id = Guid.Parse("aaaaaaaa-8761-4e77-a086-a7365ae9e0b4");
        turnNumber = 1;
        numPlayers = 2; //will set dynamically later

        if (Application.isEditor)
        {
                musicAudio.Pause();
                openDevMenuButton.gameObject.SetActive(true);
        }

        if (!MatchSettings.isInit)
        {
            Debug.LogWarning("MatchSettings.numPlayers is null, defaulting to 2");
            MatchSettings.SetNumPlayers(2);
            MatchSettings.SetPlayerColours();
            MatchSettings.isInit = true;

            
            SetPlayerColors(true);

        }
        else
        {
            numPlayers = 2;
            SetPlayerColors(false);
        }

        SyncFromMatchSettings(allowManualCpuFallback: matchSettingsWereUnsetOnAwake);
        if (unitCosts == null)
        {
            unitCosts = new List<(BaseUnit, int)>[3];
            for (int i = 0; i < 3; i++)
            {
                unitCosts[i] = new List<(BaseUnit, int)>();
            }
        }


        //initializes all unit values, modifies their prefab and sprites.
        //initializes all Tilebases for tilemap
        //only does anything if it hasn't already been initialized.
        gameValues.Initialize();

        if (loadGameStateOnStartup)
        {
            tilemapManager.Initialize(false);
            ApplyEditorSkirmishMapDefaultsIfNeeded();
            MatchSettings.GetMapLoadParameters(out string mapType, out int mapNum, out int mapVersion);
            LoadGameStateFromFile(mapType, mapNum, mapVersion);
        }
        else
        {
            (gridX, gridY) = tilemapManager.Initialize(true);
        }

        //initializes the masterGrid arrays etc with the map size
        masterGrid.Startup(gridX, gridY, tilemapManager.GetTilemapByteArray(), gameValues.GetAttributesTilesDictionary(), gameValues.GetCombatMultiplierDictionary());

        

        HideChoicePanel();
        announcementCard.SetActive(false);
        //playerTurn = 1; //player 0 is neutral

        playersNotLost = new bool[numPlayers+1];
        //playerProgeny = new byte[numPlayers + 1];


        playersNotLost[0] = false;
        for (int i = 1; i <= numPlayers; i++)
        {
            playersNotLost[i] = true;
        }
        
        SetPlayerTurnText(1);
        


        playerResources = new int[numPlayers + 1];
        playerResources[0] = 0;
        for (int i = 1; i <= numPlayers; i++)
            playerResources[i] = baseResourcePerTurn;
        playerResourceText.text = playerResources[1].ToString();
        //Required for prompt card to know if a player can still create a unit at the end of their turn or not.
        SetCheapestUnits();




        //StartupInstantiateUnits();
        //productionPanel.Start();

        //unitCosts = new List<(BaseUnit, int)>[numPlayers];

        //SaveGameStateToFile("multi", 8, 3);
        //StartCoroutine(masterGrid.DeleteAllGamePieces());
	}

    void Start()
    {
        isGameComplete = false;
        //have to wait until start to isInit the production panel because it needs to wait for GameValuesSO.
        productionPanel.Init();

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

/*        if (MasterGrid.commandStructures[1] == null || MasterGrid.commandStructures[2] == null)
        {
            foreach (BaseStructure structure in masterGrid.GetStructures(null))
            {
                if (structure.structureType == 5 && structure is Structure_Command commandStructure)
                {
                    if(commandStructure.playerControl!=0)
                        MasterGrid.commandStructures[commandStructure.playerControl] = commandStructure;
                    else
                        Debug.LogWarning("Command structure found with player control 0");
                }
            }
        }*/


        //WaitForSeconds(0.5);
        if (isAnimating && MatchSettings.gameMode != MatchSettings.MatchGameMode.Tutorial)
            AnimateStartTurnCard(1);
        if (!hasSequence && MasterGrid.commandStructures[1] != null)
        {
            cameraManager.SetPosition(MasterGrid.commandStructures[1].pos);
        }

        StartupInstantiateUnits();

        if (CPU_isOn)
        {
            StartCoroutine(WaitForCPUFirstTurn());
        }

        if (sequenceManager != null && MatchSettings.gameMode == MatchSettings.MatchGameMode.Tutorial)
        {
            StartCoroutine(FinishTutorialStart());
            return;
        }

        if (sequenceManager != null)
        {
            sequenceManager.BeginFromMatchSettings();
        }

        playerTurn = 0;
        StartTurn();

        if (saveGameStateOnPlayStart)
        {
            SaveGameStateToFile(exportMapType, exportMapNum, exportMapVersion);
        }
    }

    IEnumerator FinishTutorialStart()
    {
        string path = MatchSettings.GetIntroSequenceResourcePath();
        if (!string.IsNullOrWhiteSpace(path) && sequenceManager != null)
        {
            yield return sequenceManager.EnsureSequenceMapReady(path);
        }

        if (sequenceManager != null)
        {
            sequenceManager.BeginFromMatchSettings();
        }

        playerTurn = 0;
        StartTurn();

        if (saveGameStateOnPlayStart)
        {
            SaveGameStateToFile(exportMapType, exportMapNum, exportMapVersion);
        }
    }

    private IEnumerator CallConvertGameStateToList()
    {
        // Wait until the next frame to ensure all Start() methods are called
        yield return null;
        // Now it is safe to call ConvertGamePiecesToList
        //SaveGameStateListToFile(ConvertGamePiecesToList());
        //ConvertListToGamePieces(gameState);
    }

    private IEnumerator WaitForCPUFirstTurn()
    {
        yield return null;
        CPUManager.NaiveV1Start();
        if (CPU_isOn && CPU_PlayersList[playerTurn] && !isGameComplete)
        {
            Debug.Log($"Running player 1 CPU actions");
            RunCPUForPlayer(playerTurn);
        }
    }

    public void StartupInstantiateUnits()
    {
        if (MatchSettings.gameMode == MatchSettings.MatchGameMode.Tutorial)
        {
            return;
        }

        for (int player = 1; player <= numPlayers; player++)
        {
            byte progeny = GetPlayerProgeny((byte)player);
            List <BaseStructure> initProdStructures = masterGrid.GetProductionStructures(player);
            if (player != 1 && !hasSequence)
                initProdStructures.Add(MasterGrid.commandStructures[player]);
            foreach (BaseStructure prod in initProdStructures)
            {
                if (prod.structureType != 1 && prod.structureType != 5)
                    continue;

                BaseUnit unit = null;
				if (progeny == 0)
                {
                    BaseUnit infantryUnitPrefab = PrefabManager.GetBaseUnitFromName("Infantry", 0);
                    unit = GetInstantiateUnit(infantryUnitPrefab, prod.pos, player);
                }
                else if (progeny == 1)
                {
                    BaseUnit sporeUnitPrefab = PrefabManager.GetBaseUnitFromName("Spore", 1);
                    unit = GetInstantiateUnit(sporeUnitPrefab, prod.pos, player);
                }
                else if (progeny == 2)
                {
                    BaseUnit blacksmithUnitPrefab = PrefabManager.GetBaseUnitFromName("Blacksmith", 2);
                    unit = GetInstantiateUnit(blacksmithUnitPrefab, prod.pos, player);
                }
                unit.SetNonExhausted(true);
            }
        
        }

/*        foreach (BaseStructure prod in masterGrid.GetProductionStructures(player)){
            if(prod.structureType == 1)
            {

            }
        }*/

    }

    public int GetIncomeForPlayer(int player)
    {
        return 0;
    }

    public void StructureHasBeenClicked(BaseStructure structure)
    {
        //Debug.Log("Structure at pos " + structure.xPos + ", " + structure.yPos + " has been clicked.");
        //should probably try/catch if structure is null
        if (structure!=null && structure.playerControl == playerTurn && structure.structureType != 5 && ((GetPlayerProgeny((byte)playerTurn) != 1 && structure.structureType != 0) || (GetPlayerProgeny((byte)playerTurn)== 1 && structure.structureType== 0)))// && playerTurn == structure.playerControl) )
        {
            choicePanel.SetActive(true);

            productionPanel.PresentProdList(structure.structureType, GetPlayerProgeny((byte)playerTurn), playerResources[playerTurn]);
            productionPanel.gameObject.SetActive(true);
            bottomButtonText.text = "Exit";
            selectedStructure = structure;
        }
    }

    public void CaptureButtonPressed()
    {
        if (selectedStructure != null)
        {
            StartCoroutine(masterGrid.CaptureStructure(selectedStructure));
            HideChoicePanel();
        }
    }

    public void AttackButtonPressed()
    {
        //MG 24-06-11 this currently doesn't do anything.
        masterGrid.AttackButtonPressed();
        HideChoicePanel();
    }

    public void UndoMovementButtonPressed()
    {
        masterGrid.UndoMovementButtonPressed();
        HideChoicePanel();
    }

    public void UnitProductionButtonPressed(BaseUnit unit)
    {
        if (sequenceManager != null && !sequenceManager.TryAcceptGuidedProductionClick(unit))
        {
            return;
        }

/*        int price = unit.price;
        print(price);*/
        if (playerResources[playerTurn] >= unit.price)
        {
            ProduceUnit(unit, playerTurn, false);
            HideChoicePanel();
        }
        else
            print("You must mine more minerals!");
    }

    public BaseUnit ProduceResourceUnit(BaseStructure prod, int player)
    {
        if (masterGrid.WhatUnitIsInThisLocation(prod.pos) != null)
            return null;

        if (playerResources[player] >= 100) //assumes base unit cost 100
        {
            selectedStructure = prod;
            int progeny = GetPlayerProgeny((byte)player);
            if (progeny == 0)
            {
                BaseUnit infantry = PrefabManager.GetBaseUnitFromName("Infantry", 0);
                return ProduceUnit(infantry, player, false);
            }
            if (progeny == 1)
            {
                BaseUnit spore = PrefabManager.GetBaseUnitFromName("Spore", 1);
                return ProduceUnit(spore, player, true);
            }
            if (progeny == 2)
            {
                BaseUnit blacksmith = PrefabManager.GetBaseUnitFromName("Blacksmith", 2);
                return ProduceUnit(blacksmith, player, false);
            }
        }
        return null;
    }

    public BaseUnit ProduceUnit(BaseUnit unit, int playerControl, bool isNonExhausted)
    {
        if(playerResources[playerTurn] < unit.price)
        {
            Debug.LogWarning($"Trying to produce a {unit.unitName} at {selectedStructure.pos} but not enough funds");
            return null;
        }

        if (masterGrid.WhatUnitIsInThisLocation(selectedStructure.pos) != null)
        {
            Debug.LogWarning($"Trying to produce a unit at {selectedStructure.pos} but it is covered by a unit");
            selectedStructure = null;
            return null;
        }
        int previousSpend = playerResources[playerTurn];
        playerResources[playerTurn] -= unit.price;

        StartCoroutine(AnimateResourceText(previousSpend, playerResources[playerTurn],false));
        BaseUnit spawnedUnit = GetInstantiateUnit(unit, selectedStructure.pos, playerControl);
        spawnedUnit.SetNonExhausted(isNonExhausted);

        masterGrid.AddGameAction(3, (byte)spawnedUnit.gamePieceId, (byte)selectedStructure.pos.x, (byte)selectedStructure.pos.y, (byte)selectedStructure.pos.x, (byte)selectedStructure.pos.y);
        playerResourceText.text = "" + playerResources[playerTurn];
        selectedStructure.TurnOffCollider();
        return spawnedUnit;
    }

    public void ExitButtonPressed()
    {
        if (masterGrid.selectedUnit != null && masterGrid.selectedUnit.movementNonExhausted == false)
        {
            masterGrid.ExhaustSelectedUnit(masterGrid.selectedUnit, true);
        }
        HideChoicePanel();
        if (masterGrid.selectedUnit != null)
            masterGrid.ClearSelectedUnit();
    }

    public void EndTurnButtonPressed()
    {
        HideChoicePanel();
        endTurnButton.interactable = false;
        if(!isGameComplete)
            CheckNoAvailableActions(playerTurn);
    }

    public void InitiateEndTurn()
    {
        var (gameActions, preTurnHash, postTurnHash) = masterGrid.EndTurn(playerTurn);
        SubmitTurnToServer(gameActions, preTurnHash, postTurnHash);
        

        if (GetPlayerProgeny((byte)playerTurn) == 1)
        {
            foreach (BaseStructure structure in masterGrid.GetStructures(playerTurn))
            {
                BaseUnit coveringUnit = masterGrid.WhatUnitIsInThisLocation(structure.pos);
                if (coveringUnit != null && coveringUnit.unitName == "seed")
                {
                    masterGrid.DeleteUnit(coveringUnit, false);
                }
            }
        }
        StartTurn();
    }

    public void CheckNoAvailableActions(int player)
    {
        if (CPU_isOn && CPU_PlayersList[player] && !CPU_isMasterDebugging)
        {
            InitiateEndTurn();
            return;
        }
        int playerProgeny = GetPlayerProgeny((byte)player);
        BaseUnit unitFocus = null;
        int unitCount = 0;
        foreach (BaseUnit unit in MasterGrid.playerUnits[player])
        {
            if (unit.movementNonExhausted && unit.unitName != "seed")
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
        if (prodCount + unitCount > 0 || (playerProgeny == 1 && playerResources[player] >= virixCheapestUnit))
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
            if (prodCount > 0 && playerResources[player] >= 100 && GetPlayerProgeny((byte)player) != 1)
            {
                if(prodCount == 1)
                    message += $"You have {prodCount} production location which hasn't produced!\n";
                else
                    message += $"You have {prodCount} production locations which haven't produced!\n";
            }
            if (GetPlayerProgeny((byte)player) == 1 && playerResources[player] >= virixCheapestUnit)
            {
                message += $"You have {playerResources[player]} unspent bismuth!";
                if (unitCount == 0)
                {
                    message += "\nClick on a bisumth location you control to create a unit.";
                    foreach (BaseStructure s in masterGrid.GetStructures(player))
                    {
                        if (s.structureType == 0 && s.IsCoveredByUnit() == false)
                        {
                            prodFocus = s;
                            break;
                        }
                    }
                }
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
            InitiateEndTurn();
        
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
            PlayerWins(-1); //error case
        turnNumber++;

        

        if (isAnimating)
        {
            AnimateStartTurnCard(playerTurn);
        }
        cameraManager.SnapCameraToUnitCluster(playerTurn);


        SetPlayerTurnText(playerTurn);
        SetPlayerResources(playerTurn);

        //Debug.Log("Player " + playerTurn + " turn, progeny:" + GetPlayerProgeny((byte)playerTurn));

        //special virix handling
        if (GetPlayerProgeny((byte)playerTurn) == 1)
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
        masterGrid.RefreshUnits(playerTurn);

        //EndTurnButtonSwitch();

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
            yield return new WaitForSeconds(GameMaster.swoopCardAnimationDuration);
        yield return StartCoroutine(CPUManager.CommandUnits(playerTurn));
        yield return StartCoroutine(CPUManager.ProduceUnits(playerTurn, playerProgeny[(byte)playerTurn]));
        if (isAnimating)
            yield return new WaitForSeconds(GameMaster.globalAnimationDuration);
        yield return CPUManager.LogicCheckUnits(playerTurn);
/*        if(CPU_isMasterDebugging)
            endTurnButton.interactable = true;*/
        EndTurnButtonPressed();
    }


    public async void SubmitTurnToServer(List<GameAction> gameActions, long preTurnHash, long postTurnHash)
    {
        bool success = await supabaseManager.SendSubmitTurn(gameActions, preTurnHash, postTurnHash);
    }

    public void SetPlayerTurnText(int playerTurn) //this should probably be combined with BaseUnit.SetColor
    {
        playerTurnText.text = "Player Turn: " + (playerTurn);

/*        float hue = ((float)playerTurn / 3.0f) * 360f;
        float saturation = 1.0f;
        float value = 1.0f;
        Color color = Color.HSVToRGB(hue / 360f, saturation, value);*/
        playerTurnText.color = playerColors[playerTurn];
    }

    public void ShowUnitChoicePanel(bool attackableUnitsBool, bool capturableStructureBool, bool hasMoved)
    {
        if (CPU_isOn && CPU_PlayersList[playerTurn]) //don't display player choices if it's a cpu player
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

    public void HideChoicePanel()
    {
        selectedStructure = null;
        choicePanel.SetActive(false);
        HideAllSubPanels();
    }

    public void HideAllSubPanels()
    {
        unitChoicePanel.SetActive(false);
        productionPanel.gameObject.SetActive(false);
    }

/*    public static int GameMaster.playerTurn
    {
        return playerTurn;
    }*/

    private void SetPlayerResources(int playerTurn)
    {
        playerResourceText.text = playerResources[playerTurn].ToString();
        double incomeWithMultiplier = structureResourcePerTurn;
        if (GetPlayerProgeny((byte)playerTurn) == 0)
            incomeWithMultiplier = structureResourcePerTurn * 1.1;
        int num = 0;
        foreach (BaseStructure s in masterGrid.GetStructures(playerTurn)){
            num++;
            StartCoroutine(s.AnimateIncome((int)incomeWithMultiplier));
        }
        int startResources = playerResources[playerTurn];
        playerResources[playerTurn] = playerResources[playerTurn] + baseResourcePerTurn + (int)incomeWithMultiplier * num;
        
        StartCoroutine(AnimateResourceText(startResources, playerResources[playerTurn],true));
    }

/*    public void PlayerLoses (int player)
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
            PlayerWins(playerWinner);
    }*/

    private void PlayerWins (int player)
    {
        if (player == -1)
            Debug.LogError($"Player {player} has won the game, this is a failcase");
        else
        {
            isGameComplete = true;
            concedeMenuButton.interactable = false;
            backToMenuButton.interactable = true;
            backToMenuButton.image.color = new Color32(255, 175, 0, 255);
            backToMenuButton.GetComponentInChildren<TMP_Text>().color = new Color32(255, 175, 0, 255);
            endTurnButton.interactable = false;
            //end all coroutines
            StopAllCoroutines();
            if (sequenceManager != null && sequenceManager.HasOutroSequence())
            {
                StartCoroutine(sequenceManager.RunOutroThen(() => DisplayWinnerCard(player)));
            }
            else
            {
                DisplayWinnerCard(player);
            }
        }
    }
    public void LoadMainMenuScreen()
    {
        MatchSettings.PrepareSkirmishFromMenu();
        StartCoroutine(LoadAsynchronously("MenuScene"));
    }

    IEnumerator LoadAsynchronously(string sceneName)
    {
        canvas.gameObject.SetActive(false);
        choicePanel.SetActive(false);
        loadingScreen.SetActive(true);
        StartCoroutine(MuteMusic(1.5f));
        loadPromptText.text = "Loading... Main Menu";

        float displayedProgress = 0.05f;
        loadingBar.value = displayedProgress;

        yield return null; // Let UI render first frame

        // --- Fake initial scroll ---
        float initialScrollTarget = 0.4f;
        float scrollTime = 0.2f;
        float elapsed = 0f;

        while (elapsed < scrollTime)
        {
            elapsed += Time.deltaTime;
            //displayedProgress = initialScrollTarget * elapsed / scrollTime;
            displayedProgress = Mathf.Lerp(0.1f, initialScrollTarget, elapsed / scrollTime);
            loadingBar.value = displayedProgress;
            yield return null;
        }

        // --- Begin real loading ---
        AsyncOperation operation = SceneManager.LoadSceneAsync(sceneName);
        operation.allowSceneActivation = false;

        while (!operation.isDone)
        {
            float targetProgress = Mathf.Clamp01(operation.progress / 0.9f);

            if (displayedProgress < targetProgress)
                displayedProgress += Time.deltaTime;
            else
                displayedProgress = targetProgress;

            //loadingBar.value = Mathf.Lerp(loadingBar.value, displayedProgress, 0.3f);
            if (displayedProgress > initialScrollTarget)
                loadingBar.value = displayedProgress;
            else
                loadingBar.value = initialScrollTarget;

            if (operation.progress >= 0.9f)
            {
                loadPromptText.text = "Loading... Done";
                displayedProgress = Mathf.MoveTowards(displayedProgress, 1f, Time.deltaTime * 0.9f);
                loadingBar.value = Mathf.Lerp(loadingBar.value, displayedProgress, 0.3f);

                if (displayedProgress >= 0.99f)
                {
                    loadingBar.value = 1f;

                    // Fade out only content, not the whole canvas
                    CanvasGroup cg = loadingScreen.GetComponentInChildren<CanvasGroup>();
                    float fadeDuration = 0.15f;
                    float t = 0f;

                    while (t < fadeDuration)
                    {
                        t += Time.deltaTime;
                        cg.alpha = Mathf.Lerp(1f, 0f, t / fadeDuration);
                        yield return null;
                    }

                    cg.alpha = 0f;
                    operation.allowSceneActivation = true;
                }
            }

            yield return null;
        }
    }



    private void DisplayWinnerCard(int player)
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


        masterGrid.PlayerWins(player);
    }

    public void SaveGameStateToFile(string mapType, int mapNum, int versionNum)//List<GamePieceInfo> gamePieceList, TilemapData tilemapData)
    {
        List<GamePieceInfo> gamePieceList = ConvertGamePiecesToList();
        if(gamePieceList.Count == 0)
        {
            Debug.LogWarning("No game pieces to save in game state.");
        }
        TilemapData tilemapData = tilemapManager.ExportTilemapToBytes();
        string mapFileLocation = $"InitializationData/Maps/";

        
        GameStateData gameStateData = new GameStateData(tilemapData, gamePieceList);
        Debug.Log($"Saved {gameStateData.GamePieceList.Count} game pieces to gameStateData");

        string directoryPath = Path.Combine(Application.dataPath, mapFileLocation);
        if (!Directory.Exists(directoryPath))
        {
            Directory.CreateDirectory(directoryPath);
        }

        string fileName = $"{mapType}_Map{mapNum}_v{versionNum}.gsdat";

        string filePath = Path.Combine(directoryPath, fileName);
        //byte[] byteData = MessagePackSerializer.Deserialize<byte[]>(ExportTilemapToBytes(new Vector2Int(gridWidth, gridHeight), Vector2Int.zero));

        // Write the serialized data to a file
        try 
        { 
            File.WriteAllBytes(filePath, GameStateData.Serialize(gameStateData));
        }catch (Exception e)
        {
            Debug.LogError($"Failed to save game state to file: {e.Message}");
            return;
		}

		//Messagepack implementation
		//File.WriteAllBytes(filePath, TilemapData.SerializeMP(dataFile));
		Debug.Log($"Gamestate saved to file: {filePath}");
    }

    public void LoadGameStateFromFile(string mapType, int mapNum, int versionNum, bool importTilemap = true)//, out TilemapData tilemapData)
    {
        if(masterGrid == null){
            Debug.LogError("Loading game state: MasterGrid is null, cannot load game state");
            return;
        }
        
        if (toggleGamePiecesContainer != null)
        {
            toggleGamePiecesContainer.gameObject.SetActive(false);
        }
        Debug.Log(importTilemap
            ? $"Loading game state for map {mapType} {mapNum}, version {versionNum}..."
            : $"Reloading game pieces for map {mapType} {mapNum}, version {versionNum} (tilemap unchanged)...");
		//yield return null;
        //string mapFileLocation = $"InitializationData/Maps/Map{mapNum}/Map{mapNum}_v{versionNum}.gsdat"; //hardcoded map 7 for now
		string mapFileLocation = "InitializationData/Maps/";

		string directoryPath = Path.Combine(Application.dataPath, mapFileLocation);
        if (!Directory.Exists(directoryPath))
        {
            Debug.LogError($"Directory does not exist: {directoryPath}");
            return;
        }
		string fileName = $"{mapType}_Map{mapNum}_v{versionNum}.gsdat";
		string filePath = Path.Combine(directoryPath, fileName);
        if (!File.Exists(filePath))
        {
            Debug.LogError($"File does not exist: {filePath}");
			return;
		}
        byte[] fileData;
        try
        {
            fileData = File.ReadAllBytes(filePath);
        }
        catch (Exception e)
        {
            Debug.LogError($"Failed to read game state from file: {e.Message}");
			return;
		}
        GameStateData gameStateData;
        try
        {
            gameStateData = GameStateData.Deserialize(fileData);
        }
        catch (Exception e)
        {
            Debug.LogError($"Failed to deserialize game state data: {e.Message}");
			return;
		}
        if (gameStateData == null)
        {
            Debug.LogError("Deserialized game state data is null");
			return;
		}
        if (gameStateData.GamePieceList == null)
        {
            Debug.LogError("Deserialized game state has null GamePieceList.");
            return;
        }
        //tilemapData = gameStateData.tilemapData;
        Debug.Log($"Loaded game state from file: {filePath} with {gameStateData.GamePieceList.Count} game pieces.");

        if (importTilemap)
        {
            tilemapManager.ImportTilemapFromBytes(gameStateData.TilemapData);
            gridX = gameStateData.TilemapData.Width;
            gridY = gameStateData.TilemapData.Height;
        }
        int debugStructureCount = 0;
        int debugUnitCount = 0;
        int debugUnitSequenceIdCount = 0;
		foreach (GamePieceInfo gp in gameStateData.GamePieceList)
        {
            if(gp.typeNum>=200)
                debugStructureCount++;
            if(gp.typeNum<200)
            {
				debugUnitCount++;
                if (!string.IsNullOrWhiteSpace(gp.sequenceId))
                    debugUnitSequenceIdCount++;
            }

		}
        Debug.Log($"GamePieceList unit count: {debugUnitCount}, structure count {debugStructureCount}");
        Debug.Log($"GamePieceList units with sequenceId: {debugUnitSequenceIdCount}/{debugUnitCount}");

		ConvertListToGamePieces(gameStateData.GamePieceList);
	}

	public List<GamePieceInfo> ConvertGamePiecesToList()
    {
        List<GamePieceInfo> gameStateList = new List<GamePieceInfo>();

        // Iterate through the grid to find units and structures
        for (int x = 0; x < gridX; x++)
        {
            for (int y = 0; y < gridY; y++)
            {
                BaseUnit unit = masterGrid.WhatUnitIsInThisLocation(new Vector2Int(x, y));
                if (unit != null)
                {
                    GamePieceInfo info = new GamePieceInfo
                    (
                        (byte)x,
                        (byte)y,
                        (byte)unit.gamePieceId,
                        (byte)unit.playerControl,
                        (byte)((double)unit.healthCurrent / (double)unit.healthMax * 100),
                        unit.sequenceId
                    );
                    //Debug.Log($"Added baseUnit to GameStateList x: {info.x}, y: {info.y}, bytenum: {info.typeNum}, health: {info.healthVal}");
                    gameStateList.Add(info);
                }

                BaseStructure structure = masterGrid.WhatStructureIsInThisLocation(new Vector2Int(x, y));
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
        /*List<GamePieceInfo> currentGameState = _gameMaster.ConvertGamePiecesToList();
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


    /// <summary>After .gsdat spawn: register structures in the grid (Startup handles first load).</summary>
    void RefreshStructuresAfterMapLoad(bool sameMapDimensions)
    {
        if (masterGrid == null)
        {
            return;
        }

        if (!sameMapDimensions)
        {
            masterGrid.Startup(
                gridX,
                gridY,
                tilemapManager.GetTilemapByteArray(),
                gameValues.GetAttributesTilesDictionary(),
                gameValues.GetCombatMultiplierDictionary());
        }
        else
        {
            masterGrid.InitializeStructuresFromScene();
        }

        if (sequenceManager != null)
        {
            sequenceManager.RebuildMapPieceRefs();
        }
    }

        //need error checking here.
    //Cannot have two units on the same hex.
    //Cannot hvae two structures on the same hex.
    //Structure can only be placed on grass
    //units must be placed on a legal square
    //units and structures must not be outside of boundaries
    public void ConvertListToGamePieces(List<GamePieceInfo> gameStateList)
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

                    BaseUnit unitPrefab = PrefabManager.GetBaseUnitFromPath(data.prefabPath);
                    if (unitPrefab == null)
                    {
                        Debug.LogError($"No unit prefab found for byte value {pieceInfo.typeNum}");
                        continue;
                    }

                    Vector2Int spawnPos = new Vector2Int(x, y);
                    BaseUnit spawnedUnit = InstantiateUnit(unitPrefab, spawnPos);
                    spawnedUnit.playerControl = pieceInfo.playerID;
                    spawnedUnit.spawnHealthPercent = pieceInfo.healthVal;
                    spawnedUnit.pos = spawnPos;
                    spawnedUnit.ApplyInitialPlayerVisuals();
                    if (!string.IsNullOrWhiteSpace(pieceInfo.sequenceId))
                        spawnedUnit.sequenceId = pieceInfo.sequenceId;
                }
                else if (pieceInfo.typeNum >= 200 && pieceInfo.typeNum < 255)
                {
                    int x = pieceInfo.x;
                    int y = pieceInfo.y;
                    BaseStructure structurePrefab = null;
                    if (pieceInfo.typeNum == 200)
                        structurePrefab = resourceStructurePrefab.GetComponent<BaseStructure>();
                    else if (pieceInfo.typeNum == 201)
                        structurePrefab = productionFactoryStructurePrefab.GetComponent<BaseStructure>();
                    else if (pieceInfo.typeNum == 202)
                        structurePrefab = productionAirportStructurePrefab.GetComponent<BaseStructure>();
                    else if (pieceInfo.typeNum == 205)
                        structurePrefab = commandStructurePrefab.GetComponent<BaseStructure>();
                    else
                        Debug.LogError($"No structure for byte value {pieceInfo.typeNum} found.");

                    if (structurePrefab == null)
                    {
                        continue;
                    }

                    BaseStructure spawnedStructure = Instantiate(
                        structurePrefab,
                        new Vector2(x, y),
                        Quaternion.identity,
                        structureContainer);
                    spawnedStructure.playerControl = pieceInfo.playerID;
                    spawnedStructure.captureHealth = pieceInfo.healthVal;
                    spawnedStructure.pos = new Vector2Int(x, y);
                    spawnedStructure.sequenceId = string.IsNullOrWhiteSpace(pieceInfo.sequenceId)
                        ? null
                        : pieceInfo.sequenceId;

                    if (spawnedStructure is Structure_Command commandStructure)
                    {
                        MasterGrid.commandStructures[pieceInfo.playerID] = commandStructure;
                    }
                }
            }
        }
        else
            Debug.LogError("gameStateList is empty!");
    }

    public BaseUnit InstantiateUnit(BaseUnit unit, Vector2Int pos)
    {
        return Instantiate(unit, (Vector2)pos, Quaternion.identity, unitContainer);
    }
    
    public BaseUnit GetInstantiateUnit(BaseUnit prefab, Vector2Int pos, int? player)
    {
        BaseUnit instance = Instantiate(prefab, (Vector2)pos, Quaternion.identity, unitContainer);
        instance.playerControl = player ?? playerTurn;
        instance.ApplyInitialPlayerVisuals();
        instance.spriteContainer.transform.localScale = new Vector3(0.01f, 0.01f, 1f);
        StartCoroutine(AnimateCreateUnit(instance));
        return instance;
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

    private IEnumerator AnimateResourceText(int startValue, int endValue, bool wait)
    {
        float elapsed = 0f;
        float animationTime = globalAnimationDuration * 0.8f;
        if (wait)
            yield return new WaitForSeconds(swoopCardAnimationDuration);
        while (elapsed < animationTime)
        {
            elapsed += Time.deltaTime;
            float t = Mathf.Clamp01(elapsed / animationTime);
            int currentValue = Mathf.RoundToInt(Mathf.Lerp(startValue, endValue, t));
            playerResourceText.text = currentValue.ToString();
            yield return null;
        }

        playerResourceText.text = endValue.ToString(); // Ensure it ends at exact value
    }

    /*    public void ConvertFileToGameState()
        {
            if (File.Exists(gameStateFilePath))
            {
                byte[] bytes = File.ReadAllBytes(gameStateFilePath);
                List<GamePieceInfo> gameStateList = MessagePackSerializer.Deserialize<List<GamePieceInfo>>(bytes);
                ConvertListToGamePieces(gameStateList);
            }
            else
            {
                Debug.LogError("Game state file not found at " + gameStateFilePath);
            }
        }*/

    public void SetMatchId(Guid matchId)
    {
        Debug.Log("Setting match id to: " + matchId);
        match_id = matchId;
        masterGrid.SetMatchId(matchId);
    }
    public byte GetPlayerProgeny(byte b)
    {
        playerProgeny.TryGetValue(b, out byte p);
        return p;
    }

    public void AnimateStartTurnCard(int player)
    {
        Vector2 endPos = (player % 2 == 0) ? offScreenRight : offScreenLeft;
        Vector2 startPos = (player % 2 == 0) ? offScreenLeft : offScreenRight;
        Color playerColor = playerColors[player];

        if (MatchSettings.gameMode == MatchSettings.MatchGameMode.Tutorial && player == 1)
        {
            announcementCardText.text = "Your Turn";
        }
        else
        {
            string openText = "Player ";
            if (CPU_PlayersList != null && CPU_PlayersList[player])
            {
                openText = "CPU P";
            }

            announcementCardText.text = openText + $"{player}'s turn!";
        }

        announcementCardText.color = playerColor;
        announcementCardRT.anchoredPosition = startPos;

        if (turnCardAnimationCoroutine != null)
        {
            StopCoroutine(turnCardAnimationCoroutine);
            turnCardAnimationCoroutine = null;
        }

        turnCardAnimationCoroutine = StartCoroutine(SwoopInAndOutTurnCard(startPos, centerPosition, endPos));
    }

    public IEnumerator WaitForTurnCardAnimation()
    {
        while (turnCardAnimationCoroutine != null)
        {
            yield return null;
        }
    }

    private IEnumerator SwoopInAndOutTurnCard(Vector2 startPos, Vector2 centerPos, Vector2 endPos)
    {
        endTurnButton.interactable = false;
        try
        {
            yield return SwoopTurnCard(startPos, centerPos, swoopCardAnimationDuration / 2f, EaseOutCubic);
            yield return new WaitForSeconds(swoopCardAnimationDuration / 7f);
            yield return SwoopTurnCard(centerPos, endPos, swoopCardAnimationDuration / 3f, EaseInCubic);
        }
        finally
        {
            turnCardAnimationCoroutine = null;
            EndTurnButtonSwitch();
        }
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
    private float EaseOutCubic(float t) => 1 - Mathf.Pow(1 - t, 3);
    private float EaseInCubic(float t) => Mathf.Pow(t, 3);

    public void ConcedeCurrentPlayer()
    {
        if (CPU_isOn)
        {
            bool allCPU = true;
            int humanPlayerNum = 0;
            for (int i = 1; i <= numPlayers; i++)
            {
                allCPU = allCPU && CPU_PlayersList[i];
                if (!CPU_PlayersList[i])
                    humanPlayerNum = i;
            }
            if (allCPU)
                ConcedePlayer(playerTurn);
            else
            {
                if (numPlayers == 2)
                    ConcedePlayer(humanPlayerNum);
            }
        }
        else
            ConcedePlayer(playerTurn);
    }

    public void ConcedePlayer(int p)
    {
        playersNotLost[p] = false;
        if (IsMatchVictoryResolutionAllowed())
        {
            CheckIfWinner();
        }

        if (p == playerTurn)
        {
            EndTurnButtonPressed();
        }
    }

    /// <summary>
    /// Command-structure capture elimination. Skipped during tutorial when a sequence has setMatchVictory suppress.
    /// </summary>
    public void OnCommandStructureCaptured(int losingPlayer)
    {
        if (!IsMatchVictoryResolutionAllowed())
        {
            return;
        }

        ConcedePlayer(losingPlayer);
    }

    /// <summary>
    /// Tutorial sequences only — ignored in skirmish so real matches always resolve victory normally.
    /// </summary>
    public void SetTutorialMatchVictorySuppressed(bool suppressed)
    {
        if (MatchSettings.gameMode != MatchSettings.MatchGameMode.Tutorial)
        {
            if (suppressed)
            {
                Debug.LogWarning("[GameMaster] setMatchVictory suppress ignored outside tutorial matches.");
            }

            return;
        }

        tutorialMatchVictorySuppressed = suppressed;
    }

    bool IsMatchVictoryResolutionAllowed()
    {
        return MatchSettings.gameMode != MatchSettings.MatchGameMode.Tutorial
            || !tutorialMatchVictorySuppressed;
    }

    private void CheckIfWinner()
    {
        if (!IsMatchVictoryResolutionAllowed())
        {
            return;
        }

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
            PlayerWins((int)winner);
        }else if(playerNotLostCount > 1)
        {
            Debug.Log("More than 1 player remains");
        }
        else if (playerNotLostCount <= 0)
        {
            Debug.LogError("No players have not lost");
        }

    }

    public void EndTurnButtonSwitch()
    {
        if (CPU_isMasterDebugging || !(CPU_isOn && CPU_PlayersList[playerTurn]))
            endTurnButton.interactable = true;
        else
            endTurnButton.interactable = false;
    }

    public int GetPlayerResources(int p)
    {
        return playerResources[p];
    }

    public void SetPlayerResourcesTo(int player, int amount)
    {
        if (playerResources == null || player < 1 || player >= playerResources.Length)
        {
            Debug.LogWarning($"[GameMaster] SetPlayerResourcesTo ignored invalid player {player}.");
            return;
        }

        playerResources[player] = amount;
        if (player == playerTurn)
        {
            playerResourceText.text = amount.ToString();
        }
    }

    /// <summary>
    /// Copies progeny and CPU flags from MatchSettings into live gameplay state.
    /// Call after ApplyScenarioPayload when already in GameScene (e.g. chained lessons).
    /// </summary>
    public void SyncFromMatchSettings(bool allowManualCpuFallback = false)
    {
        numPlayers = MatchSettings.numPlayers > 0 ? MatchSettings.numPlayers : 2;
        if (CPU_PlayersList == null || CPU_PlayersList.Length != numPlayers + 1)
        {
            CPU_PlayersList = new bool[numPlayers + 1];
        }

        if (MatchSettings.CPU_isOn)
        {
            Debug.Log("[GameMaster] CPU is on (MatchSettings).");
            CPU_isOn = true;
            if (MatchSettings.playerIsCPU != null && MatchSettings.playerIsCPU.Length >= numPlayers)
            {
                for (int i = 0; i < numPlayers; i++)
                {
                    CPU_PlayersList[i + 1] = MatchSettings.playerIsCPU[i];
                }
            }
            else
            {
                Debug.LogError("[GameMaster] Incorrect number of players in MatchSettings CPU count.");
            }
        }
        else if (allowManualCpuFallback && CPU_isOn_manual)
        {
            Debug.Log("[GameMaster] CPU is on (manual editor fallback).");
            CPU_isOn = true;
            CPU_PlayersList[1] = false;
            CPU_PlayersList[2] = true;
        }
        else
        {
            CPU_isOn = false;
        }

        if (playerProgeny == null)
        {
            playerProgeny = new Dictionary<byte, byte>();
        }
        else
        {
            playerProgeny.Clear();
        }

        if (MatchSettings.playerProgenys != null
            && MatchSettings.playerProgenys.Length >= 2
            && MatchSettings.playerProgenys[0] >= 0
            && MatchSettings.playerProgenys[1] >= 0)
        {
            playerProgeny[1] = (byte)MatchSettings.playerProgenys[0];
            playerProgeny[2] = (byte)MatchSettings.playerProgenys[1];
        }
        else
        {
            Debug.LogWarning("[GameMaster] Progeny unset in MatchSettings, using inspector fallback.");
            playerProgeny[1] = inspectorInputProgenyPlayer1;
            playerProgeny[2] = inspectorInputProgenyPlayer2;
        }

        if (CPU_isOn)
        {
            bool allCpu = true;
            for (int i = 1; i <= numPlayers; i++)
            {
                allCpu = allCpu && CPU_PlayersList[i];
            }

            if (allCpu && concedeMenuButton != null)
            {
                concedeMenuButton.GetComponentInChildren<TMP_Text>().text = "End Game";
            }
        }

        EndTurnButtonSwitch();
        RefreshProductionPanelIfOpen();
    }

    void RefreshProductionPanelIfOpen()
    {
        if (productionPanel == null
            || !productionPanel.gameObject.activeInHierarchy
            || selectedStructure == null
            || playerResources == null)
        {
            return;
        }

        productionPanel.PresentProdList(
            selectedStructure.structureType,
            GetPlayerProgeny((byte)playerTurn),
            playerResources[playerTurn]);
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

    public static void SetPlayerColors(bool isInit)
    {
        playerColors = new Color32[numPlayers + 1];
        if (isInit)
        {
            playerColors[0] = MatchSettings.playerColors[0];
            playerColors[1] = MatchSettings.playerColors[1];
            playerColors[2] = MatchSettings.playerColors[2];
        }
        else
        {
            playerColors[0] = new Color32(255, 255, 255, 255);
            playerColors[1] = new Color32(63, 44, 255, 255);
            playerColors[2] = new Color32(230, 19, 53, 255);
        }
    }

    public void SetConcedeText()
    {
        if (CPU_isOn)
        {
            bool allCPU = true;
            int humanPlayerNum = 0;
            for (int i = 1; i <= numPlayers; i++)
            {
                allCPU = allCPU && CPU_PlayersList[i];
                if (!CPU_PlayersList[i])
                    humanPlayerNum = i;
            }
            if (allCPU)
                concedeCardText.text = $"End game?";
            else
            {
                if (numPlayers == 2)
                {
                    concedeCardText.color = playerColors[humanPlayerNum];
                    concedeCardText.text = $"Player {humanPlayerNum},";
                }
            }
        }
        else
        {
            concedeCardText.color = playerColors[playerTurn];
            concedeCardText.text = $"Player {playerTurn},";
        }

    }
    
    public void CallMuteMusic()
    {
        StartCoroutine(MuteMusic(0.25f));
    }

    public IEnumerator MuteMusic(float duration)
    {
        
        float startVolume = musicAudio.volume;
        float elapsedTime = 0f;

        while (elapsedTime < duration)
        {
            elapsedTime += Time.deltaTime;
            float t = Mathf.Clamp01(elapsedTime / duration);

            // Ease-out cubic: y = 1 - (1 - t)^3
            float easedT = 1f - Mathf.Pow(1f - t, 3f);

            musicAudio.volume = Mathf.Lerp(startVolume, 0f, easedT);
            yield return null;
        }

        musicAudio.volume = 0f;
    }

    public void AddToLoopSafetyCounter(string function)
    {
        if (loopSafetyCounter++ > loopSafetyLimit)
        {
            Debug.LogError(function + " has tripped the search limit counter");
        }
    }

    public static bool MapsMatch(
        string mapTypeA,
        int mapNumA,
        int mapVersionA,
        string mapTypeB,
        int mapNumB,
        int mapVersionB)
    {
        return string.Equals(mapTypeA, mapTypeB, StringComparison.OrdinalIgnoreCase)
            && mapNumA == mapNumB
            && mapVersionA == mapVersionB;
    }

    public static void SetMatchSettingsMap(string mapType, int mapNum, int mapVersion)
    {
        MatchSettings.matchMapType = mapType;
        MatchSettings.matchMapNum = mapNum;
        MatchSettings.matchMapVersion = mapVersion > 0 ? mapVersion : 1;
    }

    /// <summary>
    /// Direct Game-scene play (no menu): use export map fields instead of curriculum/tutorial defaults.
    /// Menu and tutorial matches already set map params before Awake map load.
    /// </summary>
    void ApplyEditorSkirmishMapDefaultsIfNeeded()
    {
        if (!matchSettingsWereUnsetOnAwake)
        {
            return;
        }

        if (MatchSettings.gameMode == MatchSettings.MatchGameMode.Tutorial)
        {
            return;
        }

        if (!string.IsNullOrEmpty(MatchSettings.matchMapType))
        {
            return;
        }

        SetMatchSettingsMap(exportMapType, exportMapNum, exportMapVersion);
    }

    /// <summary>Delete pieces and load .gsdat; <paramref name="importTilemap"/> false when only game pieces change.</summary>
    public IEnumerator ReloadMapPieces(string mapType, int mapNum, int mapVersion, bool importTilemap)
    {
        yield return masterGrid.DeleteAllGamePieces();
        yield return null;

        LoadGameStateFromFile(mapType, mapNum, mapVersion, importTilemap);
        RefreshStructuresAfterMapLoad(sameMapDimensions: !importTilemap);

        if (sequenceManager != null)
        {
            sequenceManager.RebuildMapPieceRefs();
        }
    }

    /// <summary>Sequence loadMap step: no-op when the requested map is already loaded.</summary>
    public IEnumerator EnsureMapLoadedForSequence(string mapType, int mapNum, int mapVersion)
    {
        int version = mapVersion > 0 ? mapVersion : 1;
        MatchSettings.GetMapLoadParameters(out string currentType, out int currentNum, out int currentVersion);
        if (MapsMatch(currentType, currentNum, currentVersion, mapType, mapNum, version))
        {
            Debug.Log($"[GameMaster] loadMap skipped — already on {mapType} Map{mapNum} v{version}.");
            if (sequenceManager != null)
            {
                sequenceManager.RebuildMapPieceRefs();
            }

            yield break;
        }

        Debug.Log($"[GameMaster] loadMap loading {mapType} Map{mapNum} v{version}...");
        SetMatchSettingsMap(mapType, mapNum, version);
        yield return ReloadMapPieces(mapType, mapNum, version, importTilemap: true);
    }

    /// <summary>Reload map + intro sequence in place (next tutorial lesson, same Game scene).</summary>
    public IEnumerator RestartTutorialScenario(string nextScenarioId)
    {
        if (string.IsNullOrWhiteSpace(nextScenarioId))
        {
            yield break;
        }

        MatchSettings.GetMapLoadParameters(out string previousMapType, out int previousMapNum, out int previousMapVersion);

        if (!MatchSettings.ApplyScenarioPayload(nextScenarioId))
        {
            yield break;
        }

        SyncFromMatchSettings();

        MatchSettings.GetMapLoadParameters(out string mapType, out int mapNum, out int mapVersion);
        bool sameMap = MapsMatch(previousMapType, previousMapNum, previousMapVersion, mapType, mapNum, mapVersion);

        isGameComplete = false;
        endTurnConfirmCard.SetActive(false);
        HideChoicePanel();

        if (sequenceManager != null)
        {
            sequenceManager.PrepareForTutorialRestart();
        }

        if (sequenceManager != null)
        {
            sequenceManager.HideCompletionPanel();
        }

        yield return ReloadMapPieces(mapType, mapNum, mapVersion, importTilemap: !sameMap);

        string sequencePath = MatchSettings.GetIntroSequenceResourcePath();
        if (sequenceManager != null)
        {
            if (!string.IsNullOrWhiteSpace(sequencePath))
            {
                yield return sequenceManager.EnsureSequenceMapReady(sequencePath);
            }
        }

        playerTurn = 0;
        turnNumber = 0;
        for (int i = 1; i <= numPlayers; i++)
        {
            playerResources[i] = baseResourcePerTurn;
        }

        playerResourceText.text = playerResources[1].ToString();
        SetPlayerTurnText(1);
        StartTurn();

        if (sequenceManager != null)
        {
            sequenceManager.BeginFromMatchSettings();
        }
    }
}
