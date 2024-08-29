RadiaLab_MapScripts::
	.byte 0


Receive_Starter_Script::
# 5 "data/maps/RadiaLab/scripts.pory"
	lockall
# 6 "data/maps/RadiaLab/scripts.pory"
	msgbox Receive_Starter_Script_Text_0
# 7 "data/maps/RadiaLab/scripts.pory"
	callnative StartNewPokeballCaseUI
# 8 "data/maps/RadiaLab/scripts.pory"
	waitstate
# 9 "data/maps/RadiaLab/scripts.pory"
	msgbox Receive_Starter_Script_Text_1
# 10 "data/maps/RadiaLab/scripts.pory"
	releaseall
	end


Radia_Lab_FH::
# 16 "data/maps/RadiaLab/scripts.pory"
	call Common_EventScript_FlashHeal
	return


Radia_Lab_Proffesor::
# 21 "data/maps/RadiaLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Radia_Lab_Proffesor_1
# 41 "data/maps/RadiaLab/scripts.pory"
	lockall
# 42 "data/maps/RadiaLab/scripts.pory"
	faceplayer
# 43 "data/maps/RadiaLab/scripts.pory"
	msgbox Radia_Lab_Proffesor_Text_2
# 44 "data/maps/RadiaLab/scripts.pory"
	applymovement VAR_LAST_TALKED, LookBack
# 45 "data/maps/RadiaLab/scripts.pory"
	waitmovement 0
# 46 "data/maps/RadiaLab/scripts.pory"
	releaseall
	end

Radia_Lab_Proffesor_1:
# 23 "data/maps/RadiaLab/scripts.pory"
	lockall
# 24 "data/maps/RadiaLab/scripts.pory"
	faceplayer
# 25 "data/maps/RadiaLab/scripts.pory"
	msgbox Radia_Lab_Proffesor_Text_0
# 26 "data/maps/RadiaLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 27 "data/maps/RadiaLab/scripts.pory"
	msgbox Radia_Lab_Proffesor_Text_1
# 28 "data/maps/RadiaLab/scripts.pory"
	waitfanfare
# 29 "data/maps/RadiaLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 30 "data/maps/RadiaLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 31 "data/maps/RadiaLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 32 "data/maps/RadiaLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 33 "data/maps/RadiaLab/scripts.pory"
	special EnableNationalPokedex
# 34 "data/maps/RadiaLab/scripts.pory"
	applymovement VAR_LAST_TALKED, LookBack
# 35 "data/maps/RadiaLab/scripts.pory"
	waitmovement 0
# 36 "data/maps/RadiaLab/scripts.pory"
	releaseall
	end


# 52 "data/maps/RadiaLab/scripts.pory"
LookBack:
# 54 "data/maps/RadiaLab/scripts.pory"
	face_original_direction
	step_end

Receive_Starter_Script_Text_0:
# 6 "data/maps/RadiaLab/scripts.pory"
	.string "It's a case full of pokemon$"

Receive_Starter_Script_Text_1:
# 9 "data/maps/RadiaLab/scripts.pory"
	.string "Better take good care of it$"

Radia_Lab_Proffesor_Text_0:
# 25 "data/maps/RadiaLab/scripts.pory"
	.string "Here, have a pokedex$"

Radia_Lab_Proffesor_Text_1:
# 27 "data/maps/RadiaLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

Radia_Lab_Proffesor_Text_2:
# 43 "data/maps/RadiaLab/scripts.pory"
	.string "I already gave you a pokedex\nnow please leave\nI am busy.$"
