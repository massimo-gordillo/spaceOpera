using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuProductionPanel : MonoBehaviour
{
    public GameValuesSO gameValuesSO;
    public MenuProductionButton productionButton;
    public Transform productionContent;
    private List<AttributesBaseUnit> attributesBaseUnits;
    // Start is called before the first frame update
    void Start()
    {
        attributesBaseUnits = gameValuesSO.getAttributesBaseUnits();
        foreach (AttributesBaseUnit attributesBaseUnit in attributesBaseUnits)
        {
            MenuProductionButton nextProductionButton = productionButton;
            nextProductionButton.buttonText.text = attributesBaseUnit.unitName + "\n"+attributesBaseUnit.price;
            nextProductionButton.sprite.sprite = attributesBaseUnit.sprite;
            //I want to set the size of the sprite ahead of time. Maybe I should do this at startup as well??
            //nextProductionButton.sprite.GetComponent<RectTransform>().sizeDelta = new Vector2(5, 5);
            Instantiate(nextProductionButton, new Vector2(0, 0), Quaternion.identity, productionContent);
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
