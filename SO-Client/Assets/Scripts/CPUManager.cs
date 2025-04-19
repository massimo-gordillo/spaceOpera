
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;


public class CPUManager : MonoBehaviour
{

    public BaseUnit[,] unitGrid;
    public BaseStructure[,] structureGrid;
    public BaseStructure[] commandStructures;
    public static NetworkNode[] defaultTargets;
    public byte[,] terrainGrid;
    public static List<NetworkNode> resourceNetworkNodes = new();
    public static List<NetworkNode> priorityNetworkNodes = new();
    public static List<NetworkNode> priorityNetworkNodesAir = new();
    public BaseStructure[] structureListArray;
    public double[,] structuresEuclideanDistance;
    //List<Vector2Int> structLocs;
    public static Dictionary<Vector2Int, NetworkNode> nodeVectorMap = new();
    //public List<(Vector2Int, Vector2Int)> networkEdges = new List<(Vector2Int, Vector2Int)>();
    public List<NetworkEdge> networkEdges = new();
    public List<NetworkEdge> priorityNetworkEdgesAir = new();
    public GameMaster gameMaster;
    public MasterGrid masterGrid;

    public bool[] playersAsCPU = new bool[GameMaster.numPlayers+1];
    public List<BaseUnit>[] CPU_Units = new List<BaseUnit>[GameMaster.numPlayers+1];

    public GameObject debugLinePrefab;



    /*  
        Let's precompute a network between structures for movemenet of units.
        I imagine there's a crawling algorithm that does this in linear complexity, I can explore that at a later time.
        Core idea is start a (0,0) and crawl towards (width, length) horizontally while checking for move legality and structures I've come across
        ChatGPT made a clever suggestion where instead of crawling from 0,0 you crawl outwardly from each structure location which will give you a good approx to the closest neighbour in each direction in a cone sort of fashion.
        Maybe I can leverage my recursive vectorA* search function in masterGrid but that sounds painfully complex with passing of functions etc, gross.
     */

    /*
     * Current implementation:
     * I tried a cardinal direction estimation that works pretty well.
     * Effectively, you start at a structure and crawl in N/E/S/W directions one step at a time to find a structure in each of those dirs.
     * There's a fanning operation so your cone of discovery gets wider as you move away from the source. I think this could use some refinement but good for now.
     * Once you find a structure in a given direction you stop searching in that dir. There's also a search of the diagonals which meets criteria for both adjacent dirs.
     * You do have to limit the search distance for performance but also to limit the number of redundant connections over large distances.
     * The downside here is it's possible to create a disconncted graph, I need to make sure that every node can reach every other node. Will be a later improvement.
     * Might be good to do some logic grouping of structures by proximity and make sure you have at least N paths out of it.
     * Right now the solution isn't symmetrical but it's close. I could add a rendundancy check for symmetry by repeating at each corner and adding new edges found.
     * 
 */

    /*
        First implementation:
        Ok let's do a euclidean distance operation to find the network paths.
        For this implementation I'm going to compute the euclidean vector distances between all the structures. 
        Then I'm going to take the two shortest paths to nodes which have yet to perform the operation.
        Those two paths will be added to the network, and now that node is no longer a candidate for additional shortest paths.
        The nodes to which I just made paths will now perform the same "add 2 shortest" operation. This should approximate a sparse shortest path node/vector network.
        After that is complete, I'm going to update the distances from euclidean to manhattan using the BidirectionalSearch function in GameMaster.
        There will have to be some finessing here for manhattan distances which exceed shortest distance, say if there's a long line of water in the way.
        I'll have to implement some tests for that.
    */

    /*
     * Pretty impressed with myself for doing the NetworkNode / NetwordEdge implementation. It feels elegant but time will tell.
     */


    public void naiveV1Start()
    {
        Debug.Log("Calling to start CPUManager");
        List<BaseStructure> structureList = masterGrid.GetStructures(null);
        structureGrid = masterGrid.structureGrid;
        SortByDistanceFromOrigin(structureList);
        //nodeVectorMap = new();
        //structureListArray = new BaseStructure[structureList.Count];
        structuresEuclideanDistance = new double[structureList.Count, structureList.Count];
        foreach (BaseStructure structure in structureList)
        {
            NetworkNode node = new NetworkNode(structure);
            resourceNetworkNodes.Add(node);
            nodeVectorMap.Add(node.pos, node);
            if(structure.structureType != 0)
            {
                Debug.Log($"Adding node {structure.pos} with type {structure.structureType} to priority list");
                NetworkNode priorityNode = new NetworkNode(structure);
                priorityNetworkNodesAir.Add(priorityNode);
            }
            //structureListArray[i] = structure;
            //i++;
        }
        //SortByDistanceFromOrigin(structureListArray);
        //Vector2[] structLocs = 

        //generatePairwiseEuclideanDistanceArray(structLocs);
        //WriteArrayToCSV("EuclideanDistanceArray.csv");
        //GenerateNaiveStructureNetwork();
        //ExportVerticiesToCSV();

        foreach (NetworkNode n in resourceNetworkNodes)
        {
            ConnectStructurePairs(n, 6, false); //specifically 6 as it's two infantry traverse distances
        }

        foreach(NetworkNode n in priorityNetworkNodesAir)
        {
            ConnectStructurePairs(n, (int)((gameMaster.gridX + gameMaster.gridY)/2), true);
        }
        

        //Debug.Log($"Done searching pairs, node count is {networkEdges.Count}");

        CorrectManhattanDistances();
        InitClosestNeighbour();
        //StartCoroutine(DrawStructureDebugLines());
    }

    public void Start()
    {
        SetDefaultTargets();
    }

    /*public void InitClosestNeighbour()
    {
        for (int p = 1; p <= GameMaster.numPlayers; p++)
        {
            Queue<NetworkNode> bfsQueue = new Queue<NetworkNode>();
            HashSet<NetworkNode> visited = new HashSet<NetworkNode>();

            // First pass: assign closestUnclaimed to direct neighbors
            foreach (NetworkNode n in resourceNetworkNodes)
            {
                n.CalculateClosestUnclaimedNeighbour(p);
                if (n.closestUnclaimed[p] != null)
                {
                    bfsQueue.Enqueue(n);
                    visited.Add(n);
                }
            }

            // Second pass: BFS to assign unclaimed from neighbors
            while (bfsQueue.Count > 0)
            {
                NetworkNode current = bfsQueue.Dequeue();

                foreach (NetworkEdge edge in current.localEdges.OrderBy(e => e.distance))
                {
                    NetworkNode neighbor = edge.GetOtherNode(current);
                    if (neighbor == null || visited.Contains(neighbor))
                        continue;

                    // Inherit closest unclaimed from current node
                    neighbor.closestUnclaimed[p] = current.closestUnclaimed[p];
                    bfsQueue.Enqueue(neighbor);
                    visited.Add(neighbor);
                }
            }

            // Optional: Warn if any nodes still didn't get assigned
            foreach (NetworkNode n in resourceNetworkNodes)
            {
                if (n.closestUnclaimed[p] == null)
                {
                    Debug.LogWarning($"Node {n.pos} for player {p} has no unclaimed neighbor!");
                }
            }
        }
    }*/
    public void SetDefaultTargets() //assuming two players for now.
    {
        commandStructures = new BaseStructure[GameMaster.numPlayers + 1];
        defaultTargets = new NetworkNode[GameMaster.numPlayers + 1];
        for (int p=1; p<=GameMaster.numPlayers; p++)
        {
            commandStructures[p] = MasterGrid.commandStructures[p];
        }
        for (int p = 1; p <= GameMaster.numPlayers; p++)
        {
            if (p == 1)
            {
                defaultTargets[p] = new NetworkNode(commandStructures[2]);
            }
            else if (p == 2)
            {
                defaultTargets[p] = new NetworkNode(commandStructures[1]);
            }
            else
            {
                Debug.LogWarning($"Player {p} being assigned a default target");
                defaultTargets[p] = new NetworkNode(commandStructures[1]);
            }
        }
    }

    public void CollectPotentialGameActions(BaseUnit unit)
    {
        Queue<(Vector2Int cell, int range)> cellsToCheck = new Queue<(Vector2Int, int)>();
        bool[,] checkedCells = new bool[masterGrid.gridX + 2, masterGrid.gridY + 2];
        checkedCells[unit.pos.x + 1, unit.pos.y + 1] = true;
        cellsToCheck.Enqueue((new Vector2Int(unit.pos.x + 1, unit.pos.y + 1), unit.movementRange + 1));//assuming unit only has 1 attack range for the first vectorA* search.
        List<Queue<Vector2Int>> squareQueuesList = null;
        if (unit.attackRange >= 1)
            squareQueuesList = masterGrid.AStarSearchRecursive(unit, unit.movementRange, 1, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>() });
        //masterGrid.ManualTestAndPrintLogQueueSizes(squareQueuesList);
        //Debug.LogError($"unit {unit.pos} has printed it's queue sizes ^");
        Queue<Vector2Int> movementQueue = squareQueuesList[0];
        Queue<Vector2Int> attackQueue = squareQueuesList[1];
        Queue<Vector2Int> structureQueue = squareQueuesList[2];

        List<BaseUnit> attackableUnitList = new List<BaseUnit>();
        foreach(Vector2Int attackSquare in attackQueue)
        {
            BaseUnit attackable = masterGrid.whatUnitIsInThisLocation(attackSquare);
            if(attackable != null)
            {
                if (masterGrid.canUnitAttack(unit, attackable))
                {
                    attackableUnitList.Add(attackable);
                }
            }

        }
        foreach (BaseUnit attack in attackableUnitList)
        {
            Debug.Log($"Unit {unit.pos} can attack {attack.pos}");
        }
        List<BaseStructure> structureList = new List<BaseStructure>();
        List<BaseStructure> capturableStructureList = new List<BaseStructure>();
        List<BaseUnit> capturingUnitList = new List<BaseUnit>();
        foreach(Vector2Int structureLoc in structureQueue)
        {
            BaseStructure structure = masterGrid.whatStructureIsInThisLocation(structureLoc);
            BaseUnit unitAtLoc = masterGrid.whatUnitIsInThisLocation(structureLoc);
            if (structure != null)
                structureList.Add(structure);
            if (structure != null && unit.playerControl != structure.playerControl)
                capturableStructureList.Add(structure);
            if (structure != null && unitAtLoc != null && unitAtLoc.CPU_IsCapturing && masterGrid.canUnitAttack(unit, unitAtLoc))
                capturingUnitList.Add(unitAtLoc);
        }
        ChooseGameAction(unit);

        void ChooseGameAction(BaseUnit unit)
        {
            if (!unit.isResourceUnit)
            {
                if (attackableUnitList.Count > 0)
                {
                    BaseUnit candidate = null;
                    double mostDamage = 0;
                    foreach (BaseUnit attackableUnit in attackableUnitList)
                    {
                        double damage = masterGrid.getDamageBeforeLuck(unit, attackableUnit, false);
                        if(damage > mostDamage)
                        {
                            candidate = attackableUnit;
                            mostDamage = damage;
                        }
                    }
                    if (candidate != null)
                    {
                        Vector2Int diffV = unit.pos - candidate.pos;
                        int diff = Math.Abs(diffV.x) + Math.Abs(diffV.y);
                        if(diff > 1 && diff<=unit.movementRange)
                        {
                            List<Vector2Int> path = masterGrid.BidirectionalSearch(unit.pos, candidate.pos, unit, ((unit.movementRange + unit.movementRange % 2) / 2 + 1));
                            masterGrid.selectedUnit = unit;
                            masterGrid.moveSelectedUnit(GetAdjacentPosFromBidirectionalSearch(path, candidate.pos));
                            masterGrid.unitCombat(unit, candidate);
                        }
                    }
                }
            }
        }
    }

    public Vector2Int GetAdjacentPosFromBidirectionalSearch(List<Vector2Int> path, Vector2Int target)
    {
        for (int i = path.Count - 1; i >= 0; i--)
        {
            Vector2Int pos = path[i];
            int manhattanDist = Mathf.Abs(pos.x - target.x) + Mathf.Abs(pos.y - target.y);
            if (manhattanDist == 1)
            {
                return pos;
            }
        }

        Debug.LogWarning($"No adjacent tile found near {target} in path of length {path.Count}. Returning unit's current position as fallback.");
        return path.Count > 0 ? path[0] : target; // fallback to unit.pos if needed
    }


    public void InitClosestNeighbour()
    {
        for (int p = 1; p <= GameMaster.numPlayers; p++)
        {
            List<NetworkNode> nodesWithNoNeighbours = new List<NetworkNode>();
            foreach (NetworkNode n in resourceNetworkNodes)
            {
                n.CalculateClosestUnclaimedNeighbour(p);
                if (n.closestUnclaimed[p] == null)
                    nodesWithNoNeighbours.Add(n);
            }

            foreach(NetworkNode n in nodesWithNoNeighbours)
            {
                n.FindNearestUnclaimedBFS(n, p);
                if (n.closestUnclaimed[p] == null)
                {
                    Debug.LogWarning($"Node {n.pos} for player {p} has no unclaimed neighbor!");
                }
            }
        /*                while (nodesWithNoNeighbours.Count > 0)
                        {
                            NetworkNode n = nodesWithNoNeighbours[0];
                            var closest = n.GetClosestUnclaimedNotMe(p, n);
                            n.closestUnclaimed[p] = closest;

                            if (closest == null)
                            {
                                Debug.LogWarning($"Node {n.pos} does not have any closest unclaimed after recursion");
                                nodesWithNoNeighbours.RemoveAt(0); // Remove anyway to prevent infinite loop
                            }
                            else
                            {
                                nodesWithNoNeighbours.RemoveAt(0);
                            }
                        }*/



        }
    }

    public void ConnectStructurePairs(NetworkNode node, int maxDistance, bool isPriority)
    {

        Vector2Int origin = node.pos;

        //bool isCurious = origin == new Vector2Int(0, 0);


        int dist;

        for (dist = 1; dist <= maxDistance; dist++)
        {
            bool northSet = node.Npair != null;
            bool southSet = node.Spair != null;
            bool eastSet = node.Epair != null;
            bool westSet = node.Wpair != null;

            /* if (isCurious)
                 Debug.Log($"checking {origin},         N: {northSet}       S: {southSet}      E: {eastSet}      W: {westSet}");
             */
            // Cardinal directions
            TrySetCardinal(ref northSet, new Vector2Int(0, 1));
            TrySetCardinal(ref southSet, new Vector2Int(0, -1));
            TrySetCardinal(ref eastSet, new Vector2Int(1, 0));
            TrySetCardinal(ref westSet, new Vector2Int(-1, 0));

            // Only try diagonals if relevant cardinal directions have been found
            if (!northSet && !eastSet) TrySetDiagonal(new Vector2Int(1, 1));
            if (!northSet && !westSet) TrySetDiagonal(new Vector2Int(-1, 1));
            if (!southSet && !eastSet) TrySetDiagonal(new Vector2Int(1, -1));
            if (!southSet && !westSet) TrySetDiagonal(new Vector2Int(-1, -1));
        }

        /*        // Local helper for cardinal crawl
                void TrySetCardinal(ref bool alreadySet, Vector2Int dir, Action<BaseStructure, BaseStructure> setPair, Action<BaseStructure, BaseStructure> setReverse)
                {
                    if (alreadySet) return;

                    // Now we fan out with increasing distance
                    for (int offset = 1; offset <= dist; offset++)
                    {
                        Vector2Int checkPos = origin + dir * offset; // This is the main direction we're crawling
                        if (nodeVectorMap.TryGetValue(checkPos, out BaseStructure neighbor))
                        {
                            setPair(node, neighbor);
                            setReverse(neighbor, node);
                            alreadySet = true;
                            break; // We stop searching in this direction once we find a valid pair
                        }
                    }
                }*/
        void TrySetCardinal(ref bool alreadySet, Vector2Int dir)
        {
            if (alreadySet) return;
            int offsetCheck = dist - 1;

            // Iterate over the fan distance range (this can still work like before)
            for (int offset = -offsetCheck; offset <= offsetCheck; offset++)
            {
                Vector2Int initSearchVector = origin + dir * dist;

                //if the center of the search section is outside of the map then we can ignore the rest of that search. Can't do this for checkPos because you can breadth outside.
                if (initSearchVector.x < 0 || initSearchVector.y < 0 || initSearchVector.x >= gameMaster.gridX || initSearchVector.y >= gameMaster.gridY)
                    continue;

                Vector2Int offsetVector = new(dir.y, -dir.x); //perpendicular vector in the clockwise dir. looks counterclockwise because offset starts neg.
                Vector2Int checkPos = initSearchVector + offsetVector * offset;


                if (nodeVectorMap.TryGetValue(checkPos, out NetworkNode neighbor))
                {
                    // Add the pair to the vertices list with their positions
                    AddEdge(node.pos, neighbor.pos, node, neighbor, isPriority);


                    // Set the correct direction for both the sender and receiver
                    if (dir == Vector2Int.up) // Npair
                    {
                        node.Npair = neighbor;
                        if (neighbor.Spair == null) neighbor.Spair = node;
                    }
                    else if (dir == Vector2Int.down) // Spair
                    {
                        node.Spair = neighbor;
                        if (neighbor.Npair == null) neighbor.Npair = node;
                    }
                    else if (dir == Vector2Int.left) // Wpair
                    {
                        node.Wpair = neighbor;
                        if (neighbor.Epair == null) neighbor.Epair = node;
                    }
                    else if (dir == Vector2Int.right) // Epair
                    {
                        node.Epair = neighbor;
                        if (neighbor.Wpair == null) neighbor.Wpair = node;
                    }

/*                    if (isCurious)
                    {
                        Debug.Log($"Pairing location: {origin} with location: {checkPos} with distance {dist} and offset {offsetVector}");
                    }*/

                    alreadySet = true;
                    break;
                }
            }
        }
        void TrySetDiagonal(Vector2Int dir)
        {
            /*            if (dist <= 1)
                            return;
                        int newDist = dist - 1;*/
            int newDist = dist;

            // Only attempt if diagonal is needed (i.node., one cardinal direction is missing)
            Vector2Int checkPos = origin + dir * newDist;
            //bool tryGet = nodeVectorMap.TryGetValue(checkPos, out NetworkNode diagNeighbor);
            //always add the edge if not priority, if priority, only add the edge if the structure is a priority structure.
            //if ( tryGet && ((!isPriority) || (isPriority && diagNeighbor.structure.structureType != 0)))
            if(nodeVectorMap.TryGetValue(checkPos, out NetworkNode diagNeighbor))
            {
                // Add the diagonal pair to the vertices list
                if (isPriority)
                {
                    Debug.Log($"Priority Adding edge {node.pos}, {diagNeighbor.pos}");
                }
                AddEdge(node.pos, diagNeighbor.pos, node, diagNeighbor, isPriority);

                // Set the appropriate pairs in both directions
                if (dir.x == 1 && dir.y == 1) // NE: Need Npair and Epair
                {
                    if (node.Npair == null)
                        node.Npair = diagNeighbor;
                    if (node.Epair == null)
                        node.Epair = diagNeighbor;

                    if (diagNeighbor.Spair == null)
                        diagNeighbor.Spair = node;
                    if (diagNeighbor.Wpair == null)
                        diagNeighbor.Wpair = node;
                }
                else if (dir.x == -1 && dir.y == 1) // NW: Need Npair and Wpair
                {
                    if (node.Npair == null)
                        node.Npair = diagNeighbor;
                    if (node.Wpair == null)
                        node.Wpair = diagNeighbor;

                    if (diagNeighbor.Spair == null)
                        diagNeighbor.Spair = node;
                    if (diagNeighbor.Epair == null)
                        diagNeighbor.Epair = node;
                }
                else if (dir.x == 1 && dir.y == -1) // SE: Need Spair and Epair
                {
                    if (node.Spair == null)
                        node.Spair = diagNeighbor;
                    if (node.Epair == null)
                        node.Epair = diagNeighbor;

                    if (diagNeighbor.Npair == null)
                        diagNeighbor.Npair = node;
                    if (diagNeighbor.Wpair == null)
                        diagNeighbor.Wpair = node;
                }
                else if (dir.x == -1 && dir.y == -1) // SW: Need Spair and Wpair
                {
                    if (node.Spair == null)
                        node.Spair = diagNeighbor;
                    if (node.Wpair == null)
                        node.Wpair = diagNeighbor;

                    if (diagNeighbor.Npair == null)
                        diagNeighbor.Npair = node;
                    if (diagNeighbor.Epair == null)
                        diagNeighbor.Epair = node;
                }
            }
        }

    }



    /*    public static void SortByDistanceFromOrigin(BaseStructure[] structures)
        {
            Array.Sort(structures, (a, b) =>
            {
                int da = a.xPos * a.xPos + a.yPos * a.yPos;
                int db = b.xPos * b.xPos + b.yPos * b.yPos;
                return da.CompareTo(db);
            });
        }*/

    /*    private void Update()
        {
            foreach (var (from, to) in networkEdges)
            {
                Vector3 fromPos = new Vector3(from.x, from.y, 0);
                Vector3 toPos = new Vector3(to.x, to.y, 0);
                Debug.DrawLine(fromPos, toPos, Color.green);
            }
        }*/

    public IEnumerator DrawStructureDebugLines()
    {
        GameObject prevLine = null;
        foreach (NetworkEdge edge in networkEdges)
        {
            yield return new WaitForSeconds(0.75f);
            //if (structure == null) continue;

            //Vector3 start = new Vector3(structure.xPos, structure.yPos, 0);
            Vector2Int startV2 = edge.vectorA;
            Vector3 start = new Vector3(startV2.x, startV2.y, 0);
            Vector2Int targetV2 = edge.vectorB;

            Vector3 target = new Vector3(targetV2.x, targetV2.y, 0);

            /*
                        if (prevLine != null)
                        {
                            LineRenderer prevlr = prevLine.GetComponent<LineRenderer>();
                            if (prevlr != null)
                            {
                                prevlr.startColor = new Color (Color.white.r, Color.white.g, Color.white.b, 0.7f);
                                prevlr.endColor = new Color(Color.white.r, Color.white.g, Color.white.b, 0.7f);
                            }
                        }*/

            if (startV2 != null && targetV2 != null)
            {

                GameObject line = Instantiate(debugLinePrefab);
                LineRenderer lr = line.GetComponent<LineRenderer>();

                lr.positionCount = 2;
                lr.SetPosition(0, start);
                lr.SetPosition(1, target);
                lr.startColor = Color.white;
                lr.endColor = Color.red;
                prevLine = line;
            }

            /*            DrawTo(structure.NEpair);
                        DrawTo(structure.NWpair);
                        DrawTo(structure.SEpair);
                        DrawTo(structure.SWpair);*/
        }
    }

    public void CommandUnits(int player)
    {
        if (!(GameMaster.CPU_PlayersList[player] && player == gameMaster.getPlayerTurn() && GameMaster.CPU_isOn)) //probably a duplicate check but can't hurt, no cheating!
        {
            return;
        }

        foreach (BaseUnit unit in MasterGrid.playerUnits[player])
        {
            if (GameMaster.isGameComplete)
                return;
            CollectPotentialGameActions(unit);
            NetworkNode targetNode = unit.CPU_TargetNode;
            if (targetNode == null)
            {
                GiveUnitAssignment(unit);
                targetNode = unit.CPU_TargetNode;
                if(targetNode == null)
                {
                    Debug.LogWarning($"Unit {unit.pos} coming from {unit.oldPos} has been given no assignment/target node");
                }
            }

            Vector2Int nodePos = targetNode.pos;
            int delta = (int)((unit.pos-nodePos).magnitude);
            if (unit != null && unit.isResourceUnit)
            {
                if (delta > 0)
                {
                    List<Vector2Int> availPath = masterGrid.BidirectionalSearch(unit.pos, nodePos, unit, delta * 2);
/*                    if (unit.pos == new Vector2Int(1, 1))
                    {
                        Debug.Log($"Checking avail path for {unit.pos} has count {availPath.Count}");
                    }*/
                    if (availPath.Count > 0)
                    {
                        Vector2Int target = masterGrid.GetFurthestTileByMovement(availPath, unit.movementRange);
                        /*                        if (unit.pos == new Vector2Int(1, 1))
                                                {
                                                    Debug.Log($"Setting target for {unit.pos} to {target}");
                                                }*/
                        if ((unit.pos - target).magnitude != 0)
                        {

                            //Debug.Log($"Moving unit {unit.pos} to {target}");
                            masterGrid.selectedUnit = unit;
                            masterGrid.moveSelectedUnit(target);

                        }
                        /*else
                            Debug.Log($"Unit {unit.pos} has magnitude {(unit.pos - target).magnitude} to target {target}");
                        */
                    }
                }
                delta = (int)((unit.pos - nodePos).magnitude);
                if (delta == 0)
                {
                    if (targetNode.playerControl != unit.playerControl)
                    {
                        int oldPlayer = targetNode.playerControl;
                        masterGrid.selectedUnit = unit;
                        masterGrid.captureStructure(targetNode.structure);
                        unit.CPU_IsCapturing = true;
                        if(targetNode.structure.playerControl == unit.playerControl)
                        {
                            unit.CPU_IsCapturing = false;
                            targetNode.SetCaptured(unit.playerControl, oldPlayer);
                            GiveUnitAssignment(unit);
                        }
                    }
                }

            }


        }
    }

    public void CreateUnits(int player, int progeny)
    {
        //simple make base unit check
        List<BaseStructure> structures = masterGrid.GetStructures(player);
        List<BaseStructure> prods = masterGrid.GetProductionStructures(player);
        int cash = gameMaster.GetPlayerResources(player);
        List<BaseStructure> factories = new();
        List<BaseStructure> airports = new();
        List<(BaseUnit, int)> factoryProdList = new();
        List<(BaseUnit, int)> airportProdList = new();
        if (progeny == 0)
        {
/*            int factoryCount = 0;
            int airportCount = 0;*/
            foreach (BaseStructure structure in prods)
            {
                if (structure.structureType == 1)
                    factories.Add(structure);
                if (structure.structureType == 2)
                    airports.Add(structure);
            }
            GenerateSpendErtrian();
/*            foreach (BaseStructure structure in prods)
            {
                if (structure.playerControl == player && structure.structureType == 1)
                {
                    //Debug.Log($"Creating base unit for {player} at {structure.pos}, they have progeny {gameMaster.getPlayerProgeny((byte)player)}");
                    if (gameMaster.getPlayerProgeny((byte)player) != 1)
                        gameMaster.ProduceBaseUnit(structure, player);
                }
            }*/
        }

        void GenerateSpendErtrian()
        {
            List<(BaseUnit, int)> priceList = GameMaster.unitCosts[0];


            int cashRemain = cash - 100 * factories.Count;

            foreach ((BaseUnit unit, int price) in priceList)
            {
                if (unit.unitTerrainType == UnitTerrainType.Land)
                    factoryProdList.Add((unit, price));
                if (unit.unitTerrainType == UnitTerrainType.Air)
                    airportProdList.Add((unit, price));
            }
            if (airports.Count > 0)
                foreach (BaseStructure airport in airports)
                {
                    BaseUnit candidateAirUnit = null;
                    int highestPrice = 0;
                    foreach ((BaseUnit unit, int price) in airportProdList)
                    {
                        if (price < cashRemain && price > highestPrice)
                        {
                            highestPrice = price;
                            candidateAirUnit = unit;
                        }
                    }
                    if (candidateAirUnit != null)
                    {
                        gameMaster.selectedStructure = airport;
                        gameMaster.ProduceUnit(candidateAirUnit, player, false);
                        cashRemain -= candidateAirUnit.price;
                    }
                }
            if (factories.Count > 0)
            {
                //gameMaster.selectedStructure = factories[0];
                gameMaster.ProduceBaseUnit(factories[0], player);
                for (int i = 1; i < factories.Count; i++)
                {
                    BaseUnit candidateFactoryUnit = null;
                    int highestPrice = 0;
                    foreach ((BaseUnit unit, int price) in factoryProdList)
                    {
                        if ((price - 100) < cashRemain && price > highestPrice)
                        {
                            highestPrice = price;
                            candidateFactoryUnit = unit;
                            Debug.Log($"setting {unit.name} to candidate unit");
                        }
                    }
                    if (candidateFactoryUnit != null)
                    {
                        Debug.Log($"Unit {candidateFactoryUnit.unitName} has price {candidateFactoryUnit.price} compared to cash {cashRemain}");
                        gameMaster.selectedStructure = factories[i];
                        gameMaster.ProduceUnit(candidateFactoryUnit, player, false);
                        cashRemain -= (candidateFactoryUnit.price - 100);
                    }
                }
                /*            if(factories.Count == 1)
                            {
                                //produceBaseUnit
                                //cashRemain = cashRemain;
                            }else
                            {

                            }*/

            }

        }



}


    private void OnDrawGizmos()
    {
        Gizmos.color = Color.cyan;

        if (networkEdges == null) return;

        foreach (NetworkEdge e in priorityNetworkEdgesAir)
        //foreach (NetworkEdge e in networkEdges)
        {
            Vector2Int from = e.vectorA;
            Vector2Int to = e.vectorB;
            Vector3 fromPos = new Vector3(from.x, from.y, 0);
            Vector3 toPos = new Vector3(to.x, to.y, 0);

            Gizmos.DrawLine(fromPos, toPos);
        }
    }

    public static void SortByDistanceFromOrigin(List<BaseStructure> structures)
    {
        structures.Sort((a, b) =>
        {
            // Compute squared distances to avoid expensive sqrt calls
            int da = a.pos.x * a.pos.x + a.pos.y * a.pos.y;
            int db = b.pos.x * b.pos.x + b.pos.y * b.pos.y;
            return da.CompareTo(db);
        });
    }

    public void CorrectManhattanDistances()
    {

        foreach (NetworkEdge edge in networkEdges)
        {
            //bool curiousCheck = false;
            //curiousCheck = node.Equals(new NetworkEdge(new Vector2Int(8,2), new Vector2Int(10, 2)));


            List<Vector2Int> dirs = new();
            //a little hacky using speficially infantry for this but that will be the source of truth for now.
            dirs = masterGrid.BidirectionalSearch(edge.vectorA, edge.vectorB, PrefabManager.getBaseUnitFromName("Infantry", 0), edge.distance + 1);
            if (dirs.Count == 0) {
                edge.isLandAccessible = false;
                Debug.Log($"GraphEdge {edge.vectorA}{edge.vectorB} is not land accessible");
            }
            int total = 0;
            Vector2Int start = edge.vectorA;
            foreach (Vector2Int dir in dirs)
            {
                Vector2Int delta = dir - start;
                start = dir;
                /*                if (curiousCheck)
                                {
                                    Debug.Log($"vector is {dir} with a delta {delta}");
                                }*/
                total += Math.Abs(delta.x) + Math.Abs(delta.y);
            }
            /*            if (curiousCheck)
                        {
                            Debug.Log($"Edge {node.vectorA} to {node.vectorB} has distance {total}");
                        }*/

            if (total > edge.distance)
            {
                edge.distance = total;
                //Debug.Log($"Edge distance for {node.vectorA} to {node.vectorB} is overwritten to {node.distance}");

            }

        }
        Debug.Log("Done checking land accessibility");
    }

    public static void GiveUnitAssignment(BaseUnit unit)
    {
        NetworkNode currentNode = unit.CPU_TargetNode;
        NetworkNode targetNode = null;
        if (currentNode == null) {
            currentNode = GetClosestNodeAgnostic(unit.pos);
            if (currentNode.IsClaimableBy(unit.playerControl))
            {
                targetNode = currentNode;
            }
        }
        if (currentNode.closestUnclaimed[unit.playerControl] == null)
        {
            //Debug.LogWarning($"Current node {currentNode.pos} does not have a closest unclaimed, trying to set");//{currentNode.closestUnclaimed[unit.playerControl].pos} ");
            //currentNode.closestUnclaimed[unit.playerControl] = currentNode.GetClosestUnclaimedNotMe(unit.playerControl, currentNode);
            currentNode.closestUnclaimed[unit.playerControl] = currentNode.FindNearestUnclaimedBFS(currentNode,unit.playerControl);
            //Debug.LogWarning($"Node {currentNode.pos} assigned new unclaimed {currentNode.closestUnclaimed[unit.playerControl].pos}");
        }

        if (targetNode == null) {
            targetNode = currentNode.closestUnclaimed[unit.playerControl];
            if(targetNode == null)
            {
                Debug.LogError($"Target node for {unit.pos} still null after multiple attempted assignments");
            }
        }
        //Debug.LogWarning($"Unit {unit.pos} has been given assignment {targetNode.pos} by node {currentNode.pos}, its closest unclaimed is {currentNode.closestUnclaimed[unit.playerControl].pos} ");
        if (targetNode.IsClaimableBy(unit.playerControl))
        {

            targetNode.ClaimByUnit(unit);
        }
        else
        {
            NetworkNode newTarget = currentNode.FindNearestUnclaimedBFS(currentNode, unit.playerControl);
            if (newTarget.IsClaimableBy(unit.playerControl))
            {

                newTarget.ClaimByUnit(unit);
            }/*else
                Debug.LogWarning($"Unit {unit.pos} is being given assignment by {targetNode.pos} where a 1 step recursive call is still illegal");
*/

        }
        //very very hacky but hopefully works for now.
/*        if (targetNode.closestUnclaimed[unit.playerControl].IsClaimableBy(unit.playerControl))
            targetNode.closestUnclaimed[unit.playerControl].ClaimByUnit(unit);
        else
        {
            Debug.LogWarning($"Unit {unit.pos} is being given assignment by {targetNode.pos} but a 1 step recursive call is still illegal");
        }*/
        if (unit.CPU_TargetNode == null)
        {
            Debug.LogError($"[Assignment Fail] Unit {unit.pos} ended up with no target node. Last attempted target was: {targetNode?.pos}");
        }
/*        if(unit.CPU_TargetNode.pos == new Vector2Int(0, 0))
        {
            Debug.LogError($"Unit {unit.pos} is assigned to  {unit.CPU_TargetNode.pos}");

        }*/
    }

    public static NetworkNode GetUnitAssignment(BaseUnit unit)
    {

        NetworkNode currentNode = resourceNetworkNodes.Find(n => n.pos == unit.pos);

        if (currentNode == null)
        {
            currentNode = GetClosestNodeAgnostic(unit.pos);
        }

        NetworkNode targetNode = currentNode.closestUnclaimed[unit.playerControl];
        targetNode.ClaimByUnit(unit);
        return targetNode;
    }
    public static  NetworkNode GetClosestNodeAgnostic(Vector2Int targetPos)
    {
        NetworkNode closestNode = null;
        int closestDistance = int.MaxValue;

        foreach (var node in resourceNetworkNodes)
        {
            int distance = Mathf.Abs(node.pos.x - targetPos.x) + Mathf.Abs(node.pos.y - targetPos.y); // Manhattan distance

            if (distance < closestDistance)
            {
                closestDistance = distance;
                closestNode = node;
            }
        }
        if (closestNode == null)
            Debug.LogError($"unable to find a node close to {targetPos}");

        return closestNode;
    }

    public void WriteArrayToCSV(string fileName)
    {
        double[,] array = structuresEuclideanDistance;
        string filePath = Path.Combine(Application.dataPath, "Resources", fileName); // "Resources" is an example folder

        int rows = array.GetLength(0);
        int cols = array.GetLength(1);

        // Use a StreamWriter to create or overwrite the file
        using (StreamWriter writer = new StreamWriter(filePath))
        {
            // Iterate through each row
            for (int i = 0; i < rows; i++)
            {
                // Create a list to hold the values for the current row
                string[] rowValues = new string[cols];

                // Iterate through each column in the row
                for (int j = 0; j < cols; j++)
                {
                    rowValues[j] = array[i, j].ToString("F6"); // Format to 6 decimal places
                }

                // Write the row to the file, joined by commas
                writer.WriteLine(string.Join(",", rowValues));
            }
        }

        Debug.Log($"Euclid distance CSV file created at: {filePath}");
    }

    public void ExportVerticiesToCSV(string fileName = "Verticies.csv")
    {
        string filePath = Path.Combine(Application.dataPath, "Resources", fileName);
        using (StreamWriter writer = new StreamWriter(filePath))
        {
            // Optional header
            writer.WriteLine("FromX,FromY,ToX,ToY");
            foreach (NetworkEdge e in networkEdges)
            {
                Vector2Int from = e.vectorA;
                Vector2Int to = e.vectorB;
                writer.WriteLine($"{from.x},{from.y},{to.x},{to.y}");
            }
        }

        Debug.Log($"Verticies CSV exported to: {filePath}");
    }

    public void AddEdge(Vector2Int a, Vector2Int b, NetworkNode nodeA, NetworkNode nodeB, bool isPriority)
    {
        NetworkEdge newEdge = new NetworkEdge(nodeA, nodeB);
        newEdge.isPriorityAir = isPriority && nodeA.structure.structureType != 0 && nodeB.structure.structureType != 0;

        List<NetworkEdge> edgeList = isPriority ? priorityNetworkEdgesAir : networkEdges;

        if (!edgeList.Contains(newEdge))
        {
            edgeList.Add(newEdge);
            nodeA.AddEdge(newEdge, nodeB);
            nodeB.AddEdge(newEdge, nodeA);
        }
        else
        {
            Debug.Log($"Edge already exists: {a} <-> {b}");
        }
    }





}


