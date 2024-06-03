using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuProductionPanel : MonoBehaviour
{
    public GameValuesSO gameValuesSO;
    public GameObject productionButton;
    public Transform productionContent;
    private List<AttributesBaseUnit> attributesBaseUnits;
    // Start is called before the first frame update
    void Start()
    {
        attributesBaseUnits = gameValuesSO.getAttributesBaseUnits();
        foreach (AttributesBaseUnit attributesBaseUnit in attributesBaseUnits)
        {
            GameObject nextProductionButton = productionButton;
            Instantiate(nextProductionButton, new Vector2(0, 0), Quaternion.identity, productionContent);
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
