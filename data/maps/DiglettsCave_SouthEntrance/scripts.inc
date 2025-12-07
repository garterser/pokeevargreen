DiglettsCave_SouthEntrance_MapScripts::
	.byte 0

DiglettsCave_SouthEntrance_EventScript_OldMan::
	faceplayer
	message DiglettsCave_SouthEntrance_Text_DiglettDugThisTunnel
	waitmessage
	setwildbattle SPECIES_CYNDAQUIL, 5
	special StartLegendaryBattle
	end
