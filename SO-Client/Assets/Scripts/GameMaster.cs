using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.IO;
using UnityEngine.SceneManagement;
//using System.Diagnostics;
//using MessagePack;

public class GameMaster : MonoBehaviour
{
    //private static GameMaster _instance;

    public MasterGrid masterGrid;
    public TilemapManager tilemapManager;
    //private PrefabManager prefabManager = new PrefabManager();
    public SupabaseManager supabaseManager;
    public CPUMananger CPUMananger;
    public Guid match_id;

    public Canvas canvas;
    public BaseStructure selectedStructure;
    public GameObject choicePanel;
    public MenuProductionPanel productionPanel;
    public GameObject unitChoicePanel;
    public int playerTurn;
    public static int numPlayers;
    public short turnNumber;
    private bool[] playersNotLost;
    /*public byte[] playerProgeny;*/
    Dictionary<byte, byte> playerProgeny = new Dictionary<byte, byte>();
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

    public bool isAnimating;
    public GameObject announcementCard;
    public TMP_Text announcementCardText;
    public GameObject promptCard;
    public TMP_Text promptCardMainText;
    public TMP_Text promptCardQuestionText;
    public TMP_Text promptCardButtonLeftText;
    public TMP_Text promptCardButtonRightText;
    public Button concedeMenuButton;
    public Button backToMenuButton;
    //public float animationDuration = 0.5f;
    public float holdDuration;
    public float swoopDuration;

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
            playerProgeny.Add(1, 1);
            playerProgeny.Add(2, 2);
        }

        
        playerColors = new Color32[numPlayers + 1];
        playerColors[0] = new Color32(255, 255, 255, 255);
        playerColors[1] = new Color32(63, 44, 255, 255);
        playerColors[2] = new Color32(230, 19, 53, 255);
        //Debug.Log($"player 1 is progeny {getPlayerProgeny(0)}, player 2 is progeny {getPlayerProgeny(1)}");

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
        //startupInstantiateUnits();
        //productionPanel.Start();


        if (CPU_isOn)
            CPU_PlayersList[2] = true;



    }

    void Start()
    {
        //have to wait until start to init the production panel because it needs to wait for GameValuesSO.
        productionPanel.init();

        //animation
        isAnimating = false;
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
        holdDuration = 0.001f;
        swoopDuration = 0.5f;
        //WaitForSeconds(0.5);
        if(isAnimating)
            AnimateStartTurnCard(1);

        startupInstantiateUnits();
        CPUMananger.naiveV1Start();
    }

    private IEnumerator CallConvertGameStateToList()
    {
        // Wait until the next frame to ensure all Start() methods are called
        yield return null;
        // Now it is safe to call ConvertGameStateToList
        //SaveGameStateListToFile(ConvertGameStateToList());
        //ConvertListToGameState(gameState);
    }

    public void startupInstantiateUnits()
    {

        for (int player = 1; player <= numPlayers; player++)
        {
            byte progeny = getPlayerProgeny((byte)player);
            List <BaseStructure> initProdStructures = masterGrid.GetProductionStructures(player);
            if (player != 1)
                initProdStructures.Add(masterGrid.commandStructures[player]);
            foreach (BaseStructure prod in initProdStructures)
            {
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

    public void ProduceUnit(BaseUnit unit, int playerControl, bool isNonExhausted)
    {
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

        if(isAnimating)
            AnimateStartTurnCard(playerTurn);

        setPlayerTurnText(playerTurn);
        setPlayerResources(playerTurn);

        //Debug.Log("Player " + playerTurn + " turn, progeny:" + getPlayerProgeny((byte)playerTurn));

        //special virix handling
        if (getPlayerProgeny((byte)playerTurn) == 1)
        {
            foreach(BaseStructure structure in masterGrid.GetProductionStructures(playerTurn)){
                //create a virix spore on all production structures except on the first turn.
                if (turnNumber > numPlayers)
                {
                    selectedStructure = structure;
                    if (masterGrid.whatUnitIsInThisLocation(structure.pos) == null)
                        ProduceUnit(PrefabManager.getBaseUnitFromName("spore", 1), playerTurn, true);
                }


            }
        }
        masterGrid.refreshUnits(playerTurn);

        if(CPU_isOn && CPU_PlayersList[playerTurn])
        {
            CPUMananger.CommandUnits(playerTurn);
        }
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
            if(hasMoved)
                bottomButtonText.text = "Do Nothing";
            else
                bottomButtonText.text = "Exit";
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
        promptCardMainText.text = $"Player {player} wins!";
        promptCardQuestionText.text = "Return to main menu?";
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
                BaseUnit unit = masterGrid.whatUnitIsInThisLocation(new Vector2Int(x, y));
                if (unit != null)
                {
                    GamePieceInfo info = new GamePieceInfo
                    (
                        (byte)x,
                        (byte)y,
                        unit.gamePieceId,
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
    }
    
    public BaseUnit GetInstantiateUnit(BaseUnit unit, Vector2Int pos, int? player)
    {
        if(player==null)
            unit.playerControl = getPlayerTurn();
        else
            unit.playerControl = (int)player;
        BaseUnit tempUnit = Instantiate(unit, (Vector2)pos, Quaternion.identity, unitContainer);
        return tempUnit;
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
        endTurnButton.GetComponent<Button>().interactable = false;
        Vector2 endPos = (player % 2 == 0) ? offScreenRight : offScreenLeft;
        Vector2 startPos = (player % 2 == 0) ? offScreenLeft : offScreenRight;

        announcementCardText.text = $"Player {player}'s turn!";
        announcementCardRT.anchoredPosition = startPos;

        StartCoroutine(SwoopInAndOutTurnCard(startPos, centerPosition, endPos));
    }

    private IEnumerator SwoopInAndOutTurnCard(Vector2 startPos, Vector2 centerPos, Vector2 endPos)
    {
        yield return SwoopTurnCard(startPos, centerPos, swoopDuration*1.5f, easeOutCubic);
        yield return new WaitForSeconds(holdDuration);
        yield return SwoopTurnCard(centerPos, endPos, swoopDuration, easeInCubic);
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

    public void ConcedePlayer(int i)
    {
        playersNotLost[playerTurn] = false;
        if(i == playerTurn)
        {
            endTurnButtonPressed();
        }
        CheckIfWinner();
    }

    private void CheckIfWinner()
    {
        int? winner = null;
        int playerNotLostCount = 0;

        for (int i = 1; i < playersNotLost.Length; i++)
        {
            if (playersNotLost[i] == true)
            {
                playerNotLostCount++;
                winner = i;
            }
        }

        if (winner!=null && playerNotLostCount == 1)
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
}
