using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuProductionPanel : MonoBehaviour
{
    public GameValuesSO gameValuesSO;
    public MenuProductionButton productionButton;
    public Transform prodListProgeny0Land;
    public Transform prodListProgeny0Air;
    public Transform prodListProgeny0Sea;
    public PrefabManager prefabManager = new PrefabManager();
    private List<AttributesBaseUnit> attributesBaseUnits;
    // Start is called before the first frame update
    void Start()
    {
        attributesBaseUnits = gameValuesSO.getAttributesBaseUnits();
        Debug.Log("size: " + attributesBaseUnits.Count);
        foreach (AttributesBaseUnit attributesBaseUnit in attributesBaseUnits)
        {
            MenuProductionButton nextProductionButton = productionButton;
            nextProductionButton.buttonText.text = attributesBaseUnit.unitName + "\n"+attributesBaseUnit.price;
            nextProductionButton.sprite.sprite = attributesBaseUnit.sprite;
            nextProductionButton.unitPrefab = prefabManager.getPrefab(attributesBaseUnit.prefabPath);
            //I want to set the size of the sprite ahead of time. Maybe I should do this at startup as well??
            //nextProductionButton.sprite.GetComponent<RectTransform>().sizeDelta = new Vector2(5, 5);
            if (attributesBaseUnit.unitType == UnitType.Land)
                Instantiate(nextProductionButton, new Vector2(0, 0), Quaternion.identity, prodListProgeny0Land);
            else if (attributesBaseUnit.unitType == UnitType.Air)
                Instantiate(nextProductionButton, new Vector2(0, 0), Quaternion.identity, prodListProgeny0Air);
            else if (attributesBaseUnit.unitType == UnitType.Sea)
                Instantiate(nextProductionButton, new Vector2(0, 0), Quaternion.identity, prodListProgeny0Sea);
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
