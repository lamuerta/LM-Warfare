/**
 * _player : la cible du changement d'uniforme
 */
 
params["_player"];

_ret = false;
_array = ["VSM_AOR1_Crye_Tee_Camo", "VSM_M81_Crye_Tee_Camo", "VSM_MulticamTropic_Crye_Tee_Camo"];

if(uniform _player in _array) then {_ret = true};

_ret