class LM_rollsleeves
{
	displayName = "$STR_actions_rollsleeves";
	condition = "[_player] call LM_fnc_isAbleToRollSleeves";
	statement = "[_player, true] call LM_fnc_sleeves";
};
class LM_unrollsleeves
{
	displayName = "$STR_actions_unrollsleeves";
	condition = "[_player] call LM_fnc_isAbleToUnrollSleeves";
	statement = "[_player, false] call LM_fnc_sleeves";
};
class LM_tee
{
	displayName = "$STR_actions_tee";
	condition = "[_player] call LM_fnc_isAbleToTee";
	statement = "[_player, true] call LM_fnc_tee";
};
class LM_untee
{
	displayName = "$STR_actions_untee";
	condition = "[_player] call LM_fnc_isAbleToUntee";
	statement = "[_player, false] call LM_fnc_tee";
};