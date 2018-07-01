class LM_mountTST
{
	displayName = "$STR_actions_mountTST";
	condition = "[_player, 'TST'] call LM_fnc_canMount";
	statement = "[_player, 'TST'] call LM_fnc_getWeapon";
};
class LM_mountFST
{
	displayName = "$STR_actions_mountFST";
	condition = "[_player, 'FST'] call LM_fnc_canMount";
	statement = "[_player, 'FST'] call LM_fnc_getWeapon";
};
class LM_mountLGL
{
	displayName = "$STR_actions_mountLGL";
	condition = "[_player, 'LGL'] call LM_fnc_canMount";
	statement = "[_player, 'LGL'] call LM_fnc_getWeapon";
};
class LM_mountCST
{
	displayName = "$STR_actions_mountCST";
	condition = "[_player, 'CST'] call LM_fnc_canMount";
	statement = "[_player, 'CST'] call LM_fnc_getWeapon";
};
class LM_mountIRS
{
	displayName = "$STR_actions_mountIRS";
	condition = "[_player, 'IRS'] call LM_fnc_canMount";
	statement = "[_player, 'IRS'] call LM_fnc_getWeapon";
};