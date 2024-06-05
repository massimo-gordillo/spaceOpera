using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MenuProductionButton : MonoBehaviour
{
    public TMP_Text buttonText;
    public SpriteRenderer sprite;
    public GameObject unitPrefab;
    public GameMaster gameMaster;

    public void Start()
    {
        gameMaster = GameObject.FindGameObjectWithTag("GameMasterTag").GetComponent<GameMaster>();

    }

    public void OnClick()
    {
        print("I've been clicked!");
        GameObject tempInstance = Object.Instantiate(unitPrefab);
        gameMaster.unitProductionButtonPressed(tempInstance.GetComponent<BaseUnit>());
    }
}
