/*
 * Author : [LM] Cheitan
 * Add camonet actions to available vehicles
 *
 * Arguments :
 * 0: Vehicle <OBJECT>
 *
 * Return Value :
 * None
 *
 * Example :
 * [vehicle] call LM_fnc_addCAMOactions
 *
 */

if (!hasInterface) exitWith {};

params ["_vehicle"];
private _type = typeOf _vehicle;

// do nothing if the class is already initialized
private _initializedClasses = missionNamespace getVariable ["lm_camo_initializedClasses", []];
if (_type in _initializedClasses) exitWith {};

// whitelist of allowed hull camo vehicles
if(isClass (configFile >> "CfgVehicles" >> _type >> "AnimationSources" >> "showCamonetHull")) then {
	// An action to mount CAMO on hull is required
	_condition = {[_this select 0, "hull", 1] call LM_fnc_canCAMO};
	_statement = {[_this select 0, "hull", 1] call LM_fnc_doCAMO};
	_action = ["LM_CAMO_hull", localize "STR_action_camo_hull", "a3\ui_f\data\igui\cfg\actions\repair_ca.paa", _statement, _condition] call ace_interact_menu_fnc_createAction;
	[_type, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToClass;

	// An action to unmount CAMO from hull is required
	_condition = {[_this select 0, "hull", 0] call LM_fnc_canCAMO};
	_statement = {[_this select 0, "hull", 0] call LM_fnc_doCAMO};
	_action = ["LM_unCAMO_hull", localize "STR_action_uncamo_hull", "a3\ui_f\data\igui\cfg\actions\repair_ca.paa", _statement, _condition] call ace_interact_menu_fnc_createAction;
	[_type, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToClass;
};

// whitelist of allowed turret CAMO vehicles
if(isClass (configFile >> "CfgVehicles" >> _type >> "AnimationSources" >> "showCamonetTurret")) then {
	// An action to mount CAMO on turret is required
	_condition = {[_this select 0, "turret", 1] call LM_fnc_canCAMO};
	_statement = {[_this select 0, "turret", 1] call LM_fnc_doCAMO};
	_action = ["LM_CAMO_turret", localize "STR_action_camo_turret", "a3\ui_f\data\igui\cfg\actions\repair_ca.paa", _statement, _condition] call ace_interact_menu_fnc_createAction;
	[_type, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToClass;

	// An action to unmount CAMO from turret is required
	_condition = {[_this select 0, "turret", 0] call LM_fnc_canCAMO};
	_statement = {[_this select 0, "turret", 0] call LM_fnc_doCAMO};
	_action = ["LM_unCAMO_turret", localize "STR_action_uncamo_turret", "a3\ui_f\data\igui\cfg\actions\repair_ca.paa", _statement, _condition] call ace_interact_menu_fnc_createAction;
	[_type, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToClass;
};

// set class as initialized
_initializedClasses pushBack _type;
missionNamespace setVariable ["lm_camo_initializedClasses", _initializedClasses];