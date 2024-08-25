YourHouse_MapScripts::
	.byte 0


GetRunningShoes::
# 5 "data/maps/YourHouse/scripts.pory"
	lockall
# 6 "data/maps/YourHouse/scripts.pory"
	goto_if_unset FLAG_SYS_B_DASH, GetRunningShoes_2
# 15 "data/maps/YourHouse/scripts.pory"
	msgbox GetRunningShoes_Text_1
GetRunningShoes_1:
# 17 "data/maps/YourHouse/scripts.pory"
	waitmessage
# 18 "data/maps/YourHouse/scripts.pory"
	releaseall
	end

GetRunningShoes_2:
# 8 "data/maps/YourHouse/scripts.pory"
	msgbox GetRunningShoes_Text_0
# 9 "data/maps/YourHouse/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 10 "data/maps/YourHouse/scripts.pory"
	setmetatile 5, 7, METATILE_BasicBuilding_Shoes_Taken, FALSE
# 11 "data/maps/YourHouse/scripts.pory"
	special DrawWholeMapView
	goto GetRunningShoes_1


Sibling::
# 25 "data/maps/YourHouse/scripts.pory"
	lockall
# 26 "data/maps/YourHouse/scripts.pory"
	msgbox Sibling_Text_0
# 28 "data/maps/YourHouse/scripts.pory"
	waitmessage
# 29 "data/maps/YourHouse/scripts.pory"
	releaseall
	end


OpenWardrobe::
# 35 "data/maps/YourHouse/scripts.pory"
	lockall
# 36 "data/maps/YourHouse/scripts.pory"
	callnative Script_UnlockOutfit3
# 37 "data/maps/YourHouse/scripts.pory"
	FadeScreen FADE_TO_BLACK
# 38 "data/maps/YourHouse/scripts.pory"
	callnative Script_OpenOutfitMenu
# 39 "data/maps/YourHouse/scripts.pory"
	waitstate
# 40 "data/maps/YourHouse/scripts.pory"
	release
	end


GetRunningShoes_Text_0:
# 8 "data/maps/YourHouse/scripts.pory"
	.string "You put on your running shoes$"

GetRunningShoes_Text_1:
# 15 "data/maps/YourHouse/scripts.pory"
	.string "You already have\nyour shoes.$"

Sibling_Text_0:
# 26 "data/maps/YourHouse/scripts.pory"
	.string "Now where was it{PAUSE 20}.{PAUSE 20}.{PAUSE 20}.{PAUSE 20}.$"
