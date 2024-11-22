using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.U2D;

public class MenuProductionPanel : MonoBehaviour
{
    public GameValuesSO gameValuesSO;
    public MenuProductionButton productionButton;
    public Transform prodListProgeny0Land;
    public Transform prodListProgeny0Air;
    public Transform prodListProgeny0Sea;
    public PrefabManager prefabManager = new PrefabManager();
    private Dictionary<byte, AttributesBaseUnit> attributesBaseUnits;
    public StaticSprite spritePrefabTemplate;
    // Start is called before the first frame update
    //chatgpt implementation. Also modified the prefabManager setSprites class.
    void Start()
    {
        //spritePrefabTemplate = Resources.Load<StaticSprite>("StaticSpriteTemplate");

        attributesBaseUnits = gameValuesSO.getAttributesBaseUnits();

        foreach (var kvp in attributesBaseUnits)
        {
            AttributesBaseUnit attributesBaseUnit = kvp.Value;

            // Instantiate a new button
            MenuProductionButton newButton = Instantiate(productionButton, Vector2.zero, Quaternion.identity);
            UnityEngine.Debug.Log($"newButton instance ID: {newButton.GetInstanceID()} for unit: {attributesBaseUnit.unitName}");

            // Clone the spritePrefab for this button
            StaticSprite spritePrefabInstance = newButton.spritePrefabUIVariant;
            //newButton.spritePrefab = spritePrefabInstance;

            // Set the button properties
            newButton.buttonText.text = $"{attributesBaseUnit.unitName}\n{attributesBaseUnit.price}";
            prefabManager.setSprites(attributesBaseUnit, spritePrefabInstance);
            newButton.unitPrefab = prefabManager.getPrefab(attributesBaseUnit.prefabPath);

            // Set the parent
            Transform parent = attributesBaseUnit.unitType == UnitType.Land ? prodListProgeny0Land
                               : attributesBaseUnit.unitType == UnitType.Air ? prodListProgeny0Air
                               : prodListProgeny0Sea;
            newButton.transform.SetParent(parent, false);
        }
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void presentProdList(int structNum)
    {
        prodListProgeny0Land.gameObject.SetActive(false);
        prodListProgeny0Air.gameObject.SetActive(false);
        prodListProgeny0Sea.gameObject.SetActive(false);
        if (structNum == 1)
            prodListProgeny0Land.gameObject.SetActive(true);
        else if (structNum == 2)
            prodListProgeny0Air.gameObject.SetActive(true);
        else if (structNum == 3)
            prodListProgeny0Sea.gameObject.SetActive(true);
        else
            Debug.LogError("Production List requested but Struct not correct type.");
    }

}
