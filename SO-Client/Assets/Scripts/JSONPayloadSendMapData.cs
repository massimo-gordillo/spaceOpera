
[System.Serializable]
public class JSONPayloadSendMapData
{
    public string name;
    public string grid_data;
    public int width;
    public int height;
    public string init_piece_data;
    public double compression_method = 0.01;

    public JSONPayloadSendMapData(string name, string grid_data, int width, int height, string init_piece_data)
    {
        this.name = name;
        this.grid_data = grid_data;
        this.width = width;
        this.height = height;
        this.init_piece_data = init_piece_data;

        /*        // Prepare the payload
var payload = new
{
    name = mapName,
    data = serializedgrid_data,
    width = width,
    height = height,
    init_piece_data = serializedPieceData,
    compression_method = 0.01
};*/
    }
}
