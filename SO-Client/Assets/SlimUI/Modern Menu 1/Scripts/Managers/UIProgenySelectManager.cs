using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIProgenySelectManager : MonoBehaviour
{
    public Button player1SelectProgeny0;
    public Button player1SelectProgeny1;
    public Button player1SelectProgeny2;
    public Button player2SelectProgeny0;
    public Button player2SelectProgeny1;
    public Button player2SelectProgeny2;

    public Button startButton;
    public TextMeshPro startButtonText;

/*    static public int player1ProgenySelected = -1;
    static public int player2ProgenySelected = -1;*/
    //public static int[] playerProgenys;
    public Button[,] playerButtons = new Button[2,3];
    public Color baseColor;
    public Color dimColor;

    void Start()
    {
        //I could make this dynamic later, but would need to create a dynamic number of buttons and define them dynamically, possible, but for later.
        int numPlayers = 2;
        //playerProgenys = new int[numPlayers];
        MatchSettings.SetNumPlayers(numPlayers);
        baseColor = player1SelectProgeny0.GetComponent<Image>().color;
        dimColor = baseColor * 0.7f;
        playerButtons[0,0]= player1SelectProgeny0;
        playerButtons[0,1] = player1SelectProgeny1;
        playerButtons[0,2] = player1SelectProgeny2;
        playerButtons[1,0] = player2SelectProgeny0;
        playerButtons[1,1] = player2SelectProgeny1;
        playerButtons[1,2] = player2SelectProgeny2;
        startButton.interactable = false;
        setStartButton(false);
    }

    //has to be single parameter to be used in button click event
    public void ButtonPressedSelectProgeny(int input)
    {
        int player;
        int progeny;
        if (input < 3)
        {
            player = 1;
            progeny = input;
        }else
        {
            player = 2;
            progeny = input - 3;
        }

        setPlayerProgeny(player, progeny);

/*        if (player == 1)
        {
            player1ProgenySelected = progeny;
        }
        else if (player == 2)
        {
            player2ProgenySelected = progeny;
        }*/
        buttonBrightness(player, progeny);
        if (MatchSettings.playerProgenys[0] >= 0 && MatchSettings.playerProgenys[1] >= 0)
        {
            setStartButton(true);           
        }
    }

    public void clearSelection()
    {
        MatchSettings.playerProgenys[0] = -1;
        MatchSettings.playerProgenys[1] = -1;
        for (int i = 0; i < 3; i++)
        {
            brightenButton(playerButtons[0, i]);
            brightenButton(playerButtons[1, i]);
        }
        setStartButton(false);
    }

    public void buttonBrightness(int player, int progeny)
    {
        player -= 1;
        for(int i=0; i < 3;  i++)
        {
            if (i!=progeny)
            {
                dimButton(playerButtons[player,i]);
            }else
            {
                brightenButton(playerButtons[player, i]);
            }
        }
    }

    public void setStartButton(bool b)
    {
        if (b)
        {
            startButton.interactable = true;
            startButtonText.text = "Start >>";
        }
        else
        {
            startButton.interactable = false;
            startButtonText.text = "Select...";
        }
    }

    public void dimButton(Button button)
    {
        //Debug.Log("Dimming button from " + button.image.color + " to " + dimColor);
        button.image.color = dimColor;
    }

    public void brightenButton(Button button)
    {
        button.image.color = baseColor;
    }

    public void setPlayerProgeny(int player, int progeny)
    {
        player -= 1;
        //playerProgenys[player] = progeny;
        MatchSettings.playerProgenys[player] = progeny;
    }
}
