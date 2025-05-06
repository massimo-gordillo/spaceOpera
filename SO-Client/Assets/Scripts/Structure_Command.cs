using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Structure_Command : BaseStructure
{
    public StaticSprite lowerSpriteContainer;
    public SpriteRenderer lowerSpriteSR;    
    public StaticSprite upperSpriteContainer;
    public SpriteRenderer upperSpriteSR;
    public StaticSprite progeny0LowerSpriteContainer;
    public SpriteRenderer progeny0LowerSpriteSR;
    public StaticSprite progeny0UpperSpriteContainer;
    public SpriteRenderer progeny0UpperSpriteSR;
    public StaticSprite progeny1LowerSpriteContainer;
    public SpriteRenderer progeny1LowerSpriteSR;
    public StaticSprite progeny1UpperSpriteContainer;
    public SpriteRenderer progeny1UpperSpriteSR;
    public StaticSprite progeny2LowerSpriteContainer;
    public SpriteRenderer progeny2LowerSpriteSR;
    public StaticSprite progeny2UpperSpriteContainer;
    public SpriteRenderer progeny2UpperSpriteSR;

    protected override void Start()
    {
        base.Start(); 
        Debug.Log($"[CommandStructure] Start called. pos is {pos} and playerControl is {playerControl}, with progeny {gameMaster.getPlayerProgeny((byte)playerControl)}");
        MasterGrid.commandStructures[playerControl] = this;
        TurnOffCommandSprites();
        if (gameMaster.getPlayerProgeny((byte)playerControl) == 0)
        {
            lowerSpriteContainer = progeny0LowerSpriteContainer;
            upperSpriteContainer = progeny0UpperSpriteContainer;
        }
        else if (gameMaster.getPlayerProgeny((byte)playerControl) == 1)
        {
            lowerSpriteContainer = progeny1LowerSpriteContainer;
            upperSpriteContainer = progeny1UpperSpriteContainer;
        }
        else if (gameMaster.getPlayerProgeny((byte)playerControl) == 2)
        {
            lowerSpriteContainer = progeny2LowerSpriteContainer;
            upperSpriteContainer = progeny2UpperSpriteContainer;
        }
        



        lowerSpriteContainer.gameObject.SetActive(true);
        upperSpriteContainer.gameObject.SetActive(true);

        lowerSpriteContainer.SetColor(playerControl, true, true);
        upperSpriteContainer.SetColor(playerControl, true, true);

    }

    void TurnOffCommandSprites()
    {
        progeny0LowerSpriteContainer.gameObject.SetActive(false);
        //progeny0LowerSpriteSR.gameObject.SetActive(false);
        progeny0UpperSpriteContainer.gameObject.SetActive(false);
        //progeny0UpperSpriteSR.gameObject.SetActive(false);
        progeny1LowerSpriteContainer.gameObject.SetActive(false);
        //progeny1LowerSpriteSR.gameObject.SetActive(false);
        progeny1UpperSpriteContainer.gameObject.SetActive(false);
        //progeny1UpperSpriteSR.gameObject.SetActive(false);
        progeny2LowerSpriteContainer.gameObject.SetActive(false);
        //progeny2LowerSpriteSR.gameObject.SetActive(false);
        progeny2UpperSpriteContainer.gameObject.SetActive(false);
        //progeny2UpperSpriteSR.gameObject.SetActive(false);
    }

}
