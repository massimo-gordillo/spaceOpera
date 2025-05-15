using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections.Generic;

public class UIGameButtonStyler : MonoBehaviour
{
    //public UIGameStyleSO styleSettings;
    public List<GameObject> styleRoots;
    public TMP_FontAsset tmpFontAsset;

    /*void Awake()
    {
        *//*        if (styleSettings == null)
                {
                    Debug.LogWarning("UIStyleSettings not assigned to UIGameButtonStyler.");
                    return;
                }*//*


        foreach (GameObject root in styleRoots)
        {
            Image[] images = root.GetComponentsInChildren<Image>(includeInactive: true);
            foreach (Image img in images)
                ApplyImageStyle(img);

            TextMeshProUGUI[] texts = root.GetComponentsInChildren<TextMeshProUGUI>(includeInactive: true);
            foreach (TextMeshProUGUI txt in texts)
            {
                ApplyTextStyle(txt);
            }

        }

        void ApplyImageStyle(Image image)
        {
            image.color = Color.white;

            Sprite buttonSprite = Resources.Load<Sprite>("Sprites/ButtonSprite120");
            if (buttonSprite != null)
            {
                image.sprite = buttonSprite;
                image.type = Image.Type.Sliced;
            }
            else
            {
                Debug.LogWarning("Could not load sprite at Resources/Sprites/ButtonSprite120.png");
            }
        }

        void ApplyTextStyle(TextMeshProUGUI tmpText)
        //void ApplyTextStyle(TextMeshProUGUI tmpText, bool isInteractable)
        {

            Button parentButton = GetComponentInParent<Button>();
            bool isInteractable = parentButton == null || parentButton.interactable;


            tmpText.font = tmpFontAsset;
            tmpText.fontStyle = FontStyles.Bold;
            tmpText.enableAutoSizing = true;
            tmpText.fontSizeMin = 10f;
            tmpText.fontSizeMax = 36f;
            tmpText.characterSpacing = -4f;
            tmpText.alignment = TextAlignmentOptions.Center;

            tmpText.color = isInteractable
                ? new Color32(255, 183, 0, 255)   // Normal color
                : new Color32(100, 100, 100, 255); // Muted/dark color
        }
    }*/

    private void Awake()
    {
        foreach (GameObject root in styleRoots)
        {
            Image[] images = root.GetComponentsInChildren<Image>(includeInactive: true);
            foreach (Image image in images)
            {
                // Apply background color
                image.color = new Color32(255, 183, 0, 255);
                // Style the TextMeshProUGUI child (if any)
                TextMeshProUGUI[] tmpTexts = image.GetComponentsInChildren<TextMeshProUGUI>();
                if (tmpTexts != null)
                    foreach(TextMeshProUGUI tmpText in tmpTexts)
                    {
                        tmpText.font = tmpFontAsset;
                        tmpText.fontStyle = FontStyles.Bold;
                        tmpText.enableAutoSizing = true;
                        tmpText.fontSizeMin = 10f;
                        tmpText.fontSizeMax = 36f;
                        tmpText.characterSpacing = -4f;
                        tmpText.alignment = TextAlignmentOptions.Center;

                        // Check if the parent button is interactable
                        Button parentButton = image.GetComponent<Button>();
                        if (parentButton != null && !parentButton.interactable)
                        {
                            tmpText.color = new Color32(100, 100, 100, 255); // Muted gray
                            image.color = new Color32(100, 100, 100, 255); // Muted gray for the image as well
                        }
                        else
                        {
                            tmpText.color = new Color32(255, 183, 0, 255); // Normal color
                        }
                    }

                

                // Load and apply button sprite
                Sprite buttonSprite = Resources.Load<Sprite>("Sprites/ButtonSprite120White");
                if (buttonSprite != null)
                {
                    image.sprite = buttonSprite;
                    image.type = Image.Type.Sliced;
                }
                else
                {
                    Debug.LogWarning("Could not load sprite at Resources/Sprites/ButtonSprite120.png");
                }
            }
        }
    }

}
