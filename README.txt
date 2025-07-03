==================================
 Tactica: A Space Opera - README
==================================

Project Type:     2D Turn-Based Strategy
Engine:           Unity 2021.3
Main Scene:       GameScene
Client Path:      \spaceOpera\SO-Client\
Server Path:      \spaceOpera\SO-ServerBolt\project-bolt-sb1-q3y2zz\project


=======================
 CLIENT PROJECT NOTES
=======================

Path: \spaceOpera\SO-Client\

This is the Unity client for Tactica. Designed for mobile-first deployment, with support for PC/web scaling. First Android build required a rollback, new build coming.

---------
Data Flow
---------

• Game balance data (unit stats, damage multipliers, terrain, etc.) is stored as JSON files.
• These are located at:
  
  Assets/Resources/GameValues/

• The PrefabManager loads this data at match start and applies it to prefab instances if necessary.

• Unit prefabs are cloned from the BaseUnitBasePrefab. They are here:
  
  Assets/Resources/UnitPrefabs/

DO NOT move `BaseUnitBasePrefab` out of this folder.  
It must remain in `Resources/UnitPrefabs` to be dynamically accessible via `Resources.Load`.

-------------
Editor Scripts
-------------

• PrefabManager handles generation and assignment of unit attributes at runtime.
• No custom menu tools or inspectors currently required for setup.
• Balance values are manually modified in JSON, changes to these values modify the prefab hash and PrefabManager knows to update the unit prefab.

---------
UI & Input
---------

• Designed for touch input with responsive scaling for desktop.
• ScrollViews have clamped scroll limits; no rubberband scrolling beyond last content item.
• Camera movement supports drag with soft bounds and snap-back when outside.

---------------------
Sprite & Visual System
---------------------

• Units use multi-layered sprites: fill, trim, and highlights(lights). 32x32 resolution.
• Color is set per-player using HSV values and is adjusted for exhaustion state.
• Sprite materials are colorized in Unity; source art is grayscale.

=======================
 SERVER PROJECT NOTES
=======================

Path: \spaceOpera\SO-ServerBolt\project-bolt-sb1-q3y2zz\project

• This directory contains early server-side infrastructure.
• Handles player accounts, turn validation, match tracking, and long-term data storage.
• Multipler is asynchronous. Player A ends their turn by sending game actions and gamestate hash to server. Server replays game actions making DB modifications and checks hash. If matching, game actions are passed to Player B and they can then take their turn.
• Leverages Supabase REST API for sending game actions & retrieval.


========================
 SETUP INSTRUCTIONS
========================

1. Open `GameScene` in Unity 2021.3
2. Ensure TextMeshPro is installed if prompted
3. Make sure all JSON files are present in `Resources/GameValues`
4. Confirm that `BaseUnitBasePrefab` is in `Resources/UnitPrefabs`
5. Press Play — the game will autoload the latest balance data and instantiate the grid/units

=======================
 PERSONAL REMINDERS
=======================

• Avoid modifying individual unit prefabs directly in the editor — data should flow from JSON/GameValues. 

• All core balance data (unit stats, costs, terrain types) is edited via spreadsheet/JSON and PrefabManager.


=======================
 CONTACT / AUTHOR
=======================

Created by: Massimo Gordillo.
This project is a solo-built demo of scalable, systems-driven game design and development.

