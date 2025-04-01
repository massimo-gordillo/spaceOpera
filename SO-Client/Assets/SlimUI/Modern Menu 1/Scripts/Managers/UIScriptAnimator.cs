using SlimUI.ModernMenu;
using System.Collections;
using TMPro;
using UnityEngine;

public class UIScriptAnimator : MonoBehaviour
{
    public TextMeshPro textDisplay; // Assign in Inspector
    public float typingSpeed = 0.25f; // Delay between characters
    public float pauseSpeed = 0.5f; // Delay between characters
    public float caretBlinkSpeed = 0.1f; // Speed of caret blinking
    private string fullText;
    private string currentText = "";
    private bool isTypingComplete = false;
    public UIMenuManager manager;

    void Start()
    {
        SetStartText();
        StartCoroutine(TypeText());
    }

    public void SetStartText()
    {
        fullText = "In the year 801 GE, human conquest continues its expansion into space.\n\n" +
            "After a decade of work, a scientific survey of a new space sector comes to an end." +
            " Given its high density of BISMUTH-209, The East Galactic Mining Company " +
            "has bid and won executive control over the frontier sector.\n\n" +
            "No great conquest is without risk; in the unknown, dangers are wholly alien.";
    }

    IEnumerator TypeText()
    {
        yield return new WaitForSeconds(pauseSpeed);
        for (int i = 0; i < fullText.Length; i++)
        {
            currentText += fullText[i];
            textDisplay.text = currentText + "|"; // Show caret
            if (fullText[i] == '.')
                yield return new WaitForSeconds(pauseSpeed);
            if (fullText[i] == ',')
                yield return new WaitForSeconds(pauseSpeed/4);
            if (fullText[i] == ';')
                yield return new WaitForSeconds(pauseSpeed);
            if (fullText[i] != '\n')
                yield return new WaitForSeconds(typingSpeed);
        }
        //yield return new WaitForSeconds(pauseSpeed);
        //set camera position to menu

        manager.Position1();
        string endText = "..";
        for (int i = 0; i < endText.Length; i++)
        {
            currentText += endText[i];
            textDisplay.text = currentText + "|"; // Show caret
            if (endText[i] == '.')
                yield return new WaitForSeconds(pauseSpeed);
/*            if (endText[i] == ',')
                yield return new WaitForSeconds(pauseSpeed / 4);
            if (endText[i] == ';')
                yield return new WaitForSeconds(pauseSpeed);
            if (endText[i] != '\n')
                yield return new WaitForSeconds(typingSpeed);*/
        }


        StartCoroutine(BlinkCaret());
        isTypingComplete = true;


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
