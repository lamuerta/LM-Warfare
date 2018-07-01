class LM_mountSND
{
	displayName = "$STR_actions_mountSND";
	condition = "[_player, 'SND'] call LM_fnc_canMount";
	statement = "[_player, 'SND'] call LM_fnc_getWeapon";
};
class LM_mountGHI
{
	displayName = "$STR_actions_mountGHI";
	condition = "[_player, 'GHI'] call LM_fnc_canMount";
	statement = "[_player, 'GHI'] call LM_fnc_getWeapon";
};
class LM_mountAWM
{
	displayName = "$STR_actions_mountAWM";
	condition = "[_player, 'AWM'] call LM_fnc_canMount";
	statement = "[_player, 'AWM'] call LM_fnc_getWeapon";
};