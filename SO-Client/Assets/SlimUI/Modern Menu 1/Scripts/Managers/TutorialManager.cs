using SlimUI.ModernMenu;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

[System.Serializable]
public class TutorialCardUI
{
    public RectTransform card;
    public Button nextButton;
    public Button backButton;
    public Button menuButton;
    public TMP_Text pageNum;
    public VideoPlayer videoPlayer;
}

public class TutorialManager : MonoBehaviour
{
    [Header("References")]
    public UIMenuManager menuManager;
    public float menuScale = 0.02f; // Scale factor for the menu
    public Vector3 tutorialStartPosition;
    public float tutorialSpacing = 200f;
    public float tutorialPanDuration;
    //public float scrollDelay = 0.02f;

    private List<TutorialCardUI> tutorialCards = new List<TutorialCardUI>();
    private int currentIndex = 0;
    private bool isScrolling = false;

    public CanvasGroup canvasGroup; // Assign in inspector or via script
    public float fadeDuration = 0.5f; // Fade speed

    void Start()
    {
        tutorialStartPosition = transform.position; // Store initial position
        FadeIn(false);
        foreach (Transform child in transform)
        {
            RectTransform card = child as RectTransform;
            if (card == null || !card.gameObject.activeInHierarchy) continue;

            Button nextButton = FindComponentInChildrenByName<Button>(card, "NextButton");
            Button backButton = FindComponentInChildrenByName<Button>(card, "BackButton");
            Button menuButton = FindComponentInChildrenByName<Button>(card, "MenuButton");
            TMP_Text pageNum = FindComponentInChildrenByName<TMP_Text>(card, "PageNum");
            VideoPlayer videoPlayer = card.GetComponentInChildren<VideoPlayer>(true);

            if (videoPlayer != null)
            {
                
                videoPlayer.Pause();
                videoPlayer.frame = 1; // Reset video to start
            }

            

            //Debug.Log($"Card '{card.name}': NextButton={(nextButton != null ? "Found" : "Missing")}, BackButton={(backButton != null ? "Found" : "Missing")}, MenuButton={(menuButton != null ? "Found" : "Missing")}");

            var cardUI = new TutorialCardUI
            {
                card = card,
                nextButton = nextButton,
                backButton = backButton,
                menuButton = menuButton,
                pageNum = pageNum,
                videoPlayer = videoPlayer
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
                //nextButton.onClick.AddListener(() => Debug.Log("Test click for NextButton"));

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
        int i = 0;
        foreach(TutorialCardUI card in tutorialCards)
        {
            i++;
            if (card.pageNum != null)
            {
                card.pageNum.text = $"{i} / {tutorialCards.Count}";
                //Debug.Log($"Set page number for card '{i.card.name}' to: {i.pageNum.text}");
            }
            else
            {
                Debug.LogWarning($"No TMP_Text found for page number in card '{i}'");
            }
        }

        //scrollRect.verticalNormalizedPosition = 1f;

        UpdateButtonInteractivity();
        DisableOutsideButtons();
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
        //Debug.Log($"Translate called with direction: {direction} (currentIndex = {currentIndex})");
        if (isScrolling) return;

        int targetIndex = currentIndex + direction;
        if (targetIndex < 0 || targetIndex >= tutorialCards.Count) return;

        StartCoroutine(SmoothScrollToIndex(targetIndex));
    }

    void TranslateFromIndex(int fromIndex, int direction)
    {
        //Debug.Log($"Translating from index {fromIndex} by {direction}");
        if (fromIndex != currentIndex) return;
        Translate(direction);
    }

    private IEnumerator SmoothScrollToIndex(int targetIndex)
    {
        if (tutorialCards[currentIndex].videoPlayer != null)
        {
            Debug.Log($"Stopping video player on card {currentIndex} before scrolling.");
            tutorialCards[currentIndex].videoPlayer.frame = 0; // Reset video to start
            tutorialCards[currentIndex].videoPlayer.Pause();
            
        }
/*        if (targetIndex == 0)
        {
            Debug.Log("SmoothScrollToIndex: Target index is 0, returning to menu.");
        }*/
        RectTransform managerRect = GetComponent<RectTransform>();
        float cardHeight = tutorialCards[0].card.rect.height; // Assumes all cards are the same height

        // Calculate the target anchoredPosition.y (move up for higher indices)
        //float targetY = 28f*targetIndex + tutorialStartPosition.y;
        float targetY = (cardHeight + tutorialSpacing) * targetIndex * menuScale + tutorialStartPosition.y;

        float startY = managerRect.anchoredPosition.y;// + tutorialStartPosition.y;
        float t = 0f;
        isScrolling = true;
        DisableAllButtons();

  /*      if(targetIndex == 0)
        {
            // If we're scrolling to the first card, reset the position to the start
            targetY = tutorialStartPosition.y;
            startY = managerRect.anchoredPosition.y; // Keep the current position
        }
        Debug.Log($"[Scroll] startY: {startY}, targetY: {targetY}, tutorialStartPosition.y: {tutorialStartPosition.y}");
*/

        while (t < 1f)
        {
            t += Time.deltaTime / tutorialPanDuration;
            float newY = Mathf.Lerp(startY, targetY, Mathf.Clamp01(t));
            managerRect.anchoredPosition = new Vector2(managerRect.anchoredPosition.x, newY);
            yield return null;
        }

        managerRect.anchoredPosition = new Vector2(managerRect.anchoredPosition.x, targetY);
        currentIndex = targetIndex;
        isScrolling = false;
        UpdateButtonInteractivity();

        if(tutorialCards[currentIndex].videoPlayer != null)
        {
            Debug.Log($"[Scroll] Restarting video player on card {currentIndex} after scrolling.");
            tutorialCards[currentIndex].videoPlayer.Prepare();
            tutorialCards[currentIndex].videoPlayer.frame = 0;
            yield return new WaitForSeconds(tutorialPanDuration);
            //tutorialCards[currentIndex].videoPlayer.Stop();
            tutorialCards[currentIndex].videoPlayer.Play();
        }

        //Debug.Log($"[Scroll] Scrolled to index {currentIndex} (targetIndex = {targetIndex})");
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

    public void DisableOutsideButtons()
    {
        tutorialCards[0].backButton.onClick.RemoveAllListeners(); // Remove any existing listeners
        tutorialCards[0].backButton.onClick.AddListener(BackToMenu);
        tutorialCards[0].backButton.GetComponentInChildren<TMP_Text>().text = "<< Back"; // Change text to "Back to Menu"
        //tutorialCards[0].backButton.gameObject.SetActive(false); // Disable back button on first card
        
        //tutorialCards[tutorialCards.Count - 1].nextButton.gameObject.SetActive(false); // Disable next button on last card
        tutorialCards[tutorialCards.Count - 1].nextButton.onClick.RemoveAllListeners(); // Remove any existing listeners
        tutorialCards[tutorialCards.Count - 1].nextButton.onClick.AddListener(() => Debug.Log("NextButton clicked!"));

        tutorialCards[tutorialCards.Count - 1].nextButton.onClick.AddListener(menuManager.Position3);
        //tutorialCards[tutorialCards.Count - 1].nextButton.onClick.AddListener(() => FadeIn(false));
        tutorialCards[tutorialCards.Count - 1].nextButton.onClick.AddListener(() => StartCoroutine(AnimateBackToMenu()));

        //tutorialCards[tutorialCards.Count - 1].nextButton.onClick.AddListener(() => BackToMenu());
        tutorialCards[tutorialCards.Count - 1].nextButton.GetComponentInChildren<TMP_Text>().text = "Play!";
        tutorialCards[tutorialCards.Count - 1].nextButton.GetComponent<RectTransform>().sizeDelta = new Vector2(600f, 130f); // Adjust size for "Play!" button

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
            
            menuManager.Position1();
        }
        StartCoroutine(AnimateBackToMenu());
    }

    public IEnumerator AnimateBackToMenu()
    {
        //Debug.Log("Animating back to menu...");
        FadeIn(false); // Fade to black
        int diff = 1;
        if (currentIndex < diff)
            diff = currentIndex;
        yield return StartCoroutine(SmoothScrollToIndex(currentIndex - diff));
        currentIndex = 0;
        //Debug.Log($"[AnimateBackToMenu] Set current Index to {currentIndex}");
        yield return StartCoroutine(SmoothScrollToIndex(currentIndex));
    }

    public void FadeIn(bool fade)
    {
        if (canvasGroup == null) return;

        //StopAllCoroutines(); // stop any existing fade
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
            //manual work around for TMP_Text alpha as they're not TMP_Text UI elements
            foreach (TutorialCardUI card in tutorialCards)
            {
                foreach (TMP_Text text in card.card.GetComponentsInChildren<TMP_Text>())
                {
                    text.alpha = Mathf.Lerp(startAlpha, targetAlpha, time / fadeDuration);
                }
            }

            time += Time.deltaTime;
            canvasGroup.alpha = Mathf.Lerp(startAlpha, targetAlpha, time / fadeDuration);
            yield return null;
        }

        canvasGroup.alpha = targetAlpha;

        foreach (TutorialCardUI card in tutorialCards)
        {
            foreach (TMP_Text text in card.card.GetComponentsInChildren<TMP_Text>())
            {
                text.alpha = targetAlpha;
            }
        }

    }
}
