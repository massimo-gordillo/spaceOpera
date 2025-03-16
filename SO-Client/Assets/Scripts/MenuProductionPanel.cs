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
    public Transform prodListProgeny1;
    public Transform prodListProgeny2;
    public PrefabManager prefabManager = new PrefabManager();
    private Dictionary<byte, AttributesBaseUnit> attributesBaseUnits;
    public StaticSprite spritePrefabTemplate;
    // Start is called before the first frame update
    //chatgpt implementation. Also modified the prefabManager setSprites class.
    void Start()
    {
        //spritePrefabTemplate = Resources.Load<StaticSprite>("StaticSpriteTemplate");

        attributesBaseUnits = gameValuesSO.getAttributesBaseUnits();

        //throw warning if empty
        if (attributesBaseUnits == null || attributesBaseUnits.Count ==0)
        {
            Debug.LogWarning("gamevaluesSO getAttributesBaseUnit is null");
        }

        foreach (var kvp in attributesBaseUnits)
        {
            if (!kvp.Value.isNotPrototype)
                continue;

            AttributesBaseUnit attributesBaseUnit = kvp.Value;

            // Instantiate a new button
            MenuProductionButton newButton = Instantiate(productionButton, Vector2.zero, Quaternion.identity);
            //UnityEngine.Debug.Log($"newButton instance ID: {newButton.GetInstanceID()} for unit: {attributesBaseUnit.unitName}");

            // Clone the spritePrefab for this button
            StaticSprite spritePrefabInstance = newButton.spritePrefabUIVariant;
            //newButton.spritePrefab = spritePrefabInstance;

            // Set the button properties
            newButton.buttonText.text = $"{attributesBaseUnit.unitName}\n{attributesBaseUnit.price}";
            prefabManager.setSprites(attributesBaseUnit, spritePrefabInstance);
            newButton.unitPrefab = prefabManager.getPrefab(attributesBaseUnit.prefabPath);

            // Set the parent
            Debug.Log($"for unit {attributesBaseUnit.unitName}, type {attributesBaseUnit.unitTerrainType} ");

            Transform parent=null;
            if (attributesBaseUnit.progeny == Progeny.Ertrian)
            {
                parent = attributesBaseUnit.unitTerrainType == UnitTerrainType.Land ? prodListProgeny0Land
                               : attributesBaseUnit.unitTerrainType == UnitTerrainType.Air ? prodListProgeny0Air
                               : prodListProgeny0Sea;
            }
            else if(attributesBaseUnit.progeny == Progeny.Virix)
            {
                parent = prodListProgeny1;
            }
            else if (attributesBaseUnit.progeny == Progeny.Sentus)
            {
                parent = prodListProgeny2;
            }else
            {
                Debug.LogError("Progeny not found");
            }
            newButton.transform.SetParent(parent, false);
        }
    }


    public void presentProdList(int structNum, byte playerProgeny)
    {
        prodListProgeny0Land.gameObject.SetActive(false);
        prodListProgeny0Air.gameObject.SetActive(false);
        prodListProgeny0Sea.gameObject.SetActive(false);
        prodListProgeny1.gameObject.SetActive(false);
        prodListProgeny2.gameObject.SetActive(false);
        if (playerProgeny == 0)
        {

            if (structNum == 1)
                prodListProgeny0Land.gameObject.SetActive(true);
            else if (structNum == 2)
                prodListProgeny0Air.gameObject.SetActive(true);
            else if (structNum == 3)
                prodListProgeny0Sea.gameObject.SetActive(true);
            else
                Debug.LogError("Production List requested but Struct not correct type.");
        }
        else if (playerProgeny == 1)
        {
            prodListProgeny1.gameObject.SetActive(true);
        }
        else if (playerProgeny == 2)
        {
            prodListProgeny2.gameObject.SetActive(true);
        }else
        {
            Debug.LogError("Structure error: Progeny not found");
        }

    }

}
