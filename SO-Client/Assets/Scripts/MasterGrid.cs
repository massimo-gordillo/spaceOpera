using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using MessagePack
//using System.Text.Json.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;


public class MasterGrid : MonoBehaviour
{
    bool drawing = false;
    Guid match_id;
    Guid player1_id;
    Guid player2_id;

    public int gridX;
    public int gridY;
    public BaseUnit selectedUnit;
    public BaseUnit drawMovementUnit;
    //public MasterGrid masterGrid;
    public BaseUnit[,] unitGrid; //2D array
    public BaseStructure[,] structureGrid; //2D array
    public byte[,] terrainGrid;
    //public TerrainCell terrainCell;
    public List<BaseUnit> attackableUnits;
    public List<BaseStructure> spriteOffStructures;
    //public List<BaseStructure> resourceStructures;
    public GameObject[] allUnits;
    public GameMaster gameMaster;
    //public int playerTurn;
    private Dictionary<byte, AttributesTile> tileAttributes;
    private Dictionary<string, Dictionary<string, double>> combatMultipliers;
    private double defenceMultiplier;
    private double firebackMultiplier;
    private double attackLuckRange; //should probably rename, too close to attackRange
    private bool luckOn = false;

    public Transform movementSquareList;
    public MovementSquare moveSquare;
    //public bool[,] checkedCells;
    public GameObject rangeOutlineSprite;

    List<GameAction> gameActions = new List<GameAction>();
    public short turnActionCount = 0;

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

        attackLuckRange = 10;
        defenceMultiplier = 4.0;
        firebackMultiplier = 0.7;
        //Dictionary<(byte, byte), GamePieceInfo> gameStateDict = ConvertGameStateToList();
        //printUnitGrid();
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
        Debug.Log("Terrain set successfully.");
    }

    public void unitHasBeenClicked(BaseUnit unit)
    {
        print("You've clicked on " + unit.GetInstanceID());
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
            }elseif (getSelectedUnit() == null && unit.getNonExhausted() && unit.getPlayerControl() == gameMaster.getPlayerTurn()) //what if you don't control this unit?
            */
            if (getSelectedUnit() == unit && unit.movementNonExhausted == true)
            {
                clearSelectedUnit();
            }

            //if there is no selected unit and the clicked unit isn't exhausted & player controls that unit.
            else if (getSelectedUnit() == null && unit.getNonExhausted() && unit.getPlayerControl() == gameMaster.getPlayerTurn()) //what if you don't control this unit?
            {
                setSelectedUnit(unit);
                presentChoicesAtLocation(unit.xPos, unit.yPos, unit);

                if (unit.movementNonExhausted == true) //if the unit hasn't moved already this turn.
                {
                    if (!drawing)
                    {
                        //drawing = true;
                        selectedUnit = unit;
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
            } else if (getSelectedUnit() == null && unit.getPlayerControl() != gameMaster.getPlayerTurn() && !attackableUnits.Contains(unit))
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
        addGameAction(1, (byte)attacker.gamePieceId, (byte)attacker.xPos, (byte)attacker.yPos, (byte)defender.xPos, (byte)defender.yPos);



        double damagePreLuck = getDamageBeforeLuck(attacker, defender, false);
        double finalDamage = damagePreLuck;
        if (luckOn)
            finalDamage = getDamageAfterLuck(damagePreLuck);
        
        
        defender.takeDamage(finalDamage);
        Debug.Log($"Unit attacks with preluck damage {damagePreLuck} dealing {(int)finalDamage} damage with luck factor of {finalDamage / damagePreLuck}");
        if (canUnitAttack(defender, attacker) && defender.canFireBack && defender.attackRange >= attacker.attackRange)
        {
            double defenderFireBackDamage = getDamageBeforeLuck(defender, attacker, true);
            if (luckOn)
                defenderFireBackDamage = getDamageAfterLuck(defenderFireBackDamage);

            attacker.takeDamage(defenderFireBackDamage);
            //Debug.Log($"Defending Unit fires back with {defenderFireBackDamage}");
        } else
            Debug.Log($"Can defending Unit fire back: {defender.canFireBack}, or is it out of range: {defender.attackRange} < {attacker.attackRange}");
    }

    public double getDamageBeforeLuck(BaseUnit attacker, BaseUnit defender, bool firingBack)
    {
        //Debug.Log($"Unit attacks, dealing {attacker.baseDamage} damage, healthcurrent is {attacker.healthCurrent} and healthmax is { attacker.healthMax} with a health ratio of {(double)attacker.healthCurrent / attacker.healthMax}");
        double baseDamage = getAttackerBaseDamage(attacker);
        double multiplier = getDamageMultiplier(attacker, defender);
        double defenceVal = getDefenceValueForDefender(defender);
        
        //Debug.Log($"defenceVal for defender {defender.GetInstanceID()} is {defenceVal}");

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
        Debug.Log($"Attacker: {attacker.name}, Defender: {defender.name}, baseDamage: {baseDamage}, multiplier: {multiplier}, defenceVal: {defenceVal}, firebackMultiplier: {firebackMultiplier}");
        if (!firingBack)
            return baseDamage * multiplier * defenceVal;
        else
            return baseDamage * multiplier * defenceVal * firebackMultiplier;
    }

    public double getDamageAfterLuck(double damageInput)
    {
        if (attackLuckRange % 2 == 0)
        {
            int luckPercentageBonus = UnityEngine.Random.Range(0, (int)attackLuckRange + 1) - (int)attackLuckRange / 2;
            return damageInput * (1 + (double)luckPercentageBonus / 100);
        }
        else
        {
            Debug.LogError($"attackLuckRange is not an even number! cannot compute random range calculation.");
            return damageInput;
        }
    }

    //return % damage taken by defending unit (ceiling, + attackLuckRange/2 percentage)
    public double getAttackLuckCeiling(double damageInput, double maxHealth)
    {
        double attackLuckCeiling = attackLuckRange / 200;
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

    //return % damage taken by defending unit (floor, - attackLuckRange/2 percentage)
    public double getAttackLuckFloor(double damageInput, double maxHealth)
    {
        //the negative side of attackLuckRange
        double attackLuckFloor = (-0.5 * attackLuckRange) / 100;
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
        if (attacker != null && defender != null)
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

    public void captureStructure(BaseStructure structure)
    {
        if (selectedUnit != null)
        {
            //print("capture health: " + structure.captureHealth + "selectedUnithealth " + selectedUnit.healthCurrent);
            if (selectedUnit.healthCurrent < structure.captureHealth) //do we want to do this math within BaseStructu
                structure.captureHealth = structure.captureHealth - selectedUnit.healthCurrent;
            else
                structure.switchAlliance(selectedUnit.getPlayerControl());
            //2 is capture structure
            addGameAction(2, (byte)selectedUnit.gamePieceId, (byte)selectedUnit.xPos, (byte)selectedUnit.yPos, (byte)structure.xPos, (byte)structure.yPos);
            exhaustSelectedUnit(selectedUnit, true);
        }
        else
            print("attempting to capture structure but no selectedUnit to capture it.");
    }

    public void attackButtonPressed()
    {

    }

    public void undoMovementButtonPressed()
    {
        selectedUnit.undoingMovement = true;
        if (selectedUnit.oldXPos != null && selectedUnit.oldYPos != null)
            moveTarget((int)selectedUnit.oldXPos, (int)selectedUnit.oldYPos);
    }



    public void drawMovement(BaseUnit mTarget)
    {
        drawing = true;
        Debug.Log($"Setting {mTarget} as drawMovementUnit");
        drawMovementUnit = mTarget;
        int movementRange = mTarget.movementRange;
        int attackRange = mTarget.attackRange;
        int totalRange = movementRange + attackRange;
        int xpos = (int)mTarget.xPos;
        int ypos = (int)mTarget.yPos;
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
            cellsToCheck.Enqueue((new Vector2Int(xpos + 1, ypos + 1), movementRange + 1));//assuming unit only has 1 attack range for the first A* search.
            //List<Queue<Vector2Int>> squareQueuesList = AStarSearchRecursive(mTarget, movementRange, attackRange, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>() }, true);
            List<Queue<Vector2Int>> squareQueuesList = null;
            if (attackRange >= 1)
                squareQueuesList = AStarSearchRecursive(mTarget, movementRange, 1, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>() });
            else
                squareQueuesList = AStarSearchRecursive(mTarget, movementRange, 0, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>() });
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

                List<Queue<Vector2Int>> squareQueuesListRangedAttack = AStarSearchRecursive(mTarget, 0, attackRange - 1, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>() });


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
            //List<Queue<Vector2Int>> movementSquareQueuesList = AStarSearchRecursive(mTarget, movementRange, 0, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>()}, true);
            List<Queue<Vector2Int>> movementSquareQueuesList = AStarSearchRecursive(mTarget, movementRange, 0, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>()});
            DrawSquaresFromSearch(movementSquareQueuesList);

            cellsToCheck = new Queue<(Vector2Int, int)>();
            cellsToCheck.Enqueue((new Vector2Int(xpos + 1, ypos + 1), attackRange));
            checkedCells = new bool[gridX + 2, gridY + 2];
            checkedCells[xpos + 1, ypos + 1] = true;
            //List<Queue<Vector2Int>> attackOutlineLocationsQueuesList = AStarSearchRecursive(mTarget, 0, attackRange, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>()}, true);
            List<Queue<Vector2Int>> attackOutlineLocationsQueuesList = AStarSearchRecursive(mTarget, 0, attackRange, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>()});
            ManualTestAndPrintLogQueueSizes(attackOutlineLocationsQueuesList);
            DrawAttackOutline(attackOutlineLocationsQueuesList, mTarget);
        }
    }



    public List<Queue<Vector2Int>> AStarSearchRecursive(
    BaseUnit mTarget,
    int movementRange,
    int attackRange,
    Queue<(Vector2Int cell, int range)> cellsToCheck,
    bool[,] checkedCells,
    List<Queue<Vector2Int>> squareQueuesList)
    {
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
        for (int direction = 0; direction < 4; direction++)
        {
            Vector2Int adjacentCell = checkingCell + sinDir(direction);
            int xCheck = adjacentCell.x;
            int yCheck = adjacentCell.y;

            // Check grid bounds and if the cell is already checked
            if (xCheck >= 0 && xCheck < gridX + 2 && yCheck >= 0 && yCheck < gridY + 2 && !checkedCells[xCheck, yCheck])
            {
                // Mark cell as checked
                checkedCells[xCheck, yCheck] = true;

                // Legal move validation
                if (legalMove(xCheck - 1, yCheck - 1, mTarget) >= 1 && movementRange > 0) //if its a legal move AND the unit isn't only searching for additional attack locations
                {
                    // Enqueue the cell with updated range if not already in the queue
                    if (!cellsToCheck.Contains((new Vector2Int(xCheck, yCheck), range - 1)))
                        cellsToCheck.Enqueue((new Vector2Int(xCheck, yCheck), range - 1));

                    // Differentiate between movement and attack squares based on range
                    if (legalMove(xCheck - 1, yCheck - 1, mTarget) == 1 && range > attackRange) //totalRange - movementRange
                    {
                        squareQueuesList[0].Enqueue(new Vector2Int(xCheck, yCheck)); // Movement square
                    }
                    else if (range <= attackRange) //totalRange - movementRange
                    {
                        squareQueuesList[1].Enqueue(new Vector2Int(xCheck, yCheck)); // Attack square
                    }

                    // Handle structures in the current cell
                    BaseStructure structure = whatStructureIsInThisLocation(xCheck - 1, yCheck - 1);
                    if (structure != null)
                        squareQueuesList[2].Enqueue(new Vector2Int(xCheck, yCheck)); // Structure square
                }
                else if (IsCellInBounds(xCheck, yCheck))
                {
                    BaseUnit unitAtLocation = whatUnitIsInThisLocation(xCheck - 1, yCheck - 1);

                    // If it's not the player's turn or the unit can be attacked, mark as attack square. Also, if there's no unit there and you can attack and move.
                    if ((mTarget.playerControl != getPlayerTurn() || canUnitAttack(mTarget, unitAtLocation) || unitAtLocation == null) && mTarget.canMoveAndAttack)
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
        return AStarSearchRecursive(mTarget, movementRange, attackRange, cellsToCheck, checkedCells, squareQueuesList);
    }

    // Helper function to check if a cell is in bounds
    private bool IsCellInBounds(int x, int y)
    {
        return (x - 1) < gridX && (x - 1) >= 0 && (y - 1) < gridY && (y - 1) >= 0;
    }

    void ManualTestAndPrintLogQueueSizes(List<Queue<Vector2Int>> squareQueuesList)
    {
        // Ensure the list has exactly 3 queues
        if (squareQueuesList == null || squareQueuesList.Count != 3)
        {
            Debug.LogError($"The squareQueuesList does not contain exactly 3 queues, it contains only {squareQueuesList.Count}");
            return;
        }

        // Deconstruct the list into individual queues
        Queue<Vector2Int> movementQueue = squareQueuesList[0];
        Queue<Vector2Int> attackQueue = squareQueuesList[1];
        Queue<Vector2Int> structureQueue = squareQueuesList[2];

        // Print the count of items in each queue
        Debug.Log($"Movement Queue Size: {movementQueue.Count}");
        Debug.Log($"Attack Queue Size: {attackQueue.Count}");
        Debug.Log($"Structure Queue Size: {structureQueue.Count}");
    }

    void DrawSquaresFromSearch(List<Queue<Vector2Int>> squareQueuesList)
    {
        // Throw an error if the list has more than 3 items
        if (squareQueuesList == null)
        {
            Debug.Log($"The squareQueuesList is null. Filling with empty lists");
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
            Vector2Int cell = movementQueue.Dequeue();
            drawMoveSquare(cell.x - 1, cell.y - 1, drawMovementUnit.playerControl == getPlayerTurn());
        }

        // Draw attack squares
        while (attackQueue.Count > 0)
        {
            Vector2Int cell = attackQueue.Dequeue();
            drawDamageSquare(cell.x - 1, cell.y - 1, drawMovementUnit.playerControl == getPlayerTurn());
        }

        // Turn off structure colliders
        while (structureQueue.Count > 0)
        {
            Vector2Int cell = structureQueue.Dequeue();
            BaseStructure s = whatStructureIsInThisLocation(cell.x - 1, cell.y - 1);
            if (s != null)
            {
                turnOffStructureCollider(s);
            }
        }

    }

    /*public void DrawAttackOutline(List<Queue<Vector2Int>> attackOutlineSquareQueuesList, BaseUnit mTarget)
    {
        // Ensure the list has exactly 3 queues
        if (attackOutlineSquareQueuesList == null || attackOutlineSquareQueuesList.Count != 3)
        {
            Debug.LogError("The attackOutlineSquareQueuesList does not contain exactly 3 queues.");
            return;
        }

        Queue<Vector2Int> attackQueue = attackOutlineSquareQueuesList[1];

        if (attackQueue.Count == 0)
        {
            Debug.Log("No attack locations to draw outline for.");
            return;
        }


        while (attackQueue.Count > 0)
        {
            Vector2Int cell = attackQueue.Dequeue();
            //if there's a unit at this location, mark it with an attack square
            BaseUnit unitAtLocation = whatUnitIsInThisLocation(cell.x - 1, cell.y - 1);
            if (unitAtLocation != null && unitAtLocation.playerControl != getPlayerTurn())
            {
                drawDamageSquare(cell.x - 1, cell.y - 1, drawMovementUnit.playerControl == getPlayerTurn());
                //if there's a structure at this location, turn off its collider
                BaseStructure s = whatStructureIsInThisLocation(cell.x - 1, cell.y - 1);
                if (s != null)
                {
                    turnOffStructureCollider(s);
                }
            }

            Vector2Int unitLocation = new Vector2Int(mTarget.xPos, mTarget.yPos);
            Vector2Int attackLocation = new Vector2Int(cell.x - 1, cell.y - 1);
            int xDiff = attackLocation.x - unitLocation.x;
            int yDiff = attackLocation.y - unitLocation.y;

            Debug.Log($"Unit Location: {unitLocation}");
            Debug.Log($"Attack Location: {attackLocation}");
            Debug.Log($"xDiff: {xDiff}, yDiff: {yDiff}");

            //GameObject attackOutline = new RangeOutlineSprite();

            if (Mathf.Abs(xDiff) + Mathf.Abs(yDiff) == mTarget.attackRange)
            {
                if (xDiff == 0)
                    Instantiate(rangeOutlineSprite, new Vector2(attackLocation.x, (float)(attackLocation.y - 0.5)), Quaternion.identity, movementSquareList);
            }

        }

    }*/

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
            Debug.Log("No attack locations to draw outline for.");
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
            BaseUnit unitAtLocation = whatUnitIsInThisLocation(cell.x - 1, cell.y - 1);
            if (unitAtLocation != null && unitAtLocation.playerControl != getPlayerTurn())
            {
                drawDamageSquare(cell.x - 1, cell.y - 1, drawMovementUnit.playerControl == getPlayerTurn());
/*                BaseStructure s = whatStructureIsInThisLocation(cell.x - 1, cell.y - 1);
                if (s != null)
                {
                    turnOffStructureCollider(s);
                }*/
            }

            Vector2Int unitLocation = new Vector2Int(mTarget.xPos, mTarget.yPos);
            Vector2Int attackLocation = new Vector2Int(cell.x - 1, cell.y - 1);
            int xDiff = attackLocation.x - unitLocation.x;
            int yDiff = attackLocation.y - unitLocation.y;

            Debug.Log($"Unit Location: {unitLocation}, Attack Location: {attackLocation}, xDiff: {xDiff}, yDiff: {yDiff}");
            Debug.Log($"Calculated range: {Mathf.Abs(xDiff) + Mathf.Abs(yDiff)}, Target attack range: {mTarget.attackRange}");

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





    public void drawMoveSquare(int x, int y, bool isControllersTurn)
    {
        MovementSquare blueSquare = moveSquare;
        Color color = new Color(0.678f, 0.847f, 0.902f, 0.6f);
        blueSquare.setColor(color);
        blueSquare.boxCollider2D.enabled = isControllersTurn;
        blueSquare.stripeSprite.gameObject.SetActive(!isControllersTurn);
        Instantiate(blueSquare, new Vector2(x, y), Quaternion.identity, movementSquareList);
    }

    public void drawDamageSquare(int x, int y, bool isControllersTurn)
    {
        MovementSquare redSquare = moveSquare;
        Color c = new Color(1.0f, 0.6f, 0.6f, 0.6f);
        redSquare.setColor(c);
        redSquare.boxCollider2D.enabled = false;
        redSquare.stripeSprite.gameObject.SetActive(!isControllersTurn);
        Instantiate(redSquare, new Vector2(x, y), Quaternion.identity, movementSquareList);
    }

    public void checkEnemiesInRange(BaseUnit unit) 
    {
        int xPos = (int)unit.xPos;
        int yPos = (int)unit.yPos;
        int range = unit.attackRange;

        Queue<(Vector2Int cell, int range)> cellsToCheck = new Queue<(Vector2Int, int)>();
        cellsToCheck.Enqueue((new Vector2Int(xPos + 1, yPos + 1), range));

        bool[,] checkedCells = new bool[gridX + 2, gridY + 2];
        checkedCells[xPos + 1, yPos + 1] = true;
        List<Queue<Vector2Int>> squareQueuesList = AStarSearchRecursive(unit, 0, range, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>() });
        //ManualTestAndPrintLogQueueSizes(squareQueuesList);
        foreach (var cell in squareQueuesList[1])
        {
            BaseUnit unitInLocation = whatUnitIsInThisLocation(cell.x - 1, cell.y - 1);
            if (unitInLocation != null && unitInLocation != unit && unitInLocation.playerControl != unit.playerControl)
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
        int tileDefenceValue = getTileDefenceValueInt(defender.xPos, defender.yPos);
        double floor = getAttackLuckFloor(damageBeforeLuck, defender.healthMax);
        double ceiling = getAttackLuckCeiling(damageBeforeLuck, defender.healthMax);
        if(luckOn)
            defender.showCombatTooltip(tileDefenceValue, floor, ceiling);
        else
            defender.showCombatTooltip(tileDefenceValue, damageBeforeLuck, damageBeforeLuck);
        Debug.Log($"For defender {defender.GetInstanceID()}, Tooltip displays floor: {floor}, ceiling: {ceiling}, base dmg before luck: {damageBeforeLuck}.");
    }

    public BaseUnit whatUnitIsInThisLocation(int x, int y)
    {

        if (x >= 0 && y >= 0 && x < gridX && y < gridY)
            if (unitGrid[x, y] is BaseUnit)
            {
                //Debug.Log($"Checking for unit at location {x},{y}");
                if (unitGrid[x, y] == null)
                    Debug.LogError($"UnitGrid at location {x},{y} is null");
                return unitGrid[x, y];
            }
            else
                return null;
        else
        {
            print("Out of Bounds in whatUnit");
            return null;
        }

    }

    public BaseStructure whatStructureIsInThisLocation(int x, int y)
    {
        if (x >= 0 && y >= 0 && x < gridX && y < gridY)
            if (structureGrid[x, y] is BaseStructure)
                return structureGrid[x, y];
            else
                return null;
        else
            return null;

    }

    public byte whatTileIsInThisLocation(int x, int y)
    {
        return terrainGrid[x, y];
    }

    public double getTileDefenceValueMultiplier(int x, int y)
    {
        return 1 - (double)getTileDefenceValueInt(x, y) / 100 * defenceMultiplier;
    }

    public int getTileDefenceValueInt(int x, int y)
    {
        AttributesTile tile;
        if (tileAttributes.TryGetValue(whatTileIsInThisLocation(x, y), out tile))
        {
            //Debug.Log($"Tile at location {x},{y} for byteValue {whatTileIsInThisLocation(x, y)} has defenceValue {tile.defenceValue}");
            return tile.defenceValue;
        }
        else
        {
            Debug.LogError($"Cannot get tile at location {x},{y} for byteValue {whatTileIsInThisLocation(x, y)}");
            return 0;
        }
    }

    public double getDefenceValueForDefender(BaseUnit defender)
    {
        if (defender.unitTerrainType == UnitTerrainType.Air)
            return 1;
        else
        {
            double tileMuiltiplier = getTileDefenceValueMultiplier(defender.xPos, defender.yPos);

            Debug.Log($"TileDefenceMultiplier: {tileMuiltiplier}");
            return tileMuiltiplier;
        }
    }


    public bool canUnitMoveToByteValue(BaseUnit unit, byte b)
    {
        if (!tileAttributes.TryGetValue(b, out AttributesTile a))
            Debug.LogWarning($"Key '{b}' was not found in the dictionary.");
        bool moveCheck = true;
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
        return moveCheck;
    }


    //this will return 1 if a legal move, 0 if illegal move, 2 if allied unit but not a landing square.
    //-1 if it's the same unit
    //eventually this can decrement the number of additional movements (due to terrain) the unit has but that's for later.
    public int legalMove(float xPos, float yPos, BaseUnit mTarget)
    {
        int x = (int)xPos;
        int y = (int)yPos;

        if (x < 0 || y < 0 || x >= gridX || y >= gridY)
            return 0;
        else if (!canUnitMoveToByteValue(mTarget, whatTileIsInThisLocation(x, y)))
            return 0;
        else if (whatUnitIsInThisLocation(x, y) == null)
            return 1;
        else if (whatUnitIsInThisLocation(x, y) == mTarget)
            return -1;
        else if (drawMovementUnit != null && drawing) //if we're drawing movement squares
        {
            if (whatUnitIsInThisLocation(x, y).playerControl == drawMovementUnit.playerControl)
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

    public Vector2Int sinDir(int d)//0 up, 1 right, 2 down, 3 left
    {
        return new Vector2Int((int)(Mathf.Sin(d * Mathf.PI / 2)), (int)(Mathf.Sin((d + 1) * Mathf.PI / 2)));
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

    public void moveTarget(int x, int y)
    {
        //print("moveTarget. SelectedUnit is: "+selectedUnit);
        if (selectedUnit != null && whatUnitIsInThisLocation(x, y) == null)
        {
            clearAttackableUnits();
            selectedUnit.oldXPos = selectedUnit.xPos;
            selectedUnit.oldYPos = selectedUnit.yPos;
            // do we want to try and define this just within the if statement?
            BaseStructure oldStructure = whatStructureIsInThisLocation(selectedUnit.xPos, selectedUnit.yPos);
            if (oldStructure != null)
            {
                oldStructure.turnOnCollider();
                oldStructure.resetCaptureHealth();
            }
            selectedUnit.transform.position = new Vector2(x, y); //you can't define this as a Vector2Int bc the game engine requires conversion to Vector3

            // if you're undoing movement, don't add it to the action list
            if (!selectedUnit.undoingMovement)
                addGameAction(0, (byte)selectedUnit.gamePieceId, (byte)selectedUnit.xPos, (byte)selectedUnit.yPos, (byte)x, (byte)y);

            removeUnitInGrid(selectedUnit.xPos, selectedUnit.yPos);
            setUnitInGrid(x, y, selectedUnit);

            /*if (selectedUnit is BaseUnit) //why is this check here? MG: 24-05-08
            {
                presentChoicesAtLocation(x, y, selectedUnit);
                //checkEnemiesInRange(selectedUnit.xPos, selectedUnit.yPos, selectedUnit.attackRange);
                //structure = manageStructureAtLocation(selectedUnit.xPos, selectedUnit.yPos);
            }

            if (structure == null) //after moving, if the unit is not on a structure AND
            {
                gameMaster.hideChoicePanel();
                if (attackableUnits.Count == 0) //and there is no nearby units, unselect it.
                {
                    //selectedUnit.setNonExhausted(false);
                    exhaustSelectedUnit(selectedUnit,true);
                }
            }*/
            if (!selectedUnit.undoingMovement)
            {
                selectedUnit.movementNonExhausted = false;
                presentChoicesAtLocation(x, y, selectedUnit);
            }
            else
            {
                selectedUnit.movementNonExhausted = true;
                selectedUnit.undoingMovement = false;
                selectedUnit.oldXPos = null;
                selectedUnit.oldYPos = null;
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
    }

    //you should do better position checking but this is fine for now
    public void setUnitInGrid(int x, int y, BaseUnit unit)
    {
        //unitGrid[gridX-x, gridY-y] = unit;
        unitGrid[x, y] = unit;
        unit.xPos = x;
        unit.yPos = y;
    }

    public void setStructureInGrid(int x, int y, BaseStructure structure)
    {
        //unitGrid[gridX-x, gridY-y] = unit;
        structureGrid[x, y] = structure;
        structure.xPos = x;
        structure.yPos = y;
    }

    public void deleteUnit(BaseUnit deadUnit)
    {
        removeUnitInGrid(deadUnit.xPos, deadUnit.yPos);
        //if not null call the function
        whatStructureIsInThisLocation(deadUnit.xPos, deadUnit.yPos)?.resetCaptureHealth();
        Destroy(deadUnit.gameObject);
        //Destroy(deadUnit.GetComponent<UnitSprite>());
    }

    public void removeUnitInGrid(int x, int y)
    {
        //unitGrid[gridX-x, gridY-y] = null;
        unitGrid[x, y] = null;
    }



    public BaseUnit getSelectedUnit()
    {
        return selectedUnit;
    }

    public void setSelectedUnit(BaseUnit unit)
    {
        selectedUnit = unit;
    }

    public void exhaustSelectedUnit(BaseUnit unit, bool exhaust)
    {
        if (selectedUnit == unit)
        {
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
        selectedUnit = null;
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
            if (unit.getPlayerControl() == playerTurn)
            {
                unit.setNonExhausted(true);
                unit.oldXPos = null;
                unit.oldYPos = null;

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
            if (unit.getPlayerControl() == player)
            {
                unit.setNonExhausted(false);
                unit.oldXPos = null;
                unit.oldYPos = null;
            }
            else
                unit.deleteMe();
        }
    }

    public int numCapturedResourceLocations(int player)
    {
        int num = 0;
        for (int i = 0; i < gridX; i++)
            for (int j = 0; j < gridY; j++)
                if (structureGrid[i, j] != null)
                    if (structureGrid[i, j].playerControl == player)
                        num++;
        return num;
    }

    public void presentChoicesAtLocation(int x, int y, BaseUnit unit)
    {
        if(unit.canMoveAndAttack || unit.movementNonExhausted)
            checkEnemiesInRange(unit);
        BaseStructure structure = manageStructureAtLocation(unit.xPos, unit.yPos);
        bool canStructureBeCapturedHere = (structure != null && structure.isCapturableBy(unit));
        if (canStructureBeCapturedHere)
        {
            gameMaster.selectedStructure = structure;
        }
        gameMaster.showUnitChoicePanel(attackableUnits.Count != 0, canStructureBeCapturedHere, !unit.movementNonExhausted);
        if (!unit.movementNonExhausted && attackableUnits.Count == 0 && !canStructureBeCapturedHere)
            exhaustSelectedUnit(unit, true);
    }

    public BaseStructure manageStructureAtLocation(int x, int y)
    {
        BaseStructure structure = whatStructureIsInThisLocation(x, y);
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
            if (whatUnitIsInThisLocation(s.xPos, s.yPos) == null)
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

    public int getPlayerTurn()
    {
        return gameMaster.getPlayerTurn();
    }

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
        Debug.Log($"Adding game action {turnActionCount} of type {actionType} to the game actions list with values {gamePieceId}, {fromLocationX}, {fromLocationY}, {toLocationX}, {toLocationY}.");
        gameActions.Add(gameAction);
    }

    public List<GameAction> endTurn(int playerNum)
    {
        refreshUnits(playerNum);
        clearMovement();
        clearSelectedUnit();
        turnActionCount = 0;
        if(gameActions.Count==0)
            Debug.Log("FLAG: No game actions to return.");
        List<GameAction> tempGameActions = new List<GameAction>(gameActions);
        gameActions.Clear();
        return tempGameActions;
    }

    public void setMatchId(Guid matchId)
    {
        Debug.Log("grid Setting match id to: " + matchId);
        match_id = matchId;
    }
}
