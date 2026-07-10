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

    /// <summary>Resources path without extension for the active tutorial sequence (optional until a tutorial match is applied).</summary>
    static public string introSequenceResourcePath = "";

    /// <summary>Map load params for the active match (set when a tutorial scenario is applied).</summary>
    static public string matchMapType = "";
    static public int matchMapNum;
    static public int matchMapVersion;

    /// <summary>When true, Menu scene opens the tutorial page on load (Back to tutorials from Game scene).</summary>
    public static bool openTutorialMenuOnLoad;

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
        introSequenceResourcePath = "";
        matchMapType = "";
        matchMapNum = 0;
        matchMapVersion = 0;
        openTutorialMenuOnLoad = false;
    }

    /// <summary>
    /// Applies a named scenario payload from the curriculum manifest into MatchSettings.
    /// Used by the tutorial menu, lesson chaining, and editor play-test bootstrap.
    /// </summary>
    /// <param name="sequenceResourcePathOverride">Optional Resources path without .json.</param>
    public static bool ApplyScenarioPayload(string scenarioId, string sequenceResourcePathOverride = null)
    {
        if (!SequenceCurriculum.TryApplyScenarioToMatchSettings(
                scenarioId,
                sequenceResourcePathOverride,
                out string error))
        {
            Debug.LogError($"[MatchSettings] {error}");
            return false;
        }

        return true;
    }

    /// <summary>Alias for <see cref="ApplyScenarioPayload"/>.</summary>
    public static bool ApplyTutorialMatch(string scenarioId, string sequenceResourcePathOverride = null)
    {
        return ApplyScenarioPayload(scenarioId, sequenceResourcePathOverride);
    }

    public static void GetMapLoadParameters(out string mapType, out int mapNum, out int versionNum)
    {
        if (gameMode == MatchGameMode.Tutorial
            && !string.IsNullOrEmpty(matchMapType)
            && matchMapNum > 0)
        {
            mapType = matchMapType;
            mapNum = matchMapNum;
            versionNum = matchMapVersion > 0 ? matchMapVersion : 1;
            return;
        }

        mapType = DefaultSkirmishMapType;
        mapNum = DefaultSkirmishMapNum;
        versionNum = DefaultSkirmishMapVersion;
    }

    /// <summary>Resources path without .json, for SequenceManager.</summary>
    public static string GetIntroSequenceResourcePath()
    {
        if (gameMode != MatchGameMode.Tutorial || string.IsNullOrWhiteSpace(introSequenceResourcePath))
        {
            return null;
        }

        return introSequenceResourcePath;
    }
}
