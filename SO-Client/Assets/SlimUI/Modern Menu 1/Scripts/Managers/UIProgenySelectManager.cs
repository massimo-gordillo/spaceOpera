using System.Collections;
using System.Collections.Generic;
using System.Data;
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
    //I could make this dynamic later, but would need to create a dynamic number of buttons and define them dynamically, possible, but for later.

    public static Color32[] playerColors;
    private static int numPlayers = 2;


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
        //playerProgenys = new int[numPlayers];
        MatchSettings.SetNumPlayers(numPlayers);
        MatchSettings.SetPlayerColours();
        MatchSettings.isInit = true;
        //baseColor = player1SelectProgeny0.GetComponent<Image>().color;
        //dimColor = baseColor * 0.7f;
        playerButtons[0,0]= player1SelectProgeny0;
        playerButtons[0,1] = player1SelectProgeny1;
        playerButtons[0,2] = player1SelectProgeny2;
        playerButtons[1,0] = player2SelectProgeny0;
        playerButtons[1,1] = player2SelectProgeny1;
        playerButtons[1,2] = player2SelectProgeny2;
        startButton.interactable = false;
        setStartButton(false);
        setColors();
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
            brightenButton(playerButtons[0, i], 0);
            brightenButton(playerButtons[1, i], 1);
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
                dimButton(playerButtons[player,i], player);
            }else
            {
                brightenButton(playerButtons[player, i], player);
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

    public void setColors()
    {
        for(int i =0; i<2; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                    playerButtons[i,j].GetComponent<Image>().color = MatchSettings.playerColors[i+1];
                    playerButtons[i, j].GetComponentInChildren<StaticSprite>().fillImage.color = MatchSettings.playerColors[i + 1];
            }
        }
    }

    public void dimButton(Button button, int player)
    {
        //Debug.Log("Dimming button from " + button.image.color + " to " + dimColor);
        button.image.color = (Color)MatchSettings.playerColors[player+1] * 0.7f;
        foreach (Image i in button.GetComponentsInChildren<Image>())
        {
            i.color = (Color)MatchSettings.playerColors[player+1] * 0.7f;
        }
    }

    public void brightenButton(Button button, int player)
    {
        button.image.color = MatchSettings.playerColors[player+1];
        foreach (Image i in button.GetComponentsInChildren<Image>())
        {
            i.color = (Color)MatchSettings.playerColors[player + 1];
        }
    }

    public void setPlayerProgeny(int player, int progeny)
    {
        player -= 1;
        //playerProgenys[player] = progeny;
        MatchSettings.playerProgenys[player] = progeny;
    }
}
