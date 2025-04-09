using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
//using Unity.Mathematics;
using UnityEngine;
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
    public List<(Vector2Int, Vector2Int)> verticies = new List<(Vector2Int, Vector2Int)>();
    public GameMaster gameMaster;
    public MasterGrid masterGrid;


    /*  Ok let's do a euclidean distance operation to find the network paths.
        I imagine there's a crawling algorithm that does this in linear complexity, I can explore that at a later time.
        Core idea is start a (0,0) and crawl towards (width, length) horizontally while checking for move legality and structures I've come across
        ChatGPT made a clever suggestion where instead of crawling from 0,0 you crawl outwardly from each structure location which will give you a good approx to the closest neighbour in each direction in a cone sort of fashion.
        Maybe I can leverage my recursive A* search function in masterGrid but that sounds painfully complex with passing of functions etc, gross.
     */

    /*
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
        SortByDistanceFromOrigin(structureList);
        //structureListArray = new BaseStructure[structureList.Count];
        structuresEuclideanDistance = new double[structureList.Count, structureList.Count];
        structLocs = new List<Vector2Int>();
        foreach (BaseStructure structure in structureList)
        {
            structLocs.Add(new Vector2Int(structure.xPos, structure.yPos));
            //structureListArray[i] = structure;
            //i++;
        }
        //SortByDistanceFromOrigin(structureListArray);
        //Vector2[] structLocs = 

        generatePairwiseEuclideanDistanceArray(structLocs);
        //WriteArrayToCSV("EuclideanDistanceArray.csv");
        GenerateNaiveStructureNetwork();
        ExportVerticiesToCSV();

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
            foreach (var (from, to) in verticies)
            {
                Vector3 fromPos = new Vector3(from.x, from.y, 0);
                Vector3 toPos = new Vector3(to.x, to.y, 0);
                Debug.DrawLine(fromPos, toPos, Color.green);
            }
        }*/

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.cyan;

        if (verticies == null) return;

        foreach (var (from, to) in verticies)
        {
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
            int da = a.xPos * a.xPos + a.yPos * a.yPos;
            int db = b.xPos * b.xPos + b.yPos * b.yPos;
            return da.CompareTo(db);
        });
    }

    private void generatePairwiseEuclideanDistanceArray(List<Vector2Int> locations)
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
    }

    //function to generate the new connections with still outstanding nodes.
    private void GenerateNaiveStructureNetwork()
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
        /*          int j = i;
                    if (j + 2 < count)
                    {
                        bool flip = structuresEuclideanDistance[i, j + 1] <= structuresEuclideanDistance[i, j + 2];
                        smallest = flip ? structuresEuclideanDistance[i, j + 1] : structuresEuclideanDistance[i, j + 2];
                        smallestV = flip ? new Vector2Int(i, j + 1) : new Vector2Int(i, j + 2);
                        nextSmallest = !flip ? structuresEuclideanDistance[i, j + 1] : structuresEuclideanDistance[i, j + 2];
                        nextSmallestV = !flip ? new Vector2Int(i, j + 1) : new Vector2Int(i, j + 2);

                    }//else (what if it doesn't?)*/
            
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



            //I can purge this and just have it add to the verticies directly.
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
        /*
                for (int i = 0; i < count; i++)
                {
                    Vector2Int sourceLocation = 
                    //verticies.Add(smallestPairingsArray[i,0]);
                }*/
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

                    verticies.Add((startingLocation, endingLocation));
                }
            }
            i++;
        }

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

            foreach (var (from, to) in verticies)
            {
                writer.WriteLine($"{from.x},{from.y},{to.x},{to.y}");
            }
        }

        Debug.Log($"Verticies CSV exported to: {filePath}");
    }

}
