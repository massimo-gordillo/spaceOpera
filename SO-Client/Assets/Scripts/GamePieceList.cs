//a class for wrapping the game piece list into a serializable object for JSON packaging. I'm not a huge fan of this implementation but it works for now!

using System.Collections;
using System.Collections.Generic;

[System.Serializable]
public class GamePieceList
{
    public List<GamePieceInfo> gamePieceInfos;

    public GamePieceList(List<GamePieceInfo> gamePieceInfos)
    {
        this.gamePieceInfos = gamePieceInfos;
    }
}
