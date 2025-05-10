
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using System.Linq;


using System.Runtime.CompilerServices;
using Unity.Mathematics;


public class CPUManager : MonoBehaviour
{

    public BaseUnit[,] unitGrid;
    public BaseStructure[,] structureGrid;
    public BaseStructure[] commandStructures;
    public static NetworkNode[] defaultTargets;
    public byte[,] terrainGrid;
    public static List<NetworkNode> resourceNetworkNodes = new();
    public static List<NetworkNode> priorityNetworkNodes = new();
    public BaseStructure[] structureListArray;
    public double[,] structuresEuclideanDistance;
    //List<Vector2Int> structLocs;
    public static Dictionary<Vector2Int, NetworkNode> nodeVectorMap = new();
    public static Dictionary<Vector2Int, NetworkNode> priorityNodeVectorMap = new();
    //public List<(Vector2Int, Vector2Int)> networkEdges = new List<(Vector2Int, Vector2Int)>();
    public List<NetworkEdge> networkEdges = new();
    public List<NetworkEdge> priorityNetworkEdgesAir = new();
    public List<NetworkEdge> priorityNetworkEdgesGround = new();
    public GameMaster gameMaster;
    public MasterGrid masterGrid;
    public CameraManager cameraManager;

    public bool[] playersAsCPU = new bool[GameMaster.numPlayers+1];
    public List<BaseUnit>[] CPU_Units = new List<BaseUnit>[GameMaster.numPlayers+1];

    List<(BaseUnit unit, int cost, int weight)>[,] matchupWeights;
    List<(BaseUnit, int, int weight)> ertrianFactoryProdList;
    List<(BaseUnit, int, int weight)> ertrianAirportProdList;

    public GameObject debugLinePrefab;
    //private float CPU_AnimationWaitTime = GameMaster.animationDuration;
    public float CPU_AnimationWaitTime; //set in inspector




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
            /*if (structure.structureType == 5)
                Debug.Log($"Adding command structure {structure.pos} to the nodeVectorMap it has {structure.transform.position.x} x pos in world");
*/
            nodeVectorMap.Add(node.pos, node);
            if(structure.structureType != 0)
            {
                //Debug.Log($"Adding node {structure.pos} with type {structure.structureType} to priority list");
                //NetworkNode priorityNode = node;
                NetworkNode priorityNode = new NetworkNode(structure);
                priorityNetworkNodes.Add(priorityNode);
                priorityNodeVectorMap.Add(priorityNode.pos, priorityNode);
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

        foreach(NetworkNode n in priorityNetworkNodes)
        {
            ConnectStructurePairs(n, (int)((gameMaster.gridX + gameMaster.gridY)/2), true);
        }
        

        //Debug.Log($"Done searching pairs, node count is {networkEdges.Count}");

        CorrectManhattanDistances(networkEdges);
        CorrectManhattanDistances(priorityNetworkEdgesAir);

        AssignPriorityHeadingsToHQ();
        SetGroundPriorityNetwork(); //not implemented properly rn.
        //DebugEdges();
        //DebugNodes();



        //Debug.Log($"Priority node count: {priorityNetworkNodes.Count}, Priority edge air count: {priorityNetworkEdgesAir.Count}, Priority edge ground count: {priorityNetworkEdgesGround.Count}");
/*        foreach (NetworkNode node in priorityNetworkNodes)
        {
            if(node != null) 
            Debug.Log($"Node {node.pos} has priority direction to {node.priorityNextNodeToTarget[1].pos} for player 1");
        }*/

        InitClosestNeighbour();
        //StartCoroutine(DrawStructureDebugLines());
    }

    public void Start()
    {
        SetDefaultTargets();
        ImportMatchupWeights();
    }

    public void DebugNodes()
    {
        Debug.Log($"Starting Debug Nodes. num nodes: {priorityNetworkNodes.Count}, num edges: {priorityNetworkEdgesAir.Count}");

        foreach (NetworkNode node in priorityNetworkNodes)
        {
            // --- Validate localEdges ---
            foreach (NetworkEdge edge in node.localEdges)
            {
                bool edgeFound = false;
                foreach (NetworkEdge edgeRef in priorityNetworkEdgesAir)
                {
                    if (edgeRef.Equals(edge)) // Optional: use this if you implemented Equals()
                    {
                        if (!object.ReferenceEquals(edge, edgeRef))
                        {
                            Debug.LogError($"Edge in node {node.pos} matches by value but not by reference.");
                            Debug.Log($"EdgeRef Hash: {RuntimeHelpers.GetHashCode(edgeRef)}, Edge Hash: {RuntimeHelpers.GetHashCode(edge)}");
                        }
                        edgeFound = true;
                        break;
                    }
                }

                if (!edgeFound)
                {
                    Debug.LogError($"Edge in node {node.pos} not found in priorityNetworkEdgesAir.");
                }

                // Check the edge’s connected nodes too
                NetworkNode other = edge.GetOtherNode(node);
                NetworkNode matchOther = priorityNetworkNodes.Find(n => n.pos == other.pos);
                if (matchOther == null)
                {
                    Debug.LogError($"Edge from node {node.pos} points to node at {other.pos} not found in priorityNetworkNodes.");
                }
                else if (!object.ReferenceEquals(other, matchOther))
                {
                    Debug.LogError($"Edge from node {node.pos} points to different instance of node at {other.pos}.");
                    Debug.Log($"Other Hash: {RuntimeHelpers.GetHashCode(other)}, Match Hash: {RuntimeHelpers.GetHashCode(matchOther)}");
                }
            }

            // --- Validate localNodes ---
            foreach (NetworkNode neighbor in node.localNodes)
            {
                NetworkNode matchNeighbor = priorityNetworkNodes.Find(n => n.pos == neighbor.pos);
                if (matchNeighbor == null)
                {
                    Debug.LogError($"Node {node.pos} has neighbor at {neighbor.pos} not found in priorityNetworkNodes.");
                }
                else if (!object.ReferenceEquals(neighbor, matchNeighbor))
                {
                    Debug.LogError($"Node {node.pos} has neighbor at {neighbor.pos} that is a different instance.");
                    Debug.Log($"Neighbor Hash: {RuntimeHelpers.GetHashCode(neighbor)}, Match Hash: {RuntimeHelpers.GetHashCode(matchNeighbor)}");
                }
            }
        }
        Debug.Log("Debug Nodes complete");
    }

    public void DebugEdges()
    {
        foreach (NetworkEdge edge in priorityNetworkEdgesAir)
        {
            NetworkNode nodeA = edge.nodeA;
            NetworkNode nodeB = edge.nodeB;

            // Try to find a node in the list that matches by pos
            NetworkNode matchA = priorityNetworkNodes.Find(n => n.pos == nodeA.pos);
            NetworkNode matchB = priorityNetworkNodes.Find(n => n.pos == nodeB.pos);

            // Check nodeA
            if (matchA != null && !object.ReferenceEquals(nodeA, matchA))
            {
                Debug.LogError($"NodeA mismatch at {nodeA.pos}. Instance mismatch! (edge node vs node list)");
                Debug.Log($"NodeA Hash: {RuntimeHelpers.GetHashCode(nodeA)}, MatchA Hash: {RuntimeHelpers.GetHashCode(matchA)}");
            }

            // Check nodeB
            if (matchB != null && !object.ReferenceEquals(nodeB, matchB))
            {
                Debug.LogError($"NodeB mismatch at {nodeB.pos}. Instance mismatch! (edge node vs node list)");
                Debug.Log($"NodeB Hash: {RuntimeHelpers.GetHashCode(nodeB)}, MatchB Hash: {RuntimeHelpers.GetHashCode(matchB)}");
            }

            // Optional: error if no match at all (i.e. the edge points to a node not in priorityNetworkNodes)
            if (matchA == null)
                Debug.LogError($"No match in priorityNetworkNodes for nodeA at {nodeA.pos}");
            if (matchB == null)
                Debug.LogError($"No match in priorityNetworkNodes for nodeB at {nodeB.pos}");
        }
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
                    NetworkNode currentNeighbor = edge.GetOtherNode(current);
                    if (currentNeighbor == null || visited.Contains(currentNeighbor))
                        continue;

                    // Inherit closest unclaimed from current node
                    currentNeighbor.closestUnclaimed[p] = current.closestUnclaimed[p];
                    bfsQueue.Enqueue(currentNeighbor);
                    visited.Add(currentNeighbor);
                }
            }

            // Optional: Warn if any nodes still didn't get assigned
            foreach (NetworkNode n in resourceNetworkNodes)
            {
                if (n.closestUnclaimed[p] == null)
                {
                    Debug.LogWarning($"Node {n.pos} for player {p} has no unclaimed currentNeighbor!");
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
/*        bool isCurious = false;
        if (!unit.isResourceUnit)
            isCurious = true;*/

        Queue<(Vector2Int cell, int range)> cellsToCheck = new Queue<(Vector2Int, int)>();
        bool[,] checkedCells = new bool[masterGrid.gridX + 2, masterGrid.gridY + 2];
        checkedCells[unit.pos.x + 1, unit.pos.y + 1] = true;
        cellsToCheck.Enqueue((new Vector2Int(unit.pos.x + 1, unit.pos.y + 1), unit.movementRange));//assuming unit only has 1 attack range for the first vectorA* search.
        List<Queue<Vector2Int>> squareQueuesList = null;
        if (unit.attackRange >= 1)
            squareQueuesList = masterGrid.FloodFillSearch(unit, unit.movementRange, 1, cellsToCheck, checkedCells, new List<Queue<Vector2Int>> { new Queue<Vector2Int>(), new Queue<Vector2Int>(), new Queue<Vector2Int>() });
        //masterGrid.ManualTestAndPrintLogQueueSizes(squareQueuesList);
        //Debug.LogError($"unit {unit.pos} has printed it's queue sizes ^");
        Queue<Vector2Int> movementQueue = squareQueuesList[0];
        Queue<Vector2Int> attackQueue = squareQueuesList[1];
        Queue<Vector2Int> structureQueue = squareQueuesList[2];

        //clear list from last search
        unit.CPU_AttackableUnitList = new List<BaseUnit>();
        unit.CPU_AttackableResourceUnitList = new List<BaseUnit>();
        Queue<Vector2Int> tempMovementQueue = squareQueuesList[0];
        while(tempMovementQueue.Count > 0)
        {
            unit.CPU_MoveSquaresList.Add(tempMovementQueue.Dequeue());
        }
/*        if (isCurious)
            foreach (Vector2Int m in movementQueue)
                //attackQueue.Enqueue(m);
                Debug.Log($"unit {unit.pos} has movement location {m}");*/
        foreach (Vector2Int attackSquare in attackQueue)
        {
            /*if(isCurious)
                Debug.Log($"unit {unit.pos} has attack location {attackSquare}");
            */
            BaseUnit attackable = masterGrid.whatUnitIsInThisLocation(attackSquare);
           /* if (isCurious && attackSquare == new Vector2Int(12, 8))
                Debug.Log($"BOOL: unit {unit.pos}, has found an attackable? {attackable} owned by player {attackable.playerControl}, can they attack it? {masterGrid.canUnitAttack(unit, attackable)}");
*/
            if (attackable != null)
            {
                /*if(isCurious)
                    Debug.Log($"unit found at location {attackSquare} by {unit.pos}, it is an {attackable.unitName} owned by player {attackable.playerControl}, can they attack it? {masterGrid.canUnitAttack(unit, attackable)}");
                */
                if (masterGrid.canUnitAttack(unit, attackable))
                {
                    unit.CPU_AttackableUnitList.Add(attackable);
                 /*   if (isCurious)
                        Debug.Log($"counting: Unit {unit.pos} has an attack list of length {unit.CPU_AttackableUnitList.Count}");
*/
                    if (attackable.isResourceUnit)
                    {
                        unit.CPU_AttackableResourceUnitList.Add(attackable);
                    }
                }
            }
        }
/*
        //debug for attack list gen.
        foreach (Vector2Int attackSquare in movementQueue)
        {
            BaseUnit attackable = masterGrid.whatUnitIsInThisLocation(attackSquare);
            if (attackable != null)
            {
                if (masterGrid.canUnitAttack(unit, attackable))
                {
                    unit.CPU_AttackableUnitList.Add(attackable);
                    if (attackable.isResourceUnit)
                    {
                        unit.CPU_AttackableResourceUnitList.Add(attackable);
                    }
                }
            }
        }*/

/*        if (!unit.isResourceUnit && isCurious)
        {
            Debug.Log($"Unit {unit.pos} has an attack queue of length {attackQueue.Count}");
            Debug.Log($"Unit {unit.pos} has an attack list of length {unit.CPU_AttackableUnitList.Count}");
        }*/

        /*        foreach (BaseUnit attack in attackableUnitList)
                {
                    Debug.Log($"Unit {unit.pos} can attack {attack.pos}");
                }*/

        //clear lists from last search
        unit.CPU_StructureList = new List<BaseStructure>();
        unit.CPU_CapturableStructureList = new List<BaseStructure>();
        unit.CPU_CapturingUnitList = new List<BaseUnit>();
        foreach(Vector2Int structureLoc in structureQueue)
        {
            BaseStructure structure = masterGrid.whatStructureIsInThisLocation(structureLoc);
            BaseUnit unitAtLoc = masterGrid.whatUnitIsInThisLocation(structureLoc);
            if (structure != null)
                unit.CPU_StructureList.Add(structure);
            if (structure != null && unit.playerControl != structure.playerControl)
                unit.CPU_CapturableStructureList.Add(structure);
            if (structure != null && unitAtLoc != null && unitAtLoc.CPU_IsCapturing && masterGrid.canUnitAttack(unit, unitAtLoc))
                unit.CPU_CapturingUnitList.Add(unitAtLoc);
        }


        
    }

    public IEnumerator CPU_GameActionAttack(BaseUnit unit)
    {
        if (unit.CPU_AttackableUnitList.Count > 0)
        {
            BaseUnit candidate = null;
            double mostDamageDelta = 0;

            //prioritize capturing units before moving on to checking other nearby units.
            foreach (BaseUnit attackableResourceUnit in unit.CPU_AttackableResourceUnitList)
            {
                if (attackableResourceUnit != null && attackableResourceUnit.CPU_IsCapturing)
                {
                    double damageDelta = GetDamageCostDelta(unit, attackableResourceUnit);
                    if (damageDelta > mostDamageDelta)
                    {
                        mostDamageDelta = damageDelta;
                        mostDamageDelta = damageDelta;
                        candidate = attackableResourceUnit;
                    }
                }
            }
            foreach (BaseUnit attackableUnit in unit.CPU_AttackableUnitList)
            {
                //Debug.Log($"Unit {unit.pos} is checking if it should attack {attackableUnit.pos}");
                double damageDelta = GetDamageCostDelta(unit, attackableUnit);
                //Debug.Log($"Unit {unit.pos} attacking {attackableUnit.pos} has damage delta {damageDelta}");
                if (damageDelta > mostDamageDelta)
                {
                    candidate = attackableUnit;
                    mostDamageDelta = damageDelta;
                }
            }
            if (candidate != null)
            {
                
                //Vector2Int diffV = unit.pos - candidate.pos;
                int diff = Manhattan(unit.pos, candidate.pos); //Math.Abs(diffV.x) + Math.Abs(diffV.y);
                if (diff > 1 && diff <= unit.movementRange+unit.attackRange)
                {
                    List<Vector2Int> path = masterGrid.BidirectionalSearch(unit.pos, candidate.pos, unit, unit.movementRange+unit.attackRange);
                    masterGrid.selectedUnit = unit;
                    masterGrid.moveSelectedUnit(GetAdjacentPosFromBidirectionalSearch(path, candidate.pos)); //assumes attack range of 1 for now.
                    if (Manhattan(unit.pos, candidate.pos) == 1)//for some reason this wasn't always true.
                    {
                        yield return new WaitForSeconds(CPU_AnimationWaitTime * 2);
                        masterGrid.unitCombat(unit, candidate);
                    }
                    else
                        Debug.LogWarning($"Unit {unit.pos} trying to attack {candidate.pos} but they are not adjacent");
                    unit.setNonExhausted(false);
                }
                else if (diff == 1)
                {
                    yield return new WaitForSeconds(CPU_AnimationWaitTime * 2);
                    masterGrid.selectedUnit = unit;
                    masterGrid.unitCombat(unit, candidate);
                    unit.setNonExhausted(false);
                }
                //failcase if the unit attacks while landing on the enemy HQ, remove CPU softlocking themselves.
                if (unit.pos == defaultTargets[unit.playerControl].pos && unit.CPU_TargetNode == defaultTargets[unit.playerControl])
                {
                    masterGrid.deleteUnit(unit);
                }
                
            }
            else
            {
                Debug.LogWarning($"Unit {unit.pos} told to attack but unable to find a cadidate unit to attack even though attack list is not empty, defaulting to movement.");
                yield return StartCoroutine(CPU_MoveUnitTowardsTargetNode(unit));
            }
        }
        yield return null;
        
    }


    public double GetDamageCostDelta(BaseUnit attacker, BaseUnit defender)
    {
        //a nice shorthand for priority attacking. Damage*Cost.
        //Also reduces the value of the attack by the fireback cost, hopefully reducing the # of suicide attacks into larger units.
        //might be nice to prioritize full destroying units over just maxing out cost, but that's good enough for now.

        double attackCost = Math.Min(masterGrid.getDamageBeforeLuck(attacker, defender, false), defender.healthCurrent) * defender.price/defender.healthMax;
        double firebackCost = 0;
        //if unit will fire back calculate that
        if (masterGrid.getDamageBeforeLuck(attacker, defender, false) < defender.healthCurrent)
            firebackCost = Math.Min(masterGrid.getDamageBeforeLuck(defender, attacker, true), attacker.healthCurrent) * attacker.price/attacker.healthMax;
        if (defender.isResourceUnit)
            firebackCost = 0;
        double delta = attackCost - firebackCost;
        //Debug.Log($"DELTA: {attacker.pos} checking {defender.pos}, attack cost: {attackCost}, fireback cost: {firebackCost}, delta is {delta}");
        //Debug.Log($"Attack: {masterGrid.getDamageBeforeLuck(attacker, defender, false)}, fireback {masterGrid.getDamageBeforeLuck(defender, attacker, true)}");

        if (delta > 0)
            return delta;
        else
            return 0;
    }

    public Vector2Int GetAdjacentPosFromBidirectionalSearch(List<Vector2Int> path, Vector2Int target)
    {
        for (int i = path.Count - 1; i >= 0; i--)
        {
            Vector2Int pos = path[i];
            //int manhattanDist = ;
            if (Manhattan(pos, target) == 1)
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
        Dictionary<Vector2Int, NetworkNode> specificNodeVectorMap = isPriority ? priorityNodeVectorMap : nodeVectorMap;


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
                        if (nodeVectorMap.TryGetValue(checkPos, out BaseStructure currentNeighbor))
                        {
                            setPair(node, currentNeighbor);
                            setReverse(currentNeighbor, node);
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



                if (specificNodeVectorMap.TryGetValue(checkPos, out NetworkNode neighbor) && (!isPriority || (isPriority && neighbor!=null && neighbor.structure.structureType != 0)))
                {
/*                    if (isPriority)
                    {
                        Debug.Log($"Adding priority edge {node.pos}, {currentNeighbor.pos}");
                    }*/
                    // Add the pair to the vertices list with their positions
                    AddEdge(node, neighbor, isPriority);


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
            if(specificNodeVectorMap.TryGetValue(checkPos, out NetworkNode diagNeighbor) && (!isPriority || (isPriority && diagNeighbor != null && diagNeighbor.structure.structureType != 0)))
            {


                // Add the diagonal pair to the vertices list
                /*                if (isPriority)
                                {
                                    Debug.Log($"Priority Adding edge {node.pos}, {diagNeighbor.pos}");
                                }*/

                AddEdge(node, diagNeighbor, isPriority);

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
        foreach (NetworkNode node in priorityNetworkNodes)
        {
            yield return new WaitForSeconds(0.75f);
            //if (structure == null) continue;

            //Vector3 start = new Vector3(structure.xPos, structure.yPos, 0);
            Vector2Int startV2 = node.pos;
            Vector3 start = new Vector3(startV2.x, startV2.y, 0);
            Vector2Int targetV2 = node.priorityNextNodeToTarget[2].pos;

            Vector3 target = new Vector3(targetV2.x, targetV2.y, 0);

            
                        if (prevLine != null)
                        {
                            LineRenderer prevlr = prevLine.GetComponent<LineRenderer>();
                            if (prevlr != null)
                            {
                                prevlr.startColor = new Color (Color.white.r, Color.white.g, Color.white.b, 0.7f);
                                prevlr.endColor = new Color(Color.white.r, Color.white.g, Color.white.b, 0.7f);
                            }
                        }

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

/*                        DrawTo(structure.NEpair);
                        DrawTo(structure.NWpair);
                        DrawTo(structure.SEpair);
                        DrawTo(structure.SWpair);*/
        }
    }

    public IEnumerator CommandUnits(int player)
    {
        if (!(GameMaster.CPU_PlayersList[player] && player == gameMaster.getPlayerTurn() && GameMaster.CPU_isOn)) //probably a duplicate check but can't hurt, no cheating!
        {
            yield return null;
        }
        List<BaseUnit> unitsToCommand = new List<BaseUnit>(MasterGrid.playerUnits[player]);
        
        foreach (BaseUnit unit in unitsToCommand)
        {
            if (GameMaster.isGameComplete)
                break;
            yield return new WaitForSeconds(CPU_AnimationWaitTime);
            CollectPotentialGameActions(unit);
            NetworkNode targetNode = unit.CPU_TargetNode;
            if (targetNode == null)
            {
                if(unit.isResourceUnit)
                    GiveResourceUnitNodeAssignment(unit);
                else
                    GiveCombatUnitNextNodeAssignment(unit);
                targetNode = unit.CPU_TargetNode;
                if(targetNode == null)
                {
                    Debug.LogWarning($"Unit {unit.pos} coming from {unit.oldPos} has been given no assignment/target node");
                }
            }
            if (unit.isResourceUnit)
            {
                if (unit.CPU_AttackableResourceUnitList.Count > 0)
                {
                    yield return StartCoroutine(CPU_GameActionAttack(unit));
                }
                else
                {
                    yield return StartCoroutine(CPU_MoveUnitTowardsTargetNode(unit));
                    yield return StartCoroutine(CPU_GameActionCapture(unit));
                }
            }
            else
            {
                if (unit.CPU_AttackableUnitList.Count > 0)
                {
                    //Debug.Log($"Combat Unit {unit.pos} is being told to attack");
                    yield return StartCoroutine(CPU_GameActionAttack(unit));
                }
                else
                {
                    //Debug.Log($"Combat Unit {unit.pos} is being told to move");

                    yield return StartCoroutine(CPU_MoveUnitTowardsTargetNode(unit));
                }
            }

            yield return new WaitForSeconds(CPU_AnimationWaitTime);


        }
    }

    public IEnumerator CPU_MoveUnitTowardsTargetNode(BaseUnit unit)
    {
        if (unit == null) {
            Debug.LogWarning($"A null unit is being asked to move towards its target node");
            yield break;
        }
            
        NetworkNode targetNode = unit.CPU_TargetNode;
        if (targetNode == null)
            Debug.LogWarning($"Unit {unit.pos} being asked to move but has no target node");
        Vector2Int nodePos = targetNode.pos;
        int delta = (int)((unit.pos - nodePos).magnitude);
        if (unit.isResourceUnit)
        {
            if (delta > 0)
            {
                List<Vector2Int> availPath = masterGrid.BidirectionalSearch(unit.pos, nodePos, unit, delta * 4);
                /*                    if (unit.pos == new Vector2Int(1, 1))
                                    {
                                        Debug.Log($"Checking avail path for {unit.pos} has count {availPath.Count}");
                                    }*/
                if (availPath.Count > 0)
                {
                    //Debug.Log($"Avail path has length {availPath.Count}");
                    //Vector2Int target = masterGrid.GetFurthestTileByMovement(availPath, unit.movementRange);
                    Vector2Int target = GetLegalMovementSquareFromPath(availPath, unit);

                    //don't land on enemyHQ unless it's your capture target
                    if (Manhattan(unit.pos, target) != 0 && (target != defaultTargets[unit.playerControl].pos || unit.CPU_TargetNode == defaultTargets[unit.playerControl]))
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

        }
        else // if non-resource unit (combat unit)
        {
            int minDistanceFromTarget = 3;
            int movementLeft = unit.movementRange;
            bool isStepwiseMovement = true;

            //Debug.Log($"Target for {unit.pos} target node is {unit.CPU_TargetNode.pos}");


            // If no target or we're on the target, get a new one
            if (unit.pos == nodePos || unit.CPU_TargetNode == null)
            {
                GiveCombatUnitNextNodeAssignment(unit);
                nodePos = unit.CPU_TargetNode.pos;
                //Debug.Log($"New target for {unit.pos} target node is {unit.CPU_TargetNode.pos}");

            }



            List<Vector2Int> foundPath = new();
            List<Vector2Int> finalPath = new();
/*            foundPath = masterGrid.BidirectionalSearch(
                unit.pos,
                nodePos,
                unit,
                movementLeft + minDistanceFromTarget // soft extension
            );*/

            bool isInDistance = true;
            //while you still have movement available

            while (movementLeft > 0)
            {
                GameMaster.loopSafetyCounter++;
                if (GameMaster.loopSafetyCounter >= gameMaster.loopSafetyLimit)
                {
                    Debug.LogError("CPU_MoveUnitTowardsTargetNode has tripped the loop safety counter");
                }
                //search for a path to a cell within min distance from target
                //Debug.Log($"Unit {unit.pos} has movement available {movementLeft}, searching");
                foundPath = masterGrid.BidirectionalSearch(
                    unit.pos,
                    nodePos,
                    unit,
                    movementLeft + minDistanceFromTarget // soft extension
                    );
                //if you're unable to find a cell within the distance, just go as far as you can towards the target node
                if(foundPath == null || foundPath.Count == 0)
                {
                    //Debug.Log($"Unit {unit.pos} wants to travel max distance to  {nodePos}");

                    foundPath = masterGrid.BidirectionalSearch(
                    unit.pos,
                    nodePos,
                    unit,
                    (int)(Manhattan(unit.pos, nodePos) * 4)
                    );
                    movementLeft = 0;
                    isInDistance = false;
                    finalPath = foundPath;
                }
                if(foundPath == null || foundPath.Count == 0) {
                    Debug.LogWarning($"Unable to find a path from {unit.pos} to {nodePos}, has a search value of {Manhattan(unit.pos, nodePos)*4}");
                    break; 
                }
                /*//if you have movement remaining and you're not in the appropriate distance to the target
                for (int i = 0; i < movementLeft && !isInDistance; i++)
                {
                    Debug.Log($"first path found, current path is {foundPath[i]}, target node is {unit.CPU_TargetNode.pos}");
                    //if you find yourself within manhattan distance MIN from target 
                    if (Manhattan(foundPath[i], targetNode.pos) <= minDistanceFromTarget)
                    {
                        //check that you can actually reach the target in 3 moves (not blocked by units/terrain)
                        List<Vector2Int> shortPath = masterGrid.BidirectionalSearch(
                            foundPath[i],
                            nodePos,
                            unit,
                            minDistanceFromTarget
                        );
                        //if you find a path AND (your path isn't 0 or at target), give unit new target assignment and determine new path to continue.
                        if (shortPath != null && (shortPath.Count !=0 || unit.pos == nodePos)) {
                            isInDistance = true;
                            GiveCombatUnitNextNodeAssignment(unit);
                            nodePos = unit.CPU_TargetNode.pos;
                            foundPath = masterGrid.BidirectionalSearch(
                                foundPath[i],
                                nodePos,
                                unit,
                                movementLeft + minDistanceFromTarget
                            );
                        }
                    }
                    finalPath.Add(foundPath[i]);
                    movementLeft--;
                }*/

                for (int i = 0; i < movementLeft && i < foundPath.Count && isInDistance; i++)
                {
                    //Debug.Log($"first path found, current path is {foundPath[i]}, target node is {unit.CPU_TargetNode.pos}");

                    // Check Manhattan distance to target
                    if (Manhattan(foundPath[i], targetNode.pos) <= minDistanceFromTarget)
                    {
                        // Verify we can reach the target from here
                        List<Vector2Int> shortPath = masterGrid.BidirectionalSearch(
                            foundPath[i],
                            nodePos,
                            unit,
                            minDistanceFromTarget
                        );

                        if (shortPath != null && (shortPath.Count != 0 || unit.pos == nodePos))
                        {
                            isInDistance = true;

                            // Reassign target and get updated path
                            GiveCombatUnitNextNodeAssignment(unit);
                            nodePos = unit.CPU_TargetNode.pos;

                            foundPath = masterGrid.BidirectionalSearch(
                                foundPath[i],
                                nodePos,
                                unit,
                                movementLeft + minDistanceFromTarget
                            );

                            // Reset i to -1 so it becomes 0 next loop (freshly iterate new path)
                            i = -1;

                            continue; // Skip adding this path to finalPath, since it's now outdated
                        }
                    }

                    finalPath.Add(foundPath[i]);
                    movementLeft--;
                }
/*                if (!isInDistance)
                {
                    movementLeft = 0;
                    List<Vector2Int> pathCopy = new(foundPath); // Make a shallow copy
                    foreach (Vector2Int v in pathCopy)
                    {
                        finalPath.Add(v);
                    }
                }*/


            }
            Vector2Int target = GetLegalMovementSquareFromPath(finalPath, unit);
            //target = GetAdjacentPosFromBidirectionalSearch(finalPath, target);
            //Debug.Log($"Unit found final target square {target}");
            masterGrid.selectedUnit = unit;
            masterGrid.moveSelectedUnit(target);


        }
        yield return null;

    }

    public Vector2Int FindBestReachableSquare(Vector2Int targetPos, Vector2Int unitPos, BaseUnit unit, HashSet<Vector2Int> reachableSquares)
    {
        HashSet<Vector2Int> visited = new HashSet<Vector2Int>();
        SortedSet<(float score, int steps, Vector2Int pos)> queue = new SortedSet<(float, int, Vector2Int)>(
            Comparer<(float, int, Vector2Int)>.Create((a, b) =>
            {
                int cmp = a.Item1.CompareTo(b.Item1);
                if (cmp == 0) cmp = a.Item2.CompareTo(b.Item2);
                if (cmp == 0) cmp = a.Item3.x.CompareTo(b.Item3.x);
                if (cmp == 0) cmp = a.Item3.y.CompareTo(b.Item3.y);
                return cmp;
            })
        );

        queue.Add((0f, 0, targetPos));
        visited.Add(targetPos);

        Vector2Int[] directions = new Vector2Int[]
        {
        new Vector2Int(0, 1),
        new Vector2Int(1, 0),
        new Vector2Int(0, -1),
        new Vector2Int(-1, 0)
        };
        while (queue.Count > 0)
        {
            GameMaster.loopSafetyCounter++;
            if (GameMaster.loopSafetyCounter >= gameMaster.loopSafetyLimit)
            {
                Debug.LogError("FindBestReachableSquare has tripped the loop safety counter");
            }
            var (score, steps, current) = queue.Min;
            queue.Remove(queue.Min);

            if (reachableSquares.Contains(current))
            {
                return current;
            }

            foreach (var dir in directions)
            {
                Vector2Int neighbor = current + dir;
                if (visited.Contains(neighbor)) continue;

                int legality = masterGrid.LegalMove(neighbor, unit);
                if (legality < 1) continue;

                visited.Add(neighbor);

                // Cost: steps so far + heuristic (distance to unitPos)
                float heuristic = Vector2Int.Distance(neighbor, unitPos);
                float totalScore = steps + 1 + heuristic;

                queue.Add((totalScore, steps + 1, neighbor));
            }
        }

        Debug.LogWarning("No reachable square found from target node.");
        return unitPos; // fallback
    }

    public Vector2Int GetLegalMovementSquareFromPath(List<Vector2Int> availPath, BaseUnit unit)
    {
        //Vector2Int target = Vector2Int.zero;
        int count = availPath.Count > unit.movementRange ? unit.movementRange + 1 : availPath.Count;
        while (count-- > 0)
        {
            if (masterGrid.LegalMove(availPath[count], unit) == 1)
            {
                return availPath[count];
            }else
                Debug.Log($"Unit wants to go to {availPath[count]} but it cannot, so it's going to check {(count > 0 ? availPath[count - 1] : availPath[0])}.");
            /*                        if (availPath.Count > unit.movementRange)
                                        target = availPath[unit.movementRange];
                                    else
                                        target = availPath[availPath.Count - 1];*/
            if (count == 1)
            {
                Debug.Log($"CPU Unit {unit.pos} unable to move towards target node because all units in path are allied units, taking a random square at max distance");
                return GetRandomWalk(unit);
            }
        }


        return Vector2Int.zero;
    }


    public IEnumerator CPU_GameActionCapture(BaseUnit unit)
    {
        NetworkNode targetNode = unit.CPU_TargetNode;
        Vector2Int nodePos = targetNode.pos;
        int delta = Manhattan(unit.pos, nodePos);
        if (delta == 0)
        {
            if (targetNode.playerControl != unit.playerControl)
            {
                int oldPlayer = targetNode.playerControl;
                cameraManager.SetPosition(targetNode.pos);
                yield return new WaitForSeconds(CPU_AnimationWaitTime);
                masterGrid.selectedUnit = unit;
                yield return StartCoroutine(masterGrid.captureStructure(targetNode.structure));
                //yield return new WaitForSeconds(GameMaster.animationDuration*1.5f);
                unit.CPU_IsCapturing = true;
                if (targetNode.structure.playerControl == unit.playerControl)
                {
                    unit.CPU_IsCapturing = false;
                    targetNode.SetCaptured(unit.playerControl, oldPlayer);
                    GiveResourceUnitNodeAssignment(unit);
                }else
                    yield return new WaitForSeconds(CPU_AnimationWaitTime/4);

            }
        }
        
    }

    public IEnumerator ProduceUnits(int player, int progeny)
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
                if (structure.IsCoveredByUnit())
                {
                    Debug.LogWarning($"Prod structure {structure.pos} is covered by unit");
                    continue;
                }
                if (structure.structureType == 1)
                    factories.Add(structure);
                if (structure.structureType == 2)
                    airports.Add(structure);
            }
            yield return GenerateSpendErtrianHeuristicV2();
            /*            foreach (BaseStructure structure in prods)
                        {
                            if (structure.playerControl == player && structure.structureType == 1)
                            {
                                //Debug.Log($"Creating base unit for {player} at {structure.pos}, they have progeny {gameMaster.getPlayerProgeny((byte)player)}");
                                if (gameMaster.getPlayerProgeny((byte)player) != 1)
                                    gameMaster.ProduceResourceUnit(structure, player);
                            }
                        }*/
            //yield return null;
        }


        IEnumerator GenerateSpendErtrianHeuristicV2()
        {
            int totalCash = cash;
            float beta = 5f;

            // Copy of factories/airports so we can remove used slots
            var availableFactories = new List<BaseStructure>(factories);
            var availableAirports = new List<BaseStructure>(airports);

            var bestBuildPlan = new List<(BaseUnit unit, BaseStructure structure)>();

            // Determine opponent progeny
            int opponentProgeny = 0;
            for (int i = 0; i < GameMaster.numPlayers; i++)
            {
                byte p = gameMaster.getPlayerProgeny((byte)i);
                if (p != 0) { opponentProgeny = p; break; }
            }

            // Get our matchup lists
            var ertrianMatchupList = matchupWeights[0, opponentProgeny];
            var factoryList = ertrianMatchupList
                .Where(x => x.unit.unitTerrainType == UnitTerrainType.Land)
                .ToList();
            var airportList = ertrianMatchupList
                .Where(x => x.unit.unitTerrainType == UnitTerrainType.Air)
                .ToList();

            // Random branch (unchanged)
            /*float roll = UnityEngine.Random.value;
            if (roll < 0.3f)
            {
                int top = factoryList.Concat(airportList).Max(x => x.weight);
                factoryList = factoryList.Where(x => x.weight < top).ToList();
                airportList = airportList.Where(x => x.weight < top).ToList();
            }
            else if (roll < 0.6f)
            {
                var infantry = factoryList.FirstOrDefault(x => x.unit.unitName == "Infantry");
                if (infantry.unit != null && availableFactories.Count > 0 && totalCash >= infantry.cost)
                {
                    var fac = availableFactories[0];
                    bestBuildPlan.Add((infantry.unit, fac));
                    availableFactories.RemoveAt(0);
                    totalCash -= infantry.cost;
                }
            }*/

            int remainingCash = totalCash;


            float roll2 = UnityEngine.Random.value;
            // Randomize 
            if (true)
            //if (roll2 < 0.4f)
            {
                generateSpendForProdType(availableAirports, airportList);
                generateSpendForProdType(availableFactories, factoryList);
            }
            else
            {
                generateSpendForProdType(availableFactories, factoryList);
                generateSpendForProdType(availableAirports, airportList);
            }


            // Fire off production
            foreach (var (unit, structure) in bestBuildPlan)
                yield return createUnitAtStructure(unit, structure);

            // Inline scoring
            float ScoreUnit(int w, int c, int remCash)
            {
                float spent = totalCash - remCash + c;
                return w + beta * (spent / totalCash);
            }

            // Helper to fill slots
            void generateSpendForProdType(
                List<BaseStructure> slots,
                List<(BaseUnit unit, int cost, int weight)> options)
            {
                foreach (var slot in slots)
                {
                    (BaseUnit u, int cost, float score)? best = null;
                    foreach (var opt in options)
                    {
                        if (opt.cost > remainingCash) continue;
                        float s = ScoreUnit(opt.weight, opt.cost, remainingCash);
                        if (best == null || s > best.Value.score)
                            best = (opt.unit, opt.cost, s);
                    }
                    if (best != null)
                    {
                        bestBuildPlan.Add((best.Value.u, slot));
                        remainingCash -= best.Value.cost;
                    }
                }
            }
        }






    }



    /*IEnumerator GenerateSpendErtrianV2()
    {
        int totalCash = cash;

        int maxFactoryCount = factories.Count;
        int maxAirportCount = airports.Count;

        List<(BaseUnit unit, BaseStructure structure)> bestBuildPlan = null;
        int bestScore = int.MinValue;

        float alpha = 10f;

        // Determine opponent progeny
        int opponentProgeny = 0;
        for (int i = 0; i < GameMaster.numPlayers; i++)
        {
            byte progeny = gameMaster.getPlayerProgeny((byte)i);
            if (progeny != 0) // Player 0 is always Ertrian
            {
                opponentProgeny = progeny;
                break;
            }
        }
        Debug.Log($"[AI] Opponent progeny determined as: {opponentProgeny}");

        // Grab list of units Ertrian (0) vs opponent
        var ertrianMatchupList = matchupWeights[0, opponentProgeny];

        var factoryList = ertrianMatchupList.Where(x => x.unit.unitTerrainType == UnitTerrainType.Land).ToList();
        var airportList = ertrianMatchupList.Where(x => x.unit.unitTerrainType == UnitTerrainType.Air).ToList();

        Debug.Log($"[AI] Factory buildable units: {factoryList.Count}, Airport buildable units: {airportList.Count}");

        int testedComboCount = 0;

        foreach (var factoryCombo in GetUnitCombinations(factoryList, maxFactoryCount, totalCash))
        {
            foreach (var airportCombo in GetUnitCombinations(airportList, maxAirportCount, totalCash))
            {
                var combined = factoryCombo.Concat(airportCombo).ToList();
                int totalCost = combined.Sum(x => x.cost);
                if (totalCost > totalCash)
                    continue;

                int totalWeight = combined.Sum(x => x.weight);
                float score = totalWeight + alpha * ((float)totalCost / totalCash);
                testedComboCount++;

                Debug.Log($"[AI] Combo #{testedComboCount}: Cost={totalCost}, Weight={totalWeight}, Score={score}");

                if (score > bestScore)
                {
                    bestScore = (int)score;
                    bestBuildPlan = combined
                        .Select(x => (x.unit,
                            x.unit.unitTerrainType == UnitTerrainType.Land
                                ? factories[factoryCombo.IndexOf(x)]
                                : airports[airportCombo.IndexOf(x)]
                        )).ToList();

                    Debug.Log($"[AI] New best score: {bestScore}. Units: {string.Join(", ", combined.Select(u => u.unit.unitName))}");
                }
            }
        }

        if (bestBuildPlan != null)
        {
            Debug.Log($"[AI] Final build plan selected with score {bestScore}:");
            foreach ((BaseUnit unit, BaseStructure structure) in bestBuildPlan)
            {
                Debug.Log($"[AI] Producing {unit.unitName} at {structure.structureType} located at {structure.pos}");
                cameraManager.SetPosition((Vector2)structure.pos);
                gameMaster.selectedStructure = structure;
                gameMaster.ProduceUnit(unit, structure.playerControl, false);
                priorityNodeVectorMap.TryGetValue(structure.pos, out unit.CPU_TargetNode);
                GiveCombatUnitNextNodeAssignment(unit);
                yield return createUnitAtStructure(unit, structure);
            }
        }
        else
        {
            Debug.LogWarning("[AI] No valid build plan found within cash and structure constraints.");
        }
    }
}


IEnumerable<List<(BaseUnit unit, int cost, int weight)>> GetUnitCombinations(
List<(BaseUnit unit, int cost, int weight)> units,
int maxCount,
int maxTotalCost)
{
    List<List<(BaseUnit unit, int cost, int weight)>> results = new();
    List<(BaseUnit unit, int cost, int weight)> currentCombo = new();

    // Filter out units that are too expensive to ever purchase
    var filteredUnits = units.Where(x => x.cost <= maxTotalCost).ToList();
    Debug.Log($"[GetUnitCombinations] Starting recursion with {filteredUnits.Count} units (filtered from {units.Count})");

    void Recurse(int index, int remainingCount, int remainingCash)
    {
        Debug.Log($"[Recurse] Index: {index}, RemainingCount: {remainingCount}, RemainingCash: {remainingCash}, CurrentComboCount: {currentCombo.Count}");

        // If we've exhausted all unit types or reached the max count, add the valid combo
        if (index >= filteredUnits.Count || remainingCount == 0)
        {
            if (currentCombo.Count > 0)
            {
                Debug.Log($"[Recurse] --> Adding valid combo of {currentCombo.Count} units, total cost: {currentCombo.Sum(x => x.cost)}");
                results.Add(new List<(BaseUnit, int, int)>(currentCombo));
            }
            return;
        }

        var (unit, cost, weight) = filteredUnits[index];
        int maxCopies = Math.Min(remainingCount, cost > 0 ? remainingCash / cost : 0);

        // If there are no valid units to consider, skip to the next one
        if (maxCopies == 0)
        {
            Debug.Log($"[Recurse] Skipping {unit.unitName} as it's too expensive for remaining resources.");
            Recurse(index + 1, remainingCount, remainingCash);
            return;
        }

        for (int count = 0; count <= maxCopies; count++)
        {
            // Add the unit to the current combo
            for (int i = 0; i < count; i++)
                currentCombo.Add((unit, cost, weight));

            Debug.Log($"[Recurse] Trying {count}x {unit.unitName} (cost: {cost}, weight: {weight})");

            // Recurse into the next unit type with updated remaining count and cash
            Recurse(index + 1, remainingCount - count, remainingCash - count * cost);

            // Remove the added units to backtrack and try a different combination
            for (int i = 0; i < count; i++)
                currentCombo.RemoveAt(currentCombo.Count - 1);
        }
    }

    // Start recursion with the initial values
    Recurse(0, maxCount, maxTotalCost);

    // Final debug message with total combinations found
    Debug.Log($"[GetUnitCombinations] Generated {results.Count} total combinations");

    return results;
}*/










    public IEnumerator createUnitAtStructure(BaseUnit unit, BaseStructure prod)
    {
        cameraManager.SetPosition((Vector2)prod.pos);
        yield return new WaitForSeconds(CPU_AnimationWaitTime);
        //Debug.Log($"Unit {candidateFactoryUnit.unitName} has price {candidateFactoryUnit.price} compared to cash {cashRemain}");
        
        gameMaster.selectedStructure = prod;
        gameMaster.ProduceUnit(unit, prod.playerControl, false);
        priorityNodeVectorMap.TryGetValue(prod.pos, out unit.CPU_TargetNode);
        GiveCombatUnitNextNodeAssignment(unit);
        yield return new WaitForSeconds(CPU_AnimationWaitTime);
    }


/*    private void OnDrawGizmos()
    {
        Gizmos.color = Color.cyan;

        if (networkEdges == null) return;

        foreach (NetworkEdge e in priorityNetworkEdgesGround)
        //foreach (NetworkEdge e in networkEdges)
        {
            Vector2Int from = e.vectorA;
            Vector2Int to = e.vectorB;
            Vector3 fromPos = new Vector3(from.x, from.y, 0);
            Vector3 toPos = new Vector3(to.x, to.y, 0);

            Gizmos.DrawLine(fromPos, toPos);
        }
    }*/


    public void AssignPriorityHeadingsToHQ()
    {
        int numPlayers = GameMaster.numPlayers;

        // Initialize arrays on each node
        foreach (NetworkNode node in priorityNetworkNodes)
        {
            node.priorityCostToTarget = new int[numPlayers + 1];
            node.priorityNextNodeToTarget = new NetworkNode[numPlayers + 1];
            //Debug.Log($"node at {node.pos} has id {RuntimeHelpers.GetHashCode(node)}");

            for (int i = 0; i <= numPlayers; i++)
            {

                node.priorityCostToTarget[i] = int.MaxValue;
                node.priorityNextNodeToTarget[i] = null;
                //Debug.Log($"Setting {node.pos} to cost {node.priorityCostToTarget[i]}");
            }
        }

        // For each player, crawl from their HQ
        for (int player = 1; player <= numPlayers; player++)
        {
            //Vector2Int hqPos = commandStructures[player].pos;
            Vector2Int enemyHqPos = defaultTargets[player].pos;
            priorityNodeVectorMap.TryGetValue(enemyHqPos, out NetworkNode hq);
            Queue<NetworkNode> queue = new Queue<NetworkNode>();
            List<NetworkNode> visitedNodes = new List<NetworkNode>();
            hq.priorityCostToTarget[player] = 0;
            hq.priorityNextNodeToTarget[player] = hq;
            queue.Enqueue(hq);
            visitedNodes.Add(hq);

            /*            if (priorityNetworkNodes.Contains(hq))
                        {
                            Debug.Log($"HQ at {hq.pos} is found in priorityNetworkNodes.");
                        }
                        else
                        {
                            Debug.LogWarning($"HQ at {hq.pos} is NOT found in priorityNetworkNodes.");
                        }*/

            while (queue.Count > 0)
            {
                GameMaster.loopSafetyCounter++;
                if (GameMaster.loopSafetyCounter >= gameMaster.loopSafetyLimit)
                {
                    Debug.LogError("AssignPriorityHeadings has tripped the loop safety counter");
                }
                NetworkNode current = queue.Dequeue();
                //NetworkNode bestNeighbour = null;
                int currentDist = current.priorityCostToTarget[player];

                foreach (NetworkEdge edge in current.localEdges)
                //foreach (NetworkNode currentNeighbor in current.localNodes)
                {
                    if (!edge.isLandAccessible)
                        continue;
                    NetworkNode currentNeighbor = edge.GetOtherNode(current);
                    //Debug.Log($"Node {current.pos} has neighbour {currentNeighbor.pos}");
                    //Debug.Log($"currentNeighbor at {currentNeighbor.pos} has id {RuntimeHelpers.GetHashCode(currentNeighbor)}");

                    /*if (!priorityNetworkNodes.Contains(currentNeighbor))
                    {
                        Debug.LogWarning($"[WARNING] Neighbor {currentNeighbor.pos} is not part of priorityNetworkNodes!");
                    }
                    if (currentNeighbor.priorityNextNodeToTarget == null)
                    {
                        currentNeighbor.priorityNextNodeToTarget = new NetworkNode[GameMaster.numPlayers + 1];
                        Debug.Log($"Node {currentNeighbor.pos} priorityNextNode not initialized");
                    }                    
                    if(currentNeighbor.priorityCostToTarget == null)
                    {
                        currentNeighbor.priorityCostToTarget = new int[GameMaster.numPlayers + 1];
                        Debug.Log($"Node {currentNeighbor.pos} priorityNextNodeCost not initialized");


                    }*/
                    int newDist = Manhattan(hq.pos, currentNeighbor.pos);

                    //Debug.Log($"Node {current.pos} has local neighbour {currentNeighbor.pos} with distance {newDist} vs {currentNeighbor.priorityCostToTarget[player]}");

                    if (currentNeighbor.priorityCostToTarget[player] == 0 && currentNeighbor != hq)
                    {
                        Debug.LogWarning($"[COST WARNING] Node at {currentNeighbor.pos} has cost 0 but isn't HQ! Investigate who changed this.");
                    }


                    if (newDist < currentNeighbor.priorityCostToTarget[player])
                    {
                        currentNeighbor.priorityCostToTarget[player] = newDist;
                        currentNeighbor.priorityNextNodeToTarget[player] = current;
                        queue.Enqueue(currentNeighbor);
                    }
                }
            }
        }

/*        for (int p = 1;  p <= GameMaster.numPlayers; p++){

            foreach (NetworkNode node in priorityNetworkNodes)
            {
                Debug.Log($"Node {node.pos} is pointing at {node.priorityNextNodeToTarget[p].pos} with cost {node.priorityCostToTarget[p]} for player {p}");
            }
        }*/
    }


    private static int Manhattan(Vector2Int A, Vector2Int B)
    {
        return Mathf.Abs(A.x - B.x) + Mathf.Abs(A.y - B.y);
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


    public void CorrectManhattanDistances(List<NetworkEdge> edges)
    {

        foreach (NetworkEdge edge in edges)
        {
            //bool curiousCheck = false;
            //curiousCheck = node.Equals(new NetworkEdge(new Vector2Int(8,2), new Vector2Int(10, 2)));


            List<Vector2Int> dirs = new();
            //a little hacky using speficially infantry for this but that will be the source of truth for now.
            dirs = masterGrid.BidirectionalSearch(edge.vectorA, edge.vectorB, PrefabManager.getBaseUnitFromName("Infantry", 0), (int)(edge.distance*1.5));
            if (dirs.Count == 0) {
                edge.isLandAccessible = false;
                //Debug.Log($"GraphEdge {edge.vectorA}{edge.vectorB} is not land accessible");
            }
            int total = 0;
            Vector2Int start = edge.vectorA;
            foreach (Vector2Int dir in dirs)
            {
                //Vector2Int delta = dir - start;
                start = dir;
                /*                if (curiousCheck)
                                {
                                    Debug.Log($"vector is {dir} with a delta {delta}");
                                }*/
                total += Manhattan(dir, start);//Math.Abs(delta.x) + Math.Abs(delta.y);
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

    public void SetGroundPriorityNetwork()
    {
        foreach(NetworkEdge edge in priorityNetworkEdgesAir)
        {
            List<Vector2Int> dirs = new();
            dirs = masterGrid.BidirectionalSearch(edge.vectorA, edge.vectorB, PrefabManager.getBaseUnitFromName("LightTank", 0), (int)(edge.distance*1.5));
            /*            if (dirs.Count == 0)
                            Debug.Log($"Priority GraphEdge {edge.vectorA}{edge.vectorB} is not vehicle accessible");
                        else
                            priorityNetworkEdgesGround.Add(edge);*/
            if (dirs.Count != 0)
                priorityNetworkEdgesGround.Add(edge);
        }
    }

    public static void GiveResourceUnitNodeAssignment(BaseUnit unit)
    {
        NetworkNode currentNode = unit.CPU_TargetNode;
        NetworkNode targetNode = null;
        if (currentNode == null) {
            currentNode = GetClosestNodeAgnostic(unit.pos, false);
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

        if (unit.CPU_TargetNode == null)
        {
            Debug.LogError($"[Assignment Fail] Unit {unit.pos} ended up with no target node. Last attempted target was: {targetNode?.pos}");
        }

    }



    public void GiveCombatUnitNextNodeAssignment(BaseUnit unit)
    {
        if (unit.CPU_TargetNode == null)
        {
            //assume unit was created on a priority structure, maybe this is bad form for virix implementation.
            priorityNodeVectorMap.TryGetValue(unit.pos, out unit.CPU_TargetNode);
            if (unit.CPU_TargetNode == null)
                unit.CPU_TargetNode = GetClosestNodeAgnostic(unit.pos, true);
            /*            Debug.LogWarning($"Combat unit {unit.pos} does not have a target node assignment");
                        return;   */
        }

        NetworkNode currentNode = unit.CPU_TargetNode;

        //MG 25-04-2: realizing now this implementation doesn't properly handle ground units moving through unpassable terrain, I think.
        NetworkNode nextTargetNode = currentNode.priorityNextNodeToTarget[unit.playerControl];
        unit.CPU_TargetNode = nextTargetNode;
        if (unit.CPU_TargetNode == null)
        {
            Debug.LogWarning($"{unit.pos}'s target node is null because {currentNode} doesn't have a target");
        }
/*        else
            Debug.Log($"Setting {unit.pos}'s target node to {unit.CPU_TargetNode.pos}");*/
    }

/*    public static NetworkNode GetUnitAssignment(BaseUnit unit)
    {

        NetworkNode currentNode = resourceNetworkNodes.Find(n => n.pos == unit.pos);

        if (currentNode == null)
        {
            currentNode = GetClosestNodeAgnostic(unit.pos, !unit.isResourceUnit);
        }

        NetworkNode targetNode = currentNode.closestUnclaimed[unit.playerControl];
        targetNode.ClaimByUnit(unit);
        return targetNode;
    }*/
    public static  NetworkNode GetClosestNodeAgnostic(Vector2Int targetPos, bool isPriority)
    {
        NetworkNode closestNode = null;
        int closestDistance = int.MaxValue;
        
        List<NetworkNode> nodes = isPriority ? priorityNetworkNodes : resourceNetworkNodes;

        foreach (var node in nodes)
        {
            int distance = Manhattan(node.pos, targetPos);

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

    public void LogicCheckUnits(int player)
    {
        foreach(BaseUnit unit in MasterGrid.playerUnits[player])
        {
            if (unit.nonExhausted)
            {
                Debug.LogWarning($"Unit {unit.pos} is nonExhausted. It has target node {unit.CPU_TargetNode.pos} and attackable list count {unit.CPU_AttackableUnitList.Count}, but it didn't do anything. Moving to a random legal square.");
                masterGrid.selectedUnit = unit;
                masterGrid.moveSelectedUnit(GetRandomWalk(unit));

            }
        }
    }

    /*  Reference a json of the production weights for each unit against a certain matchup.
        In theory I could include this in Prefab importing but unnecessarily fancy for now.
        In future I could extend this to multiplayer by doing a multiplier of the weights against the ratio of opps matchups
    */
    public void ImportMatchupWeights()
    {
        // Initialize 2D array: matchupWeights[myProgeny, opponentProgeny]
        matchupWeights = new List<(BaseUnit unit, int cost, int weight)>[3, 3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matchupWeights[i, j] = new List<(BaseUnit, int, int)>();
            }
        }

        List<string> lines = GameValuesSO.LoadCSVFromJSON("MatchupWeights.json");
        if (lines == null || lines.Count < 2)
        {
            Debug.LogError("CSV file not loaded or empty.");
            return;
        }

        // Flatten unitCosts into a dictionary for lookup by gamePieceId
        var allCosts = GameMaster.unitCosts
            .SelectMany(list => list)
            .ToDictionary(tuple => tuple.Item1.gamePieceId, tuple => (tuple.Item1, tuple.Item2));

        // Parse CSV lines
        for (int i = 1; i < lines.Count; i++) // skip header
        {
            string line = lines[i];
            if (string.IsNullOrWhiteSpace(line))
                continue;

            var cols = line.Split(',');
            if (cols.Length < 6)
            {
                Debug.LogWarning($"Line {i + 1} malformed: {line}");
                continue;
            }

            if (!int.TryParse(cols[0].Trim(), out int gamePieceId))
            {
                Debug.LogWarning($"Invalid gamePieceId on line {i + 1}: {cols[0]}");
                continue;
            }

            string progenyStr = cols[2].Trim();
            if (!Enum.TryParse(progenyStr, out Progeny progenyEnum))
            {
                Debug.LogWarning($"Invalid progeny value on line {i + 1}: {progenyStr}");
                continue;
            }

            int myProgeny = (int)progenyEnum;

            if (!allCosts.TryGetValue((byte)gamePieceId, out var unitInfo))
            {
                Debug.LogWarning($"Unit with gamePieceID '{gamePieceId}' not found in unitCosts.");
                continue;
            }

            var unit = unitInfo.Item1;
            var cost = unitInfo.Item2;

            // Add weights for this unit against each opponent progeny
            for (int enemyProgeny = 0; enemyProgeny < 3; enemyProgeny++)
            {
                if (!int.TryParse(cols[3 + enemyProgeny], out int weight))
                {
                    Debug.LogWarning($"Weight parse error on line {i + 1} for enemy progeny {enemyProgeny}");
                    continue;
                }

                matchupWeights[(int)progenyEnum, enemyProgeny].Add((unit, cost, weight));
            }
        }

        //Debug.Log("Completed importing matchup weights");
        //ExportMatchupWeightsToCSV(matchupWeights, "assets/matchupWeightsCheck.csv");

        // Example: Build Ertrian production lists based on current enemy
        ertrianFactoryProdList = new List<(BaseUnit, int, int)>();
        ertrianAirportProdList = new List<(BaseUnit, int, int)>();

        int progenyOpp = 0;
        for (byte i = 0; i < GameMaster.numPlayers; i++)
        {
            byte tempProgeny = gameMaster.getPlayerProgeny(i);
            if (tempProgeny != 0) // Assuming Ertrian is progeny 0
                progenyOpp = tempProgeny;
        }

        foreach (var (unit, cost, weight) in matchupWeights[0, progenyOpp])
        {
            if (unit.unitTerrainType == UnitTerrainType.Land)
                ertrianFactoryProdList.Add((unit, cost, weight));
            if (unit.unitTerrainType == UnitTerrainType.Air)
                ertrianAirportProdList.Add((unit, cost, weight));
        }
    }

    public void ExportMatchupWeightsToCSV(List<(BaseUnit, int, int)>[,] matchupWeights, string filepath)
    {
        List<string> lines = new List<string>();

        // Header
        lines.Add("Progeny,GamePieceID,UnitName,WeightVsErtrian,WeightVsVirix,WeightVsSentus");

        // Dictionary to temporarily hold flattened rows: Key = gamePieceID, Value = [progeny, name, [weight0, weight1, weight2]]
        Dictionary<int, (int progeny, string name, int[] weights)> weightMap = new Dictionary<int, (int, string, int[])>();

        for (int progeny = 0; progeny < 3; progeny++)
        {
            for (int opponent = 0; opponent < 3; opponent++)
            {
                foreach (var (unit, cost, weight) in matchupWeights[progeny, opponent])
                {
                    int id = unit.gamePieceId;
                    if (!weightMap.ContainsKey(id))
                    {
                        weightMap[id] = (progeny, unit.unitName, new int[3]);
                    }

                    weightMap[id].weights[opponent] = weight;
                }
            }
        }

        // Compose lines from map
        foreach (var kvp in weightMap)
        {
            int id = kvp.Key;
            int progeny = kvp.Value.progeny;
            string name = kvp.Value.name;
            int[] weights = kvp.Value.weights;

            lines.Add($"{progeny},{id},{name},{weights[0]},{weights[1]},{weights[2]}");
        }

        System.IO.File.WriteAllLines(filepath, lines);
        //Debug.Log($"Exported matchup weights to: {filepath}");
    }

    public Vector2Int GetRandomWalk(BaseUnit unit)
    //fallback to when unit can't find a path to it's target node, has nothing to attack, can't move to a legal square in it's movement path, etc.
    {
        if (unit.CPU_MoveSquaresList.Count < 1)
        {
            unit.setNonExhausted(false);
            return unit.pos;
        }
        int range = unit.movementRange;
        //bool[] minOneAtDistance = new bool[range];
        List<List<Vector2Int>> squaresAtDistance = new();

        for (int s =0; s<range; s++)
        {
            squaresAtDistance.Add(new List<Vector2Int>());
        }

        for (int i = 0; i < unit.CPU_MoveSquaresList.Count; i++)
        {
            int manhattan = Manhattan(unit.pos, unit.CPU_MoveSquaresList[i]);
            if (manhattan <= range && manhattan > 0)
                if (masterGrid.LegalMove(unit.CPU_MoveSquaresList[i], unit) == 1 && unit.CPU_MoveSquaresList[i] != defaultTargets[unit.playerControl].pos)
                {
                    squaresAtDistance[manhattan - 1].Add(unit.CPU_MoveSquaresList[i]);
                }
        }

        for (int s = range - 1; s >= 0; s--)
        {
            if (squaresAtDistance[s].Count > 0)
            {
                int count = squaresAtDistance[s].Count;
                int rand = UnityEngine.Random.Range(0, count);
                return squaresAtDistance[s][rand];
            }
        }

        unit.setNonExhausted(false);
        return unit.pos;
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

    public void AddEdge(NetworkNode nodeA, NetworkNode nodeB, bool isPriority)
    {
        NetworkEdge newEdge = new NetworkEdge(nodeA, nodeB);
        newEdge.isPriorityAir = isPriority && nodeA.structure.structureType != 0 && nodeB.structure.structureType != 0;

        List<NetworkEdge> edgeList = isPriority ? priorityNetworkEdgesAir : networkEdges;

        if (!edgeList.Contains(newEdge))
        {
/*            if (isPriority)
            {
                Debug.Log($"adding edge {nodeA.pos}, {nodeB.pos} to list with count {edgeList.Count}");
            }*/
            edgeList.Add(newEdge);
            nodeA.AddEdge(newEdge, nodeB);
            nodeB.AddEdge(newEdge, nodeA);
        }
/*        else
        {
            if (isPriority)
            {
                Debug.Log($"Setting Edge: {nodeA.pos} <-> {nodeB.pos} to priority edge");
            }
        }*/
    }





}


