params["_truck"];

if(isServer) then
{
	_turret = "B_AAA_System_01_F" createVehicle [0,0,0];
	createVehicleCrew _turret;
	_turret attachTo [_truck,[-0.032,-2.918,-0.632]];
	_turret setVectorDirAndUp [[0,1,0],[-0,-0,1]];
	_turret setDir 0;
	[_turret, 0, 0] call BIS_fnc_setPitchBank;
	_turret disableAI "ALL";
	_truck setVariable ["LM_mobile_AA", _turret, true];
};