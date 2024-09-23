using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MasterGrid : MonoBehaviour
{
    bool drawing = false;

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
    private double attackLuckRange;

    public Transform movementSquareList;
    public MovementSquare moveSquare;
    public bool[,] checkedCells;
    public GameObject rangeOutlineSprite;

    // Called by GameMaster
    public void startup(int x, int y, byte[] tilemapByteArray,
        Dictionary<byte, AttributesTile> inputTileAttributes,
        Dictionary<string, Dictionary<string, double>> inputCombatMultipliers)
    {

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
        if (gridX <= 0 || gridY <= 0 || gridX * gridY != tilemapByteArray.Length)
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
                presentGameActionsAtLocation(unit.xPos, unit.yPos, unit);

                if (unit.movementNonExhausted == true) //if the unit hasn't moved already this turn.
                {
                    if (!drawing)
                    {
                        drawing = true;
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
            } else if (getSelectedUnit() == null && unit.getPlayerControl() != gameMaster.getPlayerTurn() && !attackableUnits.Contains(unit))
            {
                if (!drawing)
                {
                    drawing = true;
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
        double damagePreLuck = getDamageBeforeLuck(attacker, defender, false);
        double finalDamage = getDamageAfterLuck(damagePreLuck);

        defender.takeDamage((int)finalDamage);
        Debug.Log($"Unit attacks with preluck damage {damagePreLuck} dealing {finalDamage} damage with luck factor of {finalDamage / damagePreLuck}");
        if (canUnitAttack(defender, attacker) && defender.canFireBack)
        {
            double defenderFireBackDamage = getDamageBeforeLuck(defender, attacker, true);
            attacker.takeDamage((int)defenderFireBackDamage);
            Debug.Log($"Defending Unit fires back with {defenderFireBackDamage}");
        } else
            Debug.Log($"Defending Unit can fire back {defender.canFireBack}");
    }

    public double getDamageBeforeLuck(BaseUnit attacker, BaseUnit defender, bool firingBack)
    {
        //Debug.Log($"Unit attacks, dealing {attacker.baseDamage} damage, healthcurrent is {attacker.healthCurrent} and healthmax is { attacker.healthMax} with a health ratio of {(double)attacker.healthCurrent / attacker.healthMax}");
        double baseDamage = getAttackerBaseDamage(attacker);
        double multiplier = getDamageMultiplier(attacker, defender);
        double defenceVal = getDefenceValueForDefender(defender);
        Debug.Log($"defenceVal for defender {defender.GetInstanceID()} is {defenceVal}");
        //if they are the same type of unit, they deal a maximum of 70% after type multiplier (defence and luck calculation comes after) 
        if (attacker.unitName == defender.unitName)
        {
            if (!firingBack && baseDamage * multiplier > defender.healthMax * 0.70)
            {
                baseDamage = defender.healthMax * 0.70;
                multiplier = 1;
            } else if (firingBack && baseDamage * multiplier * defenceVal * firebackMultiplier > defender.healthMax * 0.50) //only 50% max if firing back.
            {
                return defender.healthMax * 0.50;
            }
        }
        if (!firingBack)
            return baseDamage * multiplier * defenceVal;
        else
            return baseDamage * multiplier * defenceVal * firebackMultiplier;
    }

    public double getDamageAfterLuck(double damageInput)
    {
        if (attackLuckRange % 2 == 0)
        {
            int luckPercentageBonus = Random.Range(0, (int)attackLuckRange + 1) - (int)attackLuckRange / 2;
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
        return attacker.baseDamage * ((double)attacker.healthCurrent / attacker.healthMax);
    }

    public bool canUnitAttack(BaseUnit attacker, BaseUnit defender)
    {
        if (attacker != null && defender != null)
        {
            if (defender.unitType == UnitType.Land)
                return attacker.canAttackLand;
            else if (defender.unitType == UnitType.Sea)
                return attacker.canAttackSea;
            else if (defender.unitType == UnitType.Air)
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
        
        checkedCells = new bool[gridX + 2, gridY + 2];
        checkedCells[xpos + 1, ypos + 1] = true;
        if (mTarget.canMoveAndAttack)
        {
            cellsToCheck.Enqueue((new Vector2Int(xpos + 1, ypos + 1), totalRange));
            List<Queue<Vector2Int>> squareQueuesList = AStarSearchRecursive(mTarget, movementRange, attackRange, cellsToCheck, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>() });
            DrawSquaresFromSearch(squareQueuesList);
        }
        else
        {
            cellsToCheck.Enqueue((new Vector2Int(xpos + 1, ypos + 1), movementRange));
            List<Queue<Vector2Int>> movementSquareQueuesList = AStarSearchRecursive(mTarget, movementRange, 0, cellsToCheck, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>() });
            DrawSquaresFromSearch(movementSquareQueuesList);

            cellsToCheck = new Queue<(Vector2Int, int)>();
            cellsToCheck.Enqueue((new Vector2Int(xpos + 1, ypos + 1), attackRange));
            List<Queue<Vector2Int>> attackOutlineLocationsQueuesList = AStarSearchRecursive(mTarget, 0, attackRange, cellsToCheck, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>() });
            DrawAttackOutline(attackOutlineLocationsQueuesList, mTarget);
        }
    }
    
    public void DrawAttackOutline(List<Queue<Vector2Int>> attackOutlineSquareQueuesList, BaseUnit mTarget)
    {
        // Ensure the list has exactly 3 queues
        if (attackOutlineSquareQueuesList == null || attackOutlineSquareQueuesList.Count != 3)
        {
            Debug.LogError("The attackOutlineSquareQueuesList does not contain exactly 3 queues.");
            return;
        }

        Queue<Vector2Int> attackQueue = attackOutlineSquareQueuesList[1];

        if(attackQueue.Count == 0)
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
                    Instantiate(rangeOutlineSprite, new Vector2(attackLocation.x, (float)(attackLocation.y-0.5)), Quaternion.identity, movementSquareList);
            }

        }

    }


    /*    void DebugLogQueueSizes(List<Queue<Vector2Int>> squareQueuesList)
        {
            // Ensure the list has exactly 3 queues
            if (squareQueuesList == null || squareQueuesList.Count != 3)
            {
                Debug.LogError("The squareQueuesList does not contain exactly 3 queues.");
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
        }*/

    public List<Queue<Vector2Int>> AStarSearchRecursive(
    BaseUnit mTarget,
    int movementRange,
    int attackRange,
    Queue<(Vector2Int cell, int range)> cellsToCheck,
    List<Queue<Vector2Int>> squareQueuesList)
    {
        int totalRange = movementRange + attackRange;

        if (cellsToCheck.Count == 0)
        {
            //Debug.Log("Terminating: cellsToCheck is empty.");
            return squareQueuesList;
        }

        var cellRangePair = cellsToCheck.Dequeue();
        Vector2Int checkingCell = cellRangePair.cell;
        int range = cellRangePair.range;

        if (range == 0)
        {
            //Debug.Log($"Terminating: Range is 0. Checking cell: {checkingCell}");
            return squareQueuesList;
        }

        for (int rad = 0; rad < 4; rad++)
        {
            Vector2Int sinDirV = sinDir(rad);
            int xCheck = checkingCell.x + sinDirV.x;
            int yCheck = checkingCell.y + sinDirV.y;

            if (xCheck >= 0 && xCheck < gridX + 2 && yCheck >= 0 && yCheck < gridY + 2 && !checkedCells[xCheck, yCheck])
            {
                checkedCells[xCheck, yCheck] = true;

                if (legalMove(xCheck - 1, yCheck - 1, mTarget) >= 1)
                {
                    if (!cellsToCheck.Contains((new Vector2Int(xCheck, yCheck), range - 1)))
                    {
                        cellsToCheck.Enqueue((new Vector2Int(xCheck, yCheck), range - 1));
                        //Debug.Log($"Enqueuing cell: ({xCheck}, {yCheck}), Range: {range - 1}");
                    }

                    if (legalMove(xCheck - 1, yCheck - 1, mTarget) == 1 && range > totalRange - movementRange)
                    {
                        //Debug.Log($"Adding to Movement Queue: ({xCheck}, {yCheck})");
                        squareQueuesList[0].Enqueue(new Vector2Int(xCheck, yCheck)); // Movement square
                    }
                    else if (range <= totalRange - movementRange)
                    {
                        //Debug.Log($"Adding to Attack Queue: ({xCheck}, {yCheck})");
                        squareQueuesList[1].Enqueue(new Vector2Int(xCheck, yCheck)); // Attack square
                    }

                    BaseStructure s = whatStructureIsInThisLocation(xCheck - 1, yCheck - 1);
                    if (s != null)
                    {
                        //Debug.Log($"Adding to Structure Queue: ({xCheck}, {yCheck})");
                        squareQueuesList[2].Enqueue(new Vector2Int(xCheck, yCheck)); // Structure square
                    }
                }
                //if it's not a legal move OR there's an allied unit there
                //and if you're not out of bounds
                //and the unit can move and attack
                else if ((xCheck - 1) < gridX && (xCheck - 1) >= 0 && (yCheck - 1) < gridY && (yCheck - 1) >= 0 && mTarget.canMoveAndAttack)
                {
                    BaseUnit unitAtLocation = whatUnitIsInThisLocation(xCheck - 1, yCheck - 1);
                    //and the unit you're drawing movement for isn't controlled by you (active player)
                    //OR there isn't a unit there
                    //OR you can't attack that unit
                    //then draw a movement square.
                    //Ie if it's not the players turn show all the squares a unit can attack regardless of unit attack legality.
                    if ((mTarget.playerControl != getPlayerTurn() || unitAtLocation == null || canUnitAttack(mTarget, unitAtLocation)))
                        squareQueuesList[1].Enqueue(new Vector2Int(xCheck, yCheck)); // Attack square
                }
            }
        }

        //Debug.Log("Recursing to next iteration.");
        // Continue the recursion
        return AStarSearchRecursive(mTarget, movementRange, attackRange, cellsToCheck, squareQueuesList);
    }

    void DrawSquaresFromSearch(List<Queue<Vector2Int>> squareQueuesList)
    {
        // Ensure the list has exactly 3 queues
        if (squareQueuesList == null || squareQueuesList.Count != 3)
        {
            Debug.LogError("The squareQueuesList does not contain exactly 3 queues.");
            return;
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

    public void checkEnemiesInRange(int xPos, int yPos, int range) //for now we're gonna assume range is 1 but in future if we want to add ranged units 
                                                                   //We probably want to grab the A* algorithm from DrawMovement and pass a function instead.
    {
        range = 1;
        for (int rad = 0; rad < 4; rad++)
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
        }
    }

    public void setUnitToAttackable(BaseUnit attacker, BaseUnit defender)
    {
        attackableUnits.Add(defender);
        defender.drawCrosshairs();
        double damageBeforeLuck = getDamageBeforeLuck(attacker, defender, false);
        int tileDefenceValue = getTileDefenceValueInt(defender.xPos, defender.yPos);
        double floor = getAttackLuckFloor(damageBeforeLuck, defender.healthMax);
        double ceiling = getAttackLuckCeiling(damageBeforeLuck, defender.healthMax);
        defender.showCombatTooltip(tileDefenceValue, floor, ceiling);
        Debug.Log($"For defender {defender.GetInstanceID()}, Tooltip displays floor: {floor}, ceiling: {ceiling}, base dmg before luck: {damageBeforeLuck}.");
    }

    public BaseUnit whatUnitIsInThisLocation(int x, int y)
    {
        if (x >= 0 && y >= 0 && x < gridX && y < gridY)
            if (unitGrid[x, y] is BaseUnit)
                return unitGrid[x, y];
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
            Debug.Log($"Tile at location {x},{y} for byteValue {whatTileIsInThisLocation(x, y)} has defenceValue {tile.defenceValue}");
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
        if (defender.unitType == UnitType.Air)
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
        switch (unit.unitType)
        {
            case UnitType.Land:
                moveCheck = moveCheck && a.canLandTraverse;
                break;
            case UnitType.Sea:
                moveCheck = moveCheck && a.canSeaTraverse;
                break;
            case UnitType.Air:
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
        else if (whatUnitIsInThisLocation(x, y).playerControl == drawMovementUnit.playerControl)
            return 2;
        else
            return 0;
    }

    public Vector2Int sinDir(int d)//0 up, 1 right, 2 down, 3 left
    {
        return new Vector2Int((int)(Mathf.Sin(d * Mathf.PI / 2)), (int)(Mathf.Sin((d + 1) * Mathf.PI / 2)));
    }

    public void clearMovement()
    {
        //var movementSquares = GameObject[];
        GameObject[] movementSquares;
        movementSquares = GameObject.FindGameObjectsWithTag("MovementSquareTag");
        for (var i = 0; i < movementSquares.Length; i++)
            Destroy(movementSquares[i]);
        drawing = false;
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
            //removeUnitInGrid((int)selectedUnit.transform.position.x, (int)selectedUnit.transform.position.y);
            removeUnitInGrid(selectedUnit.xPos, selectedUnit.yPos);
            setUnitInGrid(x, y, selectedUnit);

            /*if (selectedUnit is BaseUnit) //why is this check here? MG: 24-05-08
            {
                presentGameActionsAtLocation(x, y, selectedUnit);
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
                presentGameActionsAtLocation(x, y, selectedUnit);
            }
            else
            {
                selectedUnit.movementNonExhausted = true;
                selectedUnit.undoingMovement = false;
                selectedUnit.oldXPos = null;
                selectedUnit.oldYPos = null;
                exhaustSelectedUnit(selectedUnit, false);
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

    public void presentGameActionsAtLocation(int x, int y, BaseUnit unit)
    {
        checkEnemiesInRange(unit.xPos, unit.yPos, unit.attackRange);
        BaseStructure structure = manageStructureAtLocation(unit.xPos, unit.yPos);
        //if the unit cannot capture the structure it's on then don't add a capture option to the menu.
        //MG 24-06-07: Maybe we want to grey out the capture option instead? Do we want the UI positioning to be consistent regardless of what options are available?
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


    /*private void RecursiveDrawMovement(BaseUnit mTarget, Queue<(Vector2Int cell, int range)> cellsToCheck)
    {

        int movementRange = mTarget.movementRange;
        int attackRange = mTarget.attackRange;
        int totalRange = movementRange + attackRange;
        
        //Debug.Log($"cellsToCheck size is: {cellsToCheck.Count}");
        if (cellsToCheck.Count == 0)
        {
            return;
        }

        var cellRangePair = cellsToCheck.Dequeue();
        //Debug.Log($"Removed: {cellRangePair.cell} from cellsToCheck");

        Vector2Int checkingCell = cellRangePair.cell;
        int range = cellRangePair.range;

        if (range == 0)
        {
            return;
        }

        for (int rad = 0; rad < 4; rad++)
        {
            Vector2Int sinDirV = sinDir(rad);
            int xCheck = checkingCell.x + sinDirV.x;
            int yCheck = checkingCell.y + sinDirV.y;

            if (xCheck >= 0 && xCheck < gridX + 2 && yCheck >= 0 && yCheck < gridY + 2 && !checkedCells[xCheck, yCheck])
            {
                checkedCells[xCheck, yCheck] = true;

                if (legalMove(xCheck - 1, yCheck - 1, mTarget) >= 1)
                {
                    if (!cellsToCheck.Contains((new Vector2Int(xCheck, yCheck), range - 1)))
                    {
                        cellsToCheck.Enqueue((new Vector2Int(xCheck, yCheck), range - 1));
                        //Debug.Log($"Adding key {xCheck},{yCheck} to queue with range {range - 1}");
                    }
                    else
                    {
                        //Debug.Log($"Key {xCheck},{yCheck} already exists in Queue");
                    }

                    if (legalMove(xCheck - 1, yCheck - 1, mTarget) == 1 && range > totalRange - movementRange)
                    {
                        drawMoveSquare(xCheck - 1, yCheck - 1, mTarget.playerControl == getPlayerTurn());
                    }
                    else if (range <= totalRange - movementRange)
                        drawDamageSquare(xCheck - 1, yCheck - 1, mTarget.playerControl == getPlayerTurn());

                    BaseStructure s = whatStructureIsInThisLocation(xCheck - 1, yCheck - 1);
                    if (s != null)
                    {
                        turnOffStructureCollider(s);
                    }
                }
                //if it's not a legal move OR there's an allied unit there
                //and if you're not out of bounds
                else if ((xCheck - 1) < gridX && (xCheck - 1) >= 0 && (yCheck - 1) < gridY && (yCheck - 1) >= 0)
                {
                    BaseUnit unitAtLocation = whatUnitIsInThisLocation(xCheck - 1, yCheck - 1);
                    //and the unit you're drawing movement for isn't controlled by you (active player)
                    //OR there isn't a unit there
                    //OR you can't attack that unit
                    //then draw a movement square.
                    //Ie if it's not the players turn show all the squares a unit can attack regardless of unit attack legality.
                    if ((mTarget.playerControl != getPlayerTurn() || unitAtLocation == null || canUnitAttack(mTarget, unitAtLocation)))
                        drawDamageSquare(xCheck - 1, yCheck - 1, mTarget.playerControl == getPlayerTurn());
                }
            }
        }

        // Continue the recursion
        RecursiveDrawMovement(mTarget, cellsToCheck);
    }*/
}
