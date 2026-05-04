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

    public int arbLargeNumberForClosestUnclaimedDistance = 10000;

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
        //Debug.Log($"Node {this.pos} is being claimed by unit {unit.pos} of player {unit.playerControl}");
        if (IsClaimableBy(unit.playerControl))
        {
            //Debug.Log($"Node {this.pos} is claimable by player {unit.playerControl}, claiming now.");
            unit.CPU_TargetNode = this;
            //unit.CPU_Heading = this.pos;
            int playerClaiming = unit.playerControl;
            claimingUnits[playerClaiming] = unit;
            hasPlayerClaimed[playerClaiming] = true;
            foreach (NetworkEdge edge in localEdges)
            {
                if(edge.isPriorityAir)
                    continue;
                Debug.Log($"Node {this.pos} is telling neighbour {edge.GetOtherNode(this).pos} that player {playerClaiming} has claimed it");
                NetworkNode neighbour = edge.GetOtherNode(this);
                NeighbourHasSetThemselvesClaimed(this, playerClaiming);
                if (neighbour.closestUnclaimed[playerClaiming] == null)
                    Debug.LogError($"Node {this.pos} is claiming for player {playerClaiming} but neighbour {neighbour.pos} has no closest unclaimed for that player");
                //SetClosestUnclaimedForPlayer(playerClaiming, this.closestUnclaimed[playerClaiming], edge.distance);
            }
        }
        else
        {
            Debug.LogError($"Node {this.pos} trying to be claimed by unit {unit.pos} but not legal to be claimed.");
        }
    }

    public void UnclaimedByPlayer(int playerUnclaiming)
    {
        if(playerUnclaiming == 0) return;
        if (hasPlayerClaimed[playerUnclaiming])
        {
            claimingUnits[playerUnclaiming] = null;
            hasPlayerClaimed[playerUnclaiming] = false;
            UpdateClosestUnclaimedNeighbourDueToUnclaim(this, playerUnclaiming, 0);

            /*            foreach (NetworkEdge edge in localEdges)
                        {
                            NetworkNode neighbour = edge.GetOtherNode(this);
                            if (neighbour != null)
                            {
                               neighbour.UpdateClosestUnclaimedNeighbourDueToUnclaim(this, playerUnclaiming, edge.distance);
                            }
                            else
                            {
                                Debug.LogError($"Node {this.pos} has an edge to a null neighbour");
                            }
                        }*/
        }
        else
        {
            Debug.LogWarning($"Node {this.pos} trying to be unclaimed by a unit but was not previously claimed by player {playerUnclaiming}");
        }
    }

    public void UpdateClosestUnclaimedNeighbourDueToUnclaim(NetworkNode unclaimedNode, int playerControl, int distance)
    {
        /*
         //It's possible that this safety check is necessary, but will assume things work correctly for now.
        if(distance < closestUnclaimedDistance[playerControl])
            FindNearestUnclaimedNeighbourDijkstra(this, playerControl, distance+1,6);
        */
        Debug.Log($"DTU: Node {this.pos} is checking if unclaimed node {unclaimedNode.pos} at distance {distance} is closer than current closest unclaimed {closestUnclaimed[playerControl]?.pos} at distance {closestUnclaimedDistance[playerControl]} for player {playerControl}");
        if (distance < closestUnclaimedDistance[playerControl])
        {
            if (unclaimedNode != this)
            {
                SetClosestUnclaimedForPlayer(playerControl, unclaimedNode, distance);
            }

            foreach (NetworkEdge edge in localEdges)
            {
                if(edge.isPriorityAir)
                    continue;
                NetworkNode neighbour = edge.GetOtherNode(this);
                if (neighbour != unclaimedNode)
                {
                    Debug.Log($"TRUE! Node {this.pos} is telling neighbour {neighbour.pos} to update closest unclaimed with node {unclaimedNode.pos} at distance {distance + edge.distance} for player {playerControl}");
                    neighbour.UpdateClosestUnclaimedNeighbourDueToUnclaim(unclaimedNode, playerControl, distance + edge.distance);
                }
            }
        }




        
    }

    public void NeighbourHasSetThemselvesClaimed(NetworkNode neighbour, int playerControl)
    {
        if (closestUnclaimed[playerControl] == neighbour)
        {
            Debug.Log($"Node {this.pos} is updating closest unclaimed for player {playerControl} because neighbour {neighbour.pos} has set themselves claimed");
            (NetworkNode closestNode, int distance) = FindNearestUnclaimedNeighbourDijkstra(this, playerControl);
            SetClosestUnclaimedForPlayer(playerControl, closestNode, distance);
            Debug.Log($"Node {this.pos} has updated closest unclaimed for player {playerControl} to {closestNode?.pos} at distance {distance}");
        }
        else //If this wasn't your closest unclaimed, do nothing.
        {
            //in theory we could have a dict of nodes, edge, and raw vector distance but this shorthand is ok for now.
            //FindNearestUnclaimedNeighbourNaive(playerControl);
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






    public void FindNearestUnclaimedNeighbourNaive(int playerControl)
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
            if (neighbourEdge.isPriorityAir)
                continue;
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
            Debug.LogWarning($"Node {pos} unable to find closest unclaimed for {playerControl} in naive search");
        }
        else
        {
            SetClosestUnclaimedForPlayer(playerControl, shortestNeighbour, (int)shortest);
            //Debug.Log($"Node {pos} says its closest unclaimed neighbour for player {playerControl} is {shortestNeighbour.pos}");
        }
    }

    public NetworkNode DefaultClosestNeighbour(int player, int steps)
    {
        Debug.LogWarning($"Node {this.pos} unable to find closest unclaimed in DFS {steps} steps");
        closestUnclaimedDistance[player] = arbLargeNumberForClosestUnclaimedDistance; //arb large number
        return CPUManager.defaultTargets[player];
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

    public (NetworkNode,int) FindNearestUnclaimedNeighbourDijkstra(NetworkNode start, int player, int maxSteps = 4)
    {
        if (start == null)
        {
            Debug.LogError($"FindNearestUnclaimedNeighbourDijkstra called with null start node for player {player}");
            return (null, 0);
        }
        int shortestDistance = int.MaxValue;
        NetworkNode bestNode = null;

        Queue<(NetworkNode node, int distance, int steps)> queue = new Queue<(NetworkNode, int, int)>();
        HashSet<NetworkNode> visited = new HashSet<NetworkNode>();

        queue.Enqueue((start, 0, 0));
        visited.Add(start);

        while (queue.Count > 0)
        {

            var (current, distance, steps) = queue.Dequeue();

            if (current != start && !current.hasPlayerClaimed[player] && current.IsClaimableBy(player))
            {
                if (distance < shortestDistance)
                {
                    shortestDistance = distance;
                    bestNode = current;
                }
                // CRITICAL: We found a target on this branch. 
                // We don't need to explore its neighbors (they are further away).
                continue;
            }

            if (steps >= maxSteps)
                continue;

            if (distance >= shortestDistance)
            {
                continue; // We've already found a closer unclaimed node, so skip further exploration
            }

            foreach (var edge in current.localEdges)
            {
                if (!edge.isLandAccessible)
                    continue;

                NetworkNode neighbor = edge.GetOtherNode(current);
                if (neighbor != null && !visited.Contains(neighbor))
                {
                    visited.Add(neighbor);
                    queue.Enqueue((neighbor, distance + edge.distance, steps + 1));
                }
            }
        }

        if (bestNode != null)
        {
            //Debug.Log($"Node {start.pos} found nearest unclaimed node {bestNode.pos} at distance {shortestDistance} in BFS");
            
            return (bestNode, shortestDistance);
        }
        else
        {
            Debug.LogWarning($"No unclaimed node found in {maxSteps} steps for node {start.pos}, defaulting to {CPUManager.defaultTargets[player].pos}");
            return (DefaultClosestNeighbour(player, maxSteps), int.MaxValue);
        }
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

    public void SetClosestUnclaimedForPlayer(int player, NetworkNode unclaimedNode, int distance)
    {
        closestUnclaimed[player] = unclaimedNode;
        closestUnclaimedDistance[player] = distance;
        if(unclaimedNode != null)
            structure.DrawClosestUnclaimedLine(unclaimedNode.pos);
        else
            Debug.LogWarning($"Node {this.pos} is setting closest unclaimed for player {player} to null");
    }

    public void SetCaptured(int newPlayer, int oldPlayer)
    {
        playerControl = newPlayer;
        UnclaimedByPlayer(oldPlayer);
        foreach (NetworkNode neighbourNode in localNodes)
        {
            neighbourNode.NeighbourHasSetThemselvesClaimed(this, playerControl);
            //neighbourNode.NeighbourHasSetThemselvesClaimed(this, oldPlayer, false);
        }
    }

    public bool IsClaimableBy(int claimingPlayer)
    {
        if ((playerControl != claimingPlayer && !hasPlayerClaimed[claimingPlayer]) || (structure.structureType == 5 && structure.playerControl != claimingPlayer))
            return true;
        else
            return false;
    }

    public void SortEdges()
    {
        localEdges.Sort((a, b) => a.distance.CompareTo(b.distance));
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


