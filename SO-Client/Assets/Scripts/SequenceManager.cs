using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SequenceManager : MonoBehaviour
{
    [Header("Manager References")]
    public GameMaster gameMaster;
    public MasterGrid masterGrid;
    public CameraManager cameraManager;
    public SequenceUIBindings uiBindings;

    [Header("Sequence Sources (Resources Paths)")]
    public bool runIntroOnStart = true;
    public string introSequenceResourcePath;
    public string outroSequenceResourcePath;

    private readonly Dictionary<string, BaseUnit> unitRefs = new Dictionary<string, BaseUnit>();
    private readonly HashSet<string> highlightedUiTargets = new HashSet<string>();
    private bool isRunningSequence;
    private bool inputLocked;
    private bool waitingForWorldClick;
    private bool worldClickSatisfied;
    private TargetDto expectedWorldClickTarget;
    private Vector2Int lastWorldClickPos;
    private bool hasLastWorldClickPos;

    public bool IsInputLocked()
    {
        return inputLocked;
    }

    public bool HasOutroSequence()
    {
        return !string.IsNullOrWhiteSpace(outroSequenceResourcePath);
    }

    public void TryRunIntroSequence()
    {
        if (!runIntroOnStart || string.IsNullOrWhiteSpace(introSequenceResourcePath))
        {
            return;
        }

        StartCoroutine(RunSequenceFromResources(introSequenceResourcePath, null));
    }

    public IEnumerator RunOutroThen(Action onComplete)
    {
        if (string.IsNullOrWhiteSpace(outroSequenceResourcePath))
        {
            onComplete?.Invoke();
            yield break;
        }

        yield return RunSequenceFromResources(outroSequenceResourcePath, onComplete);
    }

    public void NotifyWorldObjectClicked(Vector2Int pos, ClickableObject clickedObject)
    {
        hasLastWorldClickPos = true;
        lastWorldClickPos = pos;

        if (!waitingForWorldClick || expectedWorldClickTarget == null)
        {
            return;
        }

        if (TargetMatchesPosition(expectedWorldClickTarget, pos))
        {
            worldClickSatisfied = true;
        }
    }

    private IEnumerator RunSequenceFromResources(string resourcePath, Action onComplete)
    {
        if (isRunningSequence)
        {
            Debug.LogWarning("[SequenceManager] Sequence already running, ignoring new request.");
            yield break;
        }

        TextAsset textAsset = Resources.Load<TextAsset>(resourcePath);
        if (textAsset == null)
        {
            Debug.LogError($"[SequenceManager] Could not load sequence JSON at Resources path '{resourcePath}'.");
            yield break;
        }

        if (!SequenceParser.TryParse(textAsset.text, out SequenceFileDto sequence, out string parseError))
        {
            Debug.LogError($"[SequenceManager] Failed parsing sequence at '{resourcePath}': {parseError}");
            yield break;
        }

        isRunningSequence = true;
        Debug.Log($"[SequenceManager] Running sequence '{sequence.sequenceId}' ({sequence.steps.Count} steps).");

        for (int i = 0; i < sequence.steps.Count; i++)
        {
            SequenceStepDto step = sequence.steps[i];
            yield return ExecuteStep(sequence.sequenceId, i, step);
        }

        isRunningSequence = false;
        onComplete?.Invoke();
    }

    private IEnumerator ExecuteStep(string sequenceId, int stepIndex, SequenceStepDto step)
    {
        string stepType = step.type == null ? string.Empty : step.type.Trim();
        Debug.Log($"[SequenceManager] sequence={sequenceId} step={stepIndex} type={stepType}");

        switch (stepType)
        {
            case "dialogue":
                if (!string.IsNullOrWhiteSpace(step.text))
                {
                    gameMaster.promptCardMainText.text = string.IsNullOrWhiteSpace(step.speaker) ? "Tutorial" : step.speaker;
                    gameMaster.promptCardQuestionText.text = step.text;
                    gameMaster.promptCard.SetActive(true);
                }

                if (step.waitForContinue)
                {
                    yield return new WaitForSeconds(0.25f);
                }
                break;

            case "cameraFocus":
            {
                if (TryResolveTargetPosition(step.target, out Vector2Int focusPos))
                {
                    cameraManager.SetPosition(focusPos);
                }
                else
                {
                    LogStepError(stepIndex, "cameraFocus target could not be resolved.");
                }

                yield return WaitForDurationMs(step.durationMs);
                break;
            }

            case "cameraMove":
            {
                if (TryResolveTargetPosition(step.target, out Vector2Int movePos) || TryResolveTargetPosition(step.to, out movePos))
                {
                    cameraManager.SetPosition(movePos);
                }
                else
                {
                    LogStepError(stepIndex, "cameraMove target could not be resolved.");
                }

                yield return WaitForDurationMs(step.durationMs);
                break;
            }

            case "spawnUnit":
                ExecuteSpawnUnit(stepIndex, step);
                yield return WaitForDurationMs(step.durationMs);
                break;

            case "moveUnit":
                ExecuteMoveUnit(stepIndex, step);
                yield return WaitForDurationMs(step.durationMs);
                break;

            case "CaptureStructure":
                yield return ExecuteCapture(stepIndex, step);
                break;

            case "setInputLock":
                SetInputLock(step.locked, step.reason);
                break;

            case "wait":
                yield return WaitForDurationMs(step.durationMs);
                break;

            case "requireClick":
                yield return WaitForWorldClick(stepIndex, step.target, step.timeoutMs);
                break;

            case "setUiInteractable":
                ApplyUiInteractable(stepIndex, step);
                break;

            case "requireUiClick":
                yield return WaitForUiClick(stepIndex, step.uiTarget, step.timeoutMs);
                break;

            case "setFocusMask":
                // Placeholder hook for future UI mask implementation.
                Debug.Log($"[SequenceManager] setFocusMask mode={step.mode}");
                break;

            case "highlightTarget":
                ApplyHighlight(stepIndex, step.target, true);
                break;

            case "showTutorialHint":
                Debug.Log($"[SequenceManager] showTutorialHint text='{step.text}'");
                break;

            case "hideTutorialHint":
                Debug.Log("[SequenceManager] hideTutorialHint");
                break;

            case "missionHook":
                Debug.Log($"[SequenceManager] missionHook={step.hook}");
                break;

            default:
                LogStepError(stepIndex, $"Unsupported step type '{stepType}'.");
                break;
        }
    }

    private IEnumerator WaitForDurationMs(int durationMs)
    {
        if (durationMs <= 0)
        {
            yield break;
        }

        yield return new WaitForSeconds(durationMs / 1000f);
    }

    private void ExecuteSpawnUnit(int stepIndex, SequenceStepDto step)
    {
        if (!TryResolveTargetPosition(step.at, out Vector2Int spawnPos))
        {
            LogStepError(stepIndex, "spawnUnit missing valid 'at' target.");
            return;
        }

        int owner = step.owner <= 0 ? GameMaster.playerTurn : step.owner;
        int ownerProgeny = gameMaster.GetPlayerProgeny((byte)owner);
        BaseUnit prefab = PrefabManager.GetBaseUnitFromName(step.unitType, ownerProgeny);
        if (prefab == null)
        {
            LogStepError(stepIndex, $"spawnUnit could not resolve prefab for unitType='{step.unitType}'.");
            return;
        }

        BaseUnit unit = gameMaster.GetInstantiateUnit(prefab, spawnPos, owner);
        unit.SetNonExhausted(true);

        if (!string.IsNullOrWhiteSpace(step.unitId))
        {
            unitRefs[step.unitId] = unit;
        }
    }

    private void ExecuteMoveUnit(int stepIndex, SequenceStepDto step)
    {
        BaseUnit unit = ResolveUnit(step);
        if (unit == null)
        {
            LogStepError(stepIndex, "moveUnit could not resolve source unit.");
            return;
        }

        if (!TryResolveTargetPosition(step.to, out Vector2Int destination))
        {
            LogStepError(stepIndex, "moveUnit missing valid 'to' target.");
            return;
        }

        masterGrid.SetSelectedUnit(unit);
        masterGrid.MoveSelectedUnit(destination);
    }

    private IEnumerator ExecuteCapture(int stepIndex, SequenceStepDto step)
    {
        BaseUnit unit = ResolveUnit(step);
        if (unit == null)
        {
            LogStepError(stepIndex, "CaptureStructure could not resolve unit.");
            yield break;
        }

        BaseStructure structure = null;
        if (!string.IsNullOrWhiteSpace(step.structureId))
        {
            LogStepError(stepIndex, "CaptureStructure currently supports coordinate targeting; structureId lookup is not implemented yet.");
        }

        if (structure == null && TryResolveTargetPosition(step.at, out Vector2Int atPos))
        {
            structure = masterGrid.WhatStructureIsInThisLocation(atPos);
        }

        if (structure == null)
        {
            LogStepError(stepIndex, "CaptureStructure target structure not found.");
            yield break;
        }

        masterGrid.SetSelectedUnit(unit);
        yield return masterGrid.CaptureStructure(structure);
    }

    private void SetInputLock(bool locked, string reason)
    {
        inputLocked = locked;
        if (locked)
        {
            gameMaster.endTurnButton.interactable = false;
        }
        else
        {
            gameMaster.EndTurnButtonSwitch();
        }

        Debug.Log($"[SequenceManager] Input lock set to {locked}. reason='{reason}'");
    }

    private IEnumerator WaitForWorldClick(int stepIndex, TargetDto expectedTarget, int timeoutMs)
    {
        if (expectedTarget == null)
        {
            LogStepError(stepIndex, "requireClick missing target.");
            yield break;
        }

        expectedWorldClickTarget = expectedTarget;
        waitingForWorldClick = true;
        worldClickSatisfied = false;

        float timeout = timeoutMs > 0 ? timeoutMs / 1000f : -1f;
        float elapsed = 0f;

        while (!worldClickSatisfied)
        {
            if (timeout > 0f && elapsed >= timeout)
            {
                LogStepError(stepIndex, "requireClick timed out.");
                break;
            }

            elapsed += Time.deltaTime;
            yield return null;
        }

        waitingForWorldClick = false;
        expectedWorldClickTarget = null;
    }

    private IEnumerator WaitForUiClick(int stepIndex, string uiTarget, int timeoutMs)
    {
        if (uiBindings == null)
        {
            LogStepError(stepIndex, "requireUiClick failed because SequenceUIBindings is not assigned.");
            yield break;
        }

        if (!uiBindings.TryGetSelectable(uiTarget, out Selectable selectable))
        {
            LogStepError(stepIndex, $"requireUiClick failed, missing UI key '{uiTarget}'.");
            yield break;
        }

        Button button = selectable as Button;
        if (button == null)
        {
            LogStepError(stepIndex, $"requireUiClick target '{uiTarget}' is not a Button.");
            yield break;
        }

        bool clicked = false;
        UnityEngine.Events.UnityAction listener = () => clicked = true;
        button.onClick.AddListener(listener);

        float timeout = timeoutMs > 0 ? timeoutMs / 1000f : -1f;
        float elapsed = 0f;
        while (!clicked)
        {
            if (timeout > 0f && elapsed >= timeout)
            {
                LogStepError(stepIndex, $"requireUiClick timed out for '{uiTarget}'.");
                break;
            }

            elapsed += Time.deltaTime;
            yield return null;
        }

        button.onClick.RemoveListener(listener);
    }

    private void ApplyUiInteractable(int stepIndex, SequenceStepDto step)
    {
        if (uiBindings == null)
        {
            LogStepError(stepIndex, "setUiInteractable failed because SequenceUIBindings is not assigned.");
            return;
        }

        if (step.uiTargets == null || step.uiTargets.Count == 0)
        {
            LogStepError(stepIndex, "setUiInteractable requires uiTargets.");
            return;
        }

        HashSet<string> targetSet = new HashSet<string>(step.uiTargets);
        bool enable = step.mode == "allowOnly";
        uiBindings.SetInteractable(targetSet, enable);
    }

    private void ApplyHighlight(int stepIndex, TargetDto target, bool enabled)
    {
        if (target == null || string.IsNullOrWhiteSpace(target.uiTarget))
        {
            LogStepError(stepIndex, "highlightTarget currently supports uiTarget only.");
            return;
        }

        if (uiBindings == null)
        {
            LogStepError(stepIndex, "highlightTarget failed because SequenceUIBindings is not assigned.");
            return;
        }

        if (!uiBindings.TryGetObject(target.uiTarget, out GameObject targetObject))
        {
            LogStepError(stepIndex, $"highlightTarget failed, missing UI key '{target.uiTarget}'.");
            return;
        }

        Transform t = targetObject.transform;
        t.localScale = enabled ? Vector3.one * 1.05f : Vector3.one;
        if (enabled)
        {
            highlightedUiTargets.Add(target.uiTarget);
        }
        else
        {
            highlightedUiTargets.Remove(target.uiTarget);
        }
    }

    private BaseUnit ResolveUnit(SequenceStepDto step)
    {
        if (!string.IsNullOrWhiteSpace(step.unitId) && unitRefs.TryGetValue(step.unitId, out BaseUnit mapped) && mapped != null)
        {
            return mapped;
        }

        if (step.from != null && TryResolveTargetPosition(step.from, out Vector2Int sourcePos))
        {
            return masterGrid.WhatUnitIsInThisLocation(sourcePos);
        }

        return null;
    }

    private bool TryResolveTargetPosition(TargetDto target, out Vector2Int pos)
    {
        pos = default;
        if (target == null)
        {
            return false;
        }

        if (!string.IsNullOrWhiteSpace(target.unitId) && unitRefs.TryGetValue(target.unitId, out BaseUnit mappedUnit) && mappedUnit != null)
        {
            pos = mappedUnit.pos;
            return true;
        }

        pos = new Vector2Int(target.x, target.y);
        return true;
    }

    private bool TargetMatchesPosition(TargetDto target, Vector2Int pos)
    {
        if (!TryResolveTargetPosition(target, out Vector2Int expectedPos))
        {
            return false;
        }

        return expectedPos == pos;
    }

    private void LogStepError(int stepIndex, string message)
    {
        Debug.LogError($"[SequenceManager] Step {stepIndex}: {message}");
    }
}
