/**
 * _player : la cible du changement d'uniforme
 */
 
params["_player"];

_ret = false;
_array = [
	"VSM_AOR1_od_pants_Camo", "VSM_AOR1_od_shirt_Camo", "VSM_AOR1_tan_pants_Camo", "VSM_AOR1_tan_shirt_Camo", "VSM_AOR1_Camo",
	"VSM_M81_od_pants_Camo", "VSM_M81_od_shirt_Camo", "VSM_M81_tan_pants_Camo", "VSM_M81_tan_shirt_Camo", "VSM_M81_Camo",
	"VSM_MulticamTropic_od_pants_Camo", "VSM_MulticamTropic_od_shirt_Camo", "VSM_MulticamTropic_tan_pants_Camo", "VSM_MulticamTropic_tan_shirt_Camo", "VSM_MulticamTropic_Camo",
	"VSM_OGA_od_pants_Camo", "VSM_OGA_od_tan_pants_Camo", "VSM_OGA_od_Camo", "VSM_OGA_Camo",
	
	"VSM_AOR1_Crye_grey_pants_Camo", "VSM_AOR1_Crye_grey_shirt_Camo", "VSM_AOR1_Crye_od_pants_Camo", "VSM_AOR1_Crye_od_shirt_Camo", "VSM_AOR1_Crye_tan_pants_Camo", "VSM_AOR1_Crye_tan_shirt_Camo", "VSM_AOR1_Crye_Camo",
	"VSM_M81_Crye_grey_pants_Camo", "VSM_M81_Crye_grey_shirt_Camo", "VSM_M81_Crye_od_pants_Camo", "VSM_M81_Crye_od_shirt_Camo", "VSM_M81_Crye_tan_pants_Camo", "VSM_M81_Crye_tan_shirt_Camo", "VSM_M81_Crye_Camo",
	"VSM_MulticamTropic_Crye_grey_pants_Camo", "VSM_MulticamTropic_Crye_grey_shirt_Camo", "VSM_MulticamTropic_Crye_od_pants_Camo", "VSM_MulticamTropic_Crye_od_shirt_Camo", "VSM_MulticamTropic_Crye_tan_pants_Camo", "VSM_MulticamTropic_Crye_tan_shirt_Camo", "VSM_MulticamTropic_Crye_Camo",
	"VSM_OGA_Crye_Grey_pants_Camo", "VSM_OGA_Crye_od_pants_Camo", "VSM_OGA_Crye_grey_od_pants_Camo", "VSM_OGA_Crye_grey_tan_pants_Camo", "VSM_OGA_Crye_grey_Camo", "VSM_OGA_Crye_od_grey_pants_Camo", "VSM_OGA_Crye_od_tan_pants_Camo", "VSM_OGA_Crye_od_Camo", "VSM_OGA_Crye_Camo"
];

if(uniform _player in _array) then {_ret = true};

_ret