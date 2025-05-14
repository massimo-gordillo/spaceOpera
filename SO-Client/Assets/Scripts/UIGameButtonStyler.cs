using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UIGameButtonStyler : MonoBehaviour
{
    public UIGameStyleSO styleSettings;

    void Awake()
    {
        if (styleSettings == null)
        {
            Debug.LogWarning("UIStyleSettings not assigned to UIButtonStyler.");
            return;
        }

        // Find all UI Image components in the scene (including inactive ones)
        Image[] images = FindObjectsOfType<Image>(includeInactive: true);
        foreach (Image image in images)
        {
            ApplyStyle(image);
        }
    }

    void ApplyStyle(Image image)
    {
        // Style the TextMeshProUGUI child (if any)
        TextMeshProUGUI tmpText = image.GetComponentInChildren<TextMeshProUGUI>();
        if (tmpText != null)
        {
            tmpText.font = styleSettings.tmpFontAsset;
            tmpText.fontStyle = FontStyles.Bold;
            tmpText.enableAutoSizing = true;
            tmpText.fontSizeMin = 10f;
            tmpText.fontSizeMax = 36f;
            tmpText.color = new Color32(255, 183, 0, 255);
            tmpText.alignment = TextAlignmentOptions.Center;
        }

        // Apply background color
        image.color = styleSettings.buttonColors;

        // Load and apply button sprite
        Sprite buttonSprite = Resources.Load<Sprite>("Sprites/ButtonSprite120");

        if (buttonSprite != null)
        {
            image.sprite = buttonSprite;
            image.type = Image.Type.Sliced; // Use Sliced for 9-slicing support
        }
        else
        {
            Debug.LogWarning("Could not load sprite at Resources/Sprites/ButtonSprite120.png");
        }
    }
}
