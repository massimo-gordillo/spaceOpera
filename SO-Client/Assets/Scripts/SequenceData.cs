using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class SequenceFileDto
{
    public int schemaVersion = 1;
    public string sequenceId;
    public string missionId;
    public string description;
    public List<SequenceStepDto> steps = new List<SequenceStepDto>();
}

[Serializable]
public class SequenceStepDto
{
    public string id;
    public string type;
    public string comment;

    // Shared text/dialogue fields
    public string speaker;
    public string text;
    public string portrait;
    public bool waitForContinue = true;

    // Timing
    public int durationMs;
    public int timeoutMs;

    // Generic targeting
    public TargetDto target;
    public List<TargetDto> targets = new List<TargetDto>();
    public TargetDto at;
    public TargetDto to;
    public TargetDto from;

    // Unit/structure fields
    public string unitType;
    public int owner;
    public string unitId;
    public string attackerUnitId;
    public string targetUnitId;
    public TargetDto targetAt;
    public string structureId;

    // Input/UI gating
    public bool locked;
    public string reason;
    public string uiTarget;
    public List<string> uiTargets = new List<string>();
    public string mode;

    // Tutorial guidance
    public string style;
    public bool loop;
    public int padding;
    public int fadeMs;
    public string hintText;
    public string anchor;
    public string arrowStyle;

    // Mission hook
    public string hook;

    // endPlayerTurn
    public int player;
    public bool waitForClick;
    public string endTurnUiTarget;

    // Legacy composite: turnHandoff (prefer explicit endPlayerTurn steps in JSON)
    public bool requirePlayerEndTurn = true;
    public int waitMs;
    public int resumePlayer;
    public string textAfter;
    public SequenceStepListDto scriptedSteps;

    // Composite: guideClick
    public bool clearHighlightOnComplete = true;

    // loadMap — optional first step; when omitted, the match's current map is used
    public string mapType;
    public int mapNum;
    public int mapVersion = 1;
}

[Serializable]
public class SequenceStepListDto
{
    public List<SequenceStepDto> steps = new List<SequenceStepDto>();
}

[Serializable]
public class TargetDto
{
    public string unitId;
    public string structureId;
    public string markerId;
    public string uiTarget;
    public int x;
    public int y;
}

public static class SequenceParser
{
    public static bool TryParse(string jsonText, out SequenceFileDto sequence, out string error)
    {
        sequence = null;
        error = null;

        if (string.IsNullOrWhiteSpace(jsonText))
        {
            error = "Sequence JSON text is empty.";
            return false;
        }

        try
        {
            sequence = JsonUtility.FromJson<SequenceFileDto>(jsonText);
        }
        catch (Exception ex)
        {
            error = $"Failed to parse JSON: {ex.Message}";
            return false;
        }

        if (sequence == null)
        {
            error = "Parsed sequence is null.";
            return false;
        }

        if (sequence.schemaVersion != 1)
        {
            error = $"Unsupported schemaVersion '{sequence.schemaVersion}', expected 1.";
            return false;
        }

        if (string.IsNullOrWhiteSpace(sequence.sequenceId))
        {
            error = "Missing required top-level field 'sequenceId'.";
            return false;
        }

        if (sequence.steps == null || sequence.steps.Count == 0)
        {
            error = "Sequence has no steps.";
            return false;
        }

        for (int i = 0; i < sequence.steps.Count; i++)
        {
            SequenceStepDto step = sequence.steps[i];
            if (step == null)
            {
                error = $"Step {i} is null.";
                return false;
            }

            if (string.IsNullOrWhiteSpace(step.type))
            {
                error = $"Step {i} is missing required field 'type'.";
                return false;
            }

            if (step.durationMs < 0)
            {
                error = $"Step {i} has invalid durationMs '{step.durationMs}'.";
                return false;
            }

            string stepType = step.type.Trim();
            if (string.Equals(stepType, "loadMap", StringComparison.OrdinalIgnoreCase))
            {
                if (i != 0)
                {
                    error = $"Step {i}: loadMap must be the first step in the sequence.";
                    return false;
                }

                if (string.IsNullOrWhiteSpace(step.mapType) || step.mapNum <= 0)
                {
                    error = $"Step {i}: loadMap requires mapType and mapNum > 0.";
                    return false;
                }
            }
        }

        return true;
    }
}

[Serializable]
public class SequenceCurriculumManifestDto
{
    public int schemaVersion = 1;
    public string description;
    public List<SequenceCurriculumTrackDto> tracks = new List<SequenceCurriculumTrackDto>();
    /// <summary>Scenarios outside the main curriculum chain (e.g. menu-only intro).</summary>
    public List<SequenceCurriculumTrackDto> extraScenarios = new List<SequenceCurriculumTrackDto>();
}

[Serializable]
public class SequenceCurriculumTrackDto
{
    public string group;
    public string title;
    public string notes;
    public string sequenceResourcePath;
    public string scenarioId;
    public string nextScenarioId;
    public string mapType;
    public int mapNum;
    public int mapVersion = 1;
    public int[] progenys;
    public int[] playerIsCpu;
}

/// <summary>Loads tutorial_curriculum_manifest.json (course order, next lesson, menu copy).</summary>
public static class SequenceCurriculum
{
    const string ManifestResourcePath = "Sequences/tutorial_curriculum_manifest";

    static SequenceCurriculumManifestDto cachedManifest;

    public static bool TryLoad(out SequenceCurriculumManifestDto manifest)
    {
        manifest = cachedManifest;
        if (manifest != null)
        {
            return true;
        }

        TextAsset asset = Resources.Load<TextAsset>(ManifestResourcePath);
        if (asset == null)
        {
            Debug.LogError($"[SequenceCurriculum] Missing manifest at Resources/{ManifestResourcePath}");
            return false;
        }

        try
        {
            manifest = JsonUtility.FromJson<SequenceCurriculumManifestDto>(asset.text);
            cachedManifest = manifest;
            return manifest != null && manifest.tracks != null && manifest.tracks.Count > 0;
        }
        catch (Exception ex)
        {
            Debug.LogError($"[SequenceCurriculum] Failed to parse manifest: {ex.Message}");
            manifest = null;
            return false;
        }
    }

    public static bool TryGetTrackForScenario(string scenarioId, out SequenceCurriculumTrackDto track)
    {
        track = null;
        if (string.IsNullOrWhiteSpace(scenarioId) || !TryLoad(out SequenceCurriculumManifestDto manifest))
        {
            return false;
        }

        return TryFindScenarioInList(manifest.tracks, scenarioId, out track)
            || TryFindScenarioInList(manifest.extraScenarios, scenarioId, out track);
    }

    static bool TryFindScenarioInList(
        List<SequenceCurriculumTrackDto> list,
        string scenarioId,
        out SequenceCurriculumTrackDto track)
    {
        track = null;
        if (list == null)
        {
            return false;
        }

        string id = scenarioId.Trim();
        for (int i = 0; i < list.Count; i++)
        {
            SequenceCurriculumTrackDto candidate = list[i];
            if (candidate != null
                && !string.IsNullOrWhiteSpace(candidate.scenarioId)
                && string.Equals(candidate.scenarioId, id, StringComparison.OrdinalIgnoreCase))
            {
                track = candidate;
                return true;
            }
        }

        return false;
    }

    /// <summary>Applies manifest map/progeny/sequence data into MatchSettings for Game scene load.</summary>
    /// <param name="sequenceResourcePathOverride">Optional; when set, used instead of manifest sequenceResourcePath.</param>
    public static bool TryApplyScenarioToMatchSettings(
        string scenarioId,
        string sequenceResourcePathOverride,
        out string error)
    {
        error = null;
        if (string.IsNullOrWhiteSpace(scenarioId))
        {
            error = "Scenario id is empty.";
            return false;
        }

        if (!TryGetTrackForScenario(scenarioId, out SequenceCurriculumTrackDto track))
        {
            error = $"Unknown tutorial scenario '{scenarioId}'.";
            return false;
        }

        if (track.progenys == null || track.progenys.Length < 2)
        {
            error = $"Scenario '{scenarioId}' is missing progenys[2] in curriculum manifest.";
            return false;
        }

        if (string.IsNullOrWhiteSpace(track.mapType) || track.mapNum <= 0)
        {
            error = $"Scenario '{scenarioId}' is missing mapType/mapNum in curriculum manifest.";
            return false;
        }

        MatchSettings.SetNumPlayers(2);
        MatchSettings.SetPlayerColours();
        for (int i = 0; i < MatchSettings.numPlayers; i++)
        {
            MatchSettings.SetPlayerProgeny(i, track.progenys[i]);
            bool isCpu = track.playerIsCpu != null
                && i < track.playerIsCpu.Length
                && track.playerIsCpu[i] != 0;
            MatchSettings.playerIsCPU[i] = isCpu;
        }

        MatchSettings.CPU_isOn = false;
        foreach (bool cpu in MatchSettings.playerIsCPU)
        {
            MatchSettings.CPU_isOn |= cpu;
        }

        string sequencePath = string.IsNullOrWhiteSpace(sequenceResourcePathOverride)
            ? track.sequenceResourcePath
            : sequenceResourcePathOverride.Trim();
        if (string.IsNullOrWhiteSpace(sequencePath))
        {
            error = $"Scenario '{scenarioId}' has no sequenceResourcePath.";
            return false;
        }

        MatchSettings.gameMode = MatchSettings.MatchGameMode.Tutorial;
        MatchSettings.scenarioId = scenarioId.Trim();
        MatchSettings.introSequenceResourcePath = sequencePath;
        MatchSettings.matchMapType = track.mapType.Trim();
        MatchSettings.matchMapNum = track.mapNum;
        MatchSettings.matchMapVersion = track.mapVersion > 0 ? track.mapVersion : 1;
        MatchSettings.isInit = true;
        return true;
    }

    public static string GetFirstPlayableScenarioId()
    {
        if (!TryLoad(out SequenceCurriculumManifestDto manifest))
        {
            return "tutorial_universal_intro";
        }

        for (int i = 0; i < manifest.tracks.Count; i++)
        {
            SequenceCurriculumTrackDto track = manifest.tracks[i];
            if (track != null && !string.IsNullOrWhiteSpace(track.scenarioId))
            {
                return track.scenarioId;
            }
        }

        return "tutorial_universal_intro";
    }

    public static bool TryGetNextScenarioId(string scenarioId, out string nextScenarioId)
    {
        nextScenarioId = null;
        if (!TryGetTrackForScenario(scenarioId, out SequenceCurriculumTrackDto track))
        {
            return false;
        }

        if (string.IsNullOrWhiteSpace(track.nextScenarioId))
        {
            return false;
        }

        nextScenarioId = track.nextScenarioId.Trim();
        return true;
    }
}
