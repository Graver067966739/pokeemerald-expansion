YourHouse_MapScripts::
# 6 "data/maps/YourHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, YourHouse_MapScripts_MAP_SCRIPT_ON_LOAD
# 20 "data/maps/YourHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, YourHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

YourHouse_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/YourHouse/scripts.pory"
	goto_if_set FLAG_SYS_B_DASH, YourHouse_MapScripts_MAP_SCRIPT_ON_LOAD_2
YourHouse_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 14 "data/maps/YourHouse/scripts.pory"
	compare VAR_INTRO_STATE, 0
	goto_if_eq YourHouse_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

YourHouse_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 10 "data/maps/YourHouse/scripts.pory"
	setmetatile 5, 7, METATILE_BasicBuilding_Shoes_Taken, FALSE
# 11 "data/maps/YourHouse/scripts.pory"
	special DrawWholeMapView
	goto YourHouse_MapScripts_MAP_SCRIPT_ON_LOAD_1

YourHouse_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 16 "data/maps/YourHouse/scripts.pory"
	setobjectxyperm 1, 11, 7
	return

YourHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 22 "data/maps/YourHouse/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 0, WakeUp
	.2byte 0


WakeUp::
# 28 "data/maps/YourHouse/scripts.pory"
	lock
# 29 "data/maps/YourHouse/scripts.pory"
	applymovement 1, MomEnter
# 30 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
# 31 "data/maps/YourHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 32 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
# 33 "data/maps/YourHouse/scripts.pory"
	applymovement 1, MomWalkCloser
# 34 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
# 35 "data/maps/YourHouse/scripts.pory"
	msgbox WakeUp_Text_0
# 36 "data/maps/YourHouse/scripts.pory"
	applymovement 1, MomLeaveRoom
# 37 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
# 38 "data/maps/YourHouse/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 39 "data/maps/YourHouse/scripts.pory"
	setobjectxy 1, 2, 9
# 40 "data/maps/YourHouse/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 41 "data/maps/YourHouse/scripts.pory"
	release
	end


# 45 "data/maps/YourHouse/scripts.pory"
MomEnter:
# 47 "data/maps/YourHouse/scripts.pory"
	walk_right
# 47 "data/maps/YourHouse/scripts.pory"
	walk_right
# 48 "data/maps/YourHouse/scripts.pory"
	walk_up
# 48 "data/maps/YourHouse/scripts.pory"
	walk_up
# 48 "data/maps/YourHouse/scripts.pory"
	walk_up
# 49 "data/maps/YourHouse/scripts.pory"
	walk_right
# 49 "data/maps/YourHouse/scripts.pory"
	walk_right
# 50 "data/maps/YourHouse/scripts.pory"
	step_end

# 53 "data/maps/YourHouse/scripts.pory"
MomWalkCloser:
# 55 "data/maps/YourHouse/scripts.pory"
	walk_right
# 55 "data/maps/YourHouse/scripts.pory"
	walk_right
# 56 "data/maps/YourHouse/scripts.pory"
	walk_up
# 56 "data/maps/YourHouse/scripts.pory"
	walk_up
# 57 "data/maps/YourHouse/scripts.pory"
	walk_in_place_right
# 58 "data/maps/YourHouse/scripts.pory"
	step_end

# 61 "data/maps/YourHouse/scripts.pory"
MomLeaveRoom:
# 63 "data/maps/YourHouse/scripts.pory"
	walk_down
# 63 "data/maps/YourHouse/scripts.pory"
	walk_down
# 64 "data/maps/YourHouse/scripts.pory"
	walk_left
# 64 "data/maps/YourHouse/scripts.pory"
	walk_left
# 64 "data/maps/YourHouse/scripts.pory"
	walk_left
# 64 "data/maps/YourHouse/scripts.pory"
	walk_left
# 65 "data/maps/YourHouse/scripts.pory"
	walk_down
# 65 "data/maps/YourHouse/scripts.pory"
	walk_down
# 65 "data/maps/YourHouse/scripts.pory"
	walk_down
# 65 "data/maps/YourHouse/scripts.pory"
	walk_down
# 66 "data/maps/YourHouse/scripts.pory"
	walk_left
# 66 "data/maps/YourHouse/scripts.pory"
	walk_left
# 66 "data/maps/YourHouse/scripts.pory"
	walk_left
# 66 "data/maps/YourHouse/scripts.pory"
	walk_left
# 66 "data/maps/YourHouse/scripts.pory"
	walk_left
# 67 "data/maps/YourHouse/scripts.pory"
	step_end

CantLeave::
# 72 "data/maps/YourHouse/scripts.pory"
	lock
# 73 "data/maps/YourHouse/scripts.pory"
	msgbox CantLeave_Text_0
# 74 "data/maps/YourHouse/scripts.pory"
	waitmessage
# 75 "data/maps/YourHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerUp
# 76 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
# 77 "data/maps/YourHouse/scripts.pory"
	release
	end


# 81 "data/maps/YourHouse/scripts.pory"
PlayerUp:
# 83 "data/maps/YourHouse/scripts.pory"
	walk_up
# 84 "data/maps/YourHouse/scripts.pory"
	step_end

GetRunningShoes::
# 89 "data/maps/YourHouse/scripts.pory"
	lockall
# 90 "data/maps/YourHouse/scripts.pory"
	goto_if_unset FLAG_SYS_B_DASH, GetRunningShoes_2
# 99 "data/maps/YourHouse/scripts.pory"
	msgbox GetRunningShoes_Text_1
GetRunningShoes_1:
# 101 "data/maps/YourHouse/scripts.pory"
	waitmessage
# 102 "data/maps/YourHouse/scripts.pory"
	releaseall
	end

GetRunningShoes_2:
# 92 "data/maps/YourHouse/scripts.pory"
	msgbox GetRunningShoes_Text_0
# 93 "data/maps/YourHouse/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 94 "data/maps/YourHouse/scripts.pory"
	setmetatile 5, 7, METATILE_BasicBuilding_Shoes_Taken, FALSE
# 95 "data/maps/YourHouse/scripts.pory"
	special DrawWholeMapView
	goto GetRunningShoes_1


Sibling::
# 109 "data/maps/YourHouse/scripts.pory"
	lockall
# 110 "data/maps/YourHouse/scripts.pory"
	msgbox Sibling_Text_0
# 112 "data/maps/YourHouse/scripts.pory"
	waitmessage
# 113 "data/maps/YourHouse/scripts.pory"
	releaseall
	end


OpenWardrobe::
# 119 "data/maps/YourHouse/scripts.pory"
	lockall
# 120 "data/maps/YourHouse/scripts.pory"
	goto_if_unset OUTFIT_2, OpenWardrobe_2
OpenWardrobe_1:
# 126 "data/maps/YourHouse/scripts.pory"
	FadeScreen FADE_TO_BLACK
# 127 "data/maps/YourHouse/scripts.pory"
	callnative Script_OpenOutfitMenu
# 128 "data/maps/YourHouse/scripts.pory"
	waitstate
# 129 "data/maps/YourHouse/scripts.pory"
	release
	end

OpenWardrobe_2:
# 122 "data/maps/YourHouse/scripts.pory"
	msgbox OpenWardrobe_Text_0
# 123 "data/maps/YourHouse/scripts.pory"
	waitmessage
# 124 "data/maps/YourHouse/scripts.pory"
	callnative Script_UnlockOutfit2
	goto OpenWardrobe_1


WakeUp_Text_0:
# 35 "data/maps/YourHouse/scripts.pory"
	.string "{PLAYER}\pYou're not awake yet?!\pCome on, get ready\nWe're leaving very soon!$"

CantLeave_Text_0:
# 73 "data/maps/YourHouse/scripts.pory"
	.string "You can't leave\nlike that.\pGo to your dresser\nand change into your\lFANCY ATTIRE.\pAlso don't forget to\ngrab your shoes\pbeside the TV.$"

GetRunningShoes_Text_0:
# 92 "data/maps/YourHouse/scripts.pory"
	.string "You put on your running shoes$"

GetRunningShoes_Text_1:
# 99 "data/maps/YourHouse/scripts.pory"
	.string "You already have\nyour shoes.$"

Sibling_Text_0:
# 110 "data/maps/YourHouse/scripts.pory"
	.string "Now where was it.{PAUSE 20}.{PAUSE 20}.{PAUSE 20}.$"

OpenWardrobe_Text_0:
# 122 "data/maps/YourHouse/scripts.pory"
	.string "test$"
