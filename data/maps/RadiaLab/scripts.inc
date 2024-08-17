# 1 "data/maps/RadiaLab/scripts.pory"

# 2 "data/maps/RadiaLab/scripts.pory"
RadiaLab_MapScripts::
# 3 "data/maps/RadiaLab/scripts.pory"
	.byte 0
# 4 "data/maps/RadiaLab/scripts.pory"
	Receive_Starter_Script::
# 5 "data/maps/RadiaLab/scripts.pory"
		lockall
# 6 "data/maps/RadiaLab/scripts.pory"
		msgbox Observation_Of_Poke_Case, MSGBOX_DEFAULT
# 7 "data/maps/RadiaLab/scripts.pory"
		callnative StartNewPokeballCaseUI
# 8 "data/maps/RadiaLab/scripts.pory"
		waitstate
# 9 "data/maps/RadiaLab/scripts.pory"
		msgbox Best_Take_Care, MSGBOX_DEFAULT
# 10 "data/maps/RadiaLab/scripts.pory"
		releaseall
# 11 "data/maps/RadiaLab/scripts.pory"
		end
# 12 "data/maps/RadiaLab/scripts.pory"
	Observation_Of_Poke_Case:
# 13 "data/maps/RadiaLab/scripts.pory"
		.string "It's a case full of pokemon$"
# 14 "data/maps/RadiaLab/scripts.pory"
	Best_Take_Care:
# 15 "data/maps/RadiaLab/scripts.pory"
		.string "Better take good care of it$"
# 16 "data/maps/RadiaLab/scripts.pory"

# 17 "data/maps/RadiaLab/scripts.pory"
	Radia_Lab_FH::
# 18 "data/maps/RadiaLab/scripts.pory"
		setvar VAR_TEMP_2, 8 
# 19 "data/maps/RadiaLab/scripts.pory"
		setvar VAR_TEMP_3, 2
# 20 "data/maps/RadiaLab/scripts.pory"
		call Common_EventScript_FlashHeal
