/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////             UNITES MULTICAM          /////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class B_Mortar_01_F; //mortier monté
class LM_Mk6_mortar_base : B_Mortar_01_F
{
	scope = 2;
	author = "[LM] Cheitan";
	displayName = $STR_altisunits_mk6mortar;
	forceInGarage = 1;
	class assembleInfo {
		primary = false;
		base = "";
		assembleTo = "";
		dissasembleTo[] = {"LM_Mk6_tube_base", "LM_Mk6_bipod_base"};
		displayName = "";
	};
};
class B_Mortar_01_support_F; //bipied de mortier
class LM_Mk6_bipod_base : B_Mortar_01_support_F
{
	scope = 2;
	author = "[LM] Antazur, [LM] Cheitan";
	displayName = $STR_altisunits_mk6bipod;
	hiddenSelectionsTextures[] = {"\lm_units\textures\sacs\mortier\aor1_bipod.paa"};
	class assembleInfo {
		primary = false;
		base = "";
		assembleTo = "";
		dissasembleTo[] = {};
		displayName = "";
	};
};
class B_Mortar_01_weapon_F; //tube de mortier
class LM_Mk6_tube_base : B_Mortar_01_weapon_F
{
	scope = 2;
	author = "[LM] Antazur, [LM] Cheitan";
	displayName = $STR_altisunits_mk6tube;
	hiddenSelectionsTextures[] = {"\lm_units\textures\sacs\mortier\aor1_tube.paa"};
	class assembleInfo : assembleInfo {
		displayName = $STR_actions_assemble;
		base = "LM_Mk6_bipod_base";
		assembleTo = "LM_Mk6_mortar_base";
	};
};


class VSM_AOR1_Backpack_Compact;
class LM_GENIE_PAQUETAGE_BASE : VSM_AOR1_Backpack_Compact
{
	scope = public;
	author = "[LM] Cheitan";
	displayName = $STR_altisunits_geniebackpack;
	class TransportItems
	{
		class _xx_ACE_wirecutter
		{
			name = "ACE_wirecutter";
			count = 1;
		};
		class _xx_ACE_EntrenchingTool
		{
			name = "ACE_EntrenchingTool";
			count = 1;
		};
		class _xx_ToolKit
		{
			name = "ToolKit";
			count = 1;
		};
		class _xx_ACE_Sandbag_empty
		{
			name = "ACE_Sandbag_empty";
			count = 5;
		};
		class _xx_ACE_Fortify
		{
			name = "ACE_Fortify";
			count = 1;
		};
	};
};
class LM_DEMO_PAQUETAGE_BASE : VSM_AOR1_Backpack_Compact
{
	scope = public;
	author = "[LM] Cheitan";
	displayName = $STR_altisunits_demobackpack;
	class TransportMagazines
	{
		class _xx_SatchelCharge_Remote_Mag
		{
			magazine = "SatchelCharge_Remote_Mag";
			count = 1;
		};
		class _xx_APERSTripMine_Wire_Mag
		{
			magazine = "APERSTripMine_Wire_Mag";
			count = 1;
		};
		class _xx_APERSMine_Range_Mag
		{
			magazine = "APERSMine_Range_Mag";
			count = 2;
		};
		class _xx_APERSBoundingMine_Range_Mag
		{
			magazine = "APERSBoundingMine_Range_Mag";
			count = 1;
		};
	};
};


class VSM_AOR1_Backpack_Kitbag; //sac custom
class LM_DOCTOR_PAQUETAGE_BASE : VSM_AOR1_Backpack_Kitbag
{
	scope = public;
	author = "[LM] Cheitan";
	displayName = $STR_altisunits_doctorbackpack;
	hiddenSelectionsTextures[]=
	{
		"\lm_units\textures\sacs\medical\kitbag_medic_aor1.paa"
	};
	class TransportItems
	{
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 10;
		};
		class _xx_ACE_morphine
		{
			name = "ACE_morphine";
			count = 10;
		};
		class _xx_ACE_quikclot
		{
			name = "ACE_quikclot";
			count = 30;
		};
		class _xx_ACE_packingBandage
		{
			name = "ACE_packingBandage";
			count = 30;
		};
		class _xx_ACE_salineIV_250
		{
			name = "ACE_salineIV_250";
			count = 8;
		};
		class _xx_ACE_salineIV
		{
			name = "ACE_salineIV";
			count = 10;
		};
		class _xx_ACE_tourniquet
		{
			name = "ACE_tourniquet";
			count = 5;
		};
		class _xx_ACE_surgicalKit
		{
			name = "ACE_surgicalKit";
			count = 1;
		};
		class _xx_ACE_personalAidKit
		{
			name = "ACE_personalAidKit";
			count = 1;
		};
		class _xx_RDP_Splint
		{
			name = "RDP_Splint";
			count = 10;
		};
		class _xx_adv_aceCPR_AED
		{
			name = "adv_aceCPR_AED";
			count = 1;
		};
	};
};
class LM_MEDIC_PAQUETAGE_BASE : VSM_AOR1_Backpack_Kitbag
{
	scope = public;
	author = "[LM] Cheitan";
	displayName = $STR_altisunits_medicbackpack;
	hiddenSelectionsTextures[]=
	{
		"\lm_units\textures\sacs\medical\kitbag_medic_aor1.paa"
	};
	class TransportItems
	{
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 10;
		};
		class _xx_ACE_morphine
		{
			name = "ACE_morphine";
			count = 10;
		};
		class _xx_ACE_quikclot
		{
			name = "ACE_quikclot";
			count = 30;
		};
		class _xx_ACE_packingBandage
		{
			name = "ACE_packingBandage";
			count = 30;
		};
		class _xx_ACE_salineIV_250
		{
			name = "ACE_salineIV_250";
			count = 8;
		};
		class _xx_ACE_salineIV
		{
			name = "ACE_salineIV";
			count = 10;
		};
		class _xx_ACE_tourniquet
		{
			name = "ACE_tourniquet";
			count = 5;
		};
		class _xx_ACE_surgicalKit
		{
			name = "ACE_surgicalKit";
			count = 1;
		};
		class _xx_RDP_Splint
		{
			name = "RDP_Splint";
			count = 10;
		};
	};
};

class LM_PORTEUR_AC_PAQUETAGE : VSM_AOR1_Backpack_Kitbag
{
	scope = protected;
	class TransportMagazines
	{
		class _xx_Titan_AT
		{
			magazine = "Titan_AT";
			count = 2;
		};
	};
};
class LM_PORTEUR_AA_PAQUETAGE : VSM_AOR1_Backpack_Kitbag
{
	scope = protected;
	class TransportMagazines
	{
		class _xx_Titan_AA
		{
			magazine = "Titan_AA";
			count = 2;
		};
	};
};

class LM_BASE_MAN : B_Soldier_base_F
{
	scope = protected;
	faction = "LA_MUERTA";
	editorSubcategory = "LM_BASE";
	author = "[LM] Cheitan";
};

class LM_BASE_OFFICIER : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_officier;
	uniformClass = "VSM_AOR1_BDU_Camo";
	weapons[] = {Throw, Put};
	respawnWeapons[] = {Throw, Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"ItemWatch", "LM_BERET_OFFICIER", "ItemMap"};
	respawnLinkedItems[] = {"ItemWatch", "LM_BERET_OFFICIER", "ItemMap"};
	magazines[] = {};
	respawnMagazines[] = {};
};

class LM_BASE_FUSILIER : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_rifleman;
	uniformClass = "VSM_AOR1_Camo";
	weapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_LBT6094_operator_AOR1", "VSM_Mich2000_2_aor1", "ItemWatch", "TFAR_anprc152"};
	respawnLinkedItems[] = {"VSM_LBT6094_operator_AOR1", "VSM_Mich2000_2_aor1", "ItemWatch", "TFAR_anprc152"};
	magazines[] = {STD_mag_load};
	respawnMagazines[] = {STD_mag_load};
};

class LM_BASE_GRENADIER : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_grenadier;
	uniformClass = "VSM_AOR1_Camo";
	weapons[] = {SMA_ACRREMGL, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMGL, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_LBT6094_operator_AOR1", "VSM_Mich2000_AOR1", "ItemWatch", "TFAR_anprc152"};
	respawnLinkedItems[] = {"VSM_LBT6094_operator_AOR1", "VSM_Mich2000_AOR1", "ItemWatch", "TFAR_anprc152"};
	magazines[] = {STD_mag_load, mag_10("1Rnd_HE_Grenade_shell"), mag_2("1Rnd_SmokeRed_Grenade_shell"), mag_2("1Rnd_SmokeBlue_Grenade_shell"), mag_2("1Rnd_Smoke_Grenade_shell"), "1Rnd_SmokeGreen_Grenade_shell"};
	respawnMagazines[] = {STD_mag_load, mag_10("1Rnd_HE_Grenade_shell"), mag_2("1Rnd_SmokeRed_Grenade_shell"), mag_2("1Rnd_SmokeBlue_Grenade_shell"), mag_2("1Rnd_Smoke_Grenade_shell"), "1Rnd_SmokeGreen_Grenade_shell"};
};

class LM_BASE_FUSILIER_AC : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_atrifleman;
	uniformClass = "VSM_AOR1_tan_shirt_Camo";
	weapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, launch_MRAWS_sand_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, launch_MRAWS_sand_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_LBT6094_operator_AOR1", "VSM_OPS_aor1", "ItemWatch", "TFAR_anprc152"};
	respawnLinkedItems[] = {"VSM_LBT6094_operator_AOR1", "VSM_OPS_aor1", "ItemWatch", "TFAR_anprc152"};
	magazines[] = {STD_mag_load, "MRAWS_HEAT_F"};
	respawnMagazines[] = {STD_mag_load, "MRAWS_HEAT_F"};
};

class LM_BASE_DEMO : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_demolisher;
	uniformClass = "VSM_AOR1_Camo_SS";
	backpack = "LM_DEMO_PAQUETAGE_BASE";
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER", "ACE_M26_Clacker"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER", "ACE_M26_Clacker"};
	linkedItems[] = {"VSM_RAV_Breacher_AOR1", "VSM_Mich2000_2_aor1", "G_Combat", "ItemWatch", "TFAR_anprc152"};
	respawnLinkedItems[] = {"VSM_RAV_Breacher_AOR1", "VSM_Mich2000_2_aor1", "G_Combat", "ItemWatch", "TFAR_anprc152"};
	magazines[] = {STD_mag_load, mag_2("DemoCharge_Remote_Mag")};
	respawnMagazines[] = {STD_mag_load, mag_2("DemoCharge_Remote_Mag")};
};

class LM_BASE_MITRAILLEUR : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_autorifleman;
	uniformClass = "VSM_AOR1_Camo_SS";
	weapons[] = {sma_minimi_mk3_762tsb_des, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {sma_minimi_mk3_762tsb_des, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_RAV_MG_AOR1", "VSM_Mich2000_2_aor1", "ItemWatch", "TFAR_anprc152"};
	respawnLinkedItems[] = {"VSM_RAV_MG_AOR1", "VSM_Mich2000_2_aor1", "ItemWatch", "TFAR_anprc152"};
	magazines[] = {mag_3("SMA_150Rnd_762_M80A1"), mag_3("16Rnd_9x21_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
	respawnMagazines[] = {mag_3("SMA_150Rnd_762_M80A1"), mag_3("16Rnd_9x21_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};

class LM_BASE_ARTILLEUR : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_heavyautorifleman;
	uniformClass = "VSM_AOR1_Camo_SS";
	weapons[] = {sma_minimi_mk3_762tlb_des, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {sma_minimi_mk3_762tlb_des, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_RAV_MG_AOR1", "VSM_Mich2000_2_aor1", "ItemWatch", "TFAR_anprc152"};
	respawnLinkedItems[] = {"VSM_RAV_MG_AOR1", "VSM_Mich2000_2_aor1", "ItemWatch", "TFAR_anprc152"};
	magazines[] = {mag_3("SMA_150Rnd_762_M80A1"), mag_3("16Rnd_9x21_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
	respawnMagazines[] = {mag_3("SMA_150Rnd_762_M80A1"), mag_3("16Rnd_9x21_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};

class LM_BASE_TP : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_marksman;
	uniformClass = "VSM_AOR1_Camo_SS";
	weapons[] = {SMA_ACRREMMOE, hgun_Rook40_F, Binocular, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMMOE, hgun_Rook40_F, Binocular, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER", "optic_SOS", "SMA_Gripod_01"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER", "optic_SOS", "SMA_Gripod_01"};
	linkedItems[] = {"VSM_FAPC_Operator_AOR1", "VSM_AOR1_Boonie", "ItemWatch", "TFAR_anprc152"};
	respawnLinkedItems[] = {"VSM_FAPC_Operator_AOR1", "VSM_AOR1_Boonie", "ItemWatch", "TFAR_anprc152"};
	magazines[] = {STD_mag_load};
	respawnMagazines[] = {STD_mag_load};
};

class LM_BASE_TL : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_teamleader_gl;
	uniformClass = "VSM_AOR1_tan_shirt_Camo_SS";
	weapons[] = {SMA_ACRREMGL, hgun_Rook40_F, Laserdesignator, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMGL, hgun_Rook40_F, Laserdesignator, Throw, Put};
	items[] = {KSI, "ACE_microDAGR", "ACE_MapTools"};
	respawnItems[] = {KSI, "ACE_microDAGR", "ACE_MapTools"};
	linkedItems[] = {"VSM_RAV_operator_AOR1", "LM_BERET_OFFICIER", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152"};
	respawnLinkedItems[] = {"VSM_RAV_operator_AOR1", "LM_BERET_OFFICIER", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152"};
	magazines[] = {STD_mag_load, mag_10("1Rnd_HE_Grenade_shell"), "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", mag_2("Laserbatteries"), "SmokeShellRed", "SmokeShellBlue", "SmokeShellGreen", "SmokeShellPurple"};
	respawnMagazines[] = {STD_mag_load, mag_10("1Rnd_HE_Grenade_shell"), "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", mag_2("Laserbatteries"), "SmokeShellRed", "SmokeShellBlue", "SmokeShellGreen", "SmokeShellPurple"};
};

class LM_BASE_TL_RADIO : LM_BASE_TL
{
	displayName = $STR_units_teamleader_radio;
	backpack = "tfw_ilbe_coy";
	weapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Laserdesignator, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Laserdesignator, Throw, Put};
	magazines[] = {STD_mag_load, "SmokeShellRed", mag_2("SmokeShellGreen"), mag_2("SmokeShellBlue"), "SmokeShellYellow", mag_2("Laserbatteries")};
	respawnMagazines[] = {STD_mag_load, "SmokeShellRed", mag_2("SmokeShellGreen"), mag_2("SmokeShellBlue"), "SmokeShellYellow", mag_2("Laserbatteries")};
};

class LM_BASE_SL : LM_BASE_TL
{
	scope = protected;
	displayName = $STR_units_squadleader;
	linkedItems[] = {"VSM_RAV_operator_AOR1", "VSM_AOR1_Cap", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152"};
	respawnLinkedItems[] = {"VSM_RAV_operator_AOR1", "VSM_AOR1_Cap", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152"};
};

class LM_BASE_SPECIALISTE_AC : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_acspecialist;
	uniformClass = "VSM_AOR1_tan_shirt_Camo_SS";
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, launch_B_Titan_short_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, launch_B_Titan_short_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_FAPC_Operator_AOR1", "VSM_OPS_aor1", "ItemWatch", "TFAR_anprc152"};
	respawnLinkedItems[] = {"VSM_FAPC_Operator_AOR1", "VSM_OPS_aor1", "ItemWatch", "TFAR_anprc152"};
	magazines[] = {STD_mag_load, "Titan_AT"};
	respawnMagazines[] = {STD_mag_load, "Titan_AT"};
};
class LM_BASE_PORTEUR_AC : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_porteur_ac;
	uniformClass = "VSM_AOR1_Camo";
	backpack = "LM_PORTEUR_AC_PAQUETAGE";
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_CarrierRig_Operator_AOR1", "VSM_OPS_2_AOR1", "ItemWatch", "TFAR_anprc152"};
	respawnLinkedItems[] = {"VSM_CarrierRig_Operator_AOR1", "VSM_OPS_2_AOR1", "ItemWatch", "TFAR_anprc152"};
	magazines[] = {STD_mag_load};
	respawnMagazines[] = {STD_mag_load};
};

class LM_BASE_SPECIALISTE_AA : LM_BASE_SPECIALISTE_AC
{
	displayName = $STR_units_aaspecialist;
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, launch_B_Titan_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, launch_B_Titan_F, Throw, Put};
	magazines[] = {STD_mag_load, "Titan_AA"};
	respawnMagazines[] = {STD_mag_load, "Titan_AA"};
};
class LM_BASE_PORTEUR_AA : LM_BASE_PORTEUR_AC
{
	displayName = $STR_units_porteur_aa;
	backpack = "LM_PORTEUR_AA_PAQUETAGE";
	magazines[] = {STD_mag_load};
	respawnMagazines[] = {STD_mag_load};
};

class LM_BASE_MEDIC : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_medic;
	uniformClass = "VSM_AOR1_tan_shirt_Camo_SS";
	backpack = "LM_MEDIC_PAQUETAGE_BASE";
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_LBT6094_operator_AOR1", "LM_OPS2_AOR1_MEDIC", "ItemWatch", "TFAR_anprc152"};
	respawnLinkedItems[] = {"VSM_LBT6094_operator_AOR1", "LM_OPS2_AOR1_MEDIC", "ItemWatch", "TFAR_anprc152"};
	magazines[] = {mag_5("SMA_30Rnd_68x43_SPC_FMJ"), mag_3("16Rnd_9x21_Mag"), mag_8("SmokeShell"), mag_2("SmokeShellYellow")};
	respawnMagazines[] = {mag_5("SMA_30Rnd_68x43_SPC_FMJ"), mag_3("16Rnd_9x21_Mag"), mag_8("SmokeShell"), mag_2("SmokeShellYellow")};
};

class LM_BASE_DOCTEUR : LM_BASE_MEDIC
{
	scope = public;
	displayName = $STR_units_docteur;
	backpack = "LM_DOCTOR_PAQUETAGE_BASE";
};

class LM_BASE_OPERADIO : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_radiooperator;
	uniformClass = "VSM_AOR1_Camo";
	backpack = "tfw_ilbe_coy";
	weapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_LBT6094_operator_AOR1", "VSM_OPS_aor1", "ItemWatch", "tf_anprc152", "ItemMap"};
	respawnLinkedItems[] = {"VSM_LBT6094_operator_AOR1", "VSM_OPS_aor1", "ItemWatch", "tf_anprc152", "ItemMap"};
	magazines[] = {STD_mag_load, "SmokeShellGreen", "SmokeShellBlue"};
	respawnMagazines[] = {STD_mag_load, "SmokeShellGreen", "SmokeShellBlue"};
};

class LM_BASE_OPEDRONE : B_soldier_UAV_F
{
	author = "[LM] Cheitan";
	scope = public;
	faction = "LA_MUERTA";
	editorSubcategory = "LM_BASE";
	displayName = $STR_units_droneoperator;
	uniformClass = "VSM_AOR1_Camo";
	backpack = "LM_UAV_backpack_base";
	weapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_LBT6094_operator_AOR1", "VSM_Mich2000_2_aor1", "B_UavTerminal", "ItemWatch", "TFAR_anprc152"};
	respawnLinkedItems[] = {"VSM_LBT6094_operator_AOR1", "VSM_Mich2000_2_aor1", "B_UavTerminal", "ItemWatch", "TFAR_anprc152"};
	magazines[] = {STD_mag_load};
	respawnMagazines[] = {STD_mag_load};
};

class LM_BASE_MK6_GUNNER : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_mk6gunner;
	uniformClass = "VSM_AOR1_od_shirt_Camo";
	backpack = "LM_Mk6_tube_base";
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_FAPC_MG_AOR1", "H_Booniehat_khk_hs", "ItemWatch", "TFAR_anprc152", "ItemMap", "ItemCompass"};
	respawnLinkedItems[] = {"VSM_FAPC_MG_AOR1", "H_Booniehat_khk_hs", "ItemWatch", "TFAR_anprc152", "ItemMap", "ItemCompass"};
	magazines[] = {STD_mag_load};
	respawnMagazines[] = {STD_mag_load};
};

class LM_BASE_MK6_ASSISTANT : LM_BASE_MK6_GUNNER
{
	displayName = $STR_units_mk6assistant;
	backpack = "LM_Mk6_bipod_base";
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Rangefinder, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Rangefinder, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER", "ACE_RangeTable_82mm", "ACE_SpottingScope", "ACE_EntrenchingTool", "ACE_microDAGR"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER", "ACE_RangeTable_82mm", "ACE_SpottingScope", "ACE_EntrenchingTool", "ACE_microDAGR"};
	magazines[] = {STD_mag_load, "SmokeShellGreen", "SmokeShellBlue"};
	respawnMagazines[] = {STD_mag_load, "SmokeShellGreen", "SmokeShellBlue"};
};

class LM_BASE_INGENIEUR : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_ingenieur;
	uniformClass = "VSM_AOR1_od_shirt_Camo_SS"
	backpack = "LM_GENIE_PAQUETAGE_BASE";
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_FAPC_MG_AOR1", "H_HelmetCrew_B", "ItemWatch", "TFAR_anprc152"};
	respawnLinkedItems[] = {"VSM_FAPC_MG_AOR1", "H_HelmetCrew_B", "ItemWatch", "TFAR_anprc152"};
	magazines[] = {STD_mag_load};
	respawnMagazines[] = {STD_mag_load};
};

class LM_BASE_JTACAO : LM_BASE_MAN
{
	scope = public;
	displayName = $STR_units_jtacao;
	uniformClass = "VSM_AOR1_od_shirt_Camo";
	backpack = "tfw_ilbe_coy";
	weapons[] = {SMA_ACRREMGL, hgun_Rook40_F, Laserdesignator, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMGL, hgun_Rook40_F, Laserdesignator, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER", "ACE_MapTools", "Laserbatteries", "ACE_EntrenchingTool", "ACE_microDAGR"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER", "ACE_MapTools", "Laserbatteries", "ACE_EntrenchingTool", "ACE_microDAGR"};
	linkedItems[] = {"VSM_FAPC_MG_AOR1", "H_Booniehat_khk_hs", "ItemWatch", "TFAR_anprc152", "ItemMap", "ItemCompass"};
	respawnLinkedItems[] = {"VSM_FAPC_MG_AOR1", "H_Booniehat_khk_hs", "ItemWatch", "TFAR_anprc152", "ItemMap", "ItemCompass"};
	magazines[] = {STD_mag_load, mag_5("1Rnd_SmokeRed_Grenade_shell"), mag_5("1Rnd_SmokeGreen_Grenade_shell"), mag_5("1Rnd_SmokeBlue_Grenade_shell"), "SmokeShellGreen", "SmokeShellBlue"};
	respawnMagazines[] = {STD_mag_load, mag_5("1Rnd_SmokeRed_Grenade_shell"), mag_5("1Rnd_SmokeGreen_Grenade_shell"), mag_5("1Rnd_SmokeBlue_Grenade_shell"), "SmokeShellGreen", "SmokeShellBlue"};
};