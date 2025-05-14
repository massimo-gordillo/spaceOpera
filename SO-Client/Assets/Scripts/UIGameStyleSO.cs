using UnityEngine;
using UnityEngine.UI;
using TMPro;

[CreateAssetMenu(fileName = "UIStyleSettings", menuName = "UI/UI Style Settings")]
public class UIGameStyleSO : ScriptableObject
{
    public TMP_FontAsset tmpFontAsset;
    public Color textColor = new Color(255, 183, 0, 255);
    public Color buttonColors = Color.white;

    // Optional min/max size for TextMeshPro auto-sizing
    public float fontSizeMin = 10f;
    public float fontSizeMax = 36f;


}
