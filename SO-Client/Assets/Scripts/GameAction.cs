using System.Collections;
using System.Collections.Generic;

public class GameAction
{
    public string match_id { get; set; }

    public short turnNumber { get; set; }

    public short actionNumber { get; set; }

    // 0 = move, 1 = attack, 2 = capture, 3 = produce
    public byte actionType { get; set; }

    public byte gamePieceId { get; set; }

    public byte unitTerrainType { get; set; }

    public byte fromLocationX { get; set; }

    public byte fromLocationY { get; set; }

    public byte toLocationX { get; set; }

    public byte toLocationY { get; set; }

    public byte playerID { get; set; }
}

/*[MessagePackObject]
public class GameAction
{
    [Key(7)]
    public short turnNumber { get; set; }

    [Key(8)]
    public short actionNumber { get; set; }

    // 0 = move, 1 = attack, 2 = capture, 3 = produce
    [Key(0)]
    public byte actionType { get; set; }

    [Key(1)]
    public byte unitTerrainType { get; set; }

    [Key(2)]
    public byte fromLocationX { get; set; }

    [Key(3)]
    public byte fromLocationY { get; set; }

    [Key(4)]
    public byte toLocationX { get; set; }

    [Key(5)]
    public byte toLocationY { get; set; }

    [Key(6)]
    public byte playerID { get; set; }
}*/