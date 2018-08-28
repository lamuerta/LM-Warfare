/*
 * Author : [LM] Cheitan
 * (Un)Mount SLAT on given part
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
 * [vehicle, "hull", 1] call LM_fnc_doSLAT
 *
 */

params["_vehicle", "_part", "_mount"];

// On récupère les sources liées (en général yen a qu'une)
_anims = switch (_part) do {
	case "hull": { ["showSLATHull"] };
	case "turret": { ["showSLATTurret"] };
	default { };
};

// Pour chaque source on anim (en général à 0 ou à 1)
{
	_vehicle animateSource [_x, _mount];
} forEach _anims;