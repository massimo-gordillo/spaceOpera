using System.Collections.Generic;
using UnityEngine;

public class NetworkEdge
{
    public NetworkNode nodeA { get; private set; }
    public NetworkNode nodeB { get; private set; }
    public Vector2Int vectorA { get; private set; }
    public Vector2Int vectorB { get; private set; }

    public Vector2Int relativeVector;
    public int distance { get; set; }

    public bool isLandAccessible = true;

    public bool isPriorityAir = false;

    public bool isPriorityGround = false;

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
        //Debug.Log($"Edge {vectorA} to {vectorB} is being asked to provide NOT {lonelyNode.pos} between {nodeA.pos} and {nodeB.pos}");
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