using SlimUI.ModernMenu;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UIElements;

public class UIScriptAnimator : MonoBehaviour
{
    private static bool hasAnimated = false;

    public GameObject textContainer;
    Vector3 textContainerStartPosition;

    public TextMeshPro textDisplay;
    private string fullText;
    private string currentText = "";

    public GameObject skipButton;
    public TextMeshPro skipButtonText;
    float maxSkipButtonOpacity = 0.5f;
    //public Color buttonTextColor;

    public float typingSpeed;
    public float pauseSpeed;
    public float caretBlinkSpeed; 
    public float waitTimeDelayRate;
    public float panDurationMulitplier;


    private bool isAnimationComplete = false;
    public UIMenuManager manager;

    public Canvas menuCanvas;
    Vector3 menuCanvasStartPosition;
    Vector3 menuCanvasEndPosition;

    public SpriteRenderer logoSprite;
    public Vector3 logoStartPosition;
    public Vector3 logoFinalPosition;
    Color logoColor;

    void Start()
    {
        menuCanvasEndPosition = new Vector3(1.2f, 1.5f, 22.1f);
        menuCanvasStartPosition = new Vector3(1.2f, -10.0f, 22.1f);
        menuCanvas.transform.position = menuCanvasStartPosition;
        logoColor = logoSprite.color;
        logoSprite.color = new Color(logoColor.r, logoColor.g, logoColor.b, 0);
        logoSprite.transform.position = logoStartPosition;
        textContainerStartPosition = textContainer.transform.position;
        skipButtonText.color = new Color(skipButtonText.color.r, skipButtonText.color.g, skipButtonText.color.b, 0.25f);
        //logoFinalPosition = logoSprite.transform.position;
        SetStartText();
        if (!hasAnimated && UIMenuManager.isAnimating)
        {
            StartCoroutine(TypeText());
            StartCoroutine(IntroAnimations());
            hasAnimated = true;
        }
        else
            JumpToStart();
    }

    public void JumpToStart()
    {
        //Debug.Log("jumpingToStart");
        isAnimationComplete = true;
        hasAnimated = true;
        StartCoroutine(SettleMainMenu(0.5f));
        StartCoroutine(FadeOutSkipButton(0.1f));
        textContainer.transform.position = new Vector3(0, 40, 20);
        logoSprite.color = logoColor;
        
    }

    public void SetStartText()
    {
        fullText = "In the year 801 GE, human conquest continues its expansion into space.\n\n" +
            "After a decade of work, a scientific survey of a new space sector comes to an end." +
            " Given its high density of BISMUTH-209, The East Galactic Mining Company " +
            "has bid and won executive control over the frontier sector.\n\n" +
            "No great conquest is without risk; in the unknown, dangers are wholly alien. . . ";
    }

    IEnumerator TypeText()
    {
        //Debug.Log("Typing Speed: " + typingSpeed);
        textDisplay.text = "|";
        StartCoroutine(BlinkCaret());
        yield return new WaitForSeconds(pauseSpeed * 2);
        for (int i = 0; i < fullText.Length; i++)
        {
            if (isAnimationComplete)
                break;

            currentText += fullText[i];
            textDisplay.text = currentText + "|"; // Show caret
            if (fullText[i] == '.')
                yield return new WaitForSeconds(pauseSpeed);
            else if (fullText[i] == ',')
                yield return new WaitForSeconds(pauseSpeed / 4);
            else if (fullText[i] == ';')
                yield return new WaitForSeconds(pauseSpeed);
            else if (i < fullText.Length - 1 && fullText[i] == '\n' && fullText[i + 1] != '\n')
                yield return new WaitForSeconds(pauseSpeed);
            else if (i < fullText.Length - 1 && fullText[i] == '\n' && fullText[i + 1] == '\n')
                yield return 0;
            else if (i < fullText.Length - 1 && fullText[i] == ' ' && fullText[i + 1] == '.')
                yield return 0;
            else
            {
                //Debug.Log("waiting... Typing Speed: " + typingSpeed);
                yield return new WaitForSeconds(typingSpeed);
                //yield return new WaitForSeconds(Mathf.Max(typingSpeed, 0.01f));
            }
        }
        

        //set cameraManager position to menu
        //manager.Position1();
        
        //isTypingComplete = true;

/*        Vector2 canvasCenter = new Vector2(Screen.width / 2, Screen.height / 2);
        Debug.Log($"Canvas Center: {canvasCenter}");*/
        

        /*        string endText = "..";
                for (int i = 0; i < endText.Length; i++)
                {
                    currentText += endText[i];
                    textDisplay.text = currentText+ "|"; // Show caret
                    if (endText[i] == '.')
                        yield return new WaitForSeconds(pauseSpeed);
        *//*            if (endText[i] == ',')
                        yield return new WaitForSeconds(pauseSpeed / 4);
                    if (endText[i] == ';')
                        yield return new WaitForSeconds(pauseSpeed);
                    if (endText[i] != '\n')
                        yield return new WaitForSeconds(typingSpeed);*//*
                }*/






    }

    IEnumerator IntroAnimations()
    {

            //logoSprite.transform.position = textContainerStartPosition;
            StartCoroutine(FadeInSkipButton());
            float waitTime = typingSpeed * fullText.Length * waitTimeDelayRate;
            yield return new WaitForSeconds(waitTime);
            float scrollDuration = typingSpeed * fullText.Length * panDurationMulitplier; // Time taken to move off-screen
            float scrollElapsedTime = 0f;
            Vector3 scrollTargetPosition = new Vector3(0, 20, 20);
            float t;
            float modT;

            while (scrollElapsedTime < scrollDuration)
            {
                if (isAnimationComplete)
                    yield break;
                t = scrollElapsedTime / scrollDuration;
                modT = Mathf.Pow(t, 1.25f);
                textContainer.transform.position = Vector3.Lerp(textContainerStartPosition, scrollTargetPosition, modT);
                scrollElapsedTime += Time.deltaTime;
                yield return null;  // Wait for next frame
            }
            textContainer.transform.position = new Vector3(0, 40, 20);

            float fadeInElapsedTime = 0f;
            float fadeInDuration = 4.0f;


            while (fadeInElapsedTime < fadeInDuration)
            {
                if (isAnimationComplete)
                    yield break;
                fadeInElapsedTime += Time.deltaTime;
                float alpha = Mathf.Clamp01(fadeInElapsedTime / fadeInDuration);
                logoSprite.color = new Color(logoColor.r, logoColor.g, logoColor.b, alpha);
                yield return null;
            }

            //set cameraManager position to menu
            manager.Position1();

            yield return new WaitForSeconds(1.5f);
            StartCoroutine(FadeOutSkipButton(1));
            StartCoroutine(SettleMainMenu(2.5f));
    }

    public IEnumerator SettleMainMenu(float settleDuration)
    {
        float settleElapsedTime = 0;
        float t;

        while (settleElapsedTime < settleDuration)
        {
            t = 1 - Mathf.Pow(1 - (settleElapsedTime / settleDuration), 2f);
            logoSprite.transform.position = Vector3.Lerp(logoStartPosition, logoFinalPosition, t);
            menuCanvas.transform.position = Vector3.Lerp(menuCanvasStartPosition, menuCanvasEndPosition, t);
            //logoSprite.transform.position = Vector3.Lerp(logoStartPosition, logoFinalPosition, settleElapsedTime / settleDuration);
            //menuCanvas.transform.position = Vector3.Lerp(menuCanvasStartPosition, menuCanvasEndPosition, settleElapsedTime / settleDuration);
            settleElapsedTime += Time.deltaTime;
            yield return null;  // Wait for next frame
        }
    }

    /*    IEnumerator BlinkCaret()
        {
            textDisplay.text = "|";
            bool displayCarat = true;
            while (true)
            {
                displayCarat = !displayCarat;
                yield return new WaitForSeconds(caretBlinkSpeed);
                //Debug.Log($"CurrentText Length = {currentText.Length}, CurrentText is {currentText}, CurrentText at 0 is {currentText[0]}");
                if (textDisplay.text[textDisplay.text.Length-1] == '|' && !displayCarat)
                    textDisplay.text = currentText.Trim('|');
                else if (textDisplay.text[textDisplay.text.Length-1] != '|')
                    textDisplay.text = textDisplay.text + '|';

                //textDisplay.text = currentText;

                //textDisplay.text = currentText + "|";
                //yield return new WaitForSeconds(caretBlinkSpeed);
            }
        }*/

    IEnumerator FadeInSkipButton()
    {
        if (skipButtonText.color.b != maxSkipButtonOpacity)
        {
            yield return new WaitForSeconds(1.5f);
            float fadeInDuration = 4;
            float duration = 0;
            float startFade = 0.25f;
            while (duration < fadeInDuration)
            {
                if (isAnimationComplete)
                    yield break;
                skipButtonText.color = new Color(skipButtonText.color.r, skipButtonText.color.g, skipButtonText.color.b, startFade + (maxSkipButtonOpacity - startFade) * (duration / fadeInDuration));// * (1 - startFade));
                duration += Time.deltaTime;
                yield return null;
            }
            skipButtonText.color = new Color(skipButtonText.color.r, skipButtonText.color.g, skipButtonText.color.b, maxSkipButtonOpacity);
        }
    }

    IEnumerator FadeOutSkipButton(float fadeOutDuration)
    {
        if(skipButtonText.color.a != 0) { 
            float duration = 0;
            float startFade = maxSkipButtonOpacity;
            while (duration < fadeOutDuration)
            {
                skipButtonText.color = new Color(skipButtonText.color.r, skipButtonText.color.g, skipButtonText.color.b, startFade - (duration / fadeOutDuration));// * (1 - startFade));
                duration += Time.deltaTime;
                yield return null;
            }
            skipButtonText.color = new Color(skipButtonText.color.r, skipButtonText.color.g, skipButtonText.color.b, 0);
        }
        skipButton.SetActive(false);
    }

    IEnumerator BlinkCaret()
    {
        while (true)
        {
            textDisplay.text = currentText;
            yield return new WaitForSeconds(caretBlinkSpeed);
            textDisplay.text = currentText + "|";
            yield return new WaitForSeconds(caretBlinkSpeed);
        }
    }
}
