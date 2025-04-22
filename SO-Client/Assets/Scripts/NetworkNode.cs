using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class NetworkNode
{ //we're gonna assume only 2 players for now, rather not make arrays of lists.... Nevermind.

    public List<NetworkEdge> localEdges = new();
    public List<NetworkNode> localNodes = new();
    public NetworkNode[] closestUnclaimed = new NetworkNode[GameMaster.numPlayers + 1];
    public int[] closestUnclaimedDistance = new int[GameMaster.numPlayers + 1];
    public NetworkNode[] priorityNextNodeToTarget = new NetworkNode[GameMaster.numPlayers + 1];
    public int[] priorityCostToTarget = new int[GameMaster.numPlayers + 1];
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
        if (structure == null)
        {
            Debug.LogWarning($"Structure for node is null at import");
        }
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
        if (IsClaimableBy(unit.playerControl))
        {
            unit.CPU_TargetNode = this;
            unit.CPU_Heading = this.pos;
            int playerClaiming = unit.playerControl;
            claimingUnits[playerClaiming] = unit;
            hasPlayerClaimed[playerClaiming] = true;
            foreach (NetworkNode neighbour in localNodes)
            {
                NeighbourHasSetThemselvesClaimed(this, playerClaiming, true);
                if (neighbour.closestUnclaimed[playerClaiming] == null)
                    neighbour.closestUnclaimed[playerClaiming] = this.closestUnclaimed[playerClaiming];
            }
        }
        else
        {
            Debug.LogWarning($"Node {this.pos} trying to be claimed by unit {unit.pos} but not legal to be claimed, recomputing");
        }
    }

    public void NeighbourHasSetThemselvesClaimed(NetworkNode neighbour, int playerControl, bool captured)
    {
        if (captured)
            if (closestUnclaimed[playerControl] == neighbour)
            {
                CalculateClosestUnclaimedNeighbour(playerControl);
            }
            else //losing control
            {
                //in theory we could have a dict of nodes, edge, and raw vector distance but this shorthand is ok for now.
                CalculateClosestUnclaimedNeighbour(playerControl);
            }
    }

    //this implementation had an issue where nodes down the chain didn't know if a non-naitive node swaped from claimed to unclaimed. I would need to also track which nodes are pointing to me.
    /*public NetworkNode GetClosestUnclaimedNotMe(int playerControl, NetworkNode lonelyNode)
    {
        Queue<NetworkNode> queue = new Queue<NetworkNode>();
        HashSet<NetworkNode> visited = new HashSet<NetworkNode>();

        queue.Enqueue(this);
        visited.Add(this);

        while (queue.Count > 0)
        {
            NetworkNode current = queue.Dequeue();

            // If current has a known unclaimed and it's not the lonely node
            if (current.closestUnclaimed[playerControl] != null && current.closestUnclaimed[playerControl] != lonelyNode && current.closestUnclaimed[playerControl].IsClaimableBy(playerControl))
            {
                lonelyNode.closestUnclaimed[playerControl] = current.closestUnclaimed[playerControl];
                return current.closestUnclaimed[playerControl];
            }

            // Enqueue neighbors
            foreach (var edge in current.localEdges.OrderBy(e => e.distance))
            {
                NetworkNode neighbor = edge.GetOtherNode(current);
                if (neighbor == null || visited.Contains(neighbor))
                    continue;

                queue.Enqueue(neighbor);
                visited.Add(neighbor);
            }
        }

        // If we get here, no valid unclaimed was found
        Debug.LogWarning($"No closest unclaimed found for lonely node at {lonelyNode.pos} for player {playerControl}");
        return null;
    }*/






    public void CalculateClosestUnclaimedNeighbour(int playerControl)
    {
        //bool isCurious = false;
/*        if (this.pos == new Vector2Int(1, 1))
        {
            isCurious = true;
            Debug.Log($"isCurious {this.pos}");
        }*/
        NetworkNode prev = closestUnclaimed[playerControl];
        int? shortest = null;
        NetworkNode shortestNeighbour = null;
        foreach (NetworkEdge neighbourEdge in localEdges)
        {
            NetworkNode neighbourNode = neighbourEdge.GetOtherNode(this);
            //Debug.Log($"Node {pos} says its neighbour is {neighbourNode.pos}, which player {playerControl} controls? {playerControl == neighbourNode.playerControl}. Has this player claimed it? {neighbourNode.hasPlayerClaimed[playerControl]}");
/*            if (isCurious)
            {
                Debug.Log($"Node {this.pos} is checking edge to {neighbourNode.pos}");
            }*/

            if (!(neighbourNode.playerControl == playerControl || neighbourNode.hasPlayerClaimed[playerControl]))
            {
                if ((shortest == null || neighbourEdge.distance < shortest) && neighbourEdge.isLandAccessible) //MG 25-04-11: what if they tie?
                {

                    shortest = neighbourEdge.distance;
                    shortestNeighbour = neighbourNode;
/*                    if (isCurious)
                    {
                        Debug.Log($"Node {this.pos} is adding a closest neighbour {shortestNeighbour.pos}");
                    }*/
                }
            }

        }
        if (shortest == null || shortestNeighbour == null)
        {
            // if all its neighbours are claimed, ask its neighbours (recursively) to give their target node.

            //closestUnclaimed[playerControl]  = GetClosestUnclaimedNotMe(playerControl, this);

            DefaultClosestNeighbour(playerControl);
        }
        else
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
        closestUnclaimed[player] = FindNearestUnclaimedBFS(this, player);
        if (closestUnclaimed[player] == null)
        {

            Debug.LogWarning($"Node {this.pos} unable to find closest unclaimed in DFS 3 steps");
            closestUnclaimed[player] = CPUManager.nodeVectorMap[MasterGrid.GetEnemyCommand(player)];
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

    public NetworkNode FindNearestUnclaimedBFS(NetworkNode start, int player)
    {
        int maxSteps = 4; // override for now
        if (start == null) return null;

        Queue<(NetworkNode node, int steps)> queue = new Queue<(NetworkNode, int)>();
        HashSet<NetworkNode> visited = new HashSet<NetworkNode>();

        queue.Enqueue((start, 0));
        visited.Add(start);

        while (queue.Count > 0)
        {
            var (current, steps) = queue.Dequeue();

            if (!current.hasPlayerClaimed[player] && current.IsClaimableBy(player))
                return current;

            if (steps >= maxSteps)
                continue;

            foreach (var edge in current.localEdges)
            {
                if (!edge.isLandAccessible)
                    continue;

                NetworkNode neighbor = edge.GetOtherNode(current);
                if (neighbor != null && !visited.Contains(neighbor))
                {
                    visited.Add(neighbor);
                    queue.Enqueue((neighbor, steps + 1));
                }
            }
        }

        //Debug.Log($"No unclaimed node found in {maxSteps} for node {start.pos}, defaulting to {CPUManager.defaultTargets[player].pos}");
        return CPUManager.defaultTargets[player]; // No unclaimed node found within maxSteps
    }


    /*    public NetworkNode FindNearestUnclaimedBFS(NetworkNode start, int player, int maxSteps)
        {
            maxSteps = 4; //override for now
            if (start == null) return null;

            Queue<(NetworkNode node, int steps)> queue = new Queue<(NetworkNode, int)>();
            HashSet<NetworkNode> visited = new HashSet<NetworkNode>();

            queue.Enqueue((start, 0));
            visited.Add(start);

            while (queue.Count > 0)
            {
                var (current, steps) = queue.Dequeue();

                if (!current.hasPlayerClaimed[player] && current.IsClaimableBy(player))
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
        }*/



    public void SetCaptured(int newPlayer, int oldPlayer)
    {
        playerControl = newPlayer;
        foreach (NetworkNode neighbourNode in localNodes)
        {
            neighbourNode.NeighbourHasSetThemselvesClaimed(this, playerControl, true);
            neighbourNode.NeighbourHasSetThemselvesClaimed(this, oldPlayer, false);
        }
    }

    public bool IsClaimableBy(int claimingPlayer)
    {
        if ((playerControl != claimingPlayer && !hasPlayerClaimed[claimingPlayer]) || (structure.structureType == 5 && structure.playerControl != claimingPlayer))
            return true;
        else
            return false;
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