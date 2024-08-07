using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MenuProductionButton : MonoBehaviour
{
    public TMP_Text buttonText;
    public StaticSprite spritePrefab;
    public GameObject unitPrefab;
    public GameMaster gameMaster;

    public void Start()
    {
        gameMaster = GameObject.FindGameObjectWithTag("GameMasterTag").GetComponent<GameMaster>();
    }

    public void OnClick()
    {
        GameObject tempInstance = Object.Instantiate(unitPrefab);
        gameMaster.unitProductionButtonPressed(tempInstance.GetComponent<BaseUnit>());
        Object.DestroyImmediate(tempInstance);
    }
}
