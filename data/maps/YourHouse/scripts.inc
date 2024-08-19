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


GetRunningShoes_Text_0:
# 8 "data/maps/YourHouse/scripts.pory"
	.string "You put on your running shoes$"

GetRunningShoes_Text_1:
# 13 "data/maps/YourHouse/scripts.pory"
	.string "It's full of outfits. \nToo much work to change into them$"
