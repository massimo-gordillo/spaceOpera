using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SequenceManager : MonoBehaviour
{
    [Header("Manager References")]
    public GameMaster gameMaster;
    public MasterGrid masterGrid;
    public CameraManager cameraManager;
    public SequenceUIBindings uiBindings;
    public GameObject sequenceGlobalCanvas;
    public TMP_Text sequenceDialogText;
    public Image sequenceDialogImage;

    [Header("Sequence dialog controls (inspector)")]
    [Tooltip("Full-screen invisible tap catcher on SequenceGlobalCanvas. Leave disabled in the scene; enabled while dialogue waits for continue.")]
    public GameObject dialogFullscreenTapBlocker;
    [Tooltip("Optional. Assign the UI Button that skips the rest of the current sequence.")]
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

    private readonly Dictionary<string, BaseUnit> unitRefs = new Dictionary<string, BaseUnit>();
    private readonly HashSet<string> highlightedUiTargets = new HashSet<string>();
    private bool isRunningSequence;
    private bool inputLocked;
    private bool waitingForWorldClick;
    private bool worldClickSatisfied;
    private TargetDto expectedWorldClickTarget;
    private Vector2Int lastWorldClickPos;
    private bool hasLastWorldClickPos;

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

    /// <remarks>Includes tutorial input lock plus dialogue Continue lock.</remarks>
    public bool SuppressNonDialogueGameplayInput()
    {
        return inputLocked || waitingForDialogContinue;
    }

    public bool IsInputLocked()
    {
        return inputLocked;
    }

    void Awake()
    {
        PrepareDialogInfrastructure();
        BindDialogFullscreenTapBlocker();
        BindSkipDialogButtonInspector();
    }

    void OnDestroy()
    {
        UnbindDialogFullscreenTapBlocker();
        if (skipDialogButton != null)
        {
            skipDialogButton.onClick.RemoveListener(OnSkipDialogClicked);
        }
    }

    /// <summary>Wire from the sequence dialog panel Button On Click in the Inspector.</summary>
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

        sequenceSkippedRequested = false;
        isRunningSequence = true;
        Debug.Log($"[SequenceManager] Running sequence '{sequence.sequenceId}' ({sequence.steps.Count} steps).");

        try
        {
            for (int i = 0; i < sequence.steps.Count && !sequenceSkippedRequested; i++)
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

        sequenceSkippedRequested = false;

        if (inputLocked)
        {
            SetInputLock(false, "sequence_finished");
        }

        if (sequenceGlobalCanvas != null && sequenceGlobalCanvas.activeSelf)
        {
            sequenceGlobalCanvas.SetActive(false);
        }
    }

    private void BindDialogFullscreenTapBlocker()
    {
        if (dialogFullscreenTapBlocker == null)
        {
            return;
        }

        Button button = dialogFullscreenTapBlocker.GetComponent<Button>();
        if (button == null)
        {
            Debug.LogWarning("[SequenceManager] dialogFullscreenTapBlocker is assigned but has no Button component.");
            return;
        }

        button.onClick.RemoveListener(TryRaiseDialogFullscreenTapAdvance);
        button.onClick.AddListener(TryRaiseDialogFullscreenTapAdvance);
    }

    private void UnbindDialogFullscreenTapBlocker()
    {
        if (dialogFullscreenTapBlocker == null)
        {
            return;
        }

        Button button = dialogFullscreenTapBlocker.GetComponent<Button>();
        if (button != null)
        {
            button.onClick.RemoveListener(TryRaiseDialogFullscreenTapAdvance);
        }
    }

    private void BindSkipDialogButtonInspector()
    {
        if (skipDialogButton == null)
        {
            return;
        }

        skipDialogButton.onClick.RemoveListener(OnSkipDialogClicked);
        skipDialogButton.onClick.AddListener(OnSkipDialogClicked);
    }

    private void EnsureSkipButtonForeground()
    {
        if (skipDialogButton != null)
        {
            skipDialogButton.transform.SetAsLastSibling();
        }
    }

    private void OnSkipDialogClicked()
    {
        Debug.Log("[SequenceManager] Skip dialog — terminating current sequence.");
        sequenceSkippedRequested = true;
        dialogAdvanceSignalRaise?.Invoke();
    }

    private void LogStepError(int stepIndex, string message)
    {
        Debug.LogError($"[SequenceManager] Step {stepIndex}: {message}");
    }
}
