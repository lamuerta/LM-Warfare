#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a

class LM_SPECIAL_MAN : B_Soldier_base_F
{
	scope = protected;
	faction = LA_MUERTA;
	editorSubcategory = LM_SPECIAL;
	author = "[LM] Cheitan";
};

class LM_SPECIAL_HELIPILOTE : LM_SPECIAL_MAN
{
	scope = public;
	displayName = $STR_specific_helipilot;
	uniformClass = "U_B_HeliPilotCoveralls";
	weapons[] = {Throw, Put};
	respawnWeapons[] = {Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER", "ACE_MapTools"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER", "ACE_MapTools"};
	linkedItems[] = {"H_PilotHelmetHeli_B", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152"};
	respawnLinkedItems[] = {"H_PilotHelmetHeli_B", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152"};
	magazines[] = {};
	respawnMagazines[] = {};
};

class LM_SPECIAL_PILOTE : LM_SPECIAL_MAN
{
	scope = public;
	displayName = $STR_specific_pilot;
	uniformClass = "U_B_PilotCoveralls";
	backpack = "B_Parachute";
	weapons[] = {hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER", "ACE_MapTools"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER", "ACE_MapTools"};
	linkedItems[] = {"H_PilotHelmetFighter_B", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGPS"};
	respawnLinkedItems[] = {"H_PilotHelmetFighter_B", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152", "ItemGPS"};
	magazines[] = {mag_2("B_IR_Grenade"), mag_3("16Rnd_9x21_Mag"), mag_2("SmokeShellGreen")};
	respawnMagazines[] = {mag_2("B_IR_Grenade"), mag_3("16Rnd_9x21_Mag"), mag_2("SmokeShellGreen")};
};

class LM_SPECIAL_TANKPILOTE : LM_SPECIAL_MAN
{
	scope = protected;
	displayName = $STR_specific_armordriver;
	uniformClass = "VSM_AOR1_Crye_SS_od_shirt_Camo";
	weapons[] = {Throw, Put};
	respawnWeapons[] = {Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_CarrierRig_Operator_AOR1", "H_HelmetCrew_B", "G_Tactical_Clear", "ItemWatch", "tf_anprc152"};
	respawnLinkedItems[] = {"VSM_CarrierRig_Operator_AOR1", "H_HelmetCrew_B", "G_Tactical_Clear", "ItemWatch", "tf_anprc152"};
	magazines[] = {};
	respawnMagazines[] = {};
};

class LM_SPECIAL_SPOTTER : LM_SPECIAL_MAN
{
	scope = public;
	displayName = $STR_specific_spotter;
	uniformClass = "VSM_AOR1_tan_shirt_Camo_SS";
	backpack = "LM_RADIO_BASE";
	weapons[] = {SMA_ACRREMMOE, hgun_Rook40_F, Laserdesignator, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMMOE, hgun_Rook40_F, Laserdesignator, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER", "ACE_ATragMX", "ACE_Kestrel4500", "ACE_Flashlight_XL50", "ACE_microDAGR", "ACE_MapTools", mag_2("ACE_CableTie"), "SMA_supp1TB_556", "SMA_eotech552_3XDOWN_des", "SMA_Gripod_01"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER", "ACE_ATragMX", "ACE_Kestrel4500", "ACE_Flashlight_XL50","ACE_microDAGR", "ACE_MapTools", mag_2("ACE_CableTie"), "SMA_supp1TB_556", "SMA_eotech552_3XDOWN_des", "SMA_Gripod_01"};
	linkedItems[] = {"VSM_CarrierRig_Gunner_AOR1", "VSM_Bowman_cap_Tan", "ItemWatch", "tf_anprc152", "ItemMap", "ItemCompass", "NVGoggles"};
	respawnLinkedItems[] = {"VSM_CarrierRig_Gunner_AOR1", "VSM_Bowman_cap_Tan", "ItemWatch", "tf_anprc152", "ItemMap", "ItemCompass", "NVGoggles"};
	magazines[] = {STD_mag_load, "SmokeShellBlue", "SmokeShellGreen", "APERSTripMine_Wire_Mag", "APERSMine_Range_Mag"};
	respawnMagazines[] = {STD_mag_load, "SmokeShellBlue", "SmokeShellGreen", "APERSTripMine_Wire_Mag", "APERSMine_Range_Mag"};
};

class LM_SPECIAL_SNIPER : LM_SPECIAL_MAN
{
	scope = public;
	displayName = $STR_specific_sniper;
	uniformClass = "VSM_AOR1_tan_shirt_Camo_SS";
	weapons[] = {LM_SNIPER_408, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {LM_SNIPER_408, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER", mag_2("ACE_CableTie")};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER", mag_2("ACE_CableTie")};
	linkedItems[] = {"VSM_CarrierRig_Gunner_AOR1", "VSM_Bowman_cap_Tan", "ItemWatch", "tf_anprc152","NVGoggles"};
	respawnLinkedItems[] = {"VSM_CarrierRig_Gunner_AOR1", "VSM_Bowman_cap_Tan", "ItemWatch", "tf_anprc152", "NVGoggles"};
	magazines[] = {mag_3("16Rnd_9x21_Mag"),"B_IR_Grenade", mag_2("SmokeShell"), mag_2("HandGrenade"), mag_3("7Rnd_408_Mag")};
	respawnMagazines[] = {mag_3("16Rnd_9x21_Mag"), "B_IR_Grenade", mag_2("SmokeShell"), mag_2("HandGrenade"), mag_3("7Rnd_408_Mag")};
};

// class LM_SPECIAL_DIVER : LM_SPECIAL_MAN
// {
	// scope = public;
	// displayName = "Plongeur";
	// uniformClass = "LM_wetsuit";
// };