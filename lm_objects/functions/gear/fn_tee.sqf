/**
 * _player : la cible du changement d'uniforme
 * _tee : true pour se mettre en tshirt, false sinon
 */
 
params["_player", "_tee"];

_newUniform = [_player, _tee] call LM_fnc_getTee;

[_player, _newUniform] call LM_fnc_transferUniformStuff;