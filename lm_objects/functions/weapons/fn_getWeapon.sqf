/**
 * _player : la cible du changement d'uniforme
 */
 
params["_player","_obj"];

_new = "";
_titre = "";
switch(_obj) do
{
	// Si on veut AFG, vient soit de VFG, soit de VFGCQB
	case "AFG": {
		_new = switch(primaryWeapon _player) do {
			case "SMA_ACRREM": { "SMA_ACRREMAFG" };
			case "SMA_ACRREMblk": { "SMA_ACRREMAFGblk" };
			case "SMA_ACRREMMOE": { "SMA_ACRREMAFG" };
			case "SMA_ACRREMMOEblk": { "SMA_ACRREMAFGblk" };
			case "SMA_ACRREMMOECQB": { "SMA_ACRREMAFGCQB" };
			case "SMA_ACRREMMOECQBblk": { "SMA_ACRREMAFGCQBblk" };
			case "SMA_HK416vfg": { "SMA_HK416afg" };
			case "SMA_HK416MOEOD": { "SMA_HK416afgOD" };
			case "SMA_HK416CUSTOMCQBvfgB": { "SMA_HK416CUSTOMCQBafgB" };
			case "SMA_HK416CUSTOMvfgB": { "SMA_HK416CUSTOMafgB" };
		};
		_titre = "STR_progress_mountAFG";
	};
	// Si on veut VFG, vient soit de AFG, soit de AFGCQB
	case "VFG": {
		_new = switch(primaryWeapon _player) do {
			case "SMA_ACRREM": { "SMA_ACRREMMOE" };
			case "SMA_ACRREMblk": { "SMA_ACRREMMOEblk" };
			case "SMA_ACRREMAFG": { "SMA_ACRREMMOE" };
			case "SMA_ACRREMAFGblk": { "SMA_ACRREMMOEblk" };
			case "SMA_ACRREMAFGCQB": { "SMA_ACRREMMOECQB" };
			case "SMA_ACRREMAFGCQBblk": { "SMA_ACRREMMOECQBblk" };
			case "SMA_HK416afg": { "SMA_HK416vfg" };
			case "SMA_HK416afgOD": { "SMA_HK416MOEOD" };
			case "SMA_HK416CUSTOMCQBafgB": { "SMA_HK416CUSTOMCQBvfgB" };
			case "SMA_HK416CUSTOMafgB": { "SMA_HK416CUSTOMvfgB" };
		};
		_titre = "STR_progress_mountVFG";
	};
	// Si on veut CQB, vient soit de AFG, soit de VFG, soit de GL
	case "CQB": {
		_new = switch(primaryWeapon _player) do {
			case "SMA_ACRREMAFG": { "SMA_ACRREMAFGCQB" };
			case "SMA_ACRREMMOE": { "SMA_ACRREMMOECQB" };
			case "SMA_ACRREMGL": { "SMA_ACRREMCQBGL" };
			case "SMA_ACRREMAFGblk": { "SMA_ACRREMAFGCQBblk" };
			case "SMA_ACRREMMOEblk": { "SMA_ACRREMMOECQBblk" };
			case "SMA_ACRREMGL_B": { "SMA_ACRREMCQBGL_B" };
			case "SMA_HK416afg": { "SMA_HK416afgQCB" };
			case "SMA_HK416CUSTOMafgB": { "SMA_HK416CUSTOMCQBafgB" };
			case "SMA_HK416CUSTOMvfgB": { "SMA_HK416CUSTOMCQBvfgB" };
		};
		_titre = "STR_progress_mountCQB";
	};
	// STD ne vient jamais de CQB
	case "STD": {
		_new = switch(primaryWeapon _player) do {
			case "SMA_ACRREMAFG": { "SMA_ACRREM" };
			case "SMA_ACRREMMOE": { "SMA_ACRREM" };
			case "SMA_ACRREMAFGblk": { "SMA_ACRREMblk" };
			case "SMA_ACRREMMOEblk": { "SMA_ACRREMblk" };
		};
		_titre = "STR_progress_mountSTD";
	};
	// LNG vient soit de VFGCQB, soit de AFGCQB, soit de CQBGL
	case "LNG": {
		_new = switch (primaryWeapon _player) do {
			case "SMA_ACRREMAFGCQB": { "SMA_ACRREMAFG" };
			case "SMA_ACRREMMOECQB": { "SMA_ACRREMMOE" };
			case "SMA_ACRREMCQBGL": { "SMA_ACRREMGL" };
			case "SMA_ACRREMAFGCQBblk": { "SMA_ACRREMAFGblk" };
			case "SMA_ACRREMMOECQBblk": { "SMA_ACRREMMOEblk" };
			case "SMA_ACRREMCQBGL_B": { "SMA_ACRREMGL_B" };
			case "SMA_HK416afgQCB": { "SMA_HK416afg" };
			case "SMA_HK416CUSTOMCQBafgB": { "SMA_HK416CUSTOMafgB" };
			case "SMA_HK416CUSTOMCQBvfgB": { "SMA_HK416CUSTOMvfgB" };
		};
		_titre = "STR_progress_mountLNG";
	};
	case "SND": {
		_new = switch (primaryWeapon _player) do {
			case "hlc_rifle_awmagnum": { "hlc_rifle_awcovert" };
			case "hlc_rifle_awmagnum_BL": { "hlc_rifle_awcovert_BL" };
			case "hlc_rifle_awmagnum_FDE": { "hlc_rifle_awcovert_FDE" };
		};
		_titre = "STR_progress_mountSND";
	};
	case "GHI": {
		_new = switch (primaryWeapon _player) do {
			case "hlc_rifle_awmagnum": { "hlc_rifle_awMagnum_OD_ghillie" };
			case "hlc_rifle_awmagnum_BL": { "hlc_rifle_awMagnum_BL_ghillie" };
			case "hlc_rifle_awmagnum_FDE": { "hlc_rifle_awMagnum_FDE_ghillie" };
		};
		_titre = "STR_progress_mountGHI";
	};
	case "AWM": {
		_new = switch (primaryWeapon _player) do {
			case "hlc_rifle_awcovert": { "hlc_rifle_awmagnum" };
			case "hlc_rifle_awMagnum_OD_ghillie": { "hlc_rifle_awmagnum" };
			case "hlc_rifle_awcovert_BL": { "hlc_rifle_awmagnum_BL" };
			case "hlc_rifle_awMagnum_BL_ghillie": { "hlc_rifle_awmagnum_BL" };
			case "hlc_rifle_awcovert_FDE": { "hlc_rifle_awmagnum_FDE" };
			case "hlc_rifle_awMagnum_FDE_ghillie": { "hlc_rifle_awmagnum_FDE" };
		};
		_titre = "STR_progress_mountAWM";
	};
	case "TST": {
		_new = switch (primaryWeapon _player) do {
			case "hlc_smg_mp5a2": { "hlc_smg_mp5a3" };
			case "hlc_smg_mp5a4": { "hlc_smg_MP5N" };
			case "hlc_smg_mp5sd5": { "hlc_smg_mp5sd6" };
		};
		_titre = "STR_progress_mountTST";
	};
	case "FST": {
		_new = switch (primaryWeapon _player) do {
			case "hlc_smg_mp5a3": { "hlc_smg_mp5a2" };
			case "hlc_smg_MP5N": { "hlc_smg_mp5a4" };
			case "hlc_smg_mp5sd6": { "hlc_smg_mp5sd5" };
		};
		_titre = "STR_progress_mountFST";
	};
	case "LGL": {
		_new = switch (primaryWeapon _player) do {
			case "hlc_smg_MP5N": { "hlc_smg_9mmar" };
		};
		_titre = "STR_progress_mountLGL";
	};
	case "CST": {
		_new = switch (primaryWeapon _player) do {
			case "SMA_HK416afg": { "SMA_HK416CUSTOMafgB" };
			case "SMA_HK416vfg": { "SMA_HK416CUSTOMvfgB" };
		};
		_titre = "STR_progress_mountCST";
	};
	case "IRS": {
		_new = switch (primaryWeapon _player) do {
			case "SMA_HK416CUSTOMafgB": { "SMA_HK416afg" };
			case "SMA_HK416CUSTOMvfgB": { "SMA_HK416vfg" };
		};
		_titre = "STR_progress_mountIRS";
	};
};

// On met le perso à genoux
[_player] call ace_common_fnc_goKneeling;

// On lance la progression
[
	6,
	[_player, _new],
	{
		params["_args"];
		_args call LM_fnc_transferWeaponAccessories;
	},
	{},
	localize _titre
] call ace_common_fnc_progressBar;