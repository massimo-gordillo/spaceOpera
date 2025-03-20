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
    //private bool startComplete = false;
    // Start is called before the first frame update
    //chatgpt implementation. Also modified the prefabManager setSprites class.
    public void init()
    {
        /*if(!startComplete)
            Debug.Log("Start() MenuProductionPanel");
        else
            Debug.Log("Start MenuProductionPanel already complete! Ran twice!");
        //spritePrefabTemplate = Resources.Load<StaticSprite>("StaticSpriteTemplate");*/

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
            //Debug.Log($"for unit {attributesBaseUnit.unitName}, type {attributesBaseUnit.unitTerrainType} ");

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
        //startComplete = true;
        //Debug.Log("MenuProductionPanel Start()= " + startComplete);
    }


    public void presentProdList(int structNum, byte playerProgeny, int playerResources)
    {
        Debug.Log("presentProdList: " + structNum + "/" + playerProgeny + "/" + playerResources);
        Transform presentedList = null;
        prodListProgeny0Land.gameObject.SetActive(false);
        prodListProgeny0Air.gameObject.SetActive(false);
        prodListProgeny0Sea.gameObject.SetActive(false);
        prodListProgeny1.gameObject.SetActive(false);
        prodListProgeny2.gameObject.SetActive(false);
        if (playerProgeny == 0)
        {
            if (structNum == 1)
                presentedList = prodListProgeny0Land;
            else if (structNum == 2)
                presentedList = prodListProgeny0Air;
            else if (structNum == 3)
                presentedList = prodListProgeny0Sea;
            else
                Debug.LogError("Production List requested for progeny 0 but Struct not correct type.");
        }
        else if (playerProgeny == 1)
        {
            presentedList = prodListProgeny1;
        }
        else if (playerProgeny == 2)
        {
            presentedList = prodListProgeny2;
        }
        else
        {
            Debug.LogError("Structure error: Progeny not found");
        }

        presentedList.gameObject.SetActive(true);
        Debug.Log("presentProdList: " + presentedList.gameObject.name + "player resources: " + playerResources);
        //Player can't select to produce units they cannot afford
        /*        foreach (MenuProductionButton button in presentedList.GetComponentsInChildren<MenuProductionButton>())
                {
                    if (playerResources >= button.GetPrice())
                        button.GetComponent<Button>().interactable = true;
                    else
                        button.GetComponent<Button>().interactable = false;
                }*/

        MenuProductionButton[] buttons = presentedList.GetComponentsInChildren<MenuProductionButton>();

        if (buttons.Length == 0)
        {
            Debug.LogWarning("No MenuProductionButton instances found in presentedList.");
            return; // Exit the method early if the list is empty
        }

        foreach (MenuProductionButton button in buttons)
        {
            Button uiButton = button.GetComponent<Button>();
            if (uiButton != null)
            {
                uiButton.interactable = playerResources >= button.GetPrice();
            }
        }



    }

}
