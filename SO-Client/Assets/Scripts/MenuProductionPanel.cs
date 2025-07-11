using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.U2D;
using System.Text;
using System.Linq;

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

        var sortedByPrice = attributesBaseUnits.OrderBy(kvp => kvp.Value.price).ToList();

        //attributesBaseUnits = attributesBaseUnits.OrderBy(kvp => kvp.Value.price).ToList();
        // Sort by price

        foreach (var kvp in sortedByPrice)
        {
            if (!kvp.Value.isNotPrototype)
                continue;
            if(kvp.Value.unitName == "Spore")
                continue; //don't add spore to production list  

            AttributesBaseUnit attributesBaseUnit = kvp.Value;

            // Instantiate a new button
            MenuProductionButton newButton = Instantiate(productionButton, Vector2.zero, Quaternion.identity);
            //UnityEngine.Debug.Log($"newButton instance ID: {newButton.GetInstanceID()} for unit: {attributesBaseUnit.unitName}");

            // Clone the spritePrefab for this button
            StaticSprite spritePrefabInstance = newButton.spritePrefabUIVariant;
            //newButton.spritePrefab = spritePrefabInstance;

            // Set the button properties
            newButton.nameText.text = $"{InsertSpacesBeforeCapitals(attributesBaseUnit.unitName)}";
            newButton.priceText.text = $"{attributesBaseUnit.price}";
            prefabManager.setSprites(attributesBaseUnit, spritePrefabInstance);
            newButton.unitPrefab = prefabManager.getPrefabFromPath(attributesBaseUnit.prefabPath);

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
                //if(attributesBaseUnit.unitName != "Spore") //don't add spore to Virix production list
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
        //Debug.Log("presentProdList: " + structNum + "/" + playerProgeny + "/" + playerResources);
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
        //Debug.Log("presentProdList: " + presentedList.gameObject.name + "player resources: " + playerResources);
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
                if(playerResources >= button.GetPrice())
                {
                    uiButton.interactable = true;
                    button.nameText.color = new Color32(255, 183, 0, 255); // Normal color
                    button.priceText.color = new Color32(255, 183, 0, 255); // Normal color                    
                    button.GetComponent<Image>().color = new Color32(255, 183, 0, 255); // Normal color      

                    button.spritePrefabUIVariant.baseColor = GameMaster.playerColors[GameMaster.playerTurn];
                }
                else
                {
                    uiButton.interactable = false;
                    button.nameText.color = new Color32(100, 100, 100, 255);
                    button.priceText.color = new Color32(100, 100, 100, 255);
                    button.GetComponent<Image>().color = new Color32(100, 100, 100, 255);
                    button.spritePrefabUIVariant.baseColor = new Color32(100, 100, 100, 255);
                }
            }
            if(button.GetUnitName() == "Spore")
            {
                uiButton.interactable = false;
            }
        }



    }

    static string InsertSpacesBeforeCapitals(string input)
    {
        if (string.IsNullOrEmpty(input))
            return input;

        StringBuilder sb = new StringBuilder();
        sb.Append(input[0]);

        for (int i = 1; i < input.Length; i++)
        {
            char c = input[i];
            if (char.IsUpper(c))
                sb.Append(' ');

            sb.Append(c);
        }

        return sb.ToString();
    }

}
