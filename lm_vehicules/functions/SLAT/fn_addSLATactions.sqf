/*
 * Author : [LM] Cheitan
 * Add SLAT actions to available vehicles
 *
 * Arguments :
 * 0: Vehicle <OBJECT>
 *
 * Return Value :
 * None
 *
 * Example :
 * [vehicle] call LM_fnc_addSLATactions
 *
 */

if (!hasInterface) exitWith {};

params ["_vehicle"];
private _type = typeOf _vehicle;

// do nothing if the class is already initialized
private _initializedClasses = missionNamespace getVariable ["lm_slat_initializedClasses", []];
if (_type in _initializedClasses) exitWith {};

// whitelist of allowed hull SLAT vehicles
if(isClass (configFile >> "CfgVehicles" >> _type >> "AnimationSources" >> "showSLATHull")) then {
	// An action to mount SLAT on hull is required
	_condition = {[_this select 0, "hull", 1] call LM_fnc_canSLAT};
	_statement = {[_this select 0, "hull", 1] call LM_fnc_doSLAT};
	_action = ["LM_SLAT_hull", localize "STR_action_slat_hull", "a3\ui_f\data\igui\cfg\actions\repair_ca.paa", _statement, _condition] call ace_interact_menu_fnc_createAction;
	[_type, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToClass;

	// An action to unmount SLAT from hull is required
	_condition = {[_this select 0, "hull", 0] call LM_fnc_canSLAT};
	_statement = {[_this select 0, "hull", 0] call LM_fnc_doSLAT};
	_action = ["LM_unSLAT_hull", localize "STR_action_unslat_hull", "a3\ui_f\data\igui\cfg\actions\repair_ca.paa", _statement, _condition] call ace_interact_menu_fnc_createAction;
	[_type, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToClass;
};

// whitelist of allowed turret SLAT vehicles
if(isClass (configFile >> "CfgVehicles" >> _type >> "AnimationSources" >> "showSLATTurret")) then {
	// An action to mount SLAT on turret is required
	_condition = {[_this select 0, "turret", 1] call LM_fnc_canSLAT};
	_statement = {[_this select 0, "turret", 1] call LM_fnc_doSLAT};
	_action = ["LM_SLAT_turret", localize "STR_action_slat_turret", "a3\ui_f\data\igui\cfg\actions\repair_ca.paa", _statement, _condition] call ace_interact_menu_fnc_createAction;
	[_type, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToClass;

	// An action to unmount SLAT from turret is required
	_condition = {[_this select 0, "turret", 0] call LM_fnc_canSLAT};
	_statement = {[_this select 0, "turret", 0] call LM_fnc_doSLAT};
	_action = ["LM_unSLAT_turret", localize "STR_action_unslat_turret", "a3\ui_f\data\igui\cfg\actions\repair_ca.paa", _statement, _condition] call ace_interact_menu_fnc_createAction;
	[_type, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToClass;
};

// set class as initialized
_initializedClasses pushBack _type;
missionNamespace setVariable ["lm_slat_initializedClasses", _initializedClasses];