YourHouse_MapScripts::
	.byte 0


GetRunningShoes::
# 5 "data/maps/YourHouse/scripts.pory"
	lock
# 6 "data/maps/YourHouse/scripts.pory"
	goto_if_unset FLAG_SYS_B_DASH, GetRunningShoes_2
# 13 "data/maps/YourHouse/scripts.pory"
	msgbox GetRunningShoes_Text_1
GetRunningShoes_1:
# 15 "data/maps/YourHouse/scripts.pory"
	waitmessage
# 16 "data/maps/YourHouse/scripts.pory"
	releaseall
	end

GetRunningShoes_2:
# 8 "data/maps/YourHouse/scripts.pory"
	msgbox GetRunningShoes_Text_0
# 9 "data/maps/YourHouse/scripts.pory"
	setflag FLAG_SYS_B_DASH
	goto GetRunningShoes_1


UnlockOutfit3::
# 23 "data/maps/YourHouse/scripts.pory"
	lock
# 24 "data/maps/YourHouse/scripts.pory"
	msgbox UnlockOutfit3_Text_0
# 25 "data/maps/YourHouse/scripts.pory"
	waitmessage
# 26 "data/maps/YourHouse/scripts.pory"
	callnative Script_UnlockOutfit
# 27 "data/maps/YourHouse/scripts.pory"
	releaseall
	end


OpenWardrobe::
# 33 "data/maps/YourHouse/scripts.pory"
	lock
# 34 "data/maps/YourHouse/scripts.pory"
	msgbox OpenWardrobe_Text_0
# 35 "data/maps/YourHouse/scripts.pory"
	FadeScreen FADE_TO_BLACK
# 36 "data/maps/YourHouse/scripts.pory"
	callnative Script_OpenOutfitMenu
# 37 "data/maps/YourHouse/scripts.pory"
	waitstate
# 38 "data/maps/YourHouse/scripts.pory"
	release
	end


GetRunningShoes_Text_0:
# 8 "data/maps/YourHouse/scripts.pory"
	.string "You put on your running shoes$"

GetRunningShoes_Text_1:
# 13 "data/maps/YourHouse/scripts.pory"
	.string "It's full of outfits. \nToo much work to change into them$"

UnlockOutfit3_Text_0:
# 24 "data/maps/YourHouse/scripts.pory"
	.string "unlock$"

OpenWardrobe_Text_0:
# 34 "data/maps/YourHouse/scripts.pory"
	.string "test$"
