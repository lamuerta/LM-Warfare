/**
 * _player : la cible du changement d'uniforme
 * _roll : true pour rouler, false sinon
 */
 
params["_player", "_roll"];

_newUniform = [_player, _roll] call LM_fnc_getNewUniform;

[_player, _newUniform] call LM_fnc_transferUniformStuff;