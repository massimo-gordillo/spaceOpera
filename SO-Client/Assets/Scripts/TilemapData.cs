using MessagePack;

[MessagePackObject]
public class TilemapData
{
/*    [IgnoreMember] // This ensures RawData isn't part of serialized data
    public byte[] RawData { get; set; }*/

    [Key(0)]
    public int Width { get; set; }

    [Key(1)]
    public int Height { get; set; }

    [Key(2)]
    public byte[] TileBytes { get; set; }

    // Constructor for easy instantiation
    public TilemapData(int width, int height, byte[] tileBytes)//, byte[] rawData = null)
    {
        Width = width;
        Height = height;
        TileBytes = tileBytes;
        //RawData = rawData ?? new byte[0];
    }

    // Serialize method to convert TilemapData to byte[] for storage
    public static byte[] Serialize(TilemapData data)
    {
        return MessagePackSerializer.Serialize(data);
    }

    // Deserialize method to convert byte[] back to TilemapData object
    public static TilemapData Deserialize(byte[] data)
    {
        return MessagePackSerializer.Deserialize<TilemapData>(data);
    }
}
