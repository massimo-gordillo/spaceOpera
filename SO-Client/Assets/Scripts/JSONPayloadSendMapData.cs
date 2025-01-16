
[System.Serializable]
public class JSONPayloadSendMapData
{
    public string data;
    public string init_piece_data;

    public JSONPayloadSendMapData(string data, string initPieceData)
    {
        this.data = data;
        this.init_piece_data = initPieceData;
    }
}
