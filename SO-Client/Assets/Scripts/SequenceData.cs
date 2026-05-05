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
        }

        return true;
    }
}
