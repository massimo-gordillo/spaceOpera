using System;
using System.Collections.Generic;
using UnityEngine;

//This class will be useful in future when users get to select more information about the match
//examples include: map selection, map skin, player color selection.
public static class MatchSettings {

    public enum MatchGameMode
    {
        Skirmish,
        Tutorial
    }

    private sealed class ScenarioDefinition
    {
        public string mapType;
        public int mapNum;
        public int mapVersion;
        /// <summary>Resources path without extension (e.g. Sequences/tutorial_01_intro).</summary>
        public string introSequenceResourcePath;
        public int[] progenys;
        public bool[] playerIsCpu;
    }

    private static readonly Dictionary<string, ScenarioDefinition> Scenarios =
        new Dictionary<string, ScenarioDefinition>(StringComparer.OrdinalIgnoreCase)
        {
            // ["tutorial_01_intro"] = new ScenarioDefinition
            // {
            //     mapType = "multi",
            //     mapNum = 7,
            //     mapVersion = 1,
            //     introSequenceResourcePath = "Sequences/tutorial_01_intro",
            //     progenys = new[] { 0, 0 },
            //     playerIsCpu = new[] { false, true }
            // }
            ["tutorial_01_intro"] = new ScenarioDefinition
            {
                mapType = "multi",
                mapNum = 7,
                mapVersion = 1,
                introSequenceResourcePath = "Sequences/tutorial_01_intro",
                progenys = new[] { 0, 0 },
                playerIsCpu = new[] { false, true }
            }
        };

    public const string DefaultSkirmishMapType = "multi";
    public const int DefaultSkirmishMapNum = 7;
    public const int DefaultSkirmishMapVersion = 1;

    static public int numPlayers = 2;
    static public int[] playerProgenys;
    static public bool isInit=false;
    public static Color32[] playerColors;
    static public bool[] playerIsCPU = new bool[numPlayers];
    static public bool CPU_isOn = false;
    static public MatchGameMode gameMode = MatchGameMode.Skirmish;
    /// <summary>Set for tutorials and other scripted scenarios; empty for normal skirmish.</summary>
    static public string scenarioId = "";




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

    public static void SetPlayerColours()
    {
        playerColors = new Color32[numPlayers + 1];
        playerColors[0] = new Color32(255, 255, 255, 255);
        playerColors[1] = new Color32(44, 94, 255, 255);
        playerColors[2] = new Color32(230, 19, 53, 255);
    }

    /// <summary>Call when opening skirmish / progeny setup so a prior tutorial does not leak into PvP settings.</summary>
    public static void PrepareSkirmishFromMenu()
    {
        gameMode = MatchGameMode.Skirmish;
        scenarioId = "";
    }

    public static bool ApplyTutorialScenario(string id)
    {
        if (string.IsNullOrWhiteSpace(id) || !Scenarios.TryGetValue(id.Trim(), out ScenarioDefinition def))
        {
            Debug.LogError($"[MatchSettings] Unknown tutorial scenario '{id}'.");
            return false;
        }

        SetNumPlayers(2);
        SetPlayerColours();
        for (int i = 0; i < numPlayers; i++)
        {
            SetPlayerProgeny(i, def.progenys[i]);
            playerIsCPU[i] = def.playerIsCpu[i];
        }

        CPU_isOn = false;
        foreach (bool cpu in playerIsCPU)
        {
            CPU_isOn |= cpu;
        }

        gameMode = MatchGameMode.Tutorial;
        scenarioId = id.Trim();
        isInit = true;
        return true;
    }

    public static void GetMapLoadParameters(out string mapType, out int mapNum, out int versionNum)
    {
        if (gameMode == MatchGameMode.Tutorial
            && !string.IsNullOrEmpty(scenarioId)
            && Scenarios.TryGetValue(scenarioId, out ScenarioDefinition def))
        {
            mapType = def.mapType;
            mapNum = def.mapNum;
            versionNum = def.mapVersion;
            return;
        }

        mapType = DefaultSkirmishMapType;
        mapNum = DefaultSkirmishMapNum;
        versionNum = DefaultSkirmishMapVersion;
    }

    /// <summary>Resources path without .json, for SequenceManager.</summary>
    public static string GetIntroSequenceResourcePath()
    {
        if (gameMode != MatchGameMode.Tutorial || string.IsNullOrEmpty(scenarioId))
        {
            return null;
        }

        return Scenarios.TryGetValue(scenarioId, out ScenarioDefinition def)
            ? def.introSequenceResourcePath
            : null;
    }
}
