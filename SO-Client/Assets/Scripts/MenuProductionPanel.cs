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
            MenuProductionButton nextProductionButton = productionButton;
            nextProductionButton.buttonText.text = attributesBaseUnit.unitName + "\n"+attributesBaseUnit.price;

            setSpritesFromSpriteAtlas(attributesBaseUnit.unitName, attributesBaseUnit.spriteAtlasPath, nextProductionButton.spritePrefab);
            

            

            
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

    //MG 24-08-07: NOTE! This is a duplicate function from BaseUnit! Terrible practice. Presumably you want to put this in Prefab Manager and pass the object you're modifying
    public void setSpritesFromSpriteAtlas(string unitName, string atlasPath, StaticSprite spritePrefab)
    {
        SpriteAtlas spriteAtlas = Resources.Load<SpriteAtlas>(atlasPath);
        string name = unitName.ToLower().Replace(" ", "");
        if (spriteAtlas != null)
        {
            // Assign sprites from the atlas to the SpriteRenderers
            spritePrefab.fillSR.sprite = spriteAtlas.GetSprite($"{name}Sprite_Fill");
            spritePrefab.trimSR.sprite = spriteAtlas.GetSprite($"{name}Sprite_Trim");
            spritePrefab.lightsSR.sprite = spriteAtlas.GetSprite($"{name}Sprite_Lights");
        }
        else
        {
            Debug.LogWarning($"For menuproduction panel: Failed to load spriteAtlas for {unitName} at path: {atlasPath}");
        }

         
    }
}
