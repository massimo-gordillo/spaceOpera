using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
////using MessagePack
////using System.Text.Json.Serialization;
//using Newtonsoft.Json;
//using Newtonsoft.Json.Linq;
using System.IO;
using System.Text;
using Cysharp.Threading.Tasks.Triggers;



public class MasterGrid : MonoBehaviour
{
    bool drawing = false;

    Guid match_id;
    Guid player1_id;
    Guid player2_id;
    long preTurnHash;

    public int gridX;
    public int gridY;
    public BaseUnit selectedUnit;
    public BaseUnit drawMovementUnit;
    //public MasterGrid masterGrid;
    public BaseUnit[,] unitGrid; //2D array
    public BaseStructure[,] structureGrid; //2D array
    public byte[,] terrainGrid;
    public int[,] defenceGridInt;
    //public TerrainCell terrainCell;
    public List<BaseUnit> attackableUnits;
    public List<BaseStructure> spriteOffStructures;
    //public List<BaseStructure> resourceStructures;
    public GameObject[] allUnits;
    public static List<BaseUnit>[] playerUnits;
    public GameMaster gameMaster;
    public CameraManager cameraManager;
    //public int playerTurn;
    private Dictionary<byte, AttributesTile> tileAttributes;
    private Dictionary<string, Dictionary<string, double>> combatMultipliers;
    private double defenceMultiplier;
    private double firebackMultiplier;
    private double attackLuckDomain;
    private bool luckOn =true;

    public Transform movementSquareList;
    public MovementSquare moveSquare;
    //public bool[,] checkedCells;
    public GameObject rangeOutlineSprite;

    List<GameAction> gameActions = new List<GameAction>();
    public short turnActionCount = 0;

    public List<BaseStructure> structuresList;
    public List<BaseStructure> prodStructuresList;
    public static Structure_Command[] commandStructures = new Structure_Command[3]; //assume 2 players for now




    // Called by GameMaster
    public void startup(int x, int y, byte[] tilemapByteArray,
        Dictionary<byte, AttributesTile> inputTileAttributes,
        Dictionary<string, Dictionary<string, double>> inputCombatMultipliers)
    {

        //match_id = Guid.Parse("6fdb5495-8761-4e77-a086-a7365ae9e0b4");
        player1_id = Guid.Parse("aa2e6df3-4200-4469-8353-dd41d2a28781");
        player2_id = Guid.Parse("d0172820-32bc-4fc7-870f-be940517c008");
        match_id = gameMaster.match_id;
        

        gridX = x;
        gridY = y;
        tileAttributes = inputTileAttributes;
        combatMultipliers = inputCombatMultipliers;
        selectedUnit = null;
        unitGrid = new BaseUnit[gridX, gridY]; //initialize 2D array
        setTerrain(tilemapByteArray);
        structureGrid = new BaseStructure[gridX, gridY]; //initialize 2D array
        attackableUnits = new List<BaseUnit>();
        spriteOffStructures = new List<BaseStructure>();

        foreach (BaseStructure structure in GetStructures(null))
        {
            structure.Initialize();
        }


            attackLuckDomain = 10;
        defenceMultiplier = 4.0;
        firebackMultiplier = 0.7;
        //Dictionary<(byte, byte), GamePieceInfo> gameStateDict = ConvertGameStateToList();
        //printUnitGrid();


        structuresList = GetStructures(null);
        prodStructuresList = GetProductionStructures(null);
        commandStructures[0] = null;

    }

    public void Start()
    {
        StartCoroutine(waitGenerateInitHash());
        //save arrays to csv for debugging/visualization
        //StartCoroutine(waitGenerateSaveArrayToCSV());
        populateSentusDefenceGrid(2, 0);
    }

    /*    public void printUnitGrid()
        {
            //print("checkEnemiesInRange");
            int k = 0;
            for (int i = 0; i < unitGrid.GetLength(0); i++)
            {
                for (int j = 0; j < unitGrid.GetLength(1); j++)
                {
                    if (unitGrid[i, j] != null)
                    {
                        print(i + ", " + j + ": " + unitGrid[i, j]);
                        k++;
                    }
                }
            }
            print("this many units in the unitGrid: " + k);
        }*/

    public void setTerrain(byte[] tilemapByteArray)
    {
        // Check if tilemapByteArray is null
        if (tilemapByteArray == null)
        {
            Debug.LogError("Tilemap byte array is null. Cannot set terrain.");
            return;
        }

        // Check if terrainGrid dimensions are compatible with tilemapByteArray
        //if (gridX <= 0 || gridY <= 0 || (gridX+1) * gridY+2 != tilemapByteArray.Length)
        if (gridX <= 0 || gridY <= 0 || (gridX) * gridY != tilemapByteArray.Length)
        {
            Debug.LogError($"Terrain grid dimensions ({gridX}, {gridY}) are incompatible with tilemap byte array length ({tilemapByteArray.Length}). Cannot set terrain.");
            return;
        }

        // Initialize terrainGrid if it hasn't been already
        if (terrainGrid == null || terrainGrid.GetLength(0) != gridX || terrainGrid.GetLength(1) != gridY)
        {
            terrainGrid = new byte[gridX, gridY];
        }

        // Populate terrainGrid from tilemapByteArray
        for (int i = 0; i < gridX; i++)
        {
            for (int j = 0; j < gridY; j++)
            {
                int index = j * gridX + i;
                if (index < tilemapByteArray.Length)
                {
                    terrainGrid[i, j] = tilemapByteArray[index];
                }
                else
                {
                    Debug.LogWarning($"Index {index} exceeds tilemap byte array length {tilemapByteArray.Length}. Setting default value (255) for terrain grid.");
                    terrainGrid[i, j] = 255;
                }
            }
        }

        // Optionally, you can log success message or additional information here
        //Debug.Log("Terrain set successfully.");
    }

    

    public void unitHasBeenClicked(BaseUnit unit)
    {
        //print("You've clicked on " + unit.GetInstanceID());
        //if Choice Panel is not presented by GameMaster
        if (!gameMaster.choicePanel.activeInHierarchy) {
            //if it's the selected unit (MG 24-06-11 this should never occur anymore given the choice menu behaviour)
            /*if (getSelectedUnit() == unit)
            {
                //if there are no attackable units, reset. Otherwise, exhaust the unit.
                //This will need to be corrected when there's an undo functionality/when the UI asks you directly what you want to do with the unit. MG:24-05-14
                if (attackableUnits.Count == 0)
                {
                    exhaustSelectedUnit(unit, false);
                    //testing
                    unit.movementNonExhausted = true;
                }
                else
                    exhaustSelectedUnit(unit, true);
            }elseif (getSelectedUnit() == null && unit.getNonExhausted() && unit.getPlayerControl() == GameMaster.playerTurn) //what if you don't control this unit?
            */
            if (getSelectedUnit() == unit && unit.movementNonExhausted == true)
            {
                clearSelectedUnit();
            }

            //if there is no selected unit and the clicked unit isn't exhausted & player controls that unit.
            else if (getSelectedUnit() == null && unit.nonExhausted && unit.playerControl == GameMaster.playerTurn) //what if you don't control this unit?
            {
                clearMovement();
                setSelectedUnit(unit);
                presentChoicesAtLocation(unit.pos, unit);

                //MG 25-02-26: I don't think this is necessary anymore, I'm ok locking a player into doing all their game actions with a given unit in one shot.
                if (unit.movementNonExhausted == true) //if the unit hasn't moved already this turn.
                {
                    if (!drawing)
                    {
                        //drawing = true;
                        setSelectedUnit(unit);
                        drawMovement(unit);
                    }
                }

            }
            //if there is a selected unit and you click on a (different) unit
            else if (getSelectedUnit() != unit && getSelectedUnit() != null)
            {
                /*foreach (BaseUnit attackableUnit in attackableUnits)
                {
                    Debug.Log("attackableUnits ID: " + attackableUnit.GetInstanceID());
                }*/

                //if the clicked unit is in the list of attackableUnits
                if (attackableUnits.Contains(unit))
                {
                    unit.hideCrosshairs();
                    unit.hideCombatTooltip();
                    //unit.takeDamage(getSelectedUnit().baseDamage); //expand, obviously.

                    unitCombat(getSelectedUnit(), unit);
                    //selectedUnit.setNonExhausted(false);
                    exhaustSelectedUnit(selectedUnit, true);
                }
                // if there is no selected unit and its NOT controlled by active player AND its not in the list of attackable units, display its movement range
            } else if (getSelectedUnit() == null && unit.playerControl != GameMaster.playerTurn && !attackableUnits.Contains(unit))
            {
                if (!drawing)
                {
                    //drawing = true;
                    drawMovement(unit);
                }
                else
                    clearMovement();

            }
            /*else
            {
                print("You've clicked on " + unit.GetInstanceID() + "but no mg action was taken. Potential softlock");
                Debug.Log("You've clicked on " + unit.GetInstanceID()+ "but no mg action was taken. Potential softlock");
            }*/
        }
    }


    public void unitCombat(BaseUnit attacker, BaseUnit defender)
    {

        //0 is move
        //addGameAction(0, (byte)attacker.gamePieceId, (byte)attacker.oldXPos, (byte)attacker.oldYPos, (byte)attacker.xPos, (byte)attacker.yPos);

        //1 is attack
        addGameAction(1, (byte)attacker.gamePieceId, (byte)attacker.pos.x, (byte)attacker.pos.y, (byte)defender.pos.x, (byte)defender.pos.y);



        double damagePreLuck = getDamageBeforeLuck(attacker, defender, false);
        double finalDamage = damagePreLuck;
        if (luckOn)
            finalDamage = getDamageAfterLuck(damagePreLuck);
        
        
        defender.takeDamage(finalDamage);
        //Debug.Log($"Unit attacks with preluck damage {damagePreLuck} dealing {(int)finalDamage} damage with luck factor of {finalDamage / damagePreLuck}");
        if (canUnitAttack(defender, attacker) && defender.canFireBack && defender.attackRange >= attacker.attackRange && Manhattan(attacker.pos, defender.pos)<= defender.attackRange)
        {
            double defenderFireBackDamage = getDamageBeforeLuck(defender, attacker, true);
            if (luckOn)
                defenderFireBackDamage = getDamageAfterLuck(defenderFireBackDamage);

            attacker.takeDamage(defenderFireBackDamage);
            //Debug.Log($"Defending Unit fires back with {defenderFireBackDamage}");
        } /*else
            Debug.Log($"Can defending Unit fire back: {defender.canFireBack}, or is it out of range: {defender.attackRange} < {attacker.attackRange}");
           */
    }

    public double getDamageBeforeLuck(BaseUnit attacker, BaseUnit defender, bool firingBack)
    {
        //Debug.Log($"Unit attacks, dealing {attacker.baseDamage} damage, healthcurrent is {attacker.healthCurrent} and healthmax is { attacker.healthMax} with a health ratio of {(double)attacker.healthCurrent / attacker.healthMax}");
        double baseDamage = getAttackerBaseDamage(attacker);
        double multiplier = getDamageMultiplier(attacker, defender);
        double defenceVal = getDefenceValueForDefender(defender);
        
        //Debug.Log($"attacker base damage: {baseDamage}, multiplier = {multiplier}, defenceVal for defender is {defenceVal}");

        //if they are the same type of unit, they deal a maximum of 70% after type multiplier (defence and luck calculation comes after) 
        if (attacker.gamePieceId == defender.gamePieceId)
        {
            if (!firingBack && baseDamage * multiplier > defender.healthMax * 0.70)
            {
                baseDamage = defender.healthMax * 0.70;
                multiplier = 1;
            } /*else if (firingBack && baseDamage * multiplier * defenceVal * firebackMultiplier > defender.healthMax * 0.50) //only 50% max if firing back.
            {
                return defender.healthMax * 0.50;
            }*/
        }
        //print to console info about this attack
        //Debug.Log($"Attacker: {attacker.name}, Defender: {defender.name}, baseDamage: {baseDamage}, multiplier: {multiplier}, defenceVal: {defenceVal}, firebackMultiplier: {firebackMultiplier}");
        if (!firingBack)
            return baseDamage * multiplier * defenceVal;
        else
            return baseDamage * multiplier * defenceVal * firebackMultiplier;
    }

    public double getDamageAfterLuck(double damageInput)
    {
        if (attackLuckDomain % 2 == 0)
        {
            int luckPercentageBonus = UnityEngine.Random.Range(0, (int)attackLuckDomain + 1) - (int)attackLuckDomain / 2;
            return damageInput * (1 + (double)luckPercentageBonus / 100);
        }
        else
        {
            Debug.LogError($"attackLuckDomain is not an even number! cannot compute random range calculation.");
            return damageInput;
        }
    }

    //return % damage taken by defending unit (ceiling, + attackLuckDomain/2 percentage)
    public double getAttackLuckCeiling(double damageInput, double maxHealth)
    {
        double attackLuckCeiling = attackLuckDomain / 200;
        double ceiling = damageInput * (1 + attackLuckCeiling);
        if (ceiling > maxHealth)
            return 100;
        else if (ceiling < 0)
            return 0;
        else if (maxHealth - ceiling < 0.1 * maxHealth)
            return 100;
        else
            return ceiling / maxHealth;
    }

    //return % damage taken by defending unit (floor, - attackLuckDomain/2 percentage)
    public double getAttackLuckFloor(double damageInput, double maxHealth)
    {
        //the negative side of attackLuckDomain
        double attackLuckFloor = (-0.5 * attackLuckDomain) / 100;
        double floor = damageInput * (1 + attackLuckFloor);
        if (floor > maxHealth)
            return 100;
        if (floor < 0)
            return 0;
        else if (maxHealth - floor < 0.1 * maxHealth)
            return 100;
        else
            return floor / maxHealth;
    }


    public double getAttackerBaseDamage(BaseUnit attacker)
    {
        //Debug.Log($"Base damage: {attacker.baseDamage}, healthCurrent: {attacker.healthCurrent}, healthMax: {attacker.healthMax}, health ratio: {(double)attacker.healthCurrent / attacker.healthMax}");
        return attacker.baseDamage * ((double)attacker.healthCurrent / attacker.healthMax);
    }

    public bool canUnitAttack(BaseUnit attacker, BaseUnit defender)
    {
        if (attacker == null || defender == null)
            return false;
        if (attacker.playerControl == defender.playerControl)
            return false;
        if (defender.unitName != "seed")
        {
            if (defender.unitTerrainType == UnitTerrainType.Land)
                return attacker.canAttackLand;
            else if (defender.unitTerrainType == UnitTerrainType.Sea)
                return attacker.canAttackSea;
            else if (defender.unitTerrainType == UnitTerrainType.Air)
                return attacker.canAttackAir;
            Debug.LogError("No unit Type returned when checking if a unit could attack");
            return true;
        }
        return false;

    }

    public double getDamageMultiplier(BaseUnit attacker, BaseUnit defender)
    {
        var combinedKey = CombineCombatEnums(attacker.damageType, attacker.weaponType);

        if (combatMultipliers.ContainsKey(defender.healthType.ToString()) && combatMultipliers[defender.healthType.ToString()].ContainsKey(combinedKey))
        {
            return combatMultipliers[defender.healthType.ToString()][combinedKey];
        }
        else
        {
            Debug.LogError($"Invalid health type or combined key: HealthType = {defender.healthType}, DamageType = {attacker.damageType}, WeaponType = {attacker.weaponType}, CombinedKey = {combinedKey}");
            return 0;
        }
    }

    public IEnumerator captureStructure(BaseStructure structure)
    {
        //int healthRatio = selectedUnit.healthCurrent/selectedUnit.healthMax;
        if (selectedUnit != null)
        {
            clearMovement();
            if (structure != null)
            {
                yield return structure.captureByPercentage(selectedUnit.getHealthPercentage(), selectedUnit.playerControl);
            }
/*            //print("capture health: " + structure.captureHealth + "selectedUnithealth " + selectedUnit.healthCurrent);
            if (selectedUnit.getHealthPercentage() < structure.captureHealth) //do we want to do this math within BaseStructure?
                structure.captureHealth =- selectedUnit.getHealthPercentage();
            else
                structure.switchAlliance(selectedUnit.getPlayerControl());*/
            //2 is capture structure
            addGameAction(2, (byte)selectedUnit.gamePieceId, (byte)selectedUnit.pos.x, (byte)selectedUnit.pos.y, (byte)structure.pos.x, (byte)structure.pos.y);

            //Trying virix implementation where spore kills itself upon capturing
            if (structure.playerControl == selectedUnit.playerControl && selectedUnit.unitName == "Spore")
            {
                selectedUnit.explosionAnimator.enabled = false;
                deleteUnit(selectedUnit);
                createVirixSeed(structure.pos);
            }
            else
                exhaustSelectedUnit(selectedUnit, true);
        }
        else
            print("attempting to capture structure but no selectedUnit to capture it.");
        yield return null;
    }

    public void attackButtonPressed()
    {

    }

    public void undoMovementButtonPressed()
    {
        selectedUnit.undoingMovement = true;
        if (selectedUnit.oldPos != null)  
        {
            Vector2Int oldPos = (Vector2Int)selectedUnit.oldPos;
            BaseStructure oldStructure = whatStructureIsInThisLocation(oldPos);
            //debug the values in the if statement below
            //Debug.Log($"oldX: {oldX}, oldY: {oldY}, isResourceUnit {selectedUnit.isResourceUnit}, prevCaptureVal {selectedUnit.prevStructureCaptureVal}, oldStructure: {oldStructure}, oldStructure.playerControl: {oldStructure.playerControl}, selectedUnit.playerControl: {selectedUnit.playerControl}");

            //if the unit was capturing a structure before undo, reset the capture health to the previous value.
            if (selectedUnit.isResourceUnit && selectedUnit.prevStructureCaptureVal != null && oldStructure != null && oldStructure.playerControl != selectedUnit.playerControl)
                oldStructure.captureHealth = (int)selectedUnit.prevStructureCaptureVal;

            moveSelectedUnit(oldPos);
        }
        clearSelectedUnit();
    }



    public void drawMovement(BaseUnit mTarget)
    {
        drawing = true;
        //Debug.Log($"Setting {mTarget} as drawMovementUnit");
        drawMovementUnit = mTarget;
        mTarget.showSelectedCorners(true);
        int movementRange = mTarget.movementRange;
        int attackRange = mTarget.attackRange;
        int totalRange = movementRange + attackRange;
        int xpos = (int)mTarget.pos.x;
        int ypos = (int)mTarget.pos.y;
        //Vector2Int targetPos = mTarget.pos;
        /*if (!drawing)
        {
            drawing = true;
            selectedUnit = mTarget;
*/
        /*        checkedCells = new bool[gridX + 2, gridY + 2];
                checkedCells[xpos + 1, ypos + 1] = true;
                Queue<(Vector2Int cell, int range)> cellsToCheck = new Queue<(Vector2Int, int)>();
                cellsToCheck.Enqueue((new Vector2Int(xpos + 1, ypos + 1), totalRange));
                //Debug.Log($"Adding cell {xpos},{ypos} to queue with range {range}");

                RecursiveDrawMovement(mTarget, cellsToCheck);*/

        Queue<(Vector2Int cell, int range)> cellsToCheck = new Queue<(Vector2Int, int)>();

        bool[,] checkedCells = new bool[gridX + 2, gridY + 2];
        checkedCells[xpos + 1, ypos + 1] = true;
        if (mTarget.canMoveAndAttack)
        {
            cellsToCheck.Enqueue((new Vector2Int(xpos + 1, ypos + 1), movementRange + 1));//assuming unit only has 1 attack range for the first vectorA* search.
            //List<Queue<Vector2Int>> squareQueuesList = FloodFillSearch(mTarget, movementRange, attackRange, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>() }, true);
            List<Queue<Vector2Int>> squareQueuesList = null;
            if (attackRange >= 1)
                squareQueuesList = FloodFillSearch(mTarget, movementRange, 1, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>() });
            else
                squareQueuesList = FloodFillSearch(mTarget, movementRange, 0, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>() });
            if (attackRange > 1)
            {
                cellsToCheck.Clear();
                if (squareQueuesList != null && squareQueuesList.Count > 1)
                {
                    foreach (var cell in squareQueuesList[1])
                    {
                        cellsToCheck.Enqueue((cell, attackRange - 1)); //make cellsToCheck the attack locations discovered when range = 1.
                    }
                }

                List<Queue<Vector2Int>> squareQueuesListRangedAttack = FloodFillSearch(mTarget, 0, attackRange - 1, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>() });


                //ManualTestAndPrintLogQueueSizes(squareQueuesListRangedAttack);
                //DrawSquaresFromSearch(squareQueuesListRangedAttack);
                if (squareQueuesListRangedAttack != null && squareQueuesListRangedAttack[1].Count > 0)
                    foreach (var item in squareQueuesListRangedAttack[1])
                    {
                        squareQueuesList[1].Enqueue(item);
                    }
            }
            //ManualTestAndPrintLogQueueSizes(squareQueuesList);
            DrawSquaresFromSearch(squareQueuesList);



        }
        else //unit can't move and attack
        {
            cellsToCheck.Enqueue((new Vector2Int(xpos + 1, ypos + 1), movementRange));
            //List<Queue<Vector2Int>> movementSquareQueuesList = FloodFillSearch(mTarget, movementRange, 0, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>()}, true);
            List<Queue<Vector2Int>> movementSquareQueuesList = FloodFillSearch(mTarget, movementRange, 0, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>()});
/*            Queue<Vector2Int> tempCombatList = movementSquareQueuesList[1];
            while (tempCombatList.Count > 0)
            {
                Vector2Int attackSquare = tempCombatList.Dequeue();
                //if we're drawing an enemy ranged unit during our turn, label allied units as movement squares. Prev was labelled as attack squares.
                if (whatUnitIsInThisLocation(attackSquare).playerControl == mTarget.playerControl && mTarget.playerControl != GameMaster.playerTurn)
                {
                    movementSquareQueuesList[0].Enqueue(attackSquare);
                    //movementSquareQueuesList[0].TryDequeue(out attackSquare);
                }

            }*/
            DrawSquaresFromSearch(movementSquareQueuesList);

            cellsToCheck = new Queue<(Vector2Int, int)>();
            cellsToCheck.Enqueue((new Vector2Int(xpos + 1, ypos + 1), attackRange));
            checkedCells = new bool[gridX + 2, gridY + 2];
            checkedCells[xpos + 1, ypos + 1] = true;
            //List<Queue<Vector2Int>> attackOutlineLocationsQueuesList = FloodFillSearch(mTarget, 0, attackRange, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>()}, true);
            List<Queue<Vector2Int>> attackOutlineLocationsQueuesList = FloodFillSearch(mTarget, 0, attackRange, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>()});
            //ManualTestAndPrintLogQueueSizes(attackOutlineLocationsQueuesList);
            DrawAttackOutline(attackOutlineLocationsQueuesList, mTarget);
        }
    }

    public List<Queue<Vector2Int>> FloodFillSearch(
    BaseUnit mTarget,
    int movementRange,
    int attackRange,
    Queue<(Vector2Int cell, int range)> cellsToCheck,
    bool[,] checkedCells,
    List<Queue<Vector2Int>> squareQueuesList)
    {
        GameMaster.recursionSafetyCounter = 0;
        List<Queue<Vector2Int>> offsetQueue = RecursiveFloodFillSearchOffset(mTarget, movementRange, attackRange, cellsToCheck, checkedCells, squareQueuesList, 0);
        //Debug.LogWarning()
        List<Queue<Vector2Int>> correctedQueue = new List<Queue<Vector2Int>>();

        // Throw an error if the list has more than 3 items
        if (squareQueuesList == null)
        {
            Debug.LogWarning($"The squareQueuesList is null. Filling with empty lists");
            squareQueuesList = new List<Queue<Vector2Int>>();
            //populating the first 3 items in the list with empty queues to avoid null reference exceptions.
            while (squareQueuesList.Count < 3)
            {
                squareQueuesList.Add(new Queue<Vector2Int>());
            }
        }
        if (squareQueuesList.Count > 3)
        {
            Debug.LogError($"The squareQueuesList contains more than 3 lists. It actually has {squareQueuesList.Count} lists.");
            return new List<Queue<Vector2Int>>();
        }

        // Ensure the first three items are not null
        for (int i = 0; i < 3; i++)
        {
            if (i >= squareQueuesList.Count || squareQueuesList[i] == null)
            {
                if (squareQueuesList[i] == null)
                {
                    squareQueuesList[i] = new Queue<Vector2Int>();
                }
            }
        }

        for(int i=0; i< squareQueuesList.Count; i++)
        {
            correctedQueue.Add(new Queue<Vector2Int>());
            while (squareQueuesList[i].Count > 0)
            {
                Vector2Int v = squareQueuesList[i].Dequeue();
                correctedQueue[i].Enqueue(new Vector2Int(v.x - 1, v.y - 1));
            }
        }

        return correctedQueue;
    }




    public List<Queue<Vector2Int>> RecursiveFloodFillSearchOffset(
    BaseUnit mTarget,
    int movementRange,
    int attackRange,
    Queue<(Vector2Int cell, int range)> cellsToCheck,
    bool[,] checkedCells,
    List<Queue<Vector2Int>> squareQueuesList,
    int recurCheck)
    {
        int tr = movementRange + attackRange;
        int unitRecLimit = 2 * tr * (tr + 1) + 1;
            GameMaster.recursionSafetyCounter++;
            if (GameMaster.recursionSafetyCounter++ >= gameMaster.recusionSafetyLimit)//unitRecLimit)
        {
                //Debug.LogError($"[FloodFill] Max cell processing limit hit: {processedCells}");
                Debug.LogError($"[RecursiveFloodFillSearchOffset] Recursion safety limit reached at recurCheck={recurCheck}. with {GameMaster.recursionSafetyCounter} total recurs this turn, a local limit of {unitRecLimit} " +
               $"Current Queue Size: {cellsToCheck.Count}. Movement: {movementRange}, Attack: {attackRange}. " +
               $"Target: {mTarget?.unitName ?? "null"} at {mTarget.pos}");
                return squareQueuesList;
            }
/*            if (GameMaster.loopSafetyCounter++ >= gameMaster.loopSafetyLimit)
            {

                    Debug.LogError($"[RecursiveFloodFillSearchOffset] Loop safety limit reached at recurCheck={recurCheck}. we've done {globalRecurCheck} recursions total" +
                                   $"Current Queue Size: {cellsToCheck.Count}. Movement: {movementRange}, Attack: {attackRange}. " +
                                   $"Target: {mTarget?.unitName ?? "null"} at {mTarget.pos}");


                // Return an empty result instead of null to avoid NRE crashes downstream
                return new List<Queue<Vector2Int>> {
                    new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>()
                };
            }*/

            if (cellsToCheck.Count == 0)
                return squareQueuesList;

            var (checkingCell, range) = cellsToCheck.Dequeue();

            if (range == 0)
                return squareQueuesList;

            foreach (Vector2Int direction in DirectionList())
            {
                Vector2Int adjacentCell = checkingCell + direction;
                int xCheck = adjacentCell.x;
                int yCheck = adjacentCell.y;

                if (xCheck >= 0 && xCheck < gridX + 2 && yCheck >= 0 && yCheck < gridY + 2 && !checkedCells[xCheck, yCheck])
                {
                    checkedCells[xCheck, yCheck] = true;

                    Vector2Int adjustedCell = new Vector2Int(xCheck - 1, yCheck - 1);
                    int legal = LegalMove(adjustedCell, mTarget);

                    if (legal >= 1 && movementRange > 0)
                    {
                        if (!cellsToCheck.Contains((new Vector2Int(xCheck, yCheck), range - 1)))
                            cellsToCheck.Enqueue((new Vector2Int(xCheck, yCheck), range - 1));

                        if (legal == 1 && range > attackRange)
                            squareQueuesList[0].Enqueue(new Vector2Int(xCheck, yCheck));
                        else if (range <= attackRange)
                            squareQueuesList[1].Enqueue(new Vector2Int(xCheck, yCheck));

                        BaseStructure structure = whatStructureIsInThisLocation(adjustedCell);
                        if (structure != null)
                            squareQueuesList[2].Enqueue(new Vector2Int(xCheck, yCheck));
                    }
                    else if (IsInBoundsExtended(xCheck, yCheck))
                    {
                        BaseUnit unitAtLocation = whatUnitIsInThisLocation(adjustedCell);

                        if ((mTarget.playerControl != GameMaster.playerTurn || canUnitAttack(mTarget, unitAtLocation) || unitAtLocation == null) && mTarget.canMoveAndAttack)
                            squareQueuesList[1].Enqueue(new Vector2Int(xCheck, yCheck));

                        if (!mTarget.canMoveAndAttack && movementRange == 0)
                            squareQueuesList[1].Enqueue(new Vector2Int(xCheck, yCheck));

                        if (range > 1 && attackRange > 1)
                        {
                            if (range > attackRange)
                            {
                                if (!cellsToCheck.Contains((new Vector2Int(xCheck, yCheck), attackRange)))
                                    cellsToCheck.Enqueue((new Vector2Int(xCheck, yCheck), attackRange));
                            }
                            else if (!cellsToCheck.Contains((new Vector2Int(xCheck, yCheck), range - 1)))
                            {
                                cellsToCheck.Enqueue((new Vector2Int(xCheck, yCheck), range - 1));
                            }
                        }
                    }
                }
            }

            return RecursiveFloodFillSearchOffset(mTarget, movementRange, attackRange, cellsToCheck, checkedCells, squareQueuesList, recurCheck + 1);
        
    }

    /*public List<Queue<Vector2Int>> RecursiveFloodFillSearchOffset(
    BaseUnit mTarget,
    int movementRange,
    int attackRange,
    Queue<(Vector2Int cell, int range)> cellsToCheck,
    bool[,] checkedCells,
    List<Queue<Vector2Int>> squareQueuesList,
    int recurCheck)
    {
        if (recurCheck >= GameMaster.loopSafetyLimit)
        {
            Debug.LogError("RecursiveFloodFillOffset has tripped the loop safety counter");
            return null;
        }

        // Total range (movement + attack)
        int totalRange = movementRange + attackRange;

        // Base case: no more cells to check
        if (cellsToCheck.Count == 0)
            return squareQueuesList;

        // Dequeue the next cell to check
        var (checkingCell, range) = cellsToCheck.Dequeue();

        // Base case: out of range
        if (range == 0)
            return squareQueuesList;

        // Explore all 4 directions
        //for (int direction = 0; direction < 4; direction++)
        foreach (Vector2Int direction in DirectionList())
        {
            Vector2Int adjacentCell = checkingCell + direction;
            int xCheck = adjacentCell.x;
            int yCheck = adjacentCell.y;

            // Check grid bounds and if the cell is already checked
            if (xCheck >= 0 && xCheck < gridX + 2 && yCheck >= 0 && yCheck < gridY + 2 && !checkedCells[xCheck, yCheck])
            {
                // Mark cell as checked
                checkedCells[xCheck, yCheck] = true;

                // Legal move validation
                if (LegalMove(new Vector2Int(xCheck - 1, yCheck - 1), mTarget) >= 1 && movementRange > 0) //if its a legal move AND the unit isn't only searching for additional attack locations
                {
                    // Enqueue the cell with updated range if not already in the queue
                    if (!cellsToCheck.Contains((new Vector2Int(xCheck, yCheck), range - 1)))
                        cellsToCheck.Enqueue((new Vector2Int(xCheck, yCheck), range - 1));

                    // Differentiate between movement and attack squares based on range
                    if (LegalMove(new Vector2Int(xCheck - 1, yCheck - 1), mTarget) == 1 && range > attackRange) //totalRange - movementRange
                    {
                        squareQueuesList[0].Enqueue(new Vector2Int(xCheck, yCheck)); // Movement square
                    }
                    else if (range <= attackRange) //totalRange - movementRange
                    {
                        squareQueuesList[1].Enqueue(new Vector2Int(xCheck, yCheck)); // Attack square
                    }

                    // Handle structures in the current cell
                    BaseStructure structure = whatStructureIsInThisLocation(new Vector2Int(xCheck - 1, yCheck - 1));
                    if (structure != null)
                        squareQueuesList[2].Enqueue(new Vector2Int(xCheck, yCheck)); // Structure square
                }
                else if (IsInBoundsExtended(xCheck, yCheck))
                {
                    BaseUnit unitAtLocation = whatUnitIsInThisLocation(new Vector2Int(xCheck - 1, yCheck - 1));

                    // If it's not the player's turn or the unit can be attacked, mark as attack square. Also, if there's no unit there and you can attack and move.
                    if ((mTarget.playerControl != GameMaster.playerTurn || canUnitAttack(mTarget, unitAtLocation) || unitAtLocation == null) && mTarget.canMoveAndAttack)
                        squareQueuesList[1].Enqueue(new Vector2Int(xCheck, yCheck)); // Attack square

                    //if it can't move and attack and we're doing a ranged search only (ie, no movement ability), then add it to the attack squares.
                    //MG 24-10-29: This solution only works if you're doing the movementRange 0 solution for finding ranged attacks. If this behaviour changes in the future this check will need to be modified.
                    if(!mTarget.canMoveAndAttack && movementRange == 0)
                        squareQueuesList[1].Enqueue(new Vector2Int(xCheck, yCheck)); 


                    //enqueue the cell if the unit still has additional attack range
                    if (range > 1 && attackRange > 1) //probably not necessary
                        if (range > attackRange)
                        {
                            if (!cellsToCheck.Contains((new Vector2Int(xCheck, yCheck), attackRange)))
                                cellsToCheck.Enqueue((new Vector2Int(xCheck, yCheck), attackRange));
                        }
                        else if (!cellsToCheck.Contains((new Vector2Int(xCheck, yCheck), range - 1)))
                            cellsToCheck.Enqueue((new Vector2Int(xCheck, yCheck), range - 1));
                }
            }
        }

        // Recursion
        return RecursiveFloodFillSearchOffset(mTarget, movementRange, attackRange, cellsToCheck, checkedCells, squareQueuesList, recurCheck+1);
    }*/

    public void AnimateMovement(BaseUnit unit, Vector2Int start, Vector2Int end)
    {
        
        //Debug.Log($"Animating movement from {start} to {end}");
        List<Vector2Int> path = BidirectionalSearch(start, end, unit, unit.movementRange);
        //List<Vector2Int> path = BidirectionalSearch(start, end, unit, unit.movementRange);
        //List<Vector2Int> path = BidirectionalSearch(start, end, unit);

        //movement animation speed
        //float speed = 12.0f;
        //float duration = GameMaster.globalAnimationDuration;

        if(path.Count == 0)
        {
            Debug.LogError($"No valid path found for movement animation for unit {unit.pos}, flashing to location");
            unit.transform.position = new Vector3(end.x, end.y, unit.transform.position.z);
/*            selectedUnit = unit;
            moveSelectedUnit(end);*/
            unit.setNonExhausted(false);
            return;
        }
        
        StartCoroutine(AnimateMovementVisual(unit, path));
        //StartCoroutine(AnimateMovementVisual(unit, path, speed));
        //Debug.Log("Movement animation complete.");
    }

    public IEnumerator AnimateMovementVisual(BaseUnit unit, List<Vector2Int> path)
    {

        float animationTimePerTile = GameMaster.globalAnimationDuration / (path.Count*2);
        // Have the camera follow if it's a CPU player
        if (GameMaster.CPU_isOn && GameMaster.CPU_PlayersList[GameMaster.playerTurn])
        {
            yield return new WaitForSeconds(0.2f);
            cameraManager.SetFollowTarget(unit.transform);
        }
        yield return new WaitForSeconds(0.2f);

        Vector2Int finalPos = path[path.Count - 1];

        if (!GameMaster.CPU_PlayersList[GameMaster.playerTurn])
            cameraManager.SetPosition((finalPos + unit.pos) / 2);

        foreach (var position in path)
        {
            Vector3 startPosition = unit.transform.position;
            Vector3 targetPosition = new Vector3(position.x, position.y, startPosition.z);
            float elapsedTime = 0f;

            while (elapsedTime < animationTimePerTile)
            {
                if (unit == null)
                    yield break;

                float t = elapsedTime / animationTimePerTile;
                unit.transform.position = Vector3.Lerp(startPosition, targetPosition, t);
                elapsedTime += Time.deltaTime;
                yield return null;
            }

            // Ensure we snap exactly to target position at the end
            unit.transform.position = targetPosition;
        }

        cameraManager.ClearFollowTarget();

        if (unit.pos != new Vector2Int((int)Math.Round(unit.transform.position.x, 1), (int)Math.Round(unit.transform.position.y, 1)))
            Debug.LogError($"Selected unit {unit.pos} is at {unit.transform.position} after moving to {finalPos}");
    }


    /*//Manhattan distance/vector calculation for finding path between to squares. Uses bidirectional search to guarantee shortest path.
    public List<Vector2Int> BidirectionalSearch(
        Vector2Int start,
        Vector2Int end,
        BaseUnit unit)
    {
        if (start == end) return new List<Vector2Int> { start };

        // Queues for bidirectional search
        Queue<Vector2Int> queueStart = new Queue<Vector2Int>();
        Queue<Vector2Int> queueEnd = new Queue<Vector2Int>();

        // Parent tracking for reconstruction
        Dictionary<Vector2Int, Vector2Int> parentStart = new Dictionary<Vector2Int, Vector2Int>();
        Dictionary<Vector2Int, Vector2Int> parentEnd = new Dictionary<Vector2Int, Vector2Int>();

        queueStart.Enqueue(start);
        parentStart[start] = start;

        queueEnd.Enqueue(end);
        parentEnd[end] = end;

        //Vector2Int? meetingPointNullable = null;
        Vector2Int meetingPoint = Vector2Int.zero;
        bool pathFound = false;

        while (queueStart.Count > 0 && queueEnd.Count > 0)
        {
            if (ExpandFrontier(queueStart, parentStart, parentEnd, ref meetingPoint, unit))
            {
                pathFound = true;
                break;
            }
            if (ExpandFrontier(queueEnd, parentEnd, parentStart, ref meetingPoint, unit))
            {
                pathFound = true;
                break;
            }
        }

        if (!pathFound) return new List<Vector2Int>(); // No valid path found

        return ReconstructPath(meetingPoint, parentStart, parentEnd);
    }*/

    /*private bool ExpandFrontier(
        Queue<Vector2Int> queue,
        Dictionary<Vector2Int, Vector2Int> parents,
        Dictionary<Vector2Int, Vector2Int> otherParents,
        ref Vector2Int meetingPoint,
        BaseUnit unit)
    {
        if (queue.Count == 0) return false;

        Vector2Int current = queue.Dequeue();

        foreach (Vector2Int dir in DirectionList())
        {
            Vector2Int neighbor = current + dir;
            if (parents.ContainsKey(neighbor) || LegalMove(neighbor.x, neighbor.y, unit)<=0)
                continue;

            parents[neighbor] = current;
            queue.Enqueue(neighbor);

            if (otherParents.ContainsKey(neighbor))
            {
                meetingPoint = neighbor;
                return true;
            }
        }

        return false;
    }*/

    /*private static List<Vector2Int> ReconstructPath(
    Vector2Int meetingPoint,
    Dictionary<Vector2Int, Vector2Int> parentStart,
    Dictionary<Vector2Int, Vector2Int> parentEnd)
    {
        List<Vector2Int> path = new List<Vector2Int>();

        // Move from meeting point back to start
        Vector2Int current = meetingPoint;
        path.Add(current); // Explicitly add meeting point

        int loopSafetyCounter = 0;
        while (current != parentStart[current])
        {
            loopSafetyCounter++;
            if (loopSafetyCounter >= GameMaster.loopSafetyLimit)
            {
                Debug.LogError("ReconstructPath has tripped the loop safety counter");
            }
            current = parentStart[current];
            path.Add(current);
        }
        path.Reverse(); // Start-to-meeting order

        // Move from meeting point to end
        current = meetingPoint; // Reset to meeting point
        while (current != parentEnd[current])
        {
            loopSafetyCounter++;
            if (loopSafetyCounter >= GameMaster.loopSafetyLimit)
            {
                Debug.LogError("ReconstructPath has tripped the loop safety counter");
            }
            current = parentEnd[current];
            path.Add(current);
        }

        return path;
    }*/




    /*public List<Vector2Int> BidirectionalSearch(
    Vector2Int start,
    Vector2Int end,
    BaseUnit unit,
    int totalDistance)
    {
        if(GameMaster.loopSafetyCounter++> GameMaster.loopSafetyLimit)
        {
            Debug.LogError("DirectionalSearch has tripped the search limit counter");
            return null;
        }
        if (totalDistance <= 0)
        {
            Debug.LogError($"Bidirectional Search asked to find path for {totalDistance}");
        }
        int depthLimitPerSide = totalDistance % 2 == 0 ? totalDistance / 2 : (totalDistance + 1 / 2);
        if (start == end) return new List<Vector2Int> { start };

        Queue<Vector2Int> queueStart = new Queue<Vector2Int>();
        Queue<Vector2Int> queueEnd = new Queue<Vector2Int>();

        Dictionary<Vector2Int, Vector2Int> parentStart = new Dictionary<Vector2Int, Vector2Int>();
        Dictionary<Vector2Int, Vector2Int> parentEnd = new Dictionary<Vector2Int, Vector2Int>();

        Dictionary<Vector2Int, int> depthStart = new Dictionary<Vector2Int, int>();
        Dictionary<Vector2Int, int> depthEnd = new Dictionary<Vector2Int, int>();

        queueStart.Enqueue(start);
        parentStart[start] = start;
        depthStart[start] = 0;

        queueEnd.Enqueue(end);
        parentEnd[end] = end;
        depthEnd[end] = 0;

        Vector2Int meetingPoint = Vector2Int.zero;
        bool pathFound = false;

        
        while (queueStart.Count > 0 && queueEnd.Count > 0)
        {

            if (GameMaster.loopSafetyCounter++ >= GameMaster.loopSafetyLimit)
            {
                Debug.LogError("BidirectionalSearch has tripped the loop safety counter");
            }
            if (ExpandFrontier(queueStart, parentStart, parentEnd, depthStart, depthLimitPerSide, ref meetingPoint, unit))
            {
                pathFound = true;
                break;
            }

            if (ExpandFrontier(queueEnd, parentEnd, parentStart, depthEnd, depthLimitPerSide, ref meetingPoint, unit))
            {
                pathFound = true;
                break;
            }
        }

        if (!pathFound) return new List<Vector2Int>(); // No path found within depth

        return ReconstructPath(meetingPoint, parentStart, parentEnd);
    }

    private bool ExpandFrontier(
    Queue<Vector2Int> queue,
    Dictionary<Vector2Int, Vector2Int> parents,
    Dictionary<Vector2Int, Vector2Int> otherParents,
    Dictionary<Vector2Int, int> depths,
    int depthLimit,
    ref Vector2Int meetingPoint,
    BaseUnit unit)
    {
        if (queue.Count == 0) return false;

        Vector2Int current = queue.Dequeue();
        int currentDepth = depths[current];

        if (currentDepth >= depthLimit) return false;

        foreach (Vector2Int dir in DirectionList())
        {
            Vector2Int neighbor = current + dir;

            if (depths.ContainsKey(neighbor) || LegalMove(neighbor, unit) <= 0)
                continue;


            depths[neighbor] = currentDepth + 1;
            parents[neighbor] = current;
            queue.Enqueue(neighbor);

            if (otherParents.ContainsKey(neighbor))
            {
                meetingPoint = neighbor;
                return true;
            }
        }

        return false;
    }*/


    public List<Vector2Int> BidirectionalSearch(
    Vector2Int start,
    Vector2Int goal,
    BaseUnit unit,
    int totalDistance)
    {

        if (GameMaster.loopSafetyCounter++ > gameMaster.loopSafetyLimit)
        {
            Debug.LogError("DirectionalSearch has tripped the search limit counter");
            return new List<Vector2Int>();
        }
        int depthLimit = (totalDistance + 1) / 2;
        if (start == goal)
            return new List<Vector2Int> { start };

        var openStart = new SortedSet<(int f, int g, Vector2Int pos)>(new FgPosComparer());
        var openGoal = new SortedSet<(int f, int g, Vector2Int pos)>(new FgPosComparer());

        var gStart = new Dictionary<Vector2Int, int> { [start] = 0 };
        var gGoal = new Dictionary<Vector2Int, int> { [goal] = 0 };

        var parentStart = new Dictionary<Vector2Int, Vector2Int> { [start] = start };
        var parentGoal = new Dictionary<Vector2Int, Vector2Int> { [goal] = goal };

        var closedStart = new HashSet<Vector2Int>();
        var closedGoal = new HashSet<Vector2Int>();

        openStart.Add((Manhattan(start, goal), 0, start));
        openGoal.Add((Manhattan(goal, start), 0, goal));

        while (openStart.Count > 0 && openGoal.Count > 0)
        {
            bool expandStart = openStart.Min.f <= openGoal.Min.f;

            var (fCur, gCur, posCur) = expandStart
                ? PopMin(openStart)
                : PopMin(openGoal);

            var closed = expandStart ? closedStart : closedGoal;
            var otherClosed = expandStart ? closedGoal : closedStart;
            var gThis = expandStart ? gStart : gGoal;
            var gOther = expandStart ? gGoal : gStart;
            var parentThis = expandStart ? parentStart : parentGoal;
            var target = expandStart ? goal : start;
            var openThis = expandStart ? openStart : openGoal;


            closed.Add(posCur);


            if (otherClosed.Contains(posCur))
                return ReconstructPath(posCur, parentStart, parentGoal);


            foreach (var dir in DirectionList())
            {
                var nb = posCur + dir;
                if (LegalMove(nb, unit) <= 0)
                    continue;



                int gNew = gCur + 1;
                if (gNew > depthLimit)
                    continue;

                if (!gThis.TryGetValue(nb, out var gOld) || gNew < gOld)
                {
                    gThis[nb] = gNew;
                    parentThis[nb] = posCur;
                    int h = Manhattan(nb, target);
                    openThis.Add((gNew + h, gNew, nb));
                }
            }
        }

        return new List<Vector2Int>();
    }
    private (int f, int g, Vector2Int pos) PopMin(
        SortedSet<(int f, int g, Vector2Int pos)> set)
    {
        var min = set.Min;
        set.Remove(min);
        return min;
    }
    private List<Vector2Int> ReconstructPath(
        Vector2Int meet,
        Dictionary<Vector2Int, Vector2Int> pStart,
        Dictionary<Vector2Int, Vector2Int> pGoal)
    {
        var path = new List<Vector2Int>();

        var cur = meet;
        while (true)
        {
            path.Add(cur);
            if (pStart[cur] == cur) break;
            cur = pStart[cur];
        }
        path.Reverse();

        cur = meet;
        while (true)
        {
            cur = pGoal[cur];
            path.Add(cur);
            if (pGoal[cur] == cur) break;
        }

        return path;
    }

    private int Manhattan(Vector2Int a, Vector2Int b)
        => Mathf.Abs(a.x - b.x) + Mathf.Abs(a.y - b.y);
    private class FgPosComparer : IComparer<(int f, int g, Vector2Int pos)>
    {
        public int Compare((int f, int g, Vector2Int pos) a,
                           (int f, int g, Vector2Int pos) b)
        {
            if (a.f != b.f) return a.f - b.f;
            if (a.g != b.g) return a.g - b.g;
            if (a.pos.x != b.pos.x) return a.pos.x - b.pos.x;
            return a.pos.y - b.pos.y;
        }
    }

    public Vector2Int GetFurthestTileByMovement(List<Vector2Int> path, int maxMovement)
    {
        if (path == null || path.Count == 0)
            return Vector2Int.zero;

        int distance = 0;
        Vector2Int current = path[0];

        for (int i = 1; i < path.Count; i++)
        {
            Vector2Int next = path[i];
            int stepCost = Mathf.Abs(next.x - current.x) + Mathf.Abs(next.y - current.y); // Manhattan step
            if (distance + stepCost > maxMovement)
                break;

            distance += stepCost;
            current = next;
        }

        return current;
    }



    // Helper function to check if a cell is in bounds
    private bool IsInBoundsExtended(int x, int y)
    {
        return (x - 1) < gridX && (x - 1) >= 0 && (y - 1) < gridY && (y - 1) >= 0;
    }

    public void ManualTestAndPrintLogQueueSizes(List<Queue<Vector2Int>> squareQueuesList)
    {
        // Ensure the list has exactly 3 queues
        if (squareQueuesList == null)
        {
            Debug.LogError($"The squareQueuesList is null");
            return;
        }
        if(squareQueuesList.Count != 3)
        {
            Debug.LogError($"The squareQueuesList does not contain exactly 3 queues, it contains only {squareQueuesList.Count}");
            return;
        }

        // Deconstruct the list into individual queues
        Queue<Vector2Int> movementQueue = squareQueuesList[0];
        Queue<Vector2Int> attackQueue = squareQueuesList[1];
        Queue<Vector2Int> structureQueue = squareQueuesList[2];

        // Print the count of items in each queue
        //Debug.Log($"Movement Queue Size: {movementQueue.Count}");
        //Debug.Log($"Attack Queue Size: {attackQueue.Count}");
        if (attackQueue.Count>0)
        {
            foreach(Vector2Int pos in attackQueue)
            {
                BaseUnit attackUnit = whatUnitIsInThisLocation(pos);
/*                if (attackUnit != null && attackUnit.playerControl != GameMaster.playerTurn)
                    Debug.Log($"Attack Queue Position: {pos} is occupied by {attackUnit.unitName}");*/
            }
        }
        //Debug.Log($"Structure Queue Size: {structureQueue.Count}");
    }

    void DrawSquaresFromSearch(List<Queue<Vector2Int>> squareQueuesList)
    {
        // Throw an error if the list has more than 3 items
        if (squareQueuesList == null)
        {
            Debug.LogWarning($"The squareQueuesList is null. Filling with empty lists");
            squareQueuesList = new List<Queue<Vector2Int>>();
            //populating the first 3 items in the list with empty queues to avoid null reference exceptions.
            while (squareQueuesList.Count < 3)
            {
                squareQueuesList.Add(new Queue<Vector2Int>());
            }
        }
        if (squareQueuesList.Count > 3)
        {
            Debug.LogError($"The squareQueuesList contains more than 3 lists. It actually has {squareQueuesList.Count} lists.");
            return;
        }

        // Ensure the first three items are not null
        for (int i = 0; i < 3; i++)
        {
            if (i >= squareQueuesList.Count || squareQueuesList[i] == null)
            {
                if (squareQueuesList[i] == null)
                {
                    squareQueuesList[i] = new Queue<Vector2Int>();
                }
            }
        }

        // Deconstruct the list into individual queues
        Queue<Vector2Int> movementQueue = squareQueuesList[0];
        Queue<Vector2Int> attackQueue = squareQueuesList[1];
        Queue<Vector2Int> structureQueue = squareQueuesList[2];

        // Draw movement squares
        while (movementQueue.Count > 0)
        {
            //Vector2Int cell = movementQueue.Dequeue();
            drawMoveSquare(movementQueue.Dequeue(), drawMovementUnit.playerControl == GameMaster.playerTurn);
        }

        // Draw attack squares
        while (attackQueue.Count > 0)
        {
            //Vector2Int cell = attackQueue.Dequeue();
            drawDamageSquare(attackQueue.Dequeue(), drawMovementUnit.playerControl == GameMaster.playerTurn);
        }

        // Turn off structure colliders
        while (structureQueue.Count > 0)
        {
            Vector2Int cell = structureQueue.Dequeue();
            BaseStructure s = whatStructureIsInThisLocation(cell);
            if (s != null)
            {
                turnOffStructureCollider(s);
            }
        }

    }

    public void DrawAttackOutline(List<Queue<Vector2Int>> attackOutlineSquareQueuesList, BaseUnit mTarget)
    {
        if (attackOutlineSquareQueuesList == null || attackOutlineSquareQueuesList.Count != 3)
        {
            Debug.LogError("The attackOutlineSquareQueuesList does not contain exactly 3 queues.");
            return;
        }

        Queue<Vector2Int> attackQueue = attackOutlineSquareQueuesList[1];

        if (attackQueue.Count == 0)
        {
            Debug.LogWarning("No attack locations to draw outline for.");
            return;
        }

        if (rangeOutlineSprite == null)
        {
            Debug.LogError("rangeOutlineSprite is not assigned.");
            return;
        }

        while (attackQueue.Count > 0)
        {
            Vector2Int cell = attackQueue.Dequeue();
            BaseUnit unitAtLocation = whatUnitIsInThisLocation(cell);
            if (unitAtLocation != null && unitAtLocation.playerControl != GameMaster.playerTurn)
            {
                drawDamageSquare(cell, drawMovementUnit.playerControl == GameMaster.playerTurn);
/*                BaseStructure s = whatStructureIsInThisLocation(cell.x - 1, cell.y - 1);
                if (s != null)
                {
                    turnOffStructureCollider(s);
                }*/
            }

            Vector2Int unitLocation = mTarget.pos;
            Vector2Int attackLocation = cell;
            int xDiff = attackLocation.x - unitLocation.x;
            int yDiff = attackLocation.y - unitLocation.y;

            //Debug.Log($"Unit Location: {unitLocation}, Attack Location: {attackLocation}, xDiff: {xDiff}, yDiff: {yDiff}");
            //Debug.Log($"Calculated range: {Mathf.Abs(xDiff) + Mathf.Abs(yDiff)}, Target attack range: {mTarget.attackRange}");

            // Check if the difference matches the attack range, and allow both horizontal and vertical placements
            if (Mathf.Abs(xDiff) + Mathf.Abs(yDiff) == mTarget.attackRange)
            {
                //  Instantiate(rangeOutlineSprite, new Vector2(attackLocation.x, (float)(attackLocation.y - 0.5)), Quaternion.identity, movementSquareList);
                //if diff is below 0, draw neg dir, if above 0, draw pos dir
                if (xDiff != 0)
                    Instantiate(rangeOutlineSprite, new Vector2((float)(attackLocation.x + xDiff / Mathf.Abs(xDiff) * 0.5), attackLocation.y), Quaternion.identity, movementSquareList);
                else
                {
                    Instantiate(rangeOutlineSprite, new Vector2((float)(attackLocation.x + 0.5), attackLocation.y), Quaternion.identity, movementSquareList);
                    Instantiate(rangeOutlineSprite, new Vector2((float)(attackLocation.x - 0.5), attackLocation.y), Quaternion.identity, movementSquareList);
                }
                Quaternion rotation = Quaternion.Euler(0, 0, 90);
                if (yDiff != 0)
                    Instantiate(rangeOutlineSprite, new Vector2(attackLocation.x, (float)(attackLocation.y + yDiff / Mathf.Abs(yDiff) * 0.5)), rotation, movementSquareList);
                else
                {
                    Instantiate(rangeOutlineSprite, new Vector2(attackLocation.x, (float)(attackLocation.y + 0.5)), rotation, movementSquareList);
                    Instantiate(rangeOutlineSprite, new Vector2(attackLocation.x, (float)(attackLocation.y - 0.5)), rotation, movementSquareList);
                }

            }
            if (attackLocation.x == 0 || attackLocation.x == gridX - 1)
                Instantiate(rangeOutlineSprite, new Vector2((float)(attackLocation.x + xDiff / Mathf.Abs(xDiff) * 0.5), attackLocation.y), Quaternion.identity, movementSquareList);

            if (attackLocation.y == 0 || attackLocation.y == gridY - 1)
                Instantiate(rangeOutlineSprite, new Vector2(attackLocation.x, (float)(attackLocation.y + yDiff / Mathf.Abs(yDiff) * 0.5)), Quaternion.Euler(0, 0, 90), movementSquareList);
        }
    }





    public void drawMoveSquare(Vector2Int pos, bool isControllersTurn)
    {
        MovementSquare blueSquare = moveSquare;
        Color color = new Color(0.678f, 0.847f, 0.902f, 0.6f);
        blueSquare.setColor(color);
        blueSquare.boxCollider2D.enabled = isControllersTurn;
        blueSquare.stripeSprite.gameObject.SetActive(!isControllersTurn);
        if(drawMovementUnit.progeny == Progeny.Sentus)
        {
            //Debug.Log($"Showing shields at {x},{y}, is {defenceGridInt[x, y]}");
            blueSquare.showShields(defenceGridInt[pos.x, pos.y]);
        }
        Instantiate(blueSquare, (Vector2)pos, Quaternion.identity, movementSquareList);
    }

    public void drawDamageSquare(Vector2Int pos, bool isControllersTurn)
    {
        MovementSquare redSquare = moveSquare;
        Color c = new Color(1.0f, 0.6f, 0.6f, 0.6f);
        redSquare.setColor(c);
        redSquare.boxCollider2D.enabled = false;
        redSquare.stripeSprite.gameObject.SetActive(!isControllersTurn);
        redSquare.showShields(0);
        Instantiate(redSquare, (Vector2)pos, Quaternion.identity, movementSquareList);
    }

    public void checkEnemiesInRange(BaseUnit unit) 
    {
        int xPos = (int)unit.pos.x;
        int yPos = (int)unit.pos.y;
        int range = unit.attackRange;

        Queue<(Vector2Int cell, int range)> cellsToCheck = new Queue<(Vector2Int, int)>();
        cellsToCheck.Enqueue((new Vector2Int(xPos + 1, yPos + 1), range));

        bool[,] checkedCells = new bool[gridX + 2, gridY + 2];
        checkedCells[xPos + 1, yPos + 1] = true;
        List<Queue<Vector2Int>> squareQueuesList = FloodFillSearch(unit, 0, range, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>() });
        //ManualTestAndPrintLogQueueSizes(squareQueuesList);
        foreach (Vector2Int cell in squareQueuesList[1])
        {
            BaseUnit unitInLocation = whatUnitIsInThisLocation(cell);
            //BaseUnit unitInLocation = whatUnitIsInThisLocation(new Vector2Int(cell.x - 1, cell.y - 1));
            if (unitInLocation != null && unitInLocation != unit && unitInLocation.playerControl != unit.playerControl && unitInLocation.unitName != "seed")
            {
                setUnitToAttackable(unit, unitInLocation);
            }
        }
        /*for (int rad = 0; rad < 4; rad++)
        {
            Vector2Int dirV = sinDir(rad);
            int xCheck = (int)(xPos + dirV.x);
            int yCheck = (int)(yPos + dirV.y);
            BaseUnit unitInLocation = null;
            if (xCheck >= 0 && xCheck < gridX && yCheck >= 0 && yCheck < gridY)
                unitInLocation = whatUnitIsInThisLocation(xCheck, yCheck);
            if (unitInLocation != null && unitInLocation != selectedUnit && selectedUnit.playerControl != unitInLocation.playerControl && canUnitAttack(selectedUnit, unitInLocation))
            {
                setUnitToAttackable(selectedUnit, unitInLocation);
            }
        }*/
    }

    public void setUnitToAttackable(BaseUnit attacker, BaseUnit defender)
    {
        attackableUnits.Add(defender);
        defender.drawCrosshairs();
        double damageBeforeLuck = getDamageBeforeLuck(attacker, defender, false);
        int tileDefenceValue = getTileDefenceValueInt(defender.pos);
        double floor = getAttackLuckFloor(damageBeforeLuck, defender.healthMax);
        double ceiling = getAttackLuckCeiling(damageBeforeLuck, defender.healthMax);
        //if(defender.progeny == Progeny.Sentus )
        if (luckOn && !GameMaster.CPU_PlayersList[GameMaster.playerTurn])
        {
            defender.showCombatTooltip(tileDefenceValue, defender.progeny == Progeny.Sentus ? defenceGridInt[defender.pos.x, defender.pos.y] : 0, floor, ceiling);
            //Debug.Log($"For defender {defender.GetInstanceID()}, Tooltip displays floor: {floor}, ceiling: {ceiling}, base dmg before luck: {damageBeforeLuck}.");
        }
        else
        {
            defender.showCombatTooltip(tileDefenceValue, defender.progeny == Progeny.Sentus ? defenceGridInt[defender.pos.x, defender.pos.y] : 0,  damageBeforeLuck /defender.healthMax, damageBeforeLuck/defender.healthMax);
            //Debug.Log($"For defender {defender.GetInstanceID()}, Tooltip displays floor: {damageBeforeLuck}, ceiling: {damageBeforeLuck}, base dmg before luck: {damageBeforeLuck}.");

        }
    }

    public BaseUnit whatUnitIsInThisLocation(Vector2Int pos)
    {
        if (IsInBounds(pos))
            if (unitGrid[pos.x, pos.y] is BaseUnit)
            {
                //Debug.Log($"Checking for unit at location {x},{y}");
                if (unitGrid[pos.x, pos.y] == null)
                    Debug.LogError($"UnitGrid at location {pos} is null");
                return unitGrid[pos.x, pos.y];
            }
            else
                return null;
        else
        {
            print("Out of Bounds in whatUnit");
            return null;
        }
    }

    public BaseStructure whatStructureIsInThisLocation(Vector2Int pos)
    {
        if (IsInBounds(pos))
            if (structureGrid[pos.x, pos.y] is BaseStructure)
                return structureGrid[pos.x, pos.y];
            else
                return null;
        else
            return null;

    }

    public byte whatTileIsInThisLocation(Vector2Int pos)
    {
        if (IsInBounds(pos))
            return terrainGrid[pos.x, pos.y];
        else
        {
            Debug.LogWarning("Out of bounds in WhatTile");
            return 0;
        }
    }

    public double getTileDefenceValueMultiplier(Vector2Int pos)
    {
        return (double)getTileDefenceValueInt(pos) / 100.0 * defenceMultiplier;
    }

    public int getTileDefenceValueInt(Vector2Int pos)
    {
        AttributesTile tile;
        if (tileAttributes.TryGetValue(whatTileIsInThisLocation(pos), out tile))
        {
            return tile.defenceValue;
        }
        else
        {
            Debug.LogError($"Cannot get tile at location {pos} for byteValue {whatTileIsInThisLocation(pos)}");
            return 0;
        }
    }

    public double getDefenceValueForDefender(BaseUnit defender)
    {
        double defenceGridDouble = 0;
        double tileMultiplier = 0;
        //Debug.Log($"defence, unit terrain type: {defender.unitTerrainType}");
        //Sentus implementation #1.
        if (defender.progeny == Progeny.Sentus)
        {
            defenceGridDouble = GetSentusDefenceMultiplier(defender.pos);
        }
        if (defender.unitTerrainType != UnitTerrainType.Air)
        {

            tileMultiplier = getTileDefenceValueMultiplier(defender.pos);
        }
        //Debug.Log($"Defence: Tile: {tileMultiplier} defence: {defenceGridDouble}");
        return 1 - tileMultiplier - defenceGridDouble;
    }


    public bool canUnitMoveToByteValue(BaseUnit unit, byte b)
    {
        //absolutely awful temp fix for the fact that the byte values are off by 5 because of the old tilemap I used to draw the inital map. In future, grid will be created from scatch and this can be removed.
        
        //b = (byte)(b - 5);
        if (!tileAttributes.TryGetValue(b, out AttributesTile a))
            Debug.LogWarning($"Key '{b}' was not found in the dictionary.");
        bool moveCheck = true;
        //Debug.Log($"Checking if unit {unit.unitName} can move to tile {b} with a value of {unit.unitTerrainType}");
        switch (unit.unitTerrainType)
        {
            case UnitTerrainType.Land:
                moveCheck = moveCheck && a.canLandTraverse;
                break;
            case UnitTerrainType.Sea:
                moveCheck = moveCheck && a.canSeaTraverse;
                break;
            case UnitTerrainType.Air:
                return moveCheck;
            default:
                break;
        }

        if (unit.isInfantry)
            moveCheck = moveCheck && a.canInfantryTraverse;
        else
            moveCheck = moveCheck && a.canVehicleTraverse;
        //Debug.Log($"Unit {unit.unitName} can move to tile {b} with a value of {moveCheck}");
        return moveCheck;
    }


    //this will return 1 if a legal move, 0 if illegal move, 2 if allied unit but not a landing square.
    //-1 if it's the same unit
    //eventually this can decrement the number of additional movements (due to terrain) the unit has but that's for later.
    public int LegalMove(Vector2Int pos, BaseUnit mTarget)
    {

        if (!IsInBounds(pos))
            return 0;
        else if (!canUnitMoveToByteValue(mTarget, whatTileIsInThisLocation(pos)))
            return 0;
        else if (whatUnitIsInThisLocation(pos) == null)
            return 1;
        else if (whatUnitIsInThisLocation(pos) == mTarget)
            return -1;
        else if (true)//(!isFinal || (drawMovementUnit != null && drawing)) //if we're drawing movement squares
        {
            if (whatUnitIsInThisLocation(pos).playerControl == mTarget.playerControl)//== drawMovementUnit.playerControl)
                return 2;
            else
                return 0; //true as long as future conditions also return 0. Might become a headache if that's not the case.
        }
        else if (drawMovementUnit == null || !drawing) //if we're simply doing a nearby search without drawing movement, legality doesn't matter.
        {
            //Debug.Log($"DrawMovementUnit is null. Returning 0 for unit at location {x},{y}.");
            return 0;
        }
        else {
            Debug.LogWarning($"LegalMove returned 0 as default, no accurate conditions were met.");
            return 0; 
        }
        
    }

/*    public Vector2Int sinDir(int d)//0 up, 1 right, 2 down, 3 left
    {
        return new Vector2Int((int)(Mathf.Sin(d * Mathf.PI / 2)), (int)(Mathf.Sin((d + 1) * Mathf.PI / 2)));
    }*/

    //above function but returns a list of vectors
    public List<Vector2Int> DirectionList()
    {
        return new List<Vector2Int>
        {
            new Vector2Int(0, 1),  // Up
            new Vector2Int(1, 0),  // Right
            new Vector2Int(0, -1), // Down
            new Vector2Int(-1, 0)  // Left
        };
        //god this is so clever but it just wastes computation time
        /*        List<Vector2Int> dirList = new List<Vector2Int>();
                for (int d = 0; d < 4; d++)//0 up, 1 right, 2 down, 3 left
                    dirList.Add(new Vector2Int((int)(Mathf.Sin(d * Mathf.PI / 2)), (int)(Mathf.Sin((d + 1) * Mathf.PI / 2)));
                return dirList;*/
    }

    public void clearMovement()
    {
        //var movementSquares = GameObject[];
        GameObject[] movementSquares;
        movementSquares = GameObject.FindGameObjectsWithTag("MovementSquareTag"); //Note I also set the range outline prefab to this tag
        for (var i = 0; i < movementSquares.Length; i++)
            Destroy(movementSquares[i]);
        drawing = false;
        /*        if(drawMovementUnit != null)
                    Debug.Log($"Removing unit {drawMovementUnit.GetInstanceID()} from drawMovementUnit");*/
        if(drawMovementUnit!=null)
            drawMovementUnit.showSelectedCorners(false);
        drawMovementUnit = null;
        turnOnAllUncoveredStructureColliders();
    }

    public void clearAttackableUnits()
    {
        foreach (BaseUnit attackableUnit in attackableUnits)
        {
            attackableUnit.hideCrosshairs();
            attackableUnit.hideCombatTooltip();
        }
        attackableUnits.Clear();
    }

    public void moveSelectedUnit(Vector2Int pos)
    {
        //BaseUnit testUnit = selectedUnit;
        if(selectedUnit.pos == pos)
        {
            Debug.LogError($"Selected unit at {selectedUnit.pos} is being asked to move to the square it's already on");
            return;
        }
        //print("moveSelectedUnit. SelectedUnit is: "+selectedUnit);
        if (selectedUnit != null && whatUnitIsInThisLocation(pos) == null)
        {
            clearAttackableUnits();
            selectedUnit.oldPos = selectedUnit.pos;
            // do we want to try and define ths just within the if statement?
            BaseStructure oldStructure = whatStructureIsInThisLocation(selectedUnit.pos);
            if (oldStructure != null)
            {
                //in case of undo, hold the previous capture % in case it needs to be restored.
                if (selectedUnit.isResourceUnit && oldStructure.captureHealth != oldStructure.maxCaptureHealth)
                    selectedUnit.prevStructureCaptureVal = oldStructure.captureHealth;
                //then reset the capture health
                oldStructure.turnOnCollider();
                oldStructure.resetCaptureHealth();
            }
            AnimateMovement(selectedUnit, selectedUnit.pos, pos);
            //selectedUnit.transform.position = new Vector2(x, y); //you can't define this as a Vector2Int bc the game engine requires conversion to Vector3

            // if you're undoing movement, don't add it to the action list
            if (!selectedUnit.undoingMovement)
                addGameAction(0, (byte)selectedUnit.gamePieceId, (byte)selectedUnit.pos.x, (byte)selectedUnit.pos.y, (byte)pos.x, (byte)pos.y);

            removeUnitInGrid(selectedUnit.pos);
            setUnitInGrid(pos, selectedUnit);

            if (!selectedUnit.undoingMovement)
            {
                selectedUnit.movementNonExhausted = false;
                presentChoicesAtLocation(pos, selectedUnit);
            }
            else
            {
                selectedUnit.movementNonExhausted = true;
                selectedUnit.undoingMovement = false;
                selectedUnit.oldPos = null;
                whatStructureIsInThisLocation(selectedUnit.pos)?.turnOffCollider();
                exhaustSelectedUnit(selectedUnit, false);

                //if undoing movement remove the action from the gameActions list
                if (gameActions.Count > 0 && gameActions[gameActions.Count - 1].actionNumber == turnActionCount)
                {
                    gameActions.RemoveAt(gameActions.Count - 1);
                    turnActionCount--;
                }


            }
            
            clearMovement();
            

        }
        else
            Debug.LogWarning($"Unit {selectedUnit.pos} trying to move to {pos} but can't because there's a unit there");
        

    }


    public void setUnitInGrid(Vector2Int pos, BaseUnit unit)
    {
        if (whatUnitIsInThisLocation(pos) == null)
        {
            unitGrid[pos.x, pos.y] = unit;
            unit.pos = pos;
        }
        else
            Debug.LogError($"Setting unit {unit.pos} to {pos} but can't because there's a unit there");
    }

    public void setStructureInGrid(Vector2Int pos, BaseStructure structure)
    {
        //unitGrid[gridX-x, gridY-y] = unit;
        structureGrid[pos.x, pos.y] = structure;
        structure.pos = pos;
    }

    public void deleteUnit(BaseUnit deadUnit)
    {
        if(selectedUnit != null && deadUnit == selectedUnit)
            clearSelectedUnit();
        removeUnitInGrid(deadUnit.pos);
        //if not null call the function
        whatStructureIsInThisLocation(deadUnit.pos)?.resetCaptureHealth();
        if (playerUnits[deadUnit.playerControl].Contains(deadUnit))
        {
            playerUnits[deadUnit.playerControl].Remove(deadUnit);
        }
        else
            Debug.LogWarning($"Asking to delete unit {deadUnit.pos} from a list it's not in");

        StartCoroutine(AnimateDeleteUnit(deadUnit));
        //Destroy(deadUnit.GetComponent<UnitSprite>());
    }

    public IEnumerator AnimateDeleteUnit(BaseUnit deadUnit)
    {
        yield return StartCoroutine(deadUnit.AnimateDestroy());
        //Debug.Log($"Destroying Unit {deadUnit.pos} now");
        Destroy(deadUnit.gameObject);
    }

    /*    private IEnumerator waitedDeleteUnit(BaseUnit deadUnit)
    {
        yield return null;
        if (selectedUnit != null && deadUnit == selectedUnit)
            clearSelectedUnit();
        removeUnitInGrid(deadUnit.xPos, deadUnit.yPos);
        //if not null call the function
        whatStructureIsInThisLocation(deadUnit.xPos, deadUnit.yPos)?.resetCaptureHealth();
        Destroy(deadUnit.gameObject);
        //Destroy(deadUnit.GetComponent<UnitSprite>());
    }*/

    public void removeUnitInGrid(Vector2Int pos)
    {
        //unitGrid[gridX-x, gridY-y] = null;
        unitGrid[pos.x, pos.y] = null;
    }



    public BaseUnit getSelectedUnit()
    {
        return selectedUnit;
    }

    public void setSelectedUnit(BaseUnit unit)
    {
        selectedUnit = unit;
        unit.showSelectedCorners(true);
    }

    public void exhaustSelectedUnit(BaseUnit unit, bool exhaust)
    {
        if (selectedUnit == unit) //weird check here, not sure why it enters if the unit doesn't exist.
        {
            if(unit!=null)
                unit.setNonExhausted(!exhaust);
            clearAttackableUnits();
            clearSelectedUnit();
            gameMaster.hideChoicePanel();
        }
        else
        {
            print("wrong BaseUnit unselected");
            clearSelectedUnit();
        }

    }

    public void clearSelectedUnit()
    {
        if(selectedUnit != null)
            selectedUnit.showSelectedCorners(false);
        selectedUnit = null;
        clearAttackableUnits();
        clearMovement();

    }

    public void refreshUnits(int playerTurn)
    {
        //allUnits = GameObject.FindGameObjectsWithTag("BaseUnitTag").GetComponent<BaseUnit>();
        clearAttackableUnits();
        allUnits = GameObject.FindGameObjectsWithTag("BaseUnitTag");
        foreach (GameObject go in allUnits)
        {
            BaseUnit unit = go.GetComponent<BaseUnit>();
            if (unit.playerControl == playerTurn)
            {
                unit.setNonExhausted(true);
                unit.oldPos = null;

            }
        }
    }

    public void playerWins(int player)
    {
        clearAttackableUnits();
        allUnits = GameObject.FindGameObjectsWithTag("BaseUnitTag");
        foreach (GameObject go in allUnits)
        {
            BaseUnit unit = go.GetComponent<BaseUnit>();
            if (unit.playerControl == player)
            {
                unit.setNonExhausted(false);
                unit.oldPos = null;
            }
            else
                unit.deleteMe();
        }
    }

    public void presentChoicesAtLocation(Vector2Int pos, BaseUnit unit)
    {
        if(unit.canMoveAndAttack || unit.movementNonExhausted)
            checkEnemiesInRange(unit);
        BaseStructure structure = manageStructureAtLocation(pos);
        bool canStructureBeCapturedHere = (structure != null && structure.isCapturableBy(unit));
        if (canStructureBeCapturedHere)
        {
            gameMaster.selectedStructure = structure;
        }
        gameMaster.showUnitChoicePanel(attackableUnits.Count != 0, canStructureBeCapturedHere, !unit.movementNonExhausted);
        if (!unit.movementNonExhausted && attackableUnits.Count == 0 && !canStructureBeCapturedHere)
            exhaustSelectedUnit(unit, true);
    }

    public BaseStructure manageStructureAtLocation(Vector2Int pos)
    {
        BaseStructure structure = whatStructureIsInThisLocation(pos);
        if (structure != null)
        {
            turnOffStructureCollider(structure);
        }
        return structure;
    }

    public void turnOffStructureCollider(BaseStructure s)
    {
        s.turnOffCollider();
        spriteOffStructures.Add(s);
    }

    public void turnOnAllUncoveredStructureColliders()
    {
        List<BaseStructure> tempSpriteOffStructures = new List<BaseStructure>();
        foreach (BaseStructure s in spriteOffStructures)
        {
            if (whatUnitIsInThisLocation(s.pos) == null)
            {
                s.turnOnCollider();
                tempSpriteOffStructures.Add(s);
            }
        }

        foreach (BaseStructure t in tempSpriteOffStructures)
        {
            spriteOffStructures.Remove(t);
        }
    }

/*    public int GameMaster.playerTurn
    {
        return GameMaster.playerTurn;
    }*/

    private string CombineCombatEnums(DamageType damageType, WeaponType weaponType)
    {
        return $"{damageType} {weaponType}";
    }


    public void addGameAction(
        byte actionType,
        byte gamePieceId,
        byte fromLocationX,
        byte fromLocationY,
        byte toLocationX,
        byte toLocationY)
    {

        //O is move, 1 is attack, 2 is capture, 3 produce unit

        //choose player_id based on the playerControl of the attacker, 2-player only (multiplayer improvements needed)
        Guid playerID = gameMaster.turnNumber%2 == 1 ? player1_id : player2_id;

        turnActionCount++;
        GameAction gameAction = new GameAction
        {
            match_id = match_id,
            turnNumber = gameMaster.turnNumber,
            actionNumber = turnActionCount,
            actionType = actionType,
            gamePieceId = gamePieceId,
            fromLocationX = fromLocationX,
            fromLocationY = fromLocationY,
            toLocationX = toLocationX,
            toLocationY = toLocationY,
            playerID = playerID
        };
        //Debug.Log($"Adding game action {turnActionCount} of type {actionType} for turn number {gameMaster.turnNumber} to the game actions list with values {gamePieceId}, {fromLocationX}, {fromLocationY}, {toLocationX}, {toLocationY}.");
        gameActions.Add(gameAction);
    }

    public (List<GameAction> gameActions, long preTurnHash, long postTurnHash) endTurn(int playerNum)
    {
        long tempPreTurnHash = preTurnHash;
        long tempPostTurnHash = ComputeGameStateHash_v1();
        //Debug.Log($"End of turn gameStateHash: {tempPostTurnHash}");

        clearMovement();
        clearSelectedUnit();
        turnActionCount = 0;
        if(gameActions.Count==0)
            Debug.LogWarning("FLAG: No game actions to return.");
        List<GameAction> tempGameActions = new List<GameAction>(gameActions);
        gameActions.Clear();
        preTurnHash = tempPostTurnHash;
        return (tempGameActions, tempPreTurnHash, tempPostTurnHash);
    }

    public List <BaseStructure> GetStructures(int? player)
    {
        GameObject[] structuresGameObjects = GameObject.FindGameObjectsWithTag("BaseStructureTag");
        if(structuresGameObjects.Length == 0)
        {
            Debug.LogError("No structures with tag found.");
            return new List<BaseStructure>();
        }
        List <BaseStructure> structures = new List<BaseStructure>();
        foreach (GameObject structuresGameObject in structuresGameObjects) {
            if (player == null)
                structures.Add(structuresGameObject.GetComponent<BaseStructure>());
            else
                if (structuresGameObject.GetComponent<BaseStructure>().playerControl == player)
                    structures.Add(structuresGameObject.GetComponent<BaseStructure>());
        }
        return structures;
    }

    public List<BaseStructure> GetProductionStructures(int? player)
    {
        List<BaseStructure> structures = GetStructures(player);
        List<BaseStructure> productionStructures = new List<BaseStructure>();
        foreach (BaseStructure structure in structures)
        {
            if (structure.IsProduction())
            {
                //Debug.Log($"Checking production structure, has playerControl {structure.playerControl}");
                if (player == null)
                    productionStructures.Add(structure);
                else
                    if (structure.playerControl == player)
                    productionStructures.Add(structure);
            }
        }
        //Debug.Log($"Number Production Structures: {productionStructures.Count}");
        return productionStructures;
    }

    public static long ComputeGameStateHash_v1()
    {
        long hash = 0;
        GameObject[] units = GameObject.FindGameObjectsWithTag("BaseUnitTag");
        GameObject[] structures = GameObject.FindGameObjectsWithTag("BaseStructureTag");

        //Debug.Log($"Units: {units.Length}, Structures: {structures.Length}");

        //GameObject gamePieces = units.Concat(structures).ToArray();

        //find numerical hash for each unit
        foreach (var listUnit in units)
        {
            //if type BaseUnit convert to baseunit
            BaseUnit unit = listUnit.GetComponent<BaseUnit>();

            long healthMultiplier = unit.healthCurrent == unit.healthMax ? 1 : unit.healthCurrent;
            long unitHash = (long)(unit.gamePieceId+1)
                           * (unit.playerControl + 1)
                           * (unit.pos.x + 1)
                           * (unit.pos.y + 1)
                           * healthMultiplier;

            //Debug.Log($"Unit Hash: {unitHash}");
            hash += unitHash;
        }

        foreach (var listStructure in structures)
        {
            //if type BaseStructure convert to baseunit
            BaseStructure structure = listStructure.GetComponent<BaseStructure>();

            long healthMultiplier = structure.captureHealth == structure.maxCaptureHealth ? 1 : structure.captureHealth;
            long structureHash = (long)(structure.gamePieceId+1)
                               * (structure.playerControl + 1)
                               * (structure.pos.x + 1)
                               * (structure.pos.y + 1)
                               * healthMultiplier;
            hash += structureHash;
        }
        return hash;
    }

    public void generateInitHash()
    {
        
        preTurnHash = ComputeGameStateHash_v1();
        //Debug.Log($"Generating initial hash {preTurnHash}");
    }

    private IEnumerator waitGenerateInitHash()
    {
        // Wait until the next frame to ensure all Start() methods are called
        yield return null;
        generateInitHash();
    }

    public void setMatchId(Guid matchId)
    { 
        match_id = matchId;
        //assuming that setting of match_id means we're doing a server match so we're turning off luck until we have a rand seed management implementation.
        luckOn = false;
    }

    public void SaveArrayToCSV(string fileName, int[,] array)
    {
        StringBuilder sb = new StringBuilder();
        int rows = array.GetLength(0);
        int cols = array.GetLength(1);

        for (int j = cols-1; j >=0; j--)
        {
            for (int i = rows-1; i >=0; i--)
            {

                sb.Append(array[i, j]);

                if (i>0)
                    sb.Append(",");
            }
            sb.AppendLine();
        }

        string filePath = Path.Combine(Application.persistentDataPath, fileName);
        File.WriteAllText(filePath, sb.ToString());

        //Debug.Log($"CSV saved to: {filePath}");
    }
    public int[,] populateSentusDefenceGrid(int distance, int searchType)
    {
        int xMax = structureGrid.GetLength(0);
        int yMax = structureGrid.GetLength(1);
        //Debug.Log($"Structure size is {xMax}, {yMax}");

/*        if (searchType == 1)
            Debug.Log("performing pyramid search for distance: " + distance);
        if (searchType == 0)
            Debug.Log("performing square search for distance: " + distance);*/

        defenceGridInt = new int[xMax, yMax];

        //Debug.Log($"defenceGridInt size: {defenceGridInt.GetLength(0)},{defenceGridInt.GetLength(1)}");
        foreach (BaseStructure s in structureGrid)
        {
            if (s != null && s.gamePieceId == 200)
            {
                int x = s.pos.x;
                int y = s.pos.y;
                //Debug.Log($"Checking Structure at {x},{y}");
                //defenceGridInt[x, y] += 1;
                for (int i = -distance; i <= distance; i++)
                {
                    for (int j = -distance; j <= distance; j++)
                        if (x + i >= 0 && x + i < xMax && y + j >= 0 && y + j < yMax)
                        {
                            //Debug.Log($"Searching {x},{y}, indexes: {i},{j}");
                            //square search
                            if (searchType == 0)
                            {
                                defenceGridInt[x + i, y + j] += 1;

                            }
                            //pyramid search
                            else if (searchType == 1 && Math.Abs(i) + Math.Abs(j) <= distance)
                                defenceGridInt[x + i, y + j] += 1;
                        }
                }
            }
        }
        return defenceGridInt;
    }

    public double GetSentusDefenceMultiplier (Vector2Int pos)
    {
        int x = pos.x;
        int y = pos.y;
        if (defenceGridInt==null || defenceGridInt[x, y] < 0)
        {
            Debug.LogWarning("Sentus Defence Grid not properly initialized");
            return 0;
        }
        else if (defenceGridInt[x,y] >= 3){
            return 3 * defenceMultiplier/100;
        }else if (defenceGridInt[x,y]>= 0)
        {
            return defenceGridInt[x, y] * defenceMultiplier/100;
        }
        return 0;
    }

    public void createVirixSeed(Vector2Int pos)
    {
        BaseUnit seed = PrefabManager.getBaseUnitFromName("seed", 1);
        //seed.playerControl = GameMaster.playerTurn;
        seed = gameMaster.GetInstantiateUnit(seed, pos, null);
        seed.setNonExhausted(true);

        

    }

    public static Vector2Int GetEnemyCommand(int p)
    {
        if(GameMaster.numPlayers ==2)
        {
            if (p == 1)
                return commandStructures[2].pos;
            else if (p == 2)
                return commandStructures[1].pos;
            else
            {
                Debug.LogError("Asking to get Enemy Command for a player not 1 or 2");
                return commandStructures[p].pos;
            }
        }
        else
        {
            Debug.LogError("Get Enemy Command but more than 2 players");
            return commandStructures[p].pos;
        }
    }

    public bool IsInBounds(Vector2Int pos)
    {
        return (pos.x >= 0 && pos.y >= 0 && pos.x < gridX && pos.y < gridY);
    }

    private IEnumerator waitGenerateSaveArrayToCSV()
    {
        // Wait until the next frame to ensure all Start() methods are called
        yield return null;
        int[,] structureGridInt = new int[structureGrid.GetLength(0), structureGrid.GetLength(1)];
        foreach(BaseStructure s in structureGrid)
        {
            if(s != null)
                structureGridInt[s.pos.x, s.pos.y] = s.gamePieceId;
        }
        SaveArrayToCSV("StructureGrid.csv", structureGridInt);
        //SaveArrayToCSV("SentusDefenceGridPyramid3.csv", populateSentusDefenceGrid(3, 1));
        //SaveArrayToCSV("SentusDefenceGridSquare3.csv", populateSentusDefenceGrid(3, 0));
        SaveArrayToCSV("SentusDefenceGridSquare2.csv", populateSentusDefenceGrid(2, 0));
        //SaveArrayToCSV("SentusDefenceGridPyramid4.csv", populateSentusDefenceGrid(4, 1));
        //SaveArrayToCSV("SentusDefenceGridSquare4.csv", populateSentusDefenceGrid(4, 0));
    }

    public Vector3 GetWorldPositionFromGrid(Vector2Int gridPos)
    {
        // Assumes each tile is 1 unit wide and tall, and origin is at (0, 0)
        return new Vector3(gridPos.x, gridPos.y, 0f);
    }
}
