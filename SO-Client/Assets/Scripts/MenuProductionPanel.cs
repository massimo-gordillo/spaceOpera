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
    // Start is called before the first frame update
    void Start()
    {
        attributesBaseUnits = gameValuesSO.getAttributesBaseUnits();
        Debug.Log("size: " + attributesBaseUnits.Count);
        foreach (var kvp in attributesBaseUnits)
        {
            AttributesBaseUnit attributesBaseUnit = kvp.Value;
            MenuProductionButton nextProductionButton = new MenuProductionButton();
            nextProductionButton.buttonText.text = attributesBaseUnit.unitName + "\n" + attributesBaseUnit.price;

            //prefabManager.setSpritesFromSpriteAtlas(attributesBaseUnit.unitName, attributesBaseUnit.spriteAtlasPath, nextProductionButton.spritePrefab);
            prefabManager.setSprites(attributesBaseUnit, nextProductionButton.spritePrefab);





            nextProductionButton.unitPrefab = prefabManager.getPrefab(attributesBaseUnit.prefabPath);
            //I want to set the size of the sprite ahead of time. Maybe I should do this at startup as well??
            // Determine the parent based on unit type
            Transform parent = attributesBaseUnit.unitType == UnitType.Land ? prodListProgeny0Land
                               : attributesBaseUnit.unitType == UnitType.Air ? prodListProgeny0Air
                               : prodListProgeny0Sea;

            // Instantiate the button under the selected parent
            Instantiate(nextProductionButton, Vector2.zero, Quaternion.identity, parent);
        }
    }
    /*void Start()
    {
        // Load attributes from the ScriptableObject
        attributesBaseUnits = gameValuesSO.getAttributesBaseUnits();
        Debug.Log("size: " + attributesBaseUnits.Count);

        // Create and populate buttons based on the count of attributesBaseUnits
        foreach (var kvp in attributesBaseUnits)
        {
            AttributesBaseUnit attributesBaseUnit = kvp.Value;

            // Instantiate a new MenuProductionButton once per unit
            MenuProductionButton nextProductionButton = Instantiate(productionButton);

            // Assign unit data to the button
            nextProductionButton.buttonText.text = attributesBaseUnit.unitName + "\n" + attributesBaseUnit.price;

            // Set up sprites for the button using prefabManager
            prefabManager.setSprites(attributesBaseUnit, nextProductionButton.spritePrefab);

            // Assign the button’s parent based on unit type
            Transform parent = attributesBaseUnit.unitType == UnitType.Land ? prodListProgeny0Land
                           : attributesBaseUnit.unitType == UnitType.Air ? prodListProgeny0Air
                           : prodListProgeny0Sea;

            // Parent the button to the appropriate list container
            nextProductionButton.transform.SetParent(parent, false);
        }
    }*/

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
