/**
 * _player : la cible du changement d'uniforme
 * _roll : true pour rouler, false sinon
 */
 
params["_player", "_roll"];

_new = "";

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
if(_roll) then {
	_new = _array_rolled select (_array find (uniform _player));
} else {
	_new = _array select (_array_rolled find (uniform _player));
};

_new