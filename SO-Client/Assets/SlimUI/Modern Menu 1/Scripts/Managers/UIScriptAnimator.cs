using SlimUI.ModernMenu;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UIElements;

public class UIScriptAnimator : MonoBehaviour
{
    public GameObject textContainer;
    public TextMeshPro textDisplay; 
    public float typingSpeed = 0.04f;
    public float pauseSpeed = 0.6f;
    public float caretBlinkSpeed = 0.3f; 
    public float waitTimeDelayRate = 0.4f;
    public float panDurationMulitplier = 1.2f;
    private string fullText;
    private string currentText = "";
    private bool isTypingComplete = false;
    public UIMenuManager manager;
    public SpriteRenderer logoSprite;
    Vector3 textContainerPosition;
    //Vector3 textContainerStartingPosition;
    
    public Vector3 logoStartPosition;
    public Vector3 logoFinalPosition;
    Color logoColor;

    void Start()
    {
        logoColor = logoSprite.color;
        logoSprite.color = new Color(logoColor.r, logoColor.g, logoColor.b, 0);
        logoSprite.transform.position = logoStartPosition;
        textContainerPosition = textContainer.transform.position;
        //logoFinalPosition = logoSprite.transform.position;
        SetStartText();
        StartCoroutine(TypeText());
        StartCoroutine(IntroAnimations());
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
        yield return new WaitForSeconds(pauseSpeed*2);
        for (int i = 0; i < fullText.Length; i++)
        {
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

        //set camera position to menu
        //manager.Position1();
        
        isTypingComplete = true;

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
        //logoSprite.transform.position = textContainerPosition;
        float waitTime = typingSpeed * fullText.Length * waitTimeDelayRate;
        //yield return new WaitForSeconds(1.0f);
        yield return new WaitForSeconds(waitTime);
        float duration = typingSpeed * fullText.Length * panDurationMulitplier; // Time taken to move off-screen
        float scrollElapsedTime = 0f;
        Vector3 targetPosition = textContainerPosition + new Vector3(0, 30, 0);

        while (scrollElapsedTime < duration)
        {
            textContainer.transform.position = Vector3.Lerp(textContainerPosition, targetPosition, scrollElapsedTime / duration);
            scrollElapsedTime += Time.deltaTime;
            yield return null;  // Wait for next frame
        }

        
        float fadeInElapsedTime = 0f;
        float fadeInDuration = 8.0f;


        while (fadeInElapsedTime < fadeInDuration)
        {
            fadeInElapsedTime += Time.deltaTime;
            float alpha = Mathf.Clamp01(fadeInElapsedTime / fadeInDuration);
            logoSprite.color = new Color(logoColor.r, logoColor.g, logoColor.b, alpha);
            yield return null;
        }

        //set camera position to menu
        manager.Position1();

        yield return new WaitForSeconds(2.0f);

        float settleElapsedTime = 0;
        float settleDuration = 6.0f;

        while (settleElapsedTime < settleDuration)
        {
            logoSprite.transform.position = Vector3.Lerp(logoStartPosition, logoFinalPosition, settleElapsedTime / settleDuration);
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
