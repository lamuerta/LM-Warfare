/**
 * _player : la cible du changement d'uniforme
 */
 
params["_player"];

_ret = false;
_array = ["VSM_AOR1_Crye_Camo", "VSM_AOR1_Crye_SS_Camo", "VSM_M81_Crye_Camo", "VSM_M81_Crye_SS_Camo", "VSM_MulticamTropic_Crye_Camo", "VSM_MulticamTropic_Crye_SS_Camo"];

if(uniform _player in _array) then {_ret = true};

_ret