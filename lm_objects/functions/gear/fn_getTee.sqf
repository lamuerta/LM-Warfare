/**
 * _player : la cible du changement d'uniforme
 * _tee : true pour se mettre en tshirt, false sinon
 */
 
params["_player", "_tee"];

_new = "";

_array = ["VSM_AOR1_Crye_Camo", "VSM_AOR1_Crye_SS_Camo", "VSM_M81_Crye_Camo", "VSM_M81_Crye_SS_Camo", "VSM_MulticamTropic_Crye_Camo", "VSM_MulticamTropic_Crye_SS_Camo"];

_array_tee = ["VSM_AOR1_Crye_Tee_Camo", "VSM_AOR1_Crye_Tee_Camo", "VSM_M81_Crye_Tee_Camo", "VSM_M81_Crye_Tee_Camo", "VSM_MulticamTropic_Crye_Tee_Camo", "VSM_MulticamTropic_Crye_Tee_Camo"];

if(_tee) then {
	_indice = _array find (uniform _player);
	_new = _array_tee select _indice;
} else {
	_indice = _array_tee find (uniform _player);
	_new = _array select _indice;
};

_new