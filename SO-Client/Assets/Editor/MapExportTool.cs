using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(GameMaster))]
public class MapExportTool : Editor
{
    private static readonly string[] MapTypes = { "multi", "single", "tutor" };

    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();

        GameMaster gameMaster = (GameMaster)target;

        EditorGUILayout.Space(8);
        EditorGUILayout.LabelField("Game State Export", EditorStyles.boldLabel);
        EditorGUILayout.HelpBox(
            "Reads the scene tilemap and all BaseUnit / BaseStructure objects. Play Mode is not required.\n" +
            "Output: Assets/InitializationData/Maps/{type}_Map{num}_v{version}.gsdat",
            MessageType.Info);

        if (GUILayout.Button("Save Game State From Scene"))
        {
            OpenSaveDialog(gameMaster);
        }
    }

    [MenuItem("Space Opera/Save Game State From Scene", true)]
    private static bool ValidateSaveFromSceneMenu()
    {
        return FindGameMaster() != null;
    }

    [MenuItem("Space Opera/Save Game State From Scene")]
    private static void SaveFromSceneMenu()
    {
        OpenSaveDialog(FindGameMaster());
    }

    private static GameMaster FindGameMaster()
    {
        if (Selection.activeGameObject != null)
        {
            GameMaster selected = Selection.activeGameObject.GetComponentInParent<GameMaster>();
            if (selected != null)
            {
                return selected;
            }
        }

        return Object.FindObjectOfType<GameMaster>();
    }

    private static void OpenSaveDialog(GameMaster gameMaster)
    {
        if (gameMaster == null)
        {
            Debug.LogWarning("[GameStateExport] No GameMaster found.");
            return;
        }

        SaveGameStateDialog.Show(gameMaster, TrySaveFromScene);
    }

    private static bool TrySaveFromScene(GameMaster gameMaster, string mapType, int mapNum, int versionNum)
    {
        if (gameMaster.gameValues == null || gameMaster.tilemapManager == null)
        {
            Debug.LogError("[GameStateExport] GameMaster is missing gameValues or tilemapManager.");
            return false;
        }

        gameMaster.gameValues.Initialize();
        gameMaster.tilemapManager.Initialize(false);

        TilemapData tilemapData = gameMaster.tilemapManager.ExportTilemapToBytes();
        if (tilemapData == null)
        {
            Debug.LogError("[GameStateExport] Failed to export tilemap from the scene.");
            return false;
        }

        List<GamePieceInfo> gamePieceList = CollectGamePiecesFromScene();
        GameStateData gameStateData = new GameStateData(tilemapData, gamePieceList);

        string directoryPath = Path.Combine(Application.dataPath, "InitializationData/Maps/");
        if (!Directory.Exists(directoryPath))
        {
            Directory.CreateDirectory(directoryPath);
        }

        string fileName = $"{mapType}_Map{mapNum}_v{versionNum}.gsdat";
        string savedPath = Path.Combine(directoryPath, fileName);

        try
        {
            File.WriteAllBytes(savedPath, GameStateData.Serialize(gameStateData));
        }
        catch (System.Exception e)
        {
            Debug.LogError($"[GameStateExport] Failed to write file: {e.Message}");
            return false;
        }

        AssetDatabase.Refresh();
        Debug.Log($"[GameStateExport] Saved {gamePieceList.Count} game pieces to {savedPath}");
        return true;
    }

    private static List<GamePieceInfo> CollectGamePiecesFromScene()
    {
        List<GamePieceInfo> gamePieceList = new List<GamePieceInfo>();

        foreach (BaseUnit unit in Object.FindObjectsOfType<BaseUnit>(true))
        {
            if (unit == null || !unit.gameObject.scene.IsValid())
            {
                continue;
            }

            Vector2Int pos = new Vector2Int(
                Mathf.RoundToInt(unit.transform.position.x),
                Mathf.RoundToInt(unit.transform.position.y));

            byte healthVal = unit.healthMax > 0
                ? (byte)((double)unit.healthCurrent / unit.healthMax * 100)
                : (byte)100;

            gamePieceList.Add(new GamePieceInfo(
                (byte)pos.x,
                (byte)pos.y,
                (byte)unit.gamePieceId,
                (byte)unit.playerControl,
                healthVal));
        }

        foreach (BaseStructure structure in Object.FindObjectsOfType<BaseStructure>(true))
        {
            if (structure == null || !structure.gameObject.scene.IsValid())
            {
                continue;
            }

            Vector2Int pos = new Vector2Int(
                Mathf.RoundToInt(structure.transform.position.x),
                Mathf.RoundToInt(structure.transform.position.y));

            gamePieceList.Add(new GamePieceInfo(
                (byte)pos.x,
                (byte)pos.y,
                (byte)(200 + structure.structureType),
                (byte)structure.playerControl,
                (byte)structure.captureHealth));
        }

        return gamePieceList;
    }

    private sealed class SaveGameStateDialog : EditorWindow
    {
        private GameMaster gameMaster;
        private System.Func<GameMaster, string, int, int, bool> saveHandler;
        private int mapTypeIndex;
        private int mapNum;
        private int mapVersion;

        public static void Show(GameMaster gm, System.Func<GameMaster, string, int, int, bool> onSave)
        {
            SaveGameStateDialog window = GetWindow<SaveGameStateDialog>(true, "Save Game State", true);
            window.gameMaster = gm;
            window.saveHandler = onSave;
            window.mapTypeIndex = gm.exportMapType == "single" ? 1 : 0;
            window.mapNum = gm.exportMapNum;
            window.mapVersion = gm.exportMapVersion;
            window.minSize = new Vector2(320, 168);
            window.maxSize = new Vector2(320, 168);
            window.ShowUtility();
        }

        private void OnGUI()
        {
            EditorGUILayout.LabelField("Map Type", EditorStyles.boldLabel);
            mapTypeIndex = EditorGUILayout.Popup(mapTypeIndex, MapTypes);

            mapNum = EditorGUILayout.IntField("Map Number", mapNum);
            mapVersion = EditorGUILayout.IntField("Version Number", mapVersion);

            string fileName = $"{MapTypes[mapTypeIndex]}_Map{mapNum}_v{mapVersion}.gsdat";
            EditorGUILayout.HelpBox($"Assets/InitializationData/Maps/{fileName}", MessageType.None);

            EditorGUILayout.Space(4);

            using (new EditorGUILayout.HorizontalScope())
            {
                if (GUILayout.Button("Cancel"))
                {
                    Close();
                }

                GUI.enabled = mapNum > 0 && mapVersion > 0;
                if (GUILayout.Button("Save"))
                {
                    if (saveHandler(gameMaster, MapTypes[mapTypeIndex], mapNum, mapVersion))
                    {
                        Close();
                    }
                }

                GUI.enabled = true;
            }
        }
    }
}
