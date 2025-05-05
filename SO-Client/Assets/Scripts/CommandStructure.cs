using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CommandStructure : BaseStructure
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
        

        lowerSpriteContainer.SetColor(playerControl, true, true);
        upperSpriteContainer.SetColor(playerControl, true, true);

        lowerSpriteContainer.gameObject.SetActive(true);
        upperSpriteContainer.gameObject.SetActive(true);

    }

    void TurnOffCommandSprites()
    {
        progeny0LowerSpriteContainer.enabled = false;
        //progeny0LowerSpriteSR.enabled = false;
        progeny0UpperSpriteContainer.enabled = false;
        //progeny0UpperSpriteSR.enabled = false;
        progeny1LowerSpriteContainer.enabled = false;
        //progeny1LowerSpriteSR.enabled = false;
        progeny1UpperSpriteContainer.enabled = false;
        //progeny1UpperSpriteSR.enabled = false;
        progeny2LowerSpriteContainer.enabled = false;
        //progeny2LowerSpriteSR.enabled = false;
        progeny2UpperSpriteContainer.enabled = false;
        //progeny2UpperSpriteSR.enabled = false;
    }

}
