using SlimUI.ModernMenu;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

[System.Serializable]
public class TutorialCardUI
{
    public RectTransform card;
    public Button nextButton;
    public Button backButton;
    public Button menuButton;
}

public class TutorialManager : MonoBehaviour
{
    [Header("References")]
    public ScrollRect scrollRect;
    public UIMenuManager menuManager;
    public float scrollSpeed = 5f;
    public float scrollDelay = 0.02f;

    private List<TutorialCardUI> tutorialCards = new List<TutorialCardUI>();
    private int currentIndex = 0;
    private bool isScrolling = false;

    public CanvasGroup canvasGroup; // Assign in inspector or via script
    public float fadeDuration = 0.5f; // Fade speed

    void Start()
    {
        foreach (Transform child in scrollRect.content)
        {
            RectTransform card = child.GetComponent<RectTransform>();

            /*            Button nextButton = card.Find("NextButton")?.GetComponent<Button>();
                        Button backButton = card.Find("BackButton")?.GetComponent<Button>();
                        Button menuButton = card.Find("MenuButton")?.GetComponent<Button>();*/

            Button nextButton = FindComponentInChildrenByName<Button>(card, "NextButton");
            Button backButton = FindComponentInChildrenByName<Button>(card, "BackButton");
            Button menuButton = FindComponentInChildrenByName<Button>(card, "MenuButton");

            Debug.Log($"Card '{card.name}': NextButton={(nextButton != null ? "Found" : "Missing")}, BackButton={(backButton != null ? "Found" : "Missing")}, MenuButton={(menuButton != null ? "Found" : "Missing")}");


            var cardUI = new TutorialCardUI
            {
                card = card,
                nextButton = nextButton,
                backButton = backButton,
                menuButton = menuButton
            };

            // Hook up buttons
            /*            if (nextButton != null) nextButton.onClick.AddListener(() => Translate(1));
                        if (backButton != null) backButton.onClick.AddListener(() => Translate(-1));
                        if (menuButton != null) menuButton.onClick.AddListener(BackToMenu);*/



            /*RectTransform capturedCard = card; // capture for closure

            if (nextButton != null)
            {
                nextButton.onClick.AddListener(() =>
                {
                    Debug.Log($"Next button clicked on card '{capturedCard.name}' (currentIndex = {currentIndex})");
                    Translate(1);
                });
            }else
            {
                Debug.LogWarning($"Next button is null on card '{capturedCard.name}' (currentIndex = {currentIndex})");
            }

            if (backButton != null)
            {
                backButton.onClick.AddListener(() =>
                {
                    Debug.Log($"Back button clicked on card '{capturedCard.name}' (currentIndex = {currentIndex})");
                    Translate(-1);
                });
            }

            if (menuButton != null)
            {
                menuButton.onClick.AddListener(() =>
                {
                    Debug.Log($"Menu button clicked on card '{capturedCard.name}'");
                    BackToMenu();
                });
            }*/

            if (nextButton != null)
            {
                nextButton.onClick.AddListener(() => Translate(1));
                nextButton.onClick.AddListener(() => Debug.Log("Test click for NextButton"));

                //Debug.Log($"[Setup] Added listener to NextButton on card '{card.name}'. Persistent listeners in Inspector: {nextButton.onClick.GetPersistentEventCount()}");
            }
            else
            {
                Debug.LogWarning($"[Setup] NextButton not found on card '{card.name}'");
            }

            if (backButton != null)
            {
                backButton.onClick.AddListener(() => Translate(-1));
                //Debug.Log($"[Setup] Added listener to BackButton on card '{card.name}'. Persistent listeners in Inspector: {backButton.onClick.GetPersistentEventCount()}");
            }
            else
            {
                Debug.LogWarning($"[Setup] BackButton not found on card '{card.name}'");
            }

            if (menuButton != null)
            {
                menuButton.onClick.AddListener(BackToMenu);
                //Debug.Log($"[Setup] Added listener to MenuButton on card '{card.name}'. Persistent listeners in Inspector: {menuButton.onClick.GetPersistentEventCount()}");
            }
            else
            {
                Debug.LogWarning($"[Setup] MenuButton not found on card '{card.name}'");
            }


/*            TMP_Text label = card.GetComponentInChildren<TMP_Text>();
            if (label != null)
            {
                label.text = $"Card {tutorialCards.Count}";
                Debug.Log($"[Test] Set text on card '{card.name}' to: 'Card {tutorialCards.Count}'");
            }
            else
            {
                Debug.LogWarning($"[Test] No TMP_Text found in children of card '{card.name}'");
            }*/


            tutorialCards.Add(cardUI);
        }

        scrollRect.verticalNormalizedPosition = 1f;
        UpdateButtonInteractivity();
    }

    private T FindComponentInChildrenByName<T>(Transform parent, string childName) where T : Component
    {
        foreach (var comp in parent.GetComponentsInChildren<T>(true))
        {
            if (comp.gameObject.name == childName)
            {
                //Debug.Log($"Found {typeof(T).Name} named '{childName}' under '{parent.name}'");
                return comp;
            }
        }
        Debug.LogWarning($"Could NOT find {typeof(T).Name} named '{childName}' under '{parent.name}'");
        return null;
    }



    public void Translate(int direction)
    {
        Debug.Log($"Translate called with direction: {direction} (currentIndex = {currentIndex})");
        if (isScrolling) return;

        int targetIndex = currentIndex + direction;
        if (targetIndex < 0 || targetIndex >= tutorialCards.Count) return;

        StartCoroutine(SmoothScrollToIndex(targetIndex));
    }

    void TranslateFromIndex(int fromIndex, int direction)
    {
        Debug.Log($"Translating from index {fromIndex} by {direction}");
        if (fromIndex != currentIndex) return;
        Translate(direction);
    }


    private IEnumerator SmoothScrollToIndex(int targetIndex)
    {
        Debug.Log($"[Scroll] Starting scroll from index {currentIndex} to {targetIndex}");
        Debug.Log($"Content height: {scrollRect.content.rect.height}, Viewport height: {scrollRect.viewport.rect.height}");

        isScrolling = true;
        DisableAllButtons();

        float start = scrollRect.verticalNormalizedPosition;
        float end = (1f - (targetIndex / (float)(tutorialCards.Count - 1)));
        Debug.Log($"[Scroll] Start pos: {start}, Target pos: {end}");

        float t = 0;

        while (t < 1f)
        {
            t += Time.deltaTime * scrollSpeed;
            float lerped = Mathf.Lerp(start, end, t);
            scrollRect.verticalNormalizedPosition = lerped;
            //Debug.Log($"[Scroll] t: {t:F2}, lerped: {lerped:F2}");
            yield return new WaitForSeconds(scrollDelay);
        }
        //Debug.Log($"[Scroll] Lerp finished. t: {t:F2}");

        scrollRect.verticalNormalizedPosition = end;
        currentIndex = targetIndex;

        Debug.Log($"[Scroll] Finished. Current index: {currentIndex}, final position: {scrollRect.verticalNormalizedPosition}");

        isScrolling = false;
        UpdateButtonInteractivity();
    }


    private void UpdateButtonInteractivity()
    {
        for (int i = 0; i < tutorialCards.Count; i++)
        {
            bool isCurrent = i == currentIndex;

            if (tutorialCards[i].nextButton != null)
                tutorialCards[i].nextButton.interactable = isCurrent;

            if (tutorialCards[i].backButton != null)
                tutorialCards[i].backButton.interactable = isCurrent;

            if (tutorialCards[i].menuButton != null)
                tutorialCards[i].menuButton.interactable = isCurrent;
        }

/*        if (tutorialCards[i].backButton != null)
            tutorialCards[i].backButton.interactable = isCurrent && currentIndex > 0;

        if (tutorialCards[i].nextButton != null)
            tutorialCards[i].nextButton.interactable = isCurrent && currentIndex < tutorialCards.Count - 1;*/

    }

    private void DisableAllButtons()
    {
        foreach (var card in tutorialCards)
        {
            if (card.nextButton != null) card.nextButton.interactable = false;
            if (card.backButton != null) card.backButton.interactable = false;
            if (card.menuButton != null) card.menuButton.interactable = false;
        }
    }

    public void BackToMenu()
    {
        if (menuManager != null)
        {
            FadeIn(false); // Fade to black
            menuManager.Position1();
        }
    }

    public void FadeIn(bool fade)
    {
        if (canvasGroup == null) return;

        StopAllCoroutines(); // stop any existing fade
        if (fade)
            StartCoroutine(FadeCanvasGroup(1f)); // fade to opaque (black)
        else
            StartCoroutine(FadeCanvasGroup(0f)); // fade to transparent
    }

    private IEnumerator FadeCanvasGroup(float targetAlpha)
    {
        float startAlpha = canvasGroup.alpha;
        float time = 0f;

        while (time < fadeDuration)
        {
            time += Time.deltaTime;
            canvasGroup.alpha = Mathf.Lerp(startAlpha, targetAlpha, time / fadeDuration);
            yield return null;
        }

        canvasGroup.alpha = targetAlpha;
    }

}
