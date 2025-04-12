using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//This class will be useful in future when users get to select more information about the match
//examples include: map selection, map skin, player color selection.
public static class MatchSettings {

    static public int numPlayers;
    static public int[] playerProgenys;
    static public bool isInit=false;

    static public void SetNumPlayers(int numPlayers)
    {
        MatchSettings.numPlayers = numPlayers;
        playerProgenys = new int[numPlayers];
        for (int i = 0; i < numPlayers; i++)
        {
            playerProgenys[i] = -1;
        }
        MasterGrid.playerUnits = new List<BaseUnit>[numPlayers+1];
        for(int i = 0;i <= numPlayers; i++)
            MasterGrid.playerUnits[i] = new List<BaseUnit>();
        isInit = true;
    }

    public static void SetPlayerProgeny(int playerIndex, int progeny)
    {
        if (playerProgenys != null && playerIndex >= 0 && playerIndex < numPlayers)
        {
            playerProgenys[playerIndex] = progeny;
        }
        else
        {
            Debug.LogError("Invalid player index or array not initialized.");
        }
    }
}
