/*
 * Author : [LM] Cheitan
 * Check if anti-puncture spray can be used on given wheel.
 *
 * Arguments :
 * 0: Vehicle to repair <OBJECT>
 * 1: Unit trying to use APS <OBJECT>
 * 2: Selected hitpoint <STRING>
 *
 * Return Value :
 * Boolean, true for yes.
 *
 * Example :
 * _canUse = [player, vehicle, "hitlfwheel"] call LM_fnc_canUseAps.sqf
 *
 */

 params ["_target","_unit", "_hitPoint"];

if !([_unit, _target, ["isNotDragging", "isNotCarrying", "isNotOnLadder"]] call ace_common_fnc_canInteractWith) exitWith {false};
if (_target getHitPointDamage _hitPoint > 0.8) exitWith {false};
if (_target getHitPointDamage _hitPoint < 0.2) exitWith {false};

// If all conditions and satisfied, depends only on whether there is a valid item in inventory or not.
("LM_AP_Spray" in (vestItems _unit + uniformItems _unit + backpackItems _unit))