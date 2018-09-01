/*
 * Author : [LM] Cheitan
 * (Un)Mount CAMO on given part
 *
 * Arguments :
 * 0: Vehicle <OBJECT>
 * 1: Part <STRING>
 * 2: (un)mount <NUMBER>
 *
 * Return Value :
 * None
 *
 * Example :
 * [vehicle, "hull", 1] call LM_fnc_doCAMO
 *
 */

params["_vehicle", "_part", "_mount"];

// On récupère les sources liées
_anim = switch (_part) do {
	case "hull": { "showCamonetHull" };
	case "turret": { "showCamonetTurret" };
	default { [""] };
};

[player] call ace_common_fnc_goKneeling;

// Callback succès
_success = {
	(_this select 0) params["_vehicle", "_anim", "_mount"];
	// Récupération des animations dépendantes
	_anims = [_anim] + (getArray(configFile >> "CfgVehicles" >> typeOf _vehicle >> "AnimationSources" >> _anim >> "forceAnimate") select {typeName _x isEqualTo "STRING"});
	// Pour chaque source on anim
	{
		_vehicle animateSource [_x, _mount];
	} forEach _anims;
};

// Barre de chargement
_time = 20;
if(_part isEqualTo "turret") then {_time = 10};
[_time, [_vehicle, _anim, _mount], _success, {}, localize "STR_camo_inprogress"] call ace_common_fnc_progressBar;


