class LM_mountAFG
{
	displayName = "$STR_actions_mountAFG";
	condition = "[_player, 'AFG'] call LM_fnc_canMount";
	statement = "[_player, 'AFG'] call LM_fnc_getWeapon";
};
class LM_mountVFG
{
	displayName = "$STR_actions_mountVFG";
	condition = "[_player, 'VFG'] call LM_fnc_canMount";
	statement = "[_player, 'VFG'] call LM_fnc_getWeapon";
};
class LM_mountCQB
{
	displayName = "$STR_actions_mountCQB";
	condition = "[_player, 'CQB'] call LM_fnc_canMount";
	statement = "[_player, 'CQB'] call LM_fnc_getWeapon";
};
class LM_mountSTD
{
	displayName = "$STR_actions_mountSTD";
	condition = "[_player, 'STD'] call LM_fnc_canMount";
	statement = "[_player, 'STD'] call LM_fnc_getWeapon";
};
class LM_mountLNG
{
	displayName = "$STR_actions_mountLNG";
	condition = "[_player, 'LNG'] call LM_fnc_canMount";
	statement = "[_player, 'LNG'] call LM_fnc_getWeapon";
};