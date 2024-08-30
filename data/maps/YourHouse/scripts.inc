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
	waitmessage
# 37 "data/maps/YourHouse/scripts.pory"
	applymovement 1, MomLeaveRoom
# 38 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
# 39 "data/maps/YourHouse/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 40 "data/maps/YourHouse/scripts.pory"
	setobjectxy 1, 2, 9
# 41 "data/maps/YourHouse/scripts.pory"
	setobjectnewmovementtype 1, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 42 "data/maps/YourHouse/scripts.pory"
	release
	end


# 46 "data/maps/YourHouse/scripts.pory"
MomEnter:
# 48 "data/maps/YourHouse/scripts.pory"
	walk_right
# 48 "data/maps/YourHouse/scripts.pory"
	walk_right
# 49 "data/maps/YourHouse/scripts.pory"
	walk_up
# 49 "data/maps/YourHouse/scripts.pory"
	walk_up
# 49 "data/maps/YourHouse/scripts.pory"
	walk_up
# 50 "data/maps/YourHouse/scripts.pory"
	walk_right
# 50 "data/maps/YourHouse/scripts.pory"
	walk_right
# 51 "data/maps/YourHouse/scripts.pory"
	step_end

# 54 "data/maps/YourHouse/scripts.pory"
MomWalkCloser:
# 56 "data/maps/YourHouse/scripts.pory"
	walk_right
# 56 "data/maps/YourHouse/scripts.pory"
	walk_right
# 57 "data/maps/YourHouse/scripts.pory"
	walk_up
# 57 "data/maps/YourHouse/scripts.pory"
	walk_up
# 58 "data/maps/YourHouse/scripts.pory"
	walk_in_place_right
# 59 "data/maps/YourHouse/scripts.pory"
	step_end

# 62 "data/maps/YourHouse/scripts.pory"
MomLeaveRoom:
# 64 "data/maps/YourHouse/scripts.pory"
	walk_down
# 64 "data/maps/YourHouse/scripts.pory"
	walk_down
# 65 "data/maps/YourHouse/scripts.pory"
	walk_left
# 65 "data/maps/YourHouse/scripts.pory"
	walk_left
# 65 "data/maps/YourHouse/scripts.pory"
	walk_left
# 65 "data/maps/YourHouse/scripts.pory"
	walk_left
# 66 "data/maps/YourHouse/scripts.pory"
	walk_down
# 66 "data/maps/YourHouse/scripts.pory"
	walk_down
# 66 "data/maps/YourHouse/scripts.pory"
	walk_down
# 66 "data/maps/YourHouse/scripts.pory"
	walk_down
# 67 "data/maps/YourHouse/scripts.pory"
	walk_left
# 67 "data/maps/YourHouse/scripts.pory"
	walk_left
# 67 "data/maps/YourHouse/scripts.pory"
	walk_left
# 67 "data/maps/YourHouse/scripts.pory"
	walk_left
# 67 "data/maps/YourHouse/scripts.pory"
	walk_left
# 68 "data/maps/YourHouse/scripts.pory"
	step_end

# 71 "data/maps/YourHouse/scripts.pory"
FaceDown:
# 73 "data/maps/YourHouse/scripts.pory"
	walk_in_place_down
	step_end

CheckLeave::
# 78 "data/maps/YourHouse/scripts.pory"
	lock
# 79 "data/maps/YourHouse/scripts.pory"
	iswearingoutfit OUTFIT_2
# 80 "data/maps/YourHouse/scripts.pory"
	applymovement 2, SiblingLeaveRoom
# 81 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
# 82 "data/maps/YourHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CheckLeave_2
# 110 "data/maps/YourHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 111 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
# 112 "data/maps/YourHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 113 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
# 114 "data/maps/YourHouse/scripts.pory"
	msgbox CheckLeave_Text_1
# 115 "data/maps/YourHouse/scripts.pory"
	waitmessage
# 116 "data/maps/YourHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 117 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
CheckLeave_1:
# 120 "data/maps/YourHouse/scripts.pory"
	release
	end

CheckLeave_2:
# 84 "data/maps/YourHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 85 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
# 86 "data/maps/YourHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 87 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
# 88 "data/maps/YourHouse/scripts.pory"
	msgbox CheckLeave_Text_0
# 89 "data/maps/YourHouse/scripts.pory"
	waitmessage
# 90 "data/maps/YourHouse/scripts.pory"
	setvar VAR_INTRO_STATE, 2
# 91 "data/maps/YourHouse/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 92 "data/maps/YourHouse/scripts.pory"
	compare VAR_TEMP_2, 3
	goto_if_eq CheckLeave_5
# 101 "data/maps/YourHouse/scripts.pory"
	applymovement 1, MomLeaveL
# 102 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
# 103 "data/maps/YourHouse/scripts.pory"
	applymovement 2, SiblingLeaveL
# 104 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
	goto CheckLeave_1

CheckLeave_5:
# 94 "data/maps/YourHouse/scripts.pory"
	applymovement 1, MomLeaveR
# 95 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
# 96 "data/maps/YourHouse/scripts.pory"
	applymovement 2, SiblingLeaveR
# 97 "data/maps/YourHouse/scripts.pory"
	waitmovement 0
	goto CheckLeave_1


# 124 "data/maps/YourHouse/scripts.pory"
MomLeaveR:
# 126 "data/maps/YourHouse/scripts.pory"
	walk_right
# 126 "data/maps/YourHouse/scripts.pory"
	walk_right
# 127 "data/maps/YourHouse/scripts.pory"
	walk_down
# 127 "data/maps/YourHouse/scripts.pory"
	walk_down
# 128 "data/maps/YourHouse/scripts.pory"
	delay_8
# 129 "data/maps/YourHouse/scripts.pory"
	set_invisible
# 130 "data/maps/YourHouse/scripts.pory"
	step_end

# 132 "data/maps/YourHouse/scripts.pory"
MomLeaveL:
# 134 "data/maps/YourHouse/scripts.pory"
	walk_right
# 135 "data/maps/YourHouse/scripts.pory"
	walk_down
# 135 "data/maps/YourHouse/scripts.pory"
	walk_down
# 136 "data/maps/YourHouse/scripts.pory"
	delay_8
# 137 "data/maps/YourHouse/scripts.pory"
	set_invisible
# 138 "data/maps/YourHouse/scripts.pory"
	step_end

# 140 "data/maps/YourHouse/scripts.pory"
SiblingLeaveR:
# 142 "data/maps/YourHouse/scripts.pory"
	walk_down
# 142 "data/maps/YourHouse/scripts.pory"
	walk_down
# 143 "data/maps/YourHouse/scripts.pory"
	delay_8
# 144 "data/maps/YourHouse/scripts.pory"
	set_invisible
# 145 "data/maps/YourHouse/scripts.pory"
	step_end

# 147 "data/maps/YourHouse/scripts.pory"
SiblingLeaveL:
# 149 "data/maps/YourHouse/scripts.pory"
	walk_left
# 150 "data/maps/YourHouse/scripts.pory"
	walk_down
# 150 "data/maps/YourHouse/scripts.pory"
	walk_down
# 151 "data/maps/YourHouse/scripts.pory"
	delay_8
# 152 "data/maps/YourHouse/scripts.pory"
	set_invisible
# 153 "data/maps/YourHouse/scripts.pory"
	step_end

# 156 "data/maps/YourHouse/scripts.pory"
SiblingLeaveRoom:
# 158 "data/maps/YourHouse/scripts.pory"
	walk_down
# 159 "data/maps/YourHouse/scripts.pory"
	walk_left
# 159 "data/maps/YourHouse/scripts.pory"
	walk_left
# 159 "data/maps/YourHouse/scripts.pory"
	walk_left
# 159 "data/maps/YourHouse/scripts.pory"
	walk_left
# 160 "data/maps/YourHouse/scripts.pory"
	walk_up
# 161 "data/maps/YourHouse/scripts.pory"
	walk_left
# 161 "data/maps/YourHouse/scripts.pory"
	walk_left
# 161 "data/maps/YourHouse/scripts.pory"
	walk_left
# 161 "data/maps/YourHouse/scripts.pory"
	walk_left
# 161 "data/maps/YourHouse/scripts.pory"
	walk_left
# 161 "data/maps/YourHouse/scripts.pory"
	walk_left
# 161 "data/maps/YourHouse/scripts.pory"
	walk_left
# 161 "data/maps/YourHouse/scripts.pory"
	walk_left
# 162 "data/maps/YourHouse/scripts.pory"
	walk_down
# 163 "data/maps/YourHouse/scripts.pory"
	step_end

GetRunningShoes::
# 168 "data/maps/YourHouse/scripts.pory"
	lockall
# 169 "data/maps/YourHouse/scripts.pory"
	goto_if_unset FLAG_SYS_B_DASH, GetRunningShoes_2
# 178 "data/maps/YourHouse/scripts.pory"
	msgbox GetRunningShoes_Text_1
GetRunningShoes_1:
# 180 "data/maps/YourHouse/scripts.pory"
	waitmessage
# 181 "data/maps/YourHouse/scripts.pory"
	releaseall
	end

GetRunningShoes_2:
# 171 "data/maps/YourHouse/scripts.pory"
	msgbox GetRunningShoes_Text_0
# 172 "data/maps/YourHouse/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 173 "data/maps/YourHouse/scripts.pory"
	setmetatile 5, 7, METATILE_BasicBuilding_Shoes_Taken, FALSE
# 174 "data/maps/YourHouse/scripts.pory"
	special DrawWholeMapView
	goto GetRunningShoes_1


Sibling::
# 188 "data/maps/YourHouse/scripts.pory"
	lockall
# 189 "data/maps/YourHouse/scripts.pory"
	msgbox Sibling_Text_0
# 191 "data/maps/YourHouse/scripts.pory"
	waitmessage
# 192 "data/maps/YourHouse/scripts.pory"
	releaseall
	end


OpenWardrobe::
# 198 "data/maps/YourHouse/scripts.pory"
	lockall
# 199 "data/maps/YourHouse/scripts.pory"
	checkoutfitflag OUTFIT_2
# 200 "data/maps/YourHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OpenWardrobe_2
OpenWardrobe_1:
# 206 "data/maps/YourHouse/scripts.pory"
	FadeScreen FADE_TO_BLACK
# 207 "data/maps/YourHouse/scripts.pory"
	callnative Script_OpenOutfitMenu
# 208 "data/maps/YourHouse/scripts.pory"
	waitstate
# 209 "data/maps/YourHouse/scripts.pory"
	release
	end

OpenWardrobe_2:
# 202 "data/maps/YourHouse/scripts.pory"
	msgbox OpenWardrobe_Text_0
# 203 "data/maps/YourHouse/scripts.pory"
	waitmessage
# 204 "data/maps/YourHouse/scripts.pory"
	callnative Script_UnlockOutfit2
	goto OpenWardrobe_1


WakeUp_Text_0:
# 35 "data/maps/YourHouse/scripts.pory"
	.string "{PLAYER}\pYou're not awake yet?!\pCome on, get ready\nWe're leaving very soon!$"

CheckLeave_Text_0:
# 88 "data/maps/YourHouse/scripts.pory"
	.string "Ok good\lyou're all ready\pLet's go!$"

CheckLeave_Text_1:
# 114 "data/maps/YourHouse/scripts.pory"
	.string "You can't leave\nlike that.\pGo to your dresser\nand change into your\lFANCY ATTIRE.$"

GetRunningShoes_Text_0:
# 171 "data/maps/YourHouse/scripts.pory"
	.string "You put on your running shoes$"

GetRunningShoes_Text_1:
# 178 "data/maps/YourHouse/scripts.pory"
	.string "You already have\nyour shoes.$"

Sibling_Text_0:
# 189 "data/maps/YourHouse/scripts.pory"
	.string "Now where was it.{PAUSE 20}.{PAUSE 20}.{PAUSE 20}.$"

OpenWardrobe_Text_0:
# 202 "data/maps/YourHouse/scripts.pory"
	.string "unlocking outfit 2$"
