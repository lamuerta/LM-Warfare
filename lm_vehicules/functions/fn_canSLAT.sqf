/*
 * Author : [LM] Cheitan
 * Check if SLAT can be added on given part.
 *
 * Arguments :
 * 0: Vehicle <OBJECT>
 * 1: Part <STRING>
 * 2: (un)mount <NUMBER>
 *
 * Return Value :
 * Boolean: true if SLAT can be mounted
 *
 * Example :
 * [vehicle, "hull", 1] call LM_fnc_canSLAT
 *
 */

 params["_vehicle", "_part", "_mount"];

 _return = switch (_part) do {
	 case "hull": { (_vehicle animationSourcePhase "showSLATHull" != _mount) };
	 case "turret": { (_vehicle animationSourcePhase "showSLATTurret" != _mount) };
	 default { true };
 };

 _return