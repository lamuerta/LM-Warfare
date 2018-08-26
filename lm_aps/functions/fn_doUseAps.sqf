/*
 * Author : [LM] Cheitan
 * Use anti-puncture spray on given wheel.
 *
 * Arguments :
 * 0: Vehicle to repair <OBJECT>
 * 1: Unit trying to use APS <OBJECT>
 * 2: Selected hitpoint <STRING>
 *
 * Return Value :
 * None
 *
 * Example :
 * [player, vehicle, "hitlfwheel"] call LM_fnc_doUseAps.sqf
 *
 */

params ["_target", "_unit", "_hitPoint"];

_success = {
	(_this select 0) params ["_target", "_unit", "_hitpoint"];
	["ace_repair_setWheelHitPointDamage", [_target, _hitPoint, 0.1], _target] call CBA_fnc_targetEvent;
	_unit removeItem "LM_AP_Spray";
};

[_unit, "aps_sound"] remoteExec ["say3D", 0];
[10, [_target, _unit, _hitPoint], _success, {}, localize "str_aps_using"] call ace_common_fnc_progressBar;