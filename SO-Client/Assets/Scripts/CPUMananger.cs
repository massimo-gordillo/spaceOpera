using Cysharp.Threading.Tasks.Triggers;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
//using Unity.Mathematics;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;
//using UnityEngine.UIElements;
//using UnityEditor.FilePathAttribute;

public class CPUMananger : MonoBehaviour 
{

    public BaseUnit[,] unitGrid;
    public BaseStructure[,] structureGrid; 
    public byte[,] terrainGrid;
    public List<BaseStructure> structureList;
    public BaseStructure[] structureListArray;
    public double[,] structuresEuclideanDistance;
    List<Vector2Int> structLocs;
    Dictionary<Vector2Int, BaseStructure> structureVectorMap = new();
    //public List<(Vector2Int, Vector2Int)> graphEdges = new List<(Vector2Int, Vector2Int)>();
    public List<GraphEdge> graphEdges = new ();
    public GameMaster gameMaster;
    public MasterGrid masterGrid;

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
     * Right now the solution isn't symmetrical but it's close.
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



    public void naiveV1Start()
    {
        Debug.Log("Calling to start CPUManager");
        structureList = masterGrid.GetStructures(null);
        structureGrid = masterGrid.structureGrid;
        SortByDistanceFromOrigin(structureList);
        //structureVectorMap = new();
        //structureListArray = new BaseStructure[structureList.Count];
        structuresEuclideanDistance = new double[structureList.Count, structureList.Count];
        structLocs = new List<Vector2Int>();
        foreach (BaseStructure structure in structureList)
        {
            structLocs.Add(new Vector2Int(structure.xPos, structure.yPos));
            structureVectorMap.Add(new Vector2Int(structure.xPos, structure.yPos), structure);
            //structureListArray[i] = structure;
            //i++;
        }
        //SortByDistanceFromOrigin(structureListArray);
        //Vector2[] structLocs = 

        //generatePairwiseEuclideanDistanceArray(structLocs);
        //WriteArrayToCSV("EuclideanDistanceArray.csv");
        //GenerateNaiveStructureNetwork();
        //ExportVerticiesToCSV();

        foreach (BaseStructure s in structureList)
        {
            ConnectStructurePairs(s, 6); //specifically 6 as it's two infantry traverse distances
        }
        //Debug.Log($"Done searching pairs, edge count is {graphEdges.Count}");

        CorrectManhattanDistances();
        StartCoroutine(DrawStructureDebugLines());
    }

    public void ConnectStructurePairs(BaseStructure node, int maxDistance)
    {

        Vector2Int origin = new Vector2Int (node.xPos, node.yPos);

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
                        if (structureVectorMap.TryGetValue(checkPos, out BaseStructure neighbor))
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


                if (structureVectorMap.TryGetValue(checkPos, out BaseStructure neighbor))
                {
                    // Add the pair to the vertices list with their positions
                    AddEdge(new Vector2Int(node.xPos, node.yPos), new Vector2Int(neighbor.xPos, neighbor.yPos));


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

            // Only attempt if diagonal is needed (i.edge., one cardinal direction is missing)
            Vector2Int checkPos = origin + dir * newDist; 
            if (structureVectorMap.TryGetValue(checkPos, out BaseStructure diagNeighbor))
            {
                // Add the diagonal pair to the vertices list
                AddEdge(new Vector2Int(node.xPos, node.yPos), new Vector2Int(diagNeighbor.xPos, diagNeighbor.yPos));

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
        foreach (GraphEdge edge in graphEdges)
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
    



/*    private void OnDrawGizmos()
    {
        Gizmos.color = Color.cyan;

        if (graphEdges == null) return;

        foreach (GraphEdge e in graphEdges)
        {
            Vector2Int from = e.vectorA;
            Vector2Int to = e.vectorB;
            Vector3 fromPos = new Vector3(from.x, from.y, 0);
            Vector3 toPos = new Vector3(to.x, to.y, 0);

            Gizmos.DrawLine(fromPos, toPos);
        }
    }
*/
    public static void SortByDistanceFromOrigin(List<BaseStructure> structures)
    {
        structures.Sort((a, b) =>
        {
            // Compute squared distances to avoid expensive sqrt calls
            int da = a.xPos * a.xPos + a.yPos * a.yPos;
            int db = b.xPos * b.xPos + b.yPos * b.yPos;
            return da.CompareTo(db);
        });
    }

    public void CorrectManhattanDistances()
    {
        
        foreach (GraphEdge edge in graphEdges)
        {
            //bool curiousCheck = false;
            //curiousCheck = edge.Equals(new GraphEdge(new Vector2Int(8,2), new Vector2Int(10, 2)));
                

            List<Vector2Int> dirs = new ();
            //a little hacky using speficially infantry for this but that will be the source of truth for now.
            dirs = masterGrid.BidirectionalSearch(edge.vectorA, edge.vectorB, PrefabManager.getBaseUnitFromName("Infantry",0), edge.Distance + 1);
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
                Debug.Log($"Edge {edge.vectorA} to {edge.vectorB} has distance {total}");
            }*/

            if (total > edge.Distance)
            {
                edge.Distance = total;
                //Debug.Log($"Edge distance for {edge.vectorA} to {edge.vectorB} is overwritten to {edge.Distance}");

            }

        }
        Debug.Log("Done checking land accessibility");
    }

    /*private void generatePairwiseEuclideanDistanceArray(List<Vector2Int> locations)
    {
        Vector2Int[] locationsA = new Vector2Int[locations.Count];
        double[,] distances = new double[locations.Count, locations.Count];
        int l = 0;
        foreach (Vector2Int location in locations)
        {
            locationsA[l] = location;
            l++;
        }

        for (int i = 0; i < locationsA.Length; i++)
        {
            for (int j = i; j < locationsA.Length; j++) 
            {
                if (j == i)
                {
                    distances[i, j] = 0;
                    continue;
                }
                Vector2Int diff = locations[i] - locations[j];
                distances[i, j] = diff.magnitude;
                distances[j, i] = diff.magnitude;
            }
        }

        structuresEuclideanDistance = distances;
    }*/

    //function to generate the new connections with still outstanding nodes.
    /*private void GenerateNaiveStructureNetwork()
    {
        int numNewConnections = 2; //we're gonna assume 2 for this implementation. We can scale the smallest/nextSmallest implementation should we wanna get fancy.
        int count = structureList.Count;
        Vector2Int[,] smallestPairingsArray = new Vector2Int[count, numNewConnections];
        double[,] SED = structuresEuclideanDistance;
        int i;
        for (i = 0; i < count; i++) 
        {
            
            double? smallest = null;
            Vector2Int? smallestV = null;
            double? nextSmallest = null;
            Vector2Int? nextSmallestV = null;
            //initial condition setting. The first two items are sorted and then the algorithm proceeds. This doesn't check for 0s.
        *//*          int j = i;
                    if (j + 2 < count)
                    {
                        bool flip = structuresEuclideanDistance[i, j + 1] <= structuresEuclideanDistance[i, j + 2];
                        smallest = flip ? structuresEuclideanDistance[i, j + 1] : structuresEuclideanDistance[i, j + 2];
                        smallestV = flip ? new Vector2Int(i, j + 1) : new Vector2Int(i, j + 2);
                        nextSmallest = !flip ? structuresEuclideanDistance[i, j + 1] : structuresEuclideanDistance[i, j + 2];
                        nextSmallestV = !flip ? new Vector2Int(i, j + 1) : new Vector2Int(i, j + 2);

                    }//else (what if it doesn't?)*//*
            
            for (int j = i; j < count; j++)
            {
                //Debug.Log($"Checking location {i},{j} in SED, it has value {SED[i, j]}. Smallest is {smallest}, nextSmallest is {nextSmallest} ");
                if (SED[i, j] == 0)
                    continue;

                if(smallest == null)
                {
                    smallest = SED[i, j];
                    smallestV = new Vector2Int(i,j);
                }
                else if(smallest != null && nextSmallest == null)
                {
                    if (SED[i, j] < smallest)
                    {
                        nextSmallest = smallest;
                        nextSmallestV = smallestV;
                        smallest = SED[i, j];
                        smallestV = new Vector2Int(i, j);
                    }
                    else
                    {
                        nextSmallest = SED[i, j];
                        nextSmallestV = new Vector2Int(i, j);
                    }
                }
                else if (SED[i, j] <= smallest)
                {
                    nextSmallest = smallest;
                    nextSmallestV = smallestV;
                    smallest = SED[i, j];
                    smallestV = new Vector2Int(i, j);
                }
                else if (SED[i, j] > smallest && SED[i, j] < nextSmallest) //we're missing the case where there are ties for nextSmallest but I think that's ok.
                {
                    nextSmallest = SED[i, j];
                    nextSmallestV = new Vector2Int(i, j);
                }

            }



            //I can purge this and just have it add to the graphEdges directly.
            if (smallest != null && nextSmallestV != null)
            {
                smallestPairingsArray[i, 0] = (Vector2Int)smallestV;
                //Debug.Log($"For structureNum {i}, adding pairing {smallestPairingsArray[i, 0]}");

            }
            else
                Debug.LogWarning($"Structure number {i} does not have both a smallest");

            if (nextSmallest != null && nextSmallestV != null)
            {
                smallestPairingsArray[i, 1] = (Vector2Int)nextSmallestV;
                //Debug.Log($"For structureNum {i}, adding pairing {smallestPairingsArray[i, 1]}");

            }
            else
                Debug.LogWarning($"Structure number {i} does not have a 2nd smallest");



            if (smallest != null)
            {
                SED[((Vector2Int)smallestV).x, ((Vector2Int)smallestV).y] = 0;
            }
            if (nextSmallest != null)
            {
                SED[((Vector2Int)nextSmallestV).x, ((Vector2Int)nextSmallestV).y] = 0;
            }
            for (int j = 0; j < count; j++)
            {
                SED[i, j] = 0;
                SED[j, i] = 0;
            }

            
        }
        *//*
                for (int i = 0; i < count; i++)
                {
                    Vector2Int sourceLocation = 
                    //graphEdges.Add(smallestPairingsArray[i,0]);
                }*//*
        i = 0;
        foreach(Vector2Int location in structLocs)
        {

            for (int n = 0; n < numNewConnections; n++)
            {
                Vector2Int startingLocation = location;
                Vector2Int endingLocation = structLocs[(smallestPairingsArray[i, n].y)];
                if (endingLocation == new Vector2Int(0, 0))
                    continue;
                if (smallestPairingsArray[i, n] != null)
                {
                    Debug.Log($"For {location}, adding pairing {smallestPairingsArray[i, n]}, pointing to {endingLocation}");
                    AddEdge(startingLocation, endingLocation);

                }
            }
            i++;
        }

    }*/

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
            foreach (GraphEdge e in graphEdges)
            {
                Vector2Int from = e.vectorA;
                Vector2Int to = e.vectorB;
                writer.WriteLine($"{from.x},{from.y},{to.x},{to.y}");
            }
        }

        Debug.Log($"Verticies CSV exported to: {filePath}");
    }

    public void AddEdge(Vector2Int a, Vector2Int b)
    {
        GraphEdge newEdge = new GraphEdge(a, b);

        // Check if the edge already exists in the list (undirected graph, so vectorA-vectorB is the same as vectorB-vectorA)
        if (!graphEdges.Contains(newEdge))
        {
            graphEdges.Add(newEdge);
            //Debug.Log($"Added edge: {a} <-> {b} with distance: {newEdge.Distance}");
        }
        else
        {
            Debug.Log($"Edge already exists: {a} <-> {b}");
        }
    }

    public class GraphEdge
    {
        public Vector2Int vectorA { get; private set; }
        public Vector2Int vectorB { get; private set; }
        public int Distance { get; set; }

        public bool isLandAccessible = true;

        // Constructor to initialize the GraphEdge
        public GraphEdge(Vector2Int a, Vector2Int b)
        {
            vectorA = a;
            vectorB = b;
            Distance = CalculateManhattanDistance(a, b);
        }

        // Method to calculate Manhattan distance
        private int CalculateManhattanDistance(Vector2Int a, Vector2Int b)
        {
            return Mathf.Abs(a.x - b.x) + Mathf.Abs(a.y - b.y);
        }

        // Override Equals to ensure that edges are treated the same regardless of order
        public override bool Equals(object obj)
        {
            if (obj is GraphEdge edge)
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
    }


}
