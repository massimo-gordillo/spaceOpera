using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;

/// <summary>
/// Dev-only: attach next to TutorialManager, enable export flags, enter Play from MenuScene once.
/// Writes text-only slide copy (title, body, page label) to JSON under Assets. Optionally emits dialogue sequence JSON.
/// Inspector values revert after Play Mode — re-enable when you need another export.
/// </summary>
[DefaultExecutionOrder(500)]
public class TutorialSlideTextExporter : MonoBehaviour
{
    const string TitleObjectName = "TitleText";
    const string BodyObjectName = "Text Content";
    const string PageNumObjectName = "PageNum";

    [Header("Slide dump (step 1)")]
    [Tooltip("Check, Play once from MenuScene, then uncheck. Output path is under the Assets folder.")]
    public bool exportSlideTextOnPlay;

    [Tooltip("Relative to Assets, e.g. DevExports/menu_slides_export.json")]
    public string slideDumpRelativePath = "DevExports/menu_slides_export.json";

    [Header("Sequence JSON (step 2)")]
    public bool alsoWriteSequenceJson;

    [Tooltip("Relative to Assets")]
    public string sequenceRelativePath = "Resources/Sequences/tutorial_from_menu_export.json";

    public string sequenceId = "tutorial_from_menu";
    public string missionId = "tutorial_01";
    public string dialogueSpeaker = "Tutorial";

    void Start()
    {
#if !UNITY_EDITOR
        return;
#else
        if (!exportSlideTextOnPlay && !alsoWriteSequenceJson)
            return;

        var slides = CollectSlides();
        if (slides.Count == 0)
        {
            Debug.LogWarning("[TutorialSlideTextExporter] No slides collected — is this on TutorialManager with child cards?");
            return;
        }

        if (exportSlideTextOnPlay)
        {
            string slidePath = CombineUnderAssets(slideDumpRelativePath);
            WriteSlideDump(slidePath, slides);
            Debug.Log($"[TutorialSlideTextExporter] Wrote {slides.Count} slides to {slidePath}");
        }

        if (alsoWriteSequenceJson)
        {
            string seqPath = CombineUnderAssets(sequenceRelativePath);
            WriteSequenceJson(seqPath, slides);
            Debug.Log($"[TutorialSlideTextExporter] Wrote sequence to {seqPath}");
        }

        RefreshAssetDatabase();
#endif
    }

#if UNITY_EDITOR
    static string CombineUnderAssets(string relativePath)
    {
        string trimmed = relativePath.TrimStart('/', '\\').Replace('\\', '/');
        return Path.Combine(Application.dataPath, trimmed);
    }

    List<MenuSlideEntry> CollectSlides()
    {
        var list = new List<MenuSlideEntry>();
        int slideIndex = 0;

        foreach (Transform child in transform)
        {
            var card = child as RectTransform;
            if (card == null || !card.gameObject.activeInHierarchy)
                continue;

            TMP_Text title = FindComponentInChildrenByName<TMP_Text>(card, TitleObjectName);
            TMP_Text body = FindComponentInChildrenByName<TMP_Text>(card, BodyObjectName);
            TMP_Text pageNum = FindComponentInChildrenByName<TMP_Text>(card, PageNumObjectName);

            list.Add(new MenuSlideEntry
            {
                slideIndex = slideIndex,
                cardObjectName = card.name,
                titleText = title != null ? title.text : null,
                bodyText = body != null ? body.text : null,
                pageNumText = pageNum != null ? pageNum.text : null
            });
            slideIndex++;
        }

        return list;
    }

    static void WriteSlideDump(string absolutePath, List<MenuSlideEntry> slides)
    {
        Directory.CreateDirectory(Path.GetDirectoryName(absolutePath) ?? ".");

        var file = new MenuSlideDumpFile
        {
            exportedUtc = DateTime.UtcNow.ToString("o"),
            slides = slides.ToArray()
        };

        File.WriteAllText(absolutePath, JsonUtility.ToJson(file, true), Encoding.UTF8);
    }

    void WriteSequenceJson(string absolutePath, List<MenuSlideEntry> slides)
    {
        Directory.CreateDirectory(Path.GetDirectoryName(absolutePath) ?? ".");

        var steps = new List<SequenceStepDto>();

        steps.Add(new SequenceStepDto
        {
            id = "lock_input_export",
            type = "setInputLock",
            locked = true,
            reason = "tutorial_from_menu_export"
        });

        for (int i = 0; i < slides.Count; i++)
        {
            MenuSlideEntry s = slides[i];
            string body = FormatSlideBody(s);
            steps.Add(new SequenceStepDto
            {
                id = $"slide_{i}_dialogue",
                type = "dialogue",
                speaker = dialogueSpeaker,
                text = body,
                waitForContinue = true
            });
        }

        steps.Add(new SequenceStepDto
        {
            id = "unlock_input_export",
            type = "setInputLock",
            locked = false
        });

        var dto = new SequenceFileDto
        {
            schemaVersion = 1,
            sequenceId = sequenceId,
            missionId = missionId,
            description = "Generated from MenuScene tutorial slideshow via TutorialSlideTextExporter.",
            steps = steps
        };

        string json = JsonConvert.SerializeObject(dto, Formatting.Indented);
        File.WriteAllText(absolutePath, json, Encoding.UTF8);

        if (!SequenceParser.TryParse(File.ReadAllText(absolutePath), out _, out string err))
            Debug.LogWarning($"[TutorialSlideTextExporter] Generated sequence did not validate: {err}");
        else
            Debug.Log("[TutorialSlideTextExporter] Generated sequence JSON validates with SequenceParser.");
    }

    static string FormatSlideBody(MenuSlideEntry s)
    {
        var sb = new StringBuilder();
        if (!string.IsNullOrWhiteSpace(s.titleText))
        {
            sb.Append(s.titleText.Trim());
            sb.Append("\n\n");
        }
        if (!string.IsNullOrWhiteSpace(s.bodyText))
            sb.Append(s.bodyText.Trim());
        string result = sb.ToString().Trim();
        return string.IsNullOrEmpty(result) ? "(empty slide)" : result;
    }

    static void RefreshAssetDatabase()
    {
        Type assetDatabase = Type.GetType("UnityEditor.AssetDatabase, UnityEditor");
        assetDatabase?.GetMethod("Refresh", System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Static)
            ?.Invoke(null, null);
    }

    static T FindComponentInChildrenByName<T>(Transform parent, string childName) where T : Component
    {
        foreach (var comp in parent.GetComponentsInChildren<T>(true))
        {
            if (comp.gameObject.name == childName)
                return comp;
        }
        return null;
    }
#endif

    [Serializable]
    class MenuSlideDumpFile
    {
        public string exportedUtc;
        public MenuSlideEntry[] slides;
    }

    [Serializable]
    class MenuSlideEntry
    {
        public int slideIndex;
        public string cardObjectName;
        public string titleText;
        public string bodyText;
        public string pageNumText;
    }
}
