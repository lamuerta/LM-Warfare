/**
 * _player : la cible du changement d'uniforme
 */
 
params["_player"];

_ret = false;
_array_rolled = [
	"VSM_AOR1_od_pants_Camo_SS", "VSM_AOR1_od_shirt_Camo_SS", "VSM_AOR1_tan_pants_Camo_SS", "VSM_AOR1_tan_shirt_Camo_SS", "VSM_AOR1_Camo_SS",
	"VSM_M81_od_pants_Camo_SS", "VSM_M81_od_shirt_Camo_SS", "VSM_M81_tan_pants_Camo_SS", "VSM_M81_tan_shirt_Camo_SS", "VSM_M81_Camo_SS",
	"VSM_MulticamTropic_od_pants_Camo_SS", "VSM_MulticamTropic_od_shirt_Camo_SS", "VSM_MulticamTropic_tan_pants_Camo_SS", "VSM_MulticamTropic_tan_shirt_Camo_SS", "VSM_MulticamTropic_Camo_SS",
	"VSM_OGA_od_pants_Camo_SS", "VSM_OGA_od_tan_pants_Camo_SS", "VSM_OGA_od_Camo_SS", "VSM_OGA_Camo_SS",
	
	"VSM_AOR1_Crye_SS_grey_pants_Camo", "VSM_AOR1_Crye_SS_grey_shirt_Camo", "VSM_AOR1_Crye_SS_od_pants_Camo", "VSM_AOR1_Crye_SS_od_shirt_Camo", "VSM_AOR1_Crye_SS_tan_pants_Camo", "VSM_AOR1_Crye_SS_tan_shirt_Camo", "VSM_AOR1_Crye_SS_Camo",
	"VSM_M81_Crye_SS_grey_pants_Camo", "VSM_M81_Crye_SS_grey_shirt_Camo", "VSM_M81_Crye_SS_od_pants_Camo", "VSM_M81_Crye_SS_od_shirt_Camo", "VSM_M81_Crye_SS_tan_pants_Camo", "VSM_M81_Crye_SS_tan_shirt_Camo", "VSM_M81_Crye_SS_Camo",
	"VSM_MulticamTropic_Crye_SS_grey_pants_Camo", "VSM_MulticamTropic_Crye_SS_grey_shirt_Camo", "VSM_MulticamTropic_Crye_SS_od_pants_Camo", "VSM_MulticamTropic_Crye_SS_od_shirt_Camo", "VSM_MulticamTropic_Crye_SS_tan_pants_Camo", "VSM_MulticamTropic_Crye_SS_tan_shirt_Camo", "VSM_MulticamTropic_Crye_SS_Camo",
	"VSM_OGA_Crye_SS_grey_pants_Camo", "VSM_OGA_Crye_SS_od_pants_Camo", "VSM_OGA_Crye_SS_grey_od_pants_Camo", "VSM_OGA_Crye_SS_grey_tan_pants_Camo", "VSM_OGA_Crye_SS_grey_Camo", "VSM_OGA_Crye_SS_od_grey_pants_Camo", "VSM_OGA_Crye_SS_od_tan_pants_Camo", "VSM_OGA_Crye_SS_od_Camo", "VSM_OGA_Crye_SS_Camo"
];

if(uniform _player in _array_rolled) then {_ret = true};

_ret