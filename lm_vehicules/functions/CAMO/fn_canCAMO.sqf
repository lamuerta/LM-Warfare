/*
 * Author : [LM] Cheitan
 * Check if CAMO can be added on given part.
 *
 * Arguments :
 * 0: Vehicle <OBJECT>
 * 1: Part <STRING>
 * 2: (un)mount <NUMBER>
 *
 * Return Value :
 * Boolean: true if CAMO can be mounted
 *
 * Example :
 * [vehicle, "hull", 1] call LM_fnc_canCAMO
 *
 */

 params["_vehicle", "_part", "_mount"];

 _return = switch (_part) do {
	 case "hull": { (_vehicle animationSourcePhase "showCamonetHull" != _mount) };
	 case "turret": { (_vehicle animationSourcePhase "showCamonetTurret" != _mount) };
	 default { false };
 };

 _return