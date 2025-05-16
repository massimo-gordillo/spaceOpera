using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MenuProductionButton : MonoBehaviour
{
    public TMP_Text nameText;
    public TMP_Text priceText;
    //public StaticSprite spritePrefab;
    public GameObject unitPrefab;
    public StaticSprite spritePrefabUIVariant;
    public GameMaster gameMaster;

    public void Start()
    {
        //spritePrefabUIVariant = new StaticSprite();
        gameMaster = GameObject.FindGameObjectWithTag("GameMasterTag").GetComponent<GameMaster>();
    }

    public void OnClick()
    {
        GameObject tempInstance = Object.Instantiate(unitPrefab);
        gameMaster.unitProductionButtonPressed(tempInstance.GetComponent<BaseUnit>());
        Object.DestroyImmediate(tempInstance);
    }

    public int GetPrice()
    {
        return unitPrefab.GetComponent<BaseUnit>().price;
    }

    public string GetUnitName()
    {
        return unitPrefab.GetComponent<BaseUnit>().unitName;
    }
}
