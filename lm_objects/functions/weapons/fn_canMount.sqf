/**
 * _player : la cible du changement d'uniforme
 */
 
params["_player","_obj"];

_ret = false;

_canAFG = ["SMA_ACRREM", "SMA_ACRREMMOE", "SMA_ACRREMMOECQB", "SMA_ACRREMblk", "SMA_ACRREMMOEblk", "SMA_ACRREMMOECQBblk", "SMA_HK416vfg", "SMA_HK416MOEOD", "SMA_HK416CUSTOMCQBvfgB", "SMA_HK416CUSTOMvfgB"]; // poignée ergonomique
_canVFG = ["SMA_ACRREM", "SMA_ACRREMAFG", "SMA_ACRREMAFGCQB", "SMA_ACRREMblk", "SMA_ACRREMAFGblk", "SMA_ACRREMAFGCQBblk", "SMA_HK416afg", "SMA_HK416afgOD", "SMA_HK416CUSTOMCQBafgB", "SMA_HK416CUSTOMafgB"]; // poignée verticale
_canCQB = ["SMA_ACRREMAFG", "SMA_ACRREMMOE", "SMA_ACRREMGL", "SMA_ACRREMAFGblk", "SMA_ACRREMMOEblk", "SMA_ACRREMGL_B", "SMA_HK416afg", "SMA_HK416CUSTOMvfgB", "SMA_HK416CUSTOMafgB"]; // canon court
_canSTD = ["SMA_ACRREMAFG", "SMA_ACRREMMOE", "SMA_ACRREMAFGblk", "SMA_ACRREMMOEblk"]; // garde-main standard
_canLNG = ["SMA_ACRREMMOECQB", "SMA_ACRREMAFGCQB", "SMA_ACRREMCQBGL", "SMA_ACRREMMOECQBblk", "SMA_ACRREMAFGCQBblk", "SMA_ACRREMCQBGL_B", "SMA_HK416afgQCB", "SMA_HK416CUSTOMCQBafgB", "SMA_HK416CUSTOMCQBvfgB"]; // canon long
_canSND = ["hlc_rifle_awmagnum", "hlc_rifle_awmagnum_BL", "hlc_rifle_awmagnum_FDE"]; // canon furtif
_canGHI = ["hlc_rifle_awmagnum", "hlc_rifle_awmagnum_BL", "hlc_rifle_awmagnum_FDE"]; // ghillie de canon
_canAWM = ["hlc_rifle_awMagnum_OD_ghillie", "hlc_rifle_awMagnum_BL_ghillie", "hlc_rifle_awMagnum_FDE_ghillie", "hlc_rifle_awcovert", "hlc_rifle_awcovert_BL", "hlc_rifle_awcovert_FDE"]; // canon standard AWM
_canTST = ["hlc_smg_mp5a2", "hlc_smg_mp5a4", "hlc_smg_mp5sd5"]; // crosse téléscopique MP5
_canFST = ["hlc_smg_mp5a3", "hlc_smg_MP5N", "hlc_smg_mp5sd6"]; // crosse pleine MP5
_canLGL = ["hlc_smg_MP5N"]; // GL MP5 ==> TODO : démontage en sauvegardant la grenade éventuelle
_canCST = ["SMA_HK416afg", "SMA_HK416vfg"]; // mode custom pour les HK416
_canIRS = ["SMA_HK416CUSTOMafgB", "SMA_HK416CUSTOMvfgB"]; // mode standard pour les HK416

_tab = switch(_obj) do
{
	case "AFG": { _canAFG };
	case "VFG": { _canVFG };
	case "CQB": { _canCQB };
	case "STD": { _canSTD };
	case "LNG": { _canLNG };
	case "SND": { _canSND };
	case "GHI": { _canGHI };
	case "AWM": { _canAWM };
	case "TST": { _canTST };
	case "FST": { _canFST };
	case "LGL": { _canLGL };
	case "CST": { _canCST };
	case "IRS": { _canIRS };
};

if(primaryWeapon _player in _tab) then {_ret = true; };

_ret