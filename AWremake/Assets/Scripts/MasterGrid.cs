using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MasterGrid : MonoBehaviour
{
    bool drawing = false;

    public int gridX =30;
    public int gridY =20;
    public BaseUnit selectedUnit;
    //public MasterGrid masterGrid;
    public BaseUnit [,] unitGrid; //2D array
    public BaseStructure[,] structureGrid; //2D array
    public int[,] mapGrid;
    public List<BaseUnit> attackableUnits;
    public List<BaseStructure> spriteOffStructures;
    //public List<BaseStructure> resourceStructures;
    public GameObject[] allUnits;
    public GameMaster gameMaster;
    public int playerTurn;

    // Start is called before the first frame update before all Start().
    void Awake()
    {
        //gameMaster = GameObject.FindGameObjectWithTag("GameMasterTag").GetComponent<GameMaster>();
        selectedUnit = null;
        unitGrid = new BaseUnit[gridX, gridY]; //initialize 2D array
        structureGrid = new BaseStructure[gridX, gridY]; //initialize 2D array
        attackableUnits = new List<BaseUnit>();
        spriteOffStructures = new List<BaseStructure>();
        mapGrid = new int[gridX, gridY];
        //public GameObject masterGrid = GameObject.FindGameObjectWithTag("MasterGridTag").GetComponent<MasterGrid>();
        //transform.position = new Vector2((float)(gridX + 0.5), (float)(gridY + 0.5));

        //take in map initiation data

        //build map
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
                    drawMovement(unit.movementRange, (int)unit.transform.position.x, (int)unit.transform.position.y, unit);
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
                    unit.takeDamage(getSelectedUnit().baseDamage); //expand, obviously.

                    //selectedUnit.setNonExhausted(false);
                    exhaustSelectedUnit(selectedUnit, true);
                }
            }
            /*else
            {
                print("You've clicked on " + unit.GetInstanceID() + "but no mg action was taken. Potential softlock");
                Debug.Log("You've clicked on " + unit.GetInstanceID()+ "but no mg action was taken. Potential softlock");
            }*/
        }
    }

    public void captureStructure(BaseStructure structure)
    {
        if (selectedUnit != null)
        {
            print("capture health: " + structure.captureHealth + "selectedUnithealth " + selectedUnit.healthCurrent);
            if (selectedUnit.healthCurrent < structure.captureHealth) //do we want to do this math within BaseStructu
                structure.captureHealth = structure.captureHealth - selectedUnit.healthCurrent;
            else
                structure.switchAlliance(selectedUnit.getPlayerControl());
            exhaustSelectedUnit(selectedUnit,true);
        }
        else
            print("attempting to capture structure but no selectedUnit to capture it.");
    }

    public void attackButtonPressed()
    {

    }

    //MG 24-04-10: this really needs to be a recursive function. It will create the "wrap around an enemy" behaviour.
    public GameObject moveSquare;
    public void drawMovement(int range, int xpos, int ypos, BaseUnit mTarget)
    {
        if (!drawing)
        {
            drawing = true;
            selectedUnit = mTarget;

            bool[,] checkedCells = new bool[gridX + 2, gridY + 2];
            checkedCells[xpos + 1, ypos + 1] = true;

            Queue<Vector2Int> cellsToCheck = new Queue<Vector2Int>();
            cellsToCheck.Enqueue(new Vector2Int(xpos + 1, ypos + 1));

            for (int i = 1; i <= range && cellsToCheck.Count > 0; i++)
            {
                int cellsToProcess = cellsToCheck.Count;

                for (int j = 0; j < cellsToProcess; j++)
                {
                    Vector2Int currentCell = cellsToCheck.Dequeue();

                    for (int rad = 0; rad < 4; rad++)
                    {
                        int xCheck = currentCell.x + sinDir(rad).x;
                        int yCheck = currentCell.y + sinDir(rad).y;

                        if (xCheck >= 0 && xCheck < gridX + 2 && yCheck >= 0 && yCheck < gridY + 2 && !checkedCells[xCheck, yCheck])
                        {
                            checkedCells[xCheck, yCheck] = true;
                            //if cell is empty or occupied by an allied unit
                            if (legalMove(xCheck - 1, yCheck - 1, mTarget) >= 1)
                            {
                                //if cell is empty make a movement square.
                                if (legalMove(xCheck - 1, yCheck - 1, mTarget) == 1)
                                    Instantiate(moveSquare, new Vector2(xCheck - 1, yCheck - 1), Quaternion.identity);
                                //  if (BaseStructure s = whatStructureIsInThisLocation(xCheck -1, yCheck - 1) != null) //I wish I could do this.
                                BaseStructure s = whatStructureIsInThisLocation(xCheck - 1, yCheck - 1);
                                if(s!=null)
                                    turnOffStructureCollider(s);
                                cellsToCheck.Enqueue(new Vector2Int(xCheck, yCheck));
                            }
                        }
                    }
                }
            }
        }
    }



    /*public IEnumerator testingWaitFunction(GameObject moveSquare, Vector2 vec)
    {
        yield return new WaitForSeconds(3);
        Instantiate(moveSquare, vec , new Quaternion(0, 0, 0, 0));
        
    }*/

    public void checkEnemiesInRange(int xPos,int yPos, int range) //for now we're gonna assume range is 1 but in future if we want to add ranged units 
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
            if (unitInLocation != null && unitInLocation != selectedUnit && selectedUnit.playerControl != unitInLocation.playerControl)
            {
                attackableUnits.Add(unitInLocation);
                unitInLocation.drawCrosshairs();
            }
        }

                /*
        //print("checkEnemiesInRange");
        int k=0;
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
        print("this many units in the unitGrid: " + k);*/
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


    //this will return 1 if a legal move, 0 if illegal move, 2 if allied unit but not a landing square.
    //-1 if it's the same unit
    //eventually this can decrement the number of additional movements (due to terrain) the unit has but that's for later.
    public int legalMove(float xPos, float yPos, BaseUnit mTarget)
    {
        int x = (int)xPos;
        int y = (int)yPos;
        if (x < 0 || y < 0 || x >= gridX || y >= gridY)
            return 0;
        else if (whatUnitIsInThisLocation(x, y) == null)
            return 1;
        else if (whatUnitIsInThisLocation(x, y) == mTarget)
            return -1;
        else if (whatUnitIsInThisLocation(x, y).playerControl == selectedUnit.playerControl)
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
        turnOnAllUncoveredStructureColliders();
    }

    public void clearAttackableUnits()
    {
        foreach (BaseUnit attackableUnit in attackableUnits)
        {
            attackableUnit.hideCrosshairs();
        }
        attackableUnits.Clear();
    }

    public void moveTarget(int x, int y)
    {
        //print("moveTarget. SelectedUnit is: "+selectedUnit);
        if (selectedUnit != null&&whatUnitIsInThisLocation(x,y)==null)
        {
            clearAttackableUnits();
            int oldx = selectedUnit.xPos;
            int oldy = selectedUnit.yPos;
            // do we want to try and define this just within the if statement?
            BaseStructure oldStructure = whatStructureIsInThisLocation(oldx, oldy);
            if (oldStructure != null)
            {
                oldStructure.turnOnCollider();
                oldStructure.resetCaptureHealth();
            }
            selectedUnit.transform.position = new Vector2(x, y); //you can't define this as a Vector2Int bc the game engine requires conversion to Vector3
            //removeUnitInGrid((int)selectedUnit.transform.position.x, (int)selectedUnit.transform.position.y);
            removeUnitInGrid(selectedUnit.xPos, selectedUnit.yPos);
            setUnitInGrid(x, y, selectedUnit);
            selectedUnit.movementNonExhausted = false;
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
            presentGameActionsAtLocation(x, y, selectedUnit);
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
            BaseUnit unit =  go.GetComponent<BaseUnit>();
            if (unit.getPlayerControl() == playerTurn)
            {
                unit.setNonExhausted(true);
            }
        }
    }

    public int numCapturedResourceLocations(int player)
    {
        int num=0;
        for (int i=0; i < gridX; i++)
            for (int j=0; j < gridY; j++)
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
        if (structure != null && structure.isCapturableBy(unit))
        { 
            gameMaster.selectedStructure = structure;
        }
        gameMaster.showUnitChoicePanel(attackableUnits.Count != 0, structure != null);
        if (!unit.movementNonExhausted && attackableUnits.Count == 0 && structure == null)
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
}
