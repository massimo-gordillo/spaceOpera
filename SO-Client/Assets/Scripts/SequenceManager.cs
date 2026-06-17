using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.UI;
using TMPro;

/// <summary>
/// Owns sequence execution, tutorial curriculum progression, and completion UI.
/// Game scene: configured via <see cref="MatchSettings"/>; menu passes scenario id only.
/// </summary>
[DefaultExecutionOrder(-200)]
public class SequenceManager : MonoBehaviour
{
    [Header("Manager References")]
    public GameMaster gameMaster;
    public MasterGrid masterGrid;
    public CameraManager cameraManager;
    public GameObject sequenceGlobalCanvas;
    public TMP_Text sequenceDialogText;
    public Image sequenceDialogImage;

    [Header("Sequence dialog controls (inspector)")]
    [Tooltip("Full-screen invisible tap catcher on SequenceGlobalCanvas. Leave disabled in the scene; enabled while dialogue waits for continue. Wire its Button On Click to NotifyDialogAdvanceFromSequenceDialogPanelTap.")]
    public GameObject dialogFullscreenTapBlocker;
    [Tooltip("Optional. Wire its Button On Click to SkipDialogSequence. Used at runtime to keep the skip control above the tap blocker.")]
    public Button skipDialogButton;

    [Header("Dialogue typing")]
    [Tooltip("Reveal dialogue one character at a time before waiting for continue.")]
    public bool enableDialogueTyping = true;
    [Tooltip("Seconds between ordinary character reveals.")]
    public float dialogueTypingSpeed = 0.03f;
    [Tooltip("Extra pause after sentence punctuation and single line breaks.")]
    public float dialoguePauseSpeed = 0.35f;

    [Header("Sequence Sources (Resources Paths)")]
    public bool runIntroOnStart = true;
    public string introSequenceResourcePath;
    public string outroSequenceResourcePath;

    [Header("Game scene — dev play mode")]
    [Tooltip("When on, pressing Play in Game scene applies a tutorial scenario before map load. When off, GameMaster loads the skirmish/default map from MatchSettings (menu) or GameMaster export fields.")]
    public bool playTestTutorialOnStart = true;
    [Tooltip("When on, starts at Play Test Scenario Id instead of the first curriculum lesson.")]
    public bool useCustomPlayTestScenario;
    [Tooltip("scenarioId from tutorial_curriculum_manifest.json (tracks or extraScenarios).")]
    public string playTestScenarioId = "tutorial_universal_intro";
    [Tooltip("Optional Resources path without .json — overrides the manifest sequence for Play Test Scenario Id.")]
    public string playTestSequenceResourcePathOverride = "";

    [Header("Tutorial — full curriculum playtest")]
    [Tooltip("After each lesson completes, auto-load the next lesson without the completion panel. Only applies in tutorial matches.")]
    public bool autoRunFullCurriculum = true;
    [Tooltip("Seconds after lesson complete before loading next (0 = next frame).")]
    public float autoAdvanceDelaySeconds = 0.35f;

    [Header("Tutorial — UI key bindings (Inspector)")]
    [Tooltip("Maps sequence JSON uiTarget keys to scene UI objects and Selectables.")]
    [SerializeField]
    private List<UiBindingEntry> uiBindings = new List<UiBindingEntry>();

    [Header("Tutorial — guideClick UI gate (Inspector)")]
    [Tooltip("UIMaster/PriorityUIElements — stays clickable during guideClick waits.")]
    public Transform priorityUiRoot;
    [Tooltip("Typically UIMaster — all other Selectables here are disabled except the guide target.")]
    public Transform uiGateScanRoot;

    [Header("Tutorial — completion UI (Inspector)")]
    [Tooltip("Panel under SequenceGlobalCanvas. Wire Next → OnNextLessonClicked, Back → OnBackToTutorialsClicked.")]
    public GameObject completionPanel;
    public Button nextLessonButton;
    public Button backToTutorialsButton;
    public TMP_Text completionTitleText;

    bool completionPanelVisible;

    private readonly Dictionary<string, BaseUnit> unitRefs = new Dictionary<string, BaseUnit>();
    private readonly Dictionary<string, BaseStructure> structureRefs = new Dictionary<string, BaseStructure>();
    private readonly HashSet<string> highlightedUiTargets = new HashSet<string>();
    private readonly HashSet<BaseUnit> highlightedUnits = new HashSet<BaseUnit>();
    private readonly HashSet<BaseStructure> highlightedStructures = new HashSet<BaseStructure>();
    private readonly HashSet<MovementSquare> highlightedMovementSquares = new HashSet<MovementSquare>();
    private Vector2Int? highlightedTilePos;
    private bool isRunningSequence;
    private bool inputLocked;
    private bool waitingForGameplayClick;
    private bool gameplayClickSatisfied;
    private GameplayClickExpectation expectedGameplayClick;
    private TargetDto pendingGuideHighlightTarget;
    private int pendingGuideHighlightStepIndex = -1;
    private bool guideClickHintHighlightActive;
    private bool guidedClickGateActive;
    private bool initialSequenceLoadMapStepConsumed;

    struct SavedSelectableState
    {
        public Selectable selectable;
        public bool interactable;
    }

    readonly List<SavedSelectableState> gatedSelectableStates = new List<SavedSelectableState>();

    private Graphic dialogArrowGraphicOptional;
    private bool dialogUiInfrastructureReady;
    private bool savedTmpRaycast;
    private bool savedPortraitRaycast;
    private bool dialogArrowStoredRaycast;
    private Action dialogAdvanceSignalRaise;

    /// <summary>When true: block camera/world taps and non-sequence HUD; only sequence dialog taps and Skip proceed.</summary>
    private bool waitingForDialogContinue;
    /// <summary>Player chose Skip dialog — exits the remainder of the current sequence cleanly.</summary>
    private bool sequenceSkippedRequested;

    /// <remarks>Dialogue continue blocks all input; guided clicks allow world pickers through CameraManager.</remarks>
    public bool SuppressNonDialogueGameplayInput()
    {
        if (waitingForDialogContinue)
        {
            return true;
        }

        if (waitingForGameplayClick)
        {
            return false;
        }

        return inputLocked;
    }

    private sealed class GameplayClickExpectation
    {
        public BaseUnit unit;
        public BaseStructure structure;
        public ClickableObject clickable;
    }

    public bool IsInputLocked()
    {
        return inputLocked;
    }

    void Awake()
    {
        if (gameMaster != null)
        {
            gameMaster.HideChoicePanel();
        }

        if (completionPanel != null)
        {
            completionPanel.SetActive(false);
            completionPanelVisible = false;
        }

        PrepareDialogInfrastructure();
        BootstrapMatchSettingsIfNeeded();
    }

    /// <summary>Runs an optional leading loadMap step before gameplay / StartTurn.</summary>
    public IEnumerator EnsureSequenceMapReady(string resourcePath)
    {
        if (string.IsNullOrWhiteSpace(resourcePath))
        {
            yield break;
        }

        TextAsset textAsset = Resources.Load<TextAsset>(resourcePath);
        if (textAsset == null)
        {
            yield break;
        }

        if (!SequenceParser.TryParse(textAsset.text, out SequenceFileDto sequence, out string parseError))
        {
            Debug.LogWarning($"[SequenceManager] EnsureSequenceMapReady: could not parse '{resourcePath}': {parseError}");
            yield break;
        }

        if (sequence.steps == null || sequence.steps.Count == 0)
        {
            yield break;
        }

        SequenceStepDto firstStep = sequence.steps[0];
        if (firstStep == null
            || !string.Equals(firstStep.type?.Trim(), "loadMap", StringComparison.OrdinalIgnoreCase))
        {
            yield break;
        }

        yield return ExecuteLoadMap(0, firstStep);
        initialSequenceLoadMapStepConsumed = true;
    }

    /// <summary>Call from GameMaster.Start after map load — runs intro sequence from MatchSettings.</summary>
    public void BeginFromMatchSettings()
    {
        if (MatchSettings.gameMode != MatchSettings.MatchGameMode.Tutorial)
        {
            return;
        }

        RebuildMapPieceRefs();

        string path = MatchSettings.GetIntroSequenceResourcePath();
        if (string.IsNullOrWhiteSpace(path))
        {
            Debug.LogWarning("[SequenceManager] Tutorial mode but no intro sequence path.");
            return;
        }

        introSequenceResourcePath = path;
        runIntroOnStart = true;
        TryRunIntroSequence();
    }

    void BootstrapMatchSettingsIfNeeded()
    {
        if (!playTestTutorialOnStart || MatchSettings.isInit)
        {
            return;
        }

        string scenarioId = useCustomPlayTestScenario
            ? playTestScenarioId?.Trim()
            : SequenceCurriculum.GetFirstPlayableScenarioId();
        if (string.IsNullOrWhiteSpace(scenarioId))
        {
            Debug.LogError("[SequenceManager] playTestTutorialOnStart: no scenario id to apply.");
            return;
        }

        string sequenceOverride = string.IsNullOrWhiteSpace(playTestSequenceResourcePathOverride)
            ? null
            : playTestSequenceResourcePathOverride.Trim();
        if (!MatchSettings.ApplyTutorialMatch(scenarioId, sequenceOverride))
        {
            Debug.LogError($"[SequenceManager] playTestTutorialOnStart: could not apply scenario '{scenarioId}'.");
            return;
        }

        Debug.Log($"[SequenceManager] playTestTutorialOnStart: starting at '{scenarioId}'"
            + (sequenceOverride != null ? $" (sequence override: '{sequenceOverride}')" : "") + ".");
    }

    /// <summary>Wire from SequenceDialogFullscreenTapReceiver Button On Click in the Inspector.</summary>
    public void NotifyDialogAdvanceFromSequenceDialogPanelTap()
    {
        TryRaiseDialogFullscreenTapAdvance();
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

    /// <summary>Called from <see cref="BaseUnit.StaticSpriteHasBeenClicked"/> when the player selects a unit.</summary>
    /// <summary>Returns true when gameplay should process the click (unit move, structure select, etc.).</summary>
    public bool TryAcceptGuidedUnitClick(BaseUnit unit)
    {
        if (unit == null)
        {
            return false;
        }

        if (!guidedClickGateActive)
        {
            return true;
        }

        if (waitingForGameplayClick
            && expectedGameplayClick != null
            && expectedGameplayClick.unit != null
            && ReferenceEquals(expectedGameplayClick.unit, unit))
        {
            gameplayClickSatisfied = true;
            return true;
        }

        TryStartGuideClickHintHighlight();
        return false;
    }

    /// <summary>Returns true when gameplay should process the structure click.</summary>
    public bool TryAcceptGuidedStructureClick(BaseStructure structure)
    {
        if (structure == null)
        {
            return false;
        }

        if (!guidedClickGateActive)
        {
            return true;
        }

        if (waitingForGameplayClick
            && expectedGameplayClick != null
            && expectedGameplayClick.structure != null
            && ReferenceEquals(expectedGameplayClick.structure, structure))
        {
            gameplayClickSatisfied = true;
            return true;
        }

        TryStartGuideClickHintHighlight();
        return false;
    }

    /// <summary>Returns true when gameplay should process the clickable (e.g. movement square).</summary>
    public bool TryAcceptGuidedClickableClick(ClickableObject clickable)
    {
        if (clickable == null)
        {
            return false;
        }

        if (!guidedClickGateActive)
        {
            return true;
        }

        if (waitingForGameplayClick
            && expectedGameplayClick != null
            && expectedGameplayClick.clickable != null
            && ReferenceEquals(expectedGameplayClick.clickable, clickable))
        {
            gameplayClickSatisfied = true;
            return true;
        }

        TryStartGuideClickHintHighlight();
        return false;
    }

    /// <summary>World tap with no clickable while guideClick gate is active.</summary>
    public void NotifyWrongGameplayWorldClick()
    {
        if (!guidedClickGateActive)
        {
            return;
        }

        TryStartGuideClickHintHighlight();
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

        sequenceSkippedRequested = false;
        isRunningSequence = true;
        Debug.Log($"[SequenceManager] Running sequence '{sequence.sequenceId}' ({sequence.steps.Count} steps).");

        int startStepIndex = 0;
        if (initialSequenceLoadMapStepConsumed
            && sequence.steps.Count > 0
            && sequence.steps[0] != null
            && string.Equals(sequence.steps[0].type?.Trim(), "loadMap", StringComparison.OrdinalIgnoreCase))
        {
            startStepIndex = 1;
            initialSequenceLoadMapStepConsumed = false;
        }

        try
        {
            for (int i = startStepIndex; i < sequence.steps.Count && !sequenceSkippedRequested; i++)
            {
                SequenceStepDto step = sequence.steps[i];
                yield return ExecuteStep(sequence.sequenceId, i, step);
            }
        }
        finally
        {
            TearDownSequencePresentation();
            isRunningSequence = false;
            onComplete?.Invoke();
        }
    }

    private IEnumerator ExecuteStep(string sequenceId, int stepIndex, SequenceStepDto step)
    {
        string stepType = step.type == null ? string.Empty : step.type.Trim();
        Debug.Log($"[SequenceManager] sequence={sequenceId} step={stepIndex} type={stepType}");

        switch (stepType)
        {
            case "dialogue":
                yield return PresentDialogueStep(sequenceId, stepIndex, step);
                break;

            case "cameraFocus":
            {
                if (TryResolveTargetPosition(step.target, out Vector2Int focusPos))
                {
                    cameraManager.SetPosition(focusPos, 1.0f);
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
                    cameraManager.SetPosition(movePos, 1.0f);
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

            case "loadMap":
                yield return ExecuteLoadMap(stepIndex, step);
                break;

            case "wait":
                yield return WaitForDurationMs(step.durationMs);
                break;

            case "requireClick":
                yield return WaitForGameplayClick(stepIndex, step.target, step.timeoutMs);
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
                ApplyHighlightForTarget(stepIndex, step.target, true);
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

            case "guideClick":
                yield return ExecuteGuideClick(sequenceId, stepIndex, step);
                break;

            case "turnHandoff":
                yield return ExecuteTurnHandoff(sequenceId, stepIndex, step);
                break;

            case "advanceTurn":
                yield return ExecuteAdvanceTurn(stepIndex, step);
                break;

            case "showTutorialComplete":
                ShowTutorialComplete();
                break;

            default:
                LogStepError(stepIndex, $"Unsupported step type '{stepType}'.");
                break;
        }
    }

    public void PrepareForTutorialRestart()
    {
        initialSequenceLoadMapStepConsumed = false;
        sequenceSkippedRequested = true;
        StopAllCoroutines();
        ClearAllHighlights();
        unitRefs.Clear();
        structureRefs.Clear();
        waitingForGameplayClick = false;
        expectedGameplayClick = null;
        gameplayClickSatisfied = false;
        pendingGuideHighlightTarget = null;
        pendingGuideHighlightStepIndex = -1;
        guideClickHintHighlightActive = false;
        EndGuidedClickGate();
        waitingForDialogContinue = false;
        isRunningSequence = false;
        inputLocked = false;
    }

    private void ShowTutorialComplete()
    {
        HandleSequenceComplete();
    }

    void HandleSequenceComplete()
    {
        bool hasNext = SequenceCurriculum.TryGetNextScenarioId(MatchSettings.scenarioId, out string nextId);

        if (autoRunFullCurriculum)
        {
            if (hasNext)
            {
                Debug.Log($"[SequenceManager] autoRunFullCurriculum: advancing to '{nextId}'.");
                StartCoroutine(AutoAdvanceToNextLesson());
            }
            else
            {
                Debug.Log("[SequenceManager] autoRunFullCurriculum: curriculum finished.");
                HideCompletionPanel();
            }

            return;
        }

        if (completionPanel == null)
        {
            Debug.LogWarning("[SequenceManager] completionPanel not assigned.");
            return;
        }

        if (completionTitleText != null
            && SequenceCurriculum.TryGetTrackForScenario(MatchSettings.scenarioId, out SequenceCurriculumTrackDto track))
        {
            completionTitleText.text = string.IsNullOrWhiteSpace(track.title) ? "Lesson complete" : track.title;
        }

        if (nextLessonButton != null)
        {
            nextLessonButton.gameObject.SetActive(hasNext);
            nextLessonButton.interactable = hasNext;
        }

        completionPanel.SetActive(true);
        completionPanelVisible = true;
        if (sequenceGlobalCanvas != null)
        {
            sequenceGlobalCanvas.SetActive(true);
        }
    }

    IEnumerator AutoAdvanceToNextLesson()
    {
        HideCompletionPanel();

        if (autoAdvanceDelaySeconds > 0f)
        {
            yield return new WaitForSeconds(autoAdvanceDelaySeconds);
        }
        else
        {
            yield return null;
        }

        OnNextLessonClicked();
    }

    public void HideCompletionPanel()
    {
        completionPanelVisible = false;
        if (completionPanel != null)
        {
            completionPanel.SetActive(false);
        }
    }

    /// <summary>Wire Next Lesson button On Click in Inspector.</summary>
    public void OnNextLessonClicked()
    {
        if (!SequenceCurriculum.TryGetNextScenarioId(MatchSettings.scenarioId, out string nextScenarioId))
        {
            return;
        }

        HideCompletionPanel();
        if (gameMaster != null)
        {
            gameMaster.StartCoroutine(gameMaster.RestartTutorialScenario(nextScenarioId));
        }
    }

    /// <summary>Wire Back to Tutorials button On Click in Inspector.</summary>
    public void OnBackToTutorialsClicked()
    {
        HideCompletionPanel();
        MatchSettings.openTutorialMenuOnLoad = true;
        if (gameMaster != null)
        {
            gameMaster.LoadMainMenuScreen();
        }
    }

    private IEnumerator ExecuteLoadMap(int stepIndex, SequenceStepDto step)
    {
        if (string.IsNullOrWhiteSpace(step.mapType) || step.mapNum <= 0)
        {
            LogStepError(stepIndex, "loadMap requires mapType and mapNum > 0.");
            yield break;
        }

        if (gameMaster == null)
        {
            LogStepError(stepIndex, "loadMap failed: gameMaster is not assigned.");
            yield break;
        }

        int version = step.mapVersion > 0 ? step.mapVersion : 1;
        yield return gameMaster.EnsureMapLoadedForSequence(step.mapType.Trim(), step.mapNum, version);
    }

    private IEnumerator ExecuteGuideClick(string sequenceId, int stepIndex, SequenceStepDto step)
    {
        if (!string.IsNullOrWhiteSpace(step.text))
        {
            yield return PresentDialogueStep(sequenceId, stepIndex, step);
        }

        TargetDto target = step.target;
        if (target == null)
        {
            LogStepError(stepIndex, "guideClick missing target.");
            yield break;
        }

        BeginGuidedClickGate(target);

        if (!string.IsNullOrWhiteSpace(target.uiTarget))
        {
            yield return WaitForUiClick(
                stepIndex,
                target.uiTarget,
                step.timeoutMs,
                target,
                step.clearHighlightOnComplete);
        }
        else
        {
            yield return WaitForGameplayClick(
                stepIndex,
                target,
                step.timeoutMs,
                step.clearHighlightOnComplete);
        }

        EndGuidedClickGate();
    }

    private IEnumerator ExecuteTurnHandoff(string sequenceId, int stepIndex, SequenceStepDto step)
    {
        if (!string.IsNullOrWhiteSpace(step.text))
        {
            yield return PresentDialogueStep(sequenceId, stepIndex, step);
        }

        if (step.requirePlayerEndTurn)
        {
            string endTurnKey = string.IsNullOrWhiteSpace(step.endTurnUiTarget) ? "endTurnButton" : step.endTurnUiTarget;
            TargetDto endTurnTarget = new TargetDto { uiTarget = endTurnKey };

            if (!string.IsNullOrWhiteSpace(step.speaker) && string.IsNullOrWhiteSpace(step.text))
            {
                // text already shown above
            }

            BeginGuidedClickGate(endTurnTarget);
            yield return WaitForUiClick(stepIndex, endTurnKey, step.timeoutMs, endTurnTarget, true);
            EndGuidedClickGate();

            gameMaster.endTurnConfirmCard.SetActive(false);
            if (GameMaster.playerTurn == 1)
            {
                gameMaster.InitiateEndTurn();
            }
        }

        yield return WaitForDurationMs(step.waitMs > 0 ? step.waitMs : 600);

        if (step.scriptedSteps != null && step.scriptedSteps.steps != null)
        {
            for (int i = 0; i < step.scriptedSteps.steps.Count; i++)
            {
                SequenceStepDto nested = step.scriptedSteps.steps[i];
                if (nested != null)
                {
                    yield return ExecuteStep(sequenceId, stepIndex, nested);
                }
            }
        }

        if (step.resumePlayer > 0)
        {
            SequenceStepDto advance = new SequenceStepDto
            {
                type = "advanceTurn",
                resumePlayer = step.resumePlayer
            };
            yield return ExecuteAdvanceTurn(stepIndex, advance);
        }

        if (!string.IsNullOrWhiteSpace(step.textAfter))
        {
            SequenceStepDto afterDlg = new SequenceStepDto
            {
                type = "dialogue",
                speaker = step.speaker,
                text = step.textAfter,
                waitForContinue = true
            };
            yield return PresentDialogueStep(sequenceId, stepIndex, afterDlg);
        }
    }

    private IEnumerator ExecuteAdvanceTurn(int stepIndex, SequenceStepDto step)
    {
        int targetPlayer = step.resumePlayer > 0 ? step.resumePlayer : 1;
        int safety = 0;
        while (GameMaster.playerTurn != targetPlayer && safety < 12)
        {
            gameMaster.endTurnConfirmCard.SetActive(false);
            gameMaster.InitiateEndTurn();
            safety++;
            yield return null;
            yield return new WaitForSeconds(0.25f);
        }

        if (GameMaster.playerTurn != targetPlayer)
        {
            LogStepError(stepIndex, $"advanceTurn could not reach player {targetPlayer} (current {GameMaster.playerTurn}).");
        }
    }

    void BeginGuidedClickGate(TargetDto target)
    {
        EndGuidedClickGate();
        guidedClickGateActive = true;

        string allowedUiKey = target != null ? target.uiTarget : null;
        Selectable allowedSelectable = null;
        if (!string.IsNullOrWhiteSpace(allowedUiKey))
        {
            TryGetUiSelectable(allowedUiKey, out allowedSelectable);
        }

        if (uiGateScanRoot != null)
        {
            Selectable[] selectables = uiGateScanRoot.GetComponentsInChildren<Selectable>(true);
            for (int i = 0; i < selectables.Length; i++)
            {
                Selectable selectable = selectables[i];
                if (selectable == null)
                {
                    continue;
                }

                if (IsUnderTransform(selectable.transform, priorityUiRoot))
                {
                    continue;
                }

                if (allowedSelectable != null && selectable == allowedSelectable)
                {
                    selectable.interactable = true;
                    continue;
                }

                gatedSelectableStates.Add(new SavedSelectableState
                {
                    selectable = selectable,
                    interactable = selectable.interactable
                });
                selectable.interactable = false;
            }
        }
        else
        {
            DisableBoundSelectablesExcept(allowedSelectable);
        }

        if (allowedSelectable != null && !IsUnderTransform(allowedSelectable.transform, uiGateScanRoot))
        {
            allowedSelectable.interactable = true;
        }

        if (!string.IsNullOrWhiteSpace(allowedUiKey)
            && allowedUiKey == "endTurnButton"
            && gameMaster.endTurnButton != null)
        {
            gameMaster.endTurnButton.interactable = true;
        }
    }

    void EndGuidedClickGate()
    {
        guidedClickGateActive = false;

        for (int i = 0; i < gatedSelectableStates.Count; i++)
        {
            SavedSelectableState saved = gatedSelectableStates[i];
            if (saved.selectable != null)
            {
                saved.selectable.interactable = saved.interactable;
            }
        }

        gatedSelectableStates.Clear();
    }

    static bool IsUnderTransform(Transform child, Transform ancestor)
    {
        if (child == null || ancestor == null)
        {
            return false;
        }

        return child == ancestor || child.IsChildOf(ancestor);
    }

    void DisableBoundSelectablesExcept(Selectable allowedSelectable)
    {
        string[] keys =
        {
            "endTurnButton", "attackButton", "captureButton", "undoButton", "exitButton"
        };

        for (int i = 0; i < keys.Length; i++)
        {
            if (!TryGetUiSelectable(keys[i], out Selectable selectable) || selectable == null)
            {
                continue;
            }

            if (allowedSelectable != null && selectable == allowedSelectable)
            {
                selectable.interactable = true;
                continue;
            }

            gatedSelectableStates.Add(new SavedSelectableState
            {
                selectable = selectable,
                interactable = selectable.interactable
            });
            selectable.interactable = false;
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

    /// <summary>
    /// Presents a dialogue step's text, paginating it through the dialog panel.
    /// Authors can insert <c>&lt;page/&gt;</c> (or the JSON form-feed escape <c>\f</c>)
    /// for deliberate page breaks; the engine also auto-paginates anything that
    /// overflows the dialog rect so text is never silently truncated.
    /// </summary>
    private IEnumerator PresentDialogueStep(string sequenceId, int stepIndex, SequenceStepDto step)
    {
        bool hasText = !string.IsNullOrWhiteSpace(step.text);

        if (hasText && sequenceDialogText != null)
        {
            if (sequenceGlobalCanvas != null)
            {
                sequenceGlobalCanvas.SetActive(true);
            }

            EnsureDialogTextPaged();

            string normalized = NormalizeDialogueText(step.text);
            bool hasExplicitBreak = normalized.IndexOf("<page>", StringComparison.Ordinal) >= 0;

            sequenceDialogText.text = normalized;
            sequenceDialogText.pageToDisplay = 1;
            sequenceDialogText.maxVisibleCharacters = int.MaxValue;
            sequenceDialogText.ForceMeshUpdate();

            EnsureSkipButtonForeground();

            int pageCount = 1;
            if (sequenceDialogText.textInfo != null)
            {
                pageCount = Mathf.Max(1, sequenceDialogText.textInfo.pageCount);
            }

            if (pageCount > 1 && !hasExplicitBreak)
            {
                Debug.LogWarning(
                    $"[SequenceManager] sequence={sequenceId} step={stepIndex} dialogue auto-paginated into {pageCount} pages without explicit <page/> markers. Consider adding deliberate breaks for pacing.");
            }

            for (int page = 1; page <= pageCount; page++)
            {
                if (sequenceSkippedRequested)
                {
                    yield break;
                }

                if (enableDialogueTyping)
                {
                    yield return TypeRevealDialoguePage(page);
                }
                else
                {
                    ShowDialoguePageInstant(page);
                }

                if (sequenceSkippedRequested)
                {
                    yield break;
                }

                bool isLastPage = page == pageCount;
                bool waitThisPage = !isLastPage || step.waitForContinue;

                if (waitThisPage)
                {
                    yield return WaitForDialogueContinue();
                }
            }

            sequenceDialogText.maxVisibleCharacters = int.MaxValue;
            sequenceDialogText.ForceMeshUpdate();
        }
        else if (step.waitForContinue)
        {
            yield return WaitForDialogueContinue();
        }
    }

    /// <summary>
    /// Authoring sugar: normalize supported page-break authoring styles to TMP's native <c>&lt;page&gt;</c> rich-text tag.
    /// This avoids relying on a literal form-feed glyph being present in the active font asset.
    /// </summary>
    private static string NormalizeDialogueText(string raw)
    {
        if (string.IsNullOrEmpty(raw))
        {
            return raw;
        }

        return raw
            .Replace("\f", "<page>")
            .Replace("<page/>", "<page>")
            .Replace("<page />", "<page>");
    }

    private void ShowDialoguePageInstant(int page)
    {
        if (sequenceDialogText == null)
        {
            return;
        }

        sequenceDialogText.pageToDisplay = page;
        sequenceDialogText.maxVisibleCharacters = int.MaxValue;
        sequenceDialogText.ForceMeshUpdate();
    }

    /// <summary>
    /// Reveals the requested dialogue page character-by-character. A tap during typing completes
    /// the current page immediately; a separate tap is still required to advance afterward.
    /// </summary>
    private IEnumerator TypeRevealDialoguePage(int page)
    {
        if (sequenceDialogText == null)
        {
            yield break;
        }

        sequenceDialogText.pageToDisplay = page;
        sequenceDialogText.ForceMeshUpdate();

        TMP_TextInfo textInfo = sequenceDialogText.textInfo;
        if (textInfo == null || textInfo.pageCount <= 0)
        {
            yield break;
        }

        int pageIndex = page - 1;
        if (pageIndex < 0 || pageIndex >= textInfo.pageCount)
        {
            yield break;
        }

        TMP_PageInfo pageInfo = textInfo.pageInfo[pageIndex];
        int pageStart = pageInfo.firstCharacterIndex;
        int pageEnd = pageInfo.lastCharacterIndex;

        if (pageEnd < pageStart)
        {
            yield break;
        }

        sequenceDialogText.maxVisibleCharacters = pageStart;
        sequenceDialogText.ForceMeshUpdate();

        bool skipTypingRequested = false;

        BeginDialogContinueMode(() => skipTypingRequested = true);

        try
        {
            for (int visibleCount = pageStart + 1; visibleCount <= pageEnd + 1; visibleCount++)
            {
                if (sequenceSkippedRequested || skipTypingRequested)
                {
                    sequenceDialogText.maxVisibleCharacters = pageEnd + 1;
                    sequenceDialogText.ForceMeshUpdate();
                    yield break;
                }

                sequenceDialogText.maxVisibleCharacters = visibleCount;

                int charIndex = visibleCount - 1;
                char currentChar = textInfo.characterInfo[charIndex].character;
                char? nextChar = charIndex < pageEnd
                    ? textInfo.characterInfo[charIndex + 1].character
                    : (char?)null;

                float delay = GetDialogueTypingDelay(currentChar, nextChar);
                if (delay > 0f)
                {
                    float elapsed = 0f;
                    while (elapsed < delay)
                    {
                        if (sequenceSkippedRequested || skipTypingRequested)
                        {
                            sequenceDialogText.maxVisibleCharacters = pageEnd + 1;
                            sequenceDialogText.ForceMeshUpdate();
                            yield break;
                        }

                        elapsed += Time.deltaTime;
                        yield return null;
                    }
                }
            }
        }
        finally
        {
            EndDialogContinueMode();
        }
    }

    private float GetDialogueTypingDelay(char currentChar, char? nextChar)
    {
        if (currentChar == '.')
        {
            return dialoguePauseSpeed;
        }

        if (currentChar == ',')
        {
            return dialoguePauseSpeed * 0.25f;
        }

        if (currentChar == ';')
        {
            return dialoguePauseSpeed;
        }

        if (nextChar.HasValue && currentChar == '\n' && nextChar.Value != '\n')
        {
            return dialoguePauseSpeed;
        }

        if (nextChar.HasValue && currentChar == '\n' && nextChar.Value == '\n')
        {
            return 0f;
        }

        if (nextChar.HasValue && currentChar == ' ' && nextChar.Value == '.')
        {
            return 0f;
        }

        return dialogueTypingSpeed;
    }

    /// <summary>
    /// Force the dialog TMP component into Page overflow mode so <see cref="TMP_Text.pageToDisplay"/>
    /// and <c>textInfo.pageCount</c> are meaningful. Idempotent.
    /// </summary>
    private void EnsureDialogTextPaged()
    {
        if (sequenceDialogText == null)
        {
            return;
        }

        if (sequenceDialogText.overflowMode != TextOverflowModes.Page)
        {
            sequenceDialogText.overflowMode = TextOverflowModes.Page;
        }
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
            unit.sequenceId = step.unitId;
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
        masterGrid.PrepareMovementSearch(unit, unit.movementRange, 0);
        if (!masterGrid.IsCellReachable(destination, unit.movementRange))
        {
            LogStepError(stepIndex, $"moveUnit destination {destination} is not reachable within movement range.");
            return;
        }

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
        if (!string.IsNullOrWhiteSpace(step.structureId)
            && TryResolveStructureBySequenceId(step.structureId, out BaseStructure mappedStructure))
        {
            structure = mappedStructure;
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

    private IEnumerator WaitForGameplayClick(
        int stepIndex,
        TargetDto expectedTarget,
        int timeoutMs,
        bool clearHintWhenDone = true)
    {
        if (expectedTarget == null)
        {
            LogStepError(stepIndex, "requireClick missing target.");
            yield break;
        }

        if (!TryResolveGameplayClickExpectation(stepIndex, expectedTarget, out GameplayClickExpectation expectation))
        {
            yield break;
        }

        if (!guidedClickGateActive)
        {
            BeginGuidedClickGate(expectedTarget);
        }

        expectedGameplayClick = expectation;
        waitingForGameplayClick = true;
        gameplayClickSatisfied = false;
        pendingGuideHighlightTarget = expectedTarget;
        pendingGuideHighlightStepIndex = stepIndex;
        guideClickHintHighlightActive = false;

        float timeout = timeoutMs > 0 ? timeoutMs / 1000f : -1f;
        float elapsed = 0f;

        while (!gameplayClickSatisfied)
        {
            if (timeout > 0f && elapsed >= timeout)
            {
                LogStepError(stepIndex, "requireClick timed out.");
                break;
            }

            elapsed += Time.deltaTime;
            yield return null;
        }

        waitingForGameplayClick = false;
        expectedGameplayClick = null;
        if (clearHintWhenDone)
        {
            ClearGuideClickHintHighlight();
        }

        pendingGuideHighlightTarget = null;
        pendingGuideHighlightStepIndex = -1;
    }

    void TryStartGuideClickHintHighlight()
    {
        if (!guidedClickGateActive || guideClickHintHighlightActive || pendingGuideHighlightTarget == null)
        {
            return;
        }

        guideClickHintHighlightActive = true;
        ApplyHighlightForTarget(pendingGuideHighlightStepIndex, pendingGuideHighlightTarget, true);
    }

    void ClearGuideClickHintHighlight()
    {
        if (!guideClickHintHighlightActive || pendingGuideHighlightTarget == null)
        {
            guideClickHintHighlightActive = false;
            return;
        }

        ApplyHighlightForTarget(pendingGuideHighlightStepIndex, pendingGuideHighlightTarget, false);
        guideClickHintHighlightActive = false;
    }

    private bool TryResolveGameplayClickExpectation(int stepIndex, TargetDto target, out GameplayClickExpectation expectation)
    {
        expectation = new GameplayClickExpectation();
        if (target == null)
        {
            LogStepError(stepIndex, "requireClick target is null.");
            return false;
        }

        string targetDescription = DescribeTargetDto(target);

        if (!string.IsNullOrWhiteSpace(target.unitId))
        {
            if (TryResolveUnitBySequenceId(target.unitId, out BaseUnit unit))
            {
                expectation.unit = unit;
                return true;
            }

            LogStepError(stepIndex,
                $"requireClick could not resolve unitId '{target.unitId}'. " +
                $"Registered unit sequenceIds ({unitRefs.Count}): {FormatSequenceIdList(unitRefs.Keys)}. " +
                $"masterGrid={(masterGrid != null ? "assigned" : "null")}, " +
                $"playerUnits={(MasterGrid.playerUnits != null ? MasterGrid.playerUnits.Length + " players" : "null")}. " +
                $"Target fields: {targetDescription}");
            return false;
        }

        if (!string.IsNullOrWhiteSpace(target.structureId))
        {
            if (TryResolveStructureBySequenceId(target.structureId, out BaseStructure structureById))
            {
                expectation.structure = structureById;
                return true;
            }

            LogStepError(stepIndex,
                $"requireClick could not resolve structureId '{target.structureId}'. " +
                $"Registered structure sequenceIds ({structureRefs.Count}): {FormatSequenceIdList(structureRefs.Keys)}. " +
                $"masterGrid={(masterGrid != null ? "assigned" : "null")}. " +
                $"Target fields: {targetDescription}");
            return false;
        }

        if (masterGrid == null)
        {
            LogStepError(stepIndex,
                $"requireClick could not resolve tile ({target.x},{target.y}) because masterGrid is not assigned. " +
                $"Target fields: {targetDescription}");
            return false;
        }

        Vector2Int tile = new Vector2Int(target.x, target.y);
        MovementSquare movementSquare = masterGrid.FindMovementSquareAt(tile);
        if (movementSquare != null)
        {
            expectation.clickable = movementSquare;
            return true;
        }

        BaseStructure structureAtTile = masterGrid.WhatStructureIsInThisLocation(tile);
        if (structureAtTile != null)
        {
            expectation.structure = structureAtTile;
            return true;
        }

        BaseUnit unitAtTile = masterGrid.WhatUnitIsInThisLocation(tile);
        if (unitAtTile != null)
        {
            expectation.unit = unitAtTile;
            return true;
        }

        LogStepError(stepIndex,
            $"requireClick could not resolve tile ({target.x},{target.y}): " +
            $"no movement overlay, structure, or unit found. " +
            $"inBounds={masterGrid.IsInBounds(tile)}, gridSize=({masterGrid.gridX},{masterGrid.gridY}). " +
            $"Target fields: {targetDescription}. " +
            "Hint: use unitId/structureId, or a tile with a visible piece or move overlay.");
        return false;
    }

    private IEnumerator WaitForUiClick(
        int stepIndex,
        string uiTarget,
        int timeoutMs,
        TargetDto highlightTarget = null,
        bool clearHintWhenDone = true)
    {
        if (!TryGetUiSelectable(uiTarget, out Selectable selectable))
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

        TargetDto guideTarget = highlightTarget ?? new TargetDto { uiTarget = uiTarget };
        pendingGuideHighlightTarget = guideTarget;
        pendingGuideHighlightStepIndex = stepIndex;
        guideClickHintHighlightActive = false;

        float timeout = timeoutMs > 0 ? timeoutMs / 1000f : -1f;
        float elapsed = 0f;
        while (!clicked)
        {
            if (TryGetPointerPressedScreenPosition(out Vector2 pressPosition)
                && !IsPointerOverUiTarget(button, pressPosition))
            {
                TryStartGuideClickHintHighlight();
            }

            if (timeout > 0f && elapsed >= timeout)
            {
                LogStepError(stepIndex, $"requireUiClick timed out for '{uiTarget}'.");
                break;
            }

            elapsed += Time.deltaTime;
            yield return null;
        }

        button.onClick.RemoveListener(listener);
        if (clearHintWhenDone)
        {
            ClearGuideClickHintHighlight();
        }

        pendingGuideHighlightTarget = null;
        pendingGuideHighlightStepIndex = -1;
        EndGuidedClickGate();
    }

    static bool TryGetPointerPressedScreenPosition(out Vector2 screenPosition)
    {
        screenPosition = default;
        if (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.wasPressedThisFrame)
        {
            screenPosition = Touchscreen.current.primaryTouch.position.ReadValue();
            return true;
        }

        if (Mouse.current != null && Mouse.current.leftButton.wasPressedThisFrame)
        {
            screenPosition = Mouse.current.position.ReadValue();
            return true;
        }

        return false;
    }

    static bool IsPointerOverUiTarget(Button targetButton, Vector2 screenPosition)
    {
        if (targetButton == null || EventSystem.current == null)
        {
            return false;
        }

        PointerEventData eventData = new PointerEventData(EventSystem.current) { position = screenPosition };
        var results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(eventData, results);
        Transform targetTransform = targetButton.transform;
        for (int i = 0; i < results.Count; i++)
        {
            if (results[i].gameObject != null && results[i].gameObject.transform.IsChildOf(targetTransform))
            {
                return true;
            }
        }

        return false;
    }

    private void ApplyUiInteractable(int stepIndex, SequenceStepDto step)
    {
        if (step.uiTargets == null || step.uiTargets.Count == 0)
        {
            LogStepError(stepIndex, "setUiInteractable requires uiTargets.");
            return;
        }

        HashSet<string> targetSet = new HashSet<string>(step.uiTargets);
        bool enable = step.mode == "allowOnly";
        SetUiBindingsInteractable(targetSet, enable);
    }

    private void ApplyHighlightForTarget(int stepIndex, TargetDto target, bool enabled)
    {
        if (target == null)
        {
            LogStepError(stepIndex, "highlightTarget missing target.");
            return;
        }

        if (!string.IsNullOrWhiteSpace(target.uiTarget))
        {
            ApplyUiHighlight(stepIndex, target.uiTarget, enabled);
            return;
        }

        if (!string.IsNullOrWhiteSpace(target.unitId) && TryResolveUnitBySequenceId(target.unitId, out BaseUnit unit))
        {
            ApplyUnitHighlight(unit, enabled);
            return;
        }

        if (!string.IsNullOrWhiteSpace(target.structureId)
            && TryResolveStructureBySequenceId(target.structureId, out BaseStructure structureById))
        {
            ApplyStructureHighlight(structureById, enabled);
            return;
        }

        Vector2Int tile = new Vector2Int(target.x, target.y);
        if (masterGrid != null)
        {
            MovementSquare movementSquare = masterGrid.FindMovementSquareAt(tile);
            if (movementSquare != null)
            {
                ApplyClickableHighlight(movementSquare, enabled);
                return;
            }

            BaseStructure structureAtTile = masterGrid.WhatStructureIsInThisLocation(tile);
            if (structureAtTile != null)
            {
                ApplyStructureHighlight(structureAtTile, enabled);
                return;
            }

            BaseUnit unitAtTile = masterGrid.WhatUnitIsInThisLocation(tile);
            if (unitAtTile != null)
            {
                ApplyUnitHighlight(unitAtTile, enabled);
                return;
            }
        }

        if (enabled)
        {
            highlightedTilePos = tile;
            if (cameraManager != null)
            {
                cameraManager.SetPosition(tile, 0.5f);
            }
        }
        else if (highlightedTilePos.HasValue && highlightedTilePos.Value == tile)
        {
            highlightedTilePos = null;
        }
    }

    private void ApplyUiHighlight(int stepIndex, string uiTarget, bool enabled)
    {
        if (!TryGetUiObject(uiTarget, out GameObject targetObject))
        {
            LogStepError(stepIndex, $"highlightTarget failed, missing UI key '{uiTarget}'.");
            return;
        }

        Transform t = targetObject.transform;
        t.localScale = enabled ? Vector3.one * 1.05f : Vector3.one;
        if (enabled)
        {
            highlightedUiTargets.Add(uiTarget);
        }
        else
        {
            highlightedUiTargets.Remove(uiTarget);
        }
    }

    private void ApplyUnitHighlight(BaseUnit unit, bool enabled)
    {
        if (unit == null)
        {
            return;
        }

        unit.SetTutorialHighlight(enabled);
        if (enabled)
        {
            highlightedUnits.Add(unit);
        }
        else
        {
            highlightedUnits.Remove(unit);
        }
    }

    private void ApplyStructureHighlight(BaseStructure structure, bool enabled)
    {
        if (structure == null)
        {
            return;
        }

        structure.SetTutorialHighlight(enabled);
        if (enabled)
        {
            highlightedStructures.Add(structure);
        }
        else
        {
            highlightedStructures.Remove(structure);
        }
    }

    private void ApplyClickableHighlight(ClickableObject clickable, bool enabled)
    {
        if (clickable is MovementSquare movementSquare)
        {
            movementSquare.SetTutorialHighlight(enabled);
            if (enabled)
            {
                highlightedMovementSquares.Add(movementSquare);
            }
            else
            {
                highlightedMovementSquares.Remove(movementSquare);
            }

            return;
        }

        if (clickable == null)
        {
            return;
        }
    }

    private void ClearAllHighlights()
    {
        foreach (string uiKey in new List<string>(highlightedUiTargets))
        {
            ApplyUiHighlight(-1, uiKey, false);
        }

        highlightedUiTargets.Clear();

        foreach (BaseUnit unit in new List<BaseUnit>(highlightedUnits))
        {
            if (unit != null)
            {
                unit.SetTutorialHighlight(false);
            }
        }

        highlightedUnits.Clear();

        foreach (BaseStructure structure in new List<BaseStructure>(highlightedStructures))
        {
            if (structure != null)
            {
                structure.SetTutorialHighlight(false);
            }
        }

        highlightedStructures.Clear();

        foreach (MovementSquare square in new List<MovementSquare>(highlightedMovementSquares))
        {
            if (square != null)
            {
                square.SetTutorialHighlight(false);
            }
        }

        highlightedMovementSquares.Clear();
        highlightedTilePos = null;
    }

    private BaseUnit ResolveUnit(SequenceStepDto step)
    {
        if (!string.IsNullOrWhiteSpace(step.unitId) && TryResolveUnitBySequenceId(step.unitId, out BaseUnit mapped))
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

        if (!string.IsNullOrWhiteSpace(target.unitId) && TryResolveUnitBySequenceId(target.unitId, out BaseUnit mappedUnit))
        {
            pos = mappedUnit.pos;
            return true;
        }

        if (!string.IsNullOrWhiteSpace(target.structureId)
            && TryResolveStructureBySequenceId(target.structureId, out BaseStructure mappedStructure))
        {
            pos = mappedStructure.pos;
            return true;
        }

        pos = new Vector2Int(target.x, target.y);
        return true;
    }

    /// <summary>Index map units/structures with sequenceId after load or tutorial reload.</summary>
    public void RebuildMapPieceRefs()
    {
        unitRefs.Clear();
        structureRefs.Clear();

        if (masterGrid != null)
        {
            foreach (BaseStructure candidate in masterGrid.GetStructures(null))
            {
                if (candidate == null || string.IsNullOrWhiteSpace(candidate.sequenceId))
                {
                    continue;
                }

                structureRefs[candidate.sequenceId] = candidate;
            }
        }

        if (MasterGrid.playerUnits == null)
        {
            return;
        }

        for (int i = 0; i < MasterGrid.playerUnits.Length; i++)
        {
            List<BaseUnit> units = MasterGrid.playerUnits[i];
            if (units == null)
            {
                continue;
            }

            for (int j = 0; j < units.Count; j++)
            {
                BaseUnit candidate = units[j];
                if (candidate == null || string.IsNullOrWhiteSpace(candidate.sequenceId))
                {
                    continue;
                }

                unitRefs[candidate.sequenceId] = candidate;
            }
        }
    }

    private bool TryResolveStructureBySequenceId(string sequenceId, out BaseStructure structure)
    {
        structure = null;
        if (string.IsNullOrWhiteSpace(sequenceId))
        {
            return false;
        }

        if (structureRefs.TryGetValue(sequenceId, out BaseStructure mapped) && mapped != null)
        {
            structure = mapped;
            return true;
        }

        if (masterGrid == null)
        {
            return false;
        }

        foreach (BaseStructure candidate in masterGrid.GetStructures(null))
        {
            if (candidate == null || string.IsNullOrWhiteSpace(candidate.sequenceId))
            {
                continue;
            }

            if (string.Equals(candidate.sequenceId, sequenceId, StringComparison.Ordinal))
            {
                structureRefs[sequenceId] = candidate;
                structure = candidate;
                return true;
            }
        }

        return false;
    }

    private bool TryResolveUnitBySequenceId(string sequenceId, out BaseUnit unit)
    {
        unit = null;
        if (string.IsNullOrWhiteSpace(sequenceId))
        {
            return false;
        }

        if (unitRefs.TryGetValue(sequenceId, out BaseUnit mapped) && mapped != null)
        {
            unit = mapped;
            return true;
        }

        if (MasterGrid.playerUnits == null)
        {
            return false;
        }

        for (int i = 0; i < MasterGrid.playerUnits.Length; i++)
        {
            List<BaseUnit> units = MasterGrid.playerUnits[i];
            if (units == null)
            {
                continue;
            }

            for (int j = 0; j < units.Count; j++)
            {
                BaseUnit candidate = units[j];
                if (candidate == null)
                {
                    continue;
                }

                if (string.Equals(candidate.sequenceId, sequenceId, StringComparison.Ordinal))
                {
                    unitRefs[sequenceId] = candidate;
                    unit = candidate;
                    return true;
                }
            }
        }

        return false;
    }

    /// <summary>Blocks until tap-to-continue anywhere on-screen (or dialog panel / portrait area) or Skip.</summary>
    private IEnumerator WaitForDialogueContinue()
    {
        if (sequenceGlobalCanvas == null)
        {
            LogStepError(-1, "waitForContinue failed: sequenceGlobalCanvas is not assigned.");
            yield break;
        }

        bool dialogAdvanceSignal = false;

        BeginDialogContinueMode(() => dialogAdvanceSignal = true);

        try
        {
            while (!dialogAdvanceSignal && !sequenceSkippedRequested)
            {
                yield return null;
            }
        }
        finally
        {
            EndDialogContinueMode();
        }
    }

    private void PrepareDialogInfrastructure()
    {
        if (dialogUiInfrastructureReady || sequenceGlobalCanvas == null)
        {
            return;
        }

        dialogUiInfrastructureReady = true;

        Transform dialogArrow = sequenceGlobalCanvas.transform.Find("Dialog Arrow");
        if (dialogArrow != null)
        {
            dialogArrowGraphicOptional = dialogArrow.GetComponent<Graphic>();
        }
    }

    private void TryRaiseDialogFullscreenTapAdvance()
    {
        if (!waitingForDialogContinue || sequenceSkippedRequested)
        {
            return;
        }

        Debug.Log("[SequenceManager] Dialogue continue (tap).");
        dialogAdvanceSignalRaise?.Invoke();
    }

    private void BeginDialogContinueMode(Action raiseAdvanceSignal)
    {
        PrepareDialogInfrastructure();
        dialogAdvanceSignalRaise = raiseAdvanceSignal;

        EnsureSkipButtonForeground();

        if (sequenceDialogText != null)
        {
            savedTmpRaycast = sequenceDialogText.raycastTarget;
            sequenceDialogText.raycastTarget = false;
        }

        if (sequenceDialogImage != null)
        {
            savedPortraitRaycast = sequenceDialogImage.raycastTarget;
            sequenceDialogImage.raycastTarget = false;
        }

        if (dialogArrowGraphicOptional != null)
        {
            dialogArrowStoredRaycast = dialogArrowGraphicOptional.raycastTarget;
            dialogArrowGraphicOptional.raycastTarget = false;
        }

        if (dialogFullscreenTapBlocker != null)
        {
            dialogFullscreenTapBlocker.transform.SetAsFirstSibling();
            dialogFullscreenTapBlocker.SetActive(true);
            EnsureSkipButtonForeground();
        }
        else
        {
            Debug.LogWarning("[SequenceManager] dialogFullscreenTapBlocker is not assigned. Full-screen tap-to-continue will not work.");
        }

        waitingForDialogContinue = true;
    }

    private void EndDialogContinueMode()
    {
        dialogAdvanceSignalRaise = null;

        if (dialogFullscreenTapBlocker != null)
        {
            dialogFullscreenTapBlocker.SetActive(false);
        }

        waitingForDialogContinue = false;

        if (sequenceDialogText != null)
        {
            sequenceDialogText.raycastTarget = savedTmpRaycast;
        }

        if (sequenceDialogImage != null)
        {
            sequenceDialogImage.raycastTarget = savedPortraitRaycast;
        }

        if (dialogArrowGraphicOptional != null)
        {
            dialogArrowGraphicOptional.raycastTarget = dialogArrowStoredRaycast;
        }
    }

    private void TearDownSequencePresentation()
    {
        EndDialogContinueMode();
        ClearAllHighlights();

        sequenceSkippedRequested = false;

        if (inputLocked)
        {
            SetInputLock(false, "sequence_finished");
        }

        if (sequenceGlobalCanvas != null && sequenceGlobalCanvas.activeSelf && !completionPanelVisible)
        {
            sequenceGlobalCanvas.SetActive(false);
        }
    }

    private void EnsureSkipButtonForeground()
    {
        if (skipDialogButton != null)
        {
            skipDialogButton.transform.SetAsLastSibling();
        }
    }

    /// <summary>Wire from SkipDialogButton On Click in the Inspector.</summary>
    public void SkipDialogSequence()
    {
        Debug.Log("[SequenceManager] Skip dialog — terminating current sequence.");
        sequenceSkippedRequested = true;
        dialogAdvanceSignalRaise?.Invoke();
    }

    private void LogStepError(int stepIndex, string message)
    {
        Debug.LogError($"[SequenceManager] Step {stepIndex}: {message}");
    }

    static string DescribeTargetDto(TargetDto target)
    {
        if (target == null)
        {
            return "null";
        }

        var parts = new List<string>();
        if (!string.IsNullOrWhiteSpace(target.unitId))
        {
            parts.Add($"unitId='{target.unitId}'");
        }

        if (!string.IsNullOrWhiteSpace(target.structureId))
        {
            parts.Add($"structureId='{target.structureId}'");
        }

        if (!string.IsNullOrWhiteSpace(target.markerId))
        {
            parts.Add($"markerId='{target.markerId}'");
        }

        if (!string.IsNullOrWhiteSpace(target.uiTarget))
        {
            parts.Add($"uiTarget='{target.uiTarget}'");
        }

        parts.Add($"tile=({target.x},{target.y})");
        return string.Join(", ", parts);
    }

    static string FormatSequenceIdList(ICollection<string> ids, int maxCount = 16)
    {
        if (ids == null || ids.Count == 0)
        {
            return "(none)";
        }

        var parts = new List<string>();
        int shown = 0;
        foreach (string id in ids)
        {
            if (shown >= maxCount)
            {
                parts.Add($"... +{ids.Count - maxCount} more");
                break;
            }

            parts.Add(id);
            shown++;
        }

        return string.Join(", ", parts);
    }

    bool TryGetUiSelectable(string key, out Selectable selectable)
    {
        selectable = null;
        if (string.IsNullOrWhiteSpace(key) || uiBindings == null)
        {
            return false;
        }

        for (int i = 0; i < uiBindings.Count; i++)
        {
            UiBindingEntry entry = uiBindings[i];
            if (entry != null && entry.key == key && entry.selectable != null)
            {
                selectable = entry.selectable;
                return true;
            }
        }

        return false;
    }

    bool TryGetUiObject(string key, out GameObject targetObject)
    {
        targetObject = null;
        if (string.IsNullOrWhiteSpace(key) || uiBindings == null)
        {
            return false;
        }

        for (int i = 0; i < uiBindings.Count; i++)
        {
            UiBindingEntry entry = uiBindings[i];
            if (entry != null && entry.key == key)
            {
                if (entry.targetObject != null)
                {
                    targetObject = entry.targetObject;
                    return true;
                }

                if (entry.selectable != null)
                {
                    targetObject = entry.selectable.gameObject;
                    return true;
                }
            }
        }

        return false;
    }

    void SetUiBindingsInteractable(HashSet<string> keys, bool interactable)
    {
        if (keys == null || keys.Count == 0 || uiBindings == null)
        {
            return;
        }

        for (int i = 0; i < uiBindings.Count; i++)
        {
            UiBindingEntry entry = uiBindings[i];
            if (entry == null || entry.selectable == null)
            {
                continue;
            }

            if (keys.Contains(entry.key))
            {
                entry.selectable.interactable = interactable;
            }
        }
    }

    [Serializable]
    public class UiBindingEntry
    {
        public string key;
        public GameObject targetObject;
        public Selectable selectable;
    }
}
