/*
 * Author : [LM] Cheitan
 * Add anti-puncture spray action for all wheels. Called from init EH.
 *
 * Arguments :
 * 0: Vehicle <OBJECT>
 *
 * Return Value :
 * None
 *
 * Example :
 * [vehicle] call LM_fnc_addApsActions.sqf
 *
 */

if (!hasInterface) exitWith {};

params ["_vehicle"];
private _type = typeOf _vehicle;

// do nothing if the class is already initialized
private _initializedClasses = missionNamespace getVariable "lm_aps_initializedClasses";
if (_type in _initializedClasses) exitWith {};

// get hitpoints of wheels with their selections
([_vehicle] call ace_repair_fnc_getWheelHitPointsWithSelections) params ["_wheelHitPoints", "_wheelHitSelections"];

private _hitPointsAddedNames = [];
private _hitPointsAddedStrings = [];
private _hitPointsAddedAmount = [];
private _processedHitpoints = [];

{
    private _selection = _x;
    private _hitpoint = toLower (_wheelHitPoints select _forEachIndex);

	// Wheels should always be unique
	if (_hitpoint in _processedHitpoints) exitWith {systemChat "Duplicated Wheel"};

	private _position = compile format ["(_target selectionPosition ['%1', 'HitPoints']) vectorAdd [0,-0.4,0];", _selection];

	// An action to use APS on the wheel is required
	private _name = format ["APS_%1_%2", _forEachIndex, _hitpoint];
	private _text = localize "str_aps_use";
	private _condition = {[_this select 0, _this select 1, _this select 2 select 0] call LM_fnc_canUseAps};
	private _statement = {[_this select 0, _this select 1, _this select 2 select 0] call LM_fnc_doUseAps};
	private _action = [_name, _text, "lm_aps\ui\spray.paa", _statement, _condition, {}, [_hitpoint], _position, 2] call ace_interact_menu_fnc_createAction;
	[_type, 0, [], _action] call ace_interact_menu_fnc_addActionToClass;

	_processedHitPoints pushBack _hitpoint;
} forEach _wheelHitSelections; // pour chaque roue détectée

// set class as initialized
_initializedClasses pushBack _type;
missionNamespace setVariable ["lm_aps_initializedClasses", _initializedClasses];