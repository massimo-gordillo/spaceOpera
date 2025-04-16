
using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Linq;

//using Unity.Mathematics;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;


public class CPUMananger : MonoBehaviour
{

    public BaseUnit[,] unitGrid;
    public BaseStructure[,] structureGrid;
    public BaseStructure[] commandStructures; 
    public byte[,] terrainGrid;
    public static List<NetworkNode> nodeList = new();
    public BaseStructure[] structureListArray;
    public double[,] structuresEuclideanDistance;
    //List<Vector2Int> structLocs;
    Dictionary<Vector2Int, NetworkNode> nodeVectorMap = new();
    //public List<(Vector2Int, Vector2Int)> graphEdges = new List<(Vector2Int, Vector2Int)>();
    public List<NetworkEdge> graphEdges = new();
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
            nodeList.Add(node);
            nodeVectorMap.Add(node.pos, node);
            //structureListArray[i] = structure;
            //i++;
        }
        //SortByDistanceFromOrigin(structureListArray);
        //Vector2[] structLocs = 

        //generatePairwiseEuclideanDistanceArray(structLocs);
        //WriteArrayToCSV("EuclideanDistanceArray.csv");
        //GenerateNaiveStructureNetwork();
        //ExportVerticiesToCSV();

        foreach (NetworkNode n in nodeList)
        {
            ConnectStructurePairs(n, 6); //specifically 6 as it's two infantry traverse distances
        }

        foreach(NetworkNode n in nodeList)
        {
            for (int p = 1; p <= GameMaster.numPlayers; p++)
                n.CalculateClosestUnclaimedNieghbour(p);
        }
        //Debug.Log($"Done searching pairs, node count is {graphEdges.Count}");

        CorrectManhattanDistances();
        //StartCoroutine(DrawStructureDebugLines());
    }

    public void ConnectStructurePairs(NetworkNode node, int maxDistance)
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

            /*            if (isCurious)
                            Debug.Log($"checking {origin},         N: {northSet}       S: {southSet}      E: {eastSet}      W: {westSet}");*/
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
                    AddEdge(node.pos, neighbor.pos, node, neighbor);


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
            if (nodeVectorMap.TryGetValue(checkPos, out NetworkNode diagNeighbor))
            {
                // Add the diagonal pair to the vertices list
                AddEdge(node.pos, diagNeighbor.pos, node, diagNeighbor);

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
            foreach (var (from, to) in graphEdges)
            {
                Vector3 fromPos = new Vector3(from.x, from.y, 0);
                Vector3 toPos = new Vector3(to.x, to.y, 0);
                Debug.DrawLine(fromPos, toPos, Color.green);
            }
        }*/

    public IEnumerator DrawStructureDebugLines()
    {
        GameObject prevLine = null;
        foreach (NetworkEdge edge in graphEdges)
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
            NetworkNode targetNode = unit.CPU_TargetNode;
            if (targetNode == null)
            {
                GiveUnitAssignment(unit);
                targetNode = unit.CPU_TargetNode;
            }

            Vector2Int nodePos = targetNode.pos;
            int delta = (int)((unit.pos-nodePos).magnitude);
            if (unit != null && unit.isResourceUnit)
            {
                if (delta > 0)
                {
                    List<Vector2Int> availPath = masterGrid.BidirectionalSearch(unit.pos, nodePos, unit, delta * 2);
                    if (availPath.Count > 0)
                    {
                        Vector2Int target = masterGrid.GetFurthestTileByMovement(availPath, unit.movementRange);
                        if (target.magnitude != 0)
                        {
                            masterGrid.selectedUnit = unit;
                            masterGrid.moveSelectedUnit(target);

                        }
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




    private void OnDrawGizmos()
    {
        Gizmos.color = Color.cyan;

        if (graphEdges == null) return;

        foreach (NetworkEdge e in graphEdges)
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

        foreach (NetworkEdge edge in graphEdges)
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
            if (currentNode.IsClaimableBy(unit))
            {
                targetNode = currentNode;
            }
        }
        if (targetNode == null) {
           targetNode = currentNode.closestUnclaimed[unit.playerControl];
        }
        targetNode.ClaimByUnit(unit);
    }

    public static NetworkNode GetUnitAssignment(BaseUnit unit)
    {

        NetworkNode currentNode = nodeList.Find(n => n.pos == unit.pos);

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

        foreach (var node in nodeList)
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
            foreach (NetworkEdge e in graphEdges)
            {
                Vector2Int from = e.vectorA;
                Vector2Int to = e.vectorB;
                writer.WriteLine($"{from.x},{from.y},{to.x},{to.y}");
            }
        }

        Debug.Log($"Verticies CSV exported to: {filePath}");
    }

    public void AddEdge(Vector2Int a, Vector2Int b, NetworkNode nodeA, NetworkNode nodeB)
    {
        NetworkEdge newEdge = new NetworkEdge(nodeA, nodeB);

        // Check if the node already exists in the list (undirected graph, so vectorA-vectorB is the same as vectorB-vectorA)
        if (!graphEdges.Contains(newEdge))
        {
            graphEdges.Add(newEdge);
            //Debug.Log($"Added node: {a} <-> {b} with distance: {newEdge.distance}");
            nodeA.AddEdge(newEdge, nodeB);
            nodeB.AddEdge(newEdge, nodeA);
        }
        else
        {
            Debug.Log($"Edge already exists: {a} <-> {b}");
        }
    }

    

}

public class NetworkEdge
{
    public NetworkNode nodeA { get; private set; }
    public NetworkNode nodeB { get; private set; }
    public Vector2Int vectorA { get; private set; }
    public Vector2Int vectorB { get; private set; }

    public Vector2Int relativeVector;
    public int distance { get; set; }

    public bool isLandAccessible = true;

    // Constructor to initialize the NetworkEdge
    public NetworkEdge(NetworkNode A, NetworkNode B)
    {
        nodeA = A;
        nodeB = B;
        vectorA = A.pos;
        vectorB = B.pos;
        relativeVector = vectorA - vectorB;
        distance = Mathf.Abs(relativeVector.x) + Mathf.Abs(relativeVector.y);
        //distance = CalculateManhattanDistance(vectorA, vectorB);
    }

    // Method to calculate Manhattan distance
/*    private int CalculateManhattanDistance(Vector2Int a, Vector2Int b)
    {
        return Mathf.Abs(a.x - b.x) + Mathf.Abs(a.y - b.y);
    }
*/
    // Override Equals to ensure that edges are treated the same regardless of order
    public override bool Equals(object obj)
    {
        if (obj is NetworkEdge edge)
        {
            return (vectorA == edge.vectorA && vectorB == edge.vectorB) || (vectorA == edge.vectorB && vectorB == edge.vectorA);
        }
        return false;
    }

    // Override GetHashCode to ensure consistent hashing for equal edges
    public override int GetHashCode()
    {
        // Combine the hash codes of vectorA and vectorB, ensuring order doesn't matter
        return vectorA.GetHashCode() ^ vectorB.GetHashCode();
    }

    public NetworkNode GetOtherNode(NetworkNode notMe)
    {
        //Debug.Log($"Edge {vectorA} to {vectorB} is being asked to provide NOT {notMe.pos} between {nodeA.pos} and {nodeB.pos}");
        if (notMe.Equals(nodeA)) //using the overridden equals function. I should /maybe/ double check I'm not making a bunch of duplicates, maybe I should pull them from the node list.
            return nodeB;
        else if (notMe.Equals(nodeB))
            return nodeA;
        else
        {
            Debug.LogError($"Edge {vectorA},{vectorB} being asked to return a pair node but foreign node provided");
            return null;
        }
    }
}

public class NetworkNode
{ //we're gonna assume only 2 players for now, rather not make arrays of lists.... Nevermind.

    public List<NetworkEdge> localEdges = new();
    public List<NetworkNode> localNodes = new();
    public NetworkNode[] closestUnclaimed = new NetworkNode[GameMaster.numPlayers+1];
    public int[] closestUnclaimedDistance = new int[GameMaster.numPlayers + 1];
    public BaseStructure structure;
    public Vector2Int pos;
    public BaseUnit[] claimingUnits = new BaseUnit[GameMaster.numPlayers + 1];
    public bool isCaptured;
    public int playerControl;
    public bool[] hasPlayerClaimed = new bool[GameMaster.numPlayers + 1];
    //public List<NetworkNode>[] pointingNodes = new List<NetworkNode>[GameMaster.numPlayers]; //list of nodes which see me as their closest unclaimed neighbour

    public NetworkNode Npair;
    public NetworkNode Spair;
    public NetworkNode Wpair;
    public NetworkNode Epair;

    public NetworkNode(BaseStructure structure)
    {
        this.structure = structure;
        pos = structure.pos;
        isCaptured = structure.playerControl != 0;
        playerControl = structure.playerControl;
    }

    public void AddEdge(NetworkEdge networkEdge, NetworkNode localNode)
    {
        localEdges.Add(networkEdge);
        localNodes.Add(localNode);
    }

    public void ClaimByUnit(BaseUnit unit)
    {
        if (IsClaimableBy(unit)){
            unit.CPU_TargetNode = this;
            unit.CPU_Heading = this.pos;
            int playerClaiming = unit.playerControl;
            claimingUnits[playerClaiming] = unit;
            hasPlayerClaimed[playerClaiming] = true;
            foreach (NetworkNode nieghbour in localNodes)
            {
                NeighbourHasSetThemselvesClaimed(this, playerClaiming, true);
            }
        }else
        {
            Debug.LogWarning($"Node {this.pos} trying to be claimed by unit {unit.pos} but not legal to be claimed");
        }
    }

    public void NeighbourHasSetThemselvesClaimed(NetworkNode neighbour, int playerControl, bool captured)
    {
        if(captured)
            if (closestUnclaimed[playerControl] == neighbour)
            {
                CalculateClosestUnclaimedNieghbour(playerControl);
            }
        else //losing control
            {
                //in theory we could have a dict of nodes, edge, and raw vector distance but this shorthand is ok for now.
                CalculateClosestUnclaimedNieghbour(playerControl);
            }
    }

    public void CalculateClosestUnclaimedNieghbour(int playerControl)
    {
        int? shortest = null;
        NetworkNode shortestNeighbour = null;
        foreach (NetworkEdge neighbourEdge in localEdges)
        {
            NetworkNode neighbourNode = neighbourEdge.GetOtherNode(this);
            //Debug.Log($"Node {pos} says its neighbour is {neighbourNode.pos}, which player {playerControl} controls? {playerControl == neighbourNode.playerControl}. Has this player claimed it? {neighbourNode.hasPlayerClaimed[playerControl]}");

            if (!(neighbourNode.playerControl == playerControl || neighbourNode.hasPlayerClaimed[playerControl] ))
            {
                if (shortest == null || neighbourEdge.distance < shortest && neighbourEdge.isLandAccessible) //MG 25-04-11: what if they tie?
                {
                    shortest = neighbourEdge.distance;
                    shortestNeighbour = neighbourNode;
                }
            }
        }
        if (shortest == null || shortestNeighbour == null)
        {
            DefaultClosestNeighbour(this.playerControl);
        }else
        {
            closestUnclaimed[playerControl] = shortestNeighbour;
            closestUnclaimedDistance[playerControl] = (int)shortest;
            //Debug.Log($"Node {pos} says its closest unclaimed neighbour for player {playerControl} is {shortestNeighbour.pos}");
        }
    }

    public void DefaultClosestNeighbour(int player)
    {
        //some DFS
        //closestUnclaimed[player] = this;
        closestUnclaimed[player] = FindNearestUnclaimedBFS(this, player, 3);
        if(closestUnclaimed[player] == null)
        {
            Debug.LogWarning($"Node {this.pos} unable to find closest unclaimed in DFS 3 steps");
            closestUnclaimed[player] = this;
        }
    }

    /*public NetworkNode FindNearestUnclaimedDFS(NetworkNode current, int player, int remainingSteps, HashSet<NetworkNode> visited)
    {
        if (current == null || remainingSteps < 0 || visited.Contains(current))
            return null;

        visited.Add(current);

        // Found an unclaimed node
        if (!current.hasPlayerClaimed[player])
            return current;

        // Sort neighbors by closeness (optional, can use other heuristics)
        var sortedNeighbors = current.localEdges
            .Where(edge => !visited.Contains(edge.GetOtherNode(current)))
            .OrderBy(edge => edge.distance)
            .Select(edge => edge.GetOtherNode(current))
            .ToList();


        foreach (var neighbor in sortedNeighbors)
        {
            var result = FindNearestUnclaimedDFS(neighbor, player, remainingSteps - 1, visited);
            if (result != null)
                return result;
        }

        return null;
    }*/

    public NetworkNode FindNearestUnclaimedBFS(NetworkNode start, int player, int maxSteps)
    {
        if (start == null) return null;

        Queue<(NetworkNode node, int steps)> queue = new Queue<(NetworkNode, int)>();
        HashSet<NetworkNode> visited = new HashSet<NetworkNode>();

        queue.Enqueue((start, 0));
        visited.Add(start);

        while (queue.Count > 0)
        {
            var (current, steps) = queue.Dequeue();

            if (!current.hasPlayerClaimed[player])
                return current;

            if (steps >= maxSteps)
                continue;

            var sortedNeighbors = current.localEdges
                .Where(edge => !visited.Contains(edge.GetOtherNode(current)))
                .OrderBy(edge => edge.distance)
                .Select(edge => edge.GetOtherNode(current))
                .ToList();

            foreach (var neighbor in sortedNeighbors)
            {
                visited.Add(neighbor);
                queue.Enqueue((neighbor, steps + 1));
            }
        }

        return null; // No unclaimed node found within maxSteps
    }



    public void SetCaptured(int newPlayer, int oldPlayer)
    {
        playerControl = newPlayer;
        foreach (NetworkNode neighbourNode in localNodes)
        {
            neighbourNode.NeighbourHasSetThemselvesClaimed(this, playerControl, true);
            neighbourNode.NeighbourHasSetThemselvesClaimed(this, oldPlayer, false);
        }
    }

    public bool IsClaimableBy(BaseUnit unit)
    {
        if (playerControl == unit.playerControl || hasPlayerClaimed[unit.playerControl])
            return false;
        else
            return true;
    }

    public override bool Equals(object obj)
    {
        if (obj is NetworkNode node)
        {
            return (pos == node.pos);
        }
        return false;
    }

    public override int GetHashCode()
    {
        return pos.GetHashCode();
    }

}
