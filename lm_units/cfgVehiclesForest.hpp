/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////             UNITES MULTICAM TROPIC          //////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class B_Mortar_01_F; //mortier monté
class LM_Mk6_mortar_forest : B_Mortar_01_F
{
	scope = 2;
	author = "[LM] Cheitan";
	displayName = $STR_tropicunits_mk6mortar;
	forceInGarage = 1;
	class assembleInfo {
		primary = false;
		base = "";
		assembleTo = "";
		dissasembleTo[] = {"LM_Mk6_tube_forest", "LM_Mk6_bipod_forest"};
		displayName = "";
	};
};
class B_Mortar_01_support_F; //bipied de mortier
class LM_Mk6_bipod_forest : B_Mortar_01_support_F
{
	scope = 2;
	author = "[LM] Antazur, [LM] Cheitan";
	displayName = $STR_tropicunits_mk6bipod;
	// hiddenSelectionsTextures[] = {"\lm_units\textures\sacs\mortier\aor1_bipod.paa"};
	class assembleInfo {
		primary = false;
		base = "";
		assembleTo = "";
		dissasembleTo[] = {};
		displayName = "";
	};
};
class B_Mortar_01_weapon_F; //tube de mortier
class LM_Mk6_tube_forest : B_Mortar_01_weapon_F
{
	scope = 2;
	author = "[LM] Antazur, [LM] Cheitan";
	displayName = $STR_tropicunits_mk6tube;
	// hiddenSelectionsTextures[] = {"\lm_units\textures\sacs\mortier\aor1_tube.paa"};
	class assembleInfo : assembleInfo {
		displayName = $STR_actions_assemble;
		base = "LM_Mk6_bipod_forest";
		assembleTo = "LM_Mk6_mortar_forest";
	};
};


class VSM_MulticamTropic_Backpack_Compact;
class LM_GENIE_PAQUETAGE_FOREST : VSM_MulticamTropic_Backpack_Compact
{
	scope = public;
	author = "[LM] Cheitan";
	displayName = $STR_tropicunits_geniebackpack;
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
class LM_DEMO_PAQUETAGE_FOREST : VSM_MulticamTropic_Backpack_Compact
{
	scope = public;
	author = "[LM] Cheitan";
	displayName = $STR_tropicunits_demobackpack;
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


class VSM_MulticamTropic_Backpack_Kitbag; //sac custom
class LM_DOCTOR_PAQUETAGE_FOREST : VSM_MulticamTropic_Backpack_Kitbag
{
	scope = public;
	author = "[LM] Cheitan";
	displayName = $STR_tropicunits_doctorbackpack;
	// hiddenSelectionsTextures[]= {"\lm_units\textures\sacs\medical\kitbag_medic_aor1.paa"};
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
			count = 5;
		};
		class _xx_adv_aceCPR_AED
		{
			name = "adv_aceCPR_AED";
			count = 1;
		};
	};
};
class LM_MEDIC_PAQUETAGE_FOREST : VSM_MulticamTropic_Backpack_Kitbag
{
	scope = public;
	author = "[LM] Cheitan";
	displayName = $STR_tropicunits_medicbackpack;
	// hiddenSelectionsTextures[]= {"\lm_units\textures\sacs\medical\kitbag_medic_aor1.paa"};
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
			count = 5;
		};
	};
};

class LM_PORTEUR_AC_PAQUETAGE_FOREST : VSM_MulticamTropic_Backpack_Kitbag
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
class LM_PORTEUR_AA_PAQUETAGE_FOREST : VSM_MulticamTropic_Backpack_Kitbag
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

class LM_FOREST_MAN : B_Soldier_base_F
{
	scope = protected;
	faction = "LA_MUERTA";
	editorSubcategory = "LM_FOREST";
	author = "[LM] Cheitan";
};

class LM_FOREST_OFFICIER : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_officier;
	uniformClass = "VSM_MulticamTropic_BDU_Camo";
	weapons[] = {Throw, Put};
	respawnWeapons[] = {Throw, Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"ItemWatch", "LM_BERET_OFFICIER", "ItemMap"};
	respawnLinkedItems[] = {"ItemWatch", "LM_BERET_OFFICIER", "ItemMap"};
	magazines[] = {};
	respawnMagazines[] = {};
};

class LM_FOREST_FUSILIER : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_rifleman;
	uniformClass = "VSM_MulticamTropic_Camo";
	weapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_LBT6094_operator_multicamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	respawnLinkedItems[] = {"VSM_LBT6094_operator_multicamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	magazines[] = {STD_mag_load};
	respawnMagazines[] = {STD_mag_load};
};

class LM_FOREST_GRENADIER : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_grenadier;
	uniformClass = "VSM_MulticamTropic_Camo";
	weapons[] = {SMA_ACRREMGL, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMGL, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_LBT6094_operator_multicamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	respawnLinkedItems[] = {"VSM_LBT6094_operator_multicamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	magazines[] = {STD_mag_load, mag_10("1Rnd_HE_Grenade_shell"), mag_2("1Rnd_SmokeRed_Grenade_shell"), mag_2("1Rnd_SmokeBlue_Grenade_shell"), mag_2("1Rnd_Smoke_Grenade_shell"), "1Rnd_SmokeGreen_Grenade_shell"};
	respawnMagazines[] = {STD_mag_load, mag_10("1Rnd_HE_Grenade_shell"), mag_2("1Rnd_SmokeRed_Grenade_shell"), mag_2("1Rnd_SmokeBlue_Grenade_shell"), mag_2("1Rnd_Smoke_Grenade_shell"), "1Rnd_SmokeGreen_Grenade_shell"};
};

class LM_FOREST_FUSILIER_AC : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_atrifleman;
	uniformClass = "VSM_MulticamTropic_od_shirt_Camo";
	weapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, launch_NLAW_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, launch_NLAW_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_LBT6094_operator_multicamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	respawnLinkedItems[] = {"VSM_LBT6094_operator_multicamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	magazines[] = {STD_mag_load};
	respawnMagazines[] = {STD_mag_load};
};

class LM_FOREST_DEMO : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_demolisher;
	uniformClass = "VSM_MulticamTropic_Camo_SS";
	backpack = "LM_DEMO_PAQUETAGE_FOREST";
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER", "ACE_M26_Clacker"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER", "ACE_M26_Clacker"};
	linkedItems[] = {"VSM_RAV_Breacher_MulticamTropic", "VSM_MulticamTropic_OPS_2", "G_Combat", "ItemWatch", "tf_rf7800str"};
	respawnLinkedItems[] = {"VSM_RAV_Breacher_MulticamTropic", "VSM_MulticamTropic_OPS_2", "G_Combat", "ItemWatch", "tf_rf7800str"};
	magazines[] = {STD_mag_load, mag_2("DemoCharge_Remote_Mag")};
	respawnMagazines[] = {STD_mag_load, mag_2("DemoCharge_Remote_Mag")};
};

class LM_FOREST_MITRAILLEUR : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_autorifleman;
	uniformClass = "VSM_MulticamTropic_Camo_SS";
	weapons[] = {sma_minimi_mk3_762tsb_wdl, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {sma_minimi_mk3_762tsb_wdl, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_RAV_MG_MulticamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	respawnLinkedItems[] = {"VSM_RAV_MG_MulticamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	magazines[] = {mag_3("SMA_150Rnd_762_M80A1"), mag_3("16Rnd_9x21_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
	respawnMagazines[] = {mag_3("SMA_150Rnd_762_M80A1"), mag_3("16Rnd_9x21_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};

class LM_FOREST_ARTILLEUR : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_heavyautorifleman;
	uniformClass = "VSM_MulticamTropic_Camo_SS";
	weapons[] = {sma_minimi_mk3_762tlb_wdl, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {sma_minimi_mk3_762tlb_wdl, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_RAV_MG_MulticamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	respawnLinkedItems[] = {"VSM_RAV_MG_MulticamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	magazines[] = {mag_3("SMA_150Rnd_762_M80A1"), mag_3("16Rnd_9x21_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
	respawnMagazines[] = {mag_3("SMA_150Rnd_762_M80A1"), mag_3("16Rnd_9x21_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};

class LM_FOREST_TP : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_marksman;
	uniformClass = "VSM_MulticamTropic_Camo_SS";
	weapons[] = {SMA_ACRREMMOE, hgun_Rook40_F, Binocular, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMMOE, hgun_Rook40_F, Binocular, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER", "optic_SOS", "SMA_Gripod_01"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER", "optic_SOS", "SMA_Gripod_01"};
	linkedItems[] = {"VSM_FAPC_Operator_MulticamTropic", "VSM_MulticamTropic_Boonie", "ItemWatch", "tf_rf7800str"};
	respawnLinkedItems[] = {"VSM_FAPC_Operator_MulticamTropic", "VSM_MulticamTropic_Boonie", "ItemWatch", "tf_rf7800str"};
	magazines[] = {STD_mag_load};
	respawnMagazines[] = {STD_mag_load};
};

class LM_FOREST_TL : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_teamleader_gl;
	uniformClass = "VSM_MulticamTropic_od_shirt_Camo_SS";
	weapons[] = {SMA_ACRREMGL, hgun_Rook40_F, Laserdesignator, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMGL, hgun_Rook40_F, Laserdesignator, Throw, Put};
	items[] = {KSI, "ACE_microDAGR", "ACE_MapTools"};
	respawnItems[] = {KSI, "ACE_microDAGR", "ACE_MapTools"};
	linkedItems[] = {"VSM_RAV_operator_MulticamTropic", "LM_BERET_OFFICIER", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152"};
	respawnLinkedItems[] = {"VSM_RAV_operator_MulticamTropic", "LM_BERET_OFFICIER", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152"};
	magazines[] = {STD_mag_load, mag_10("1Rnd_HE_Grenade_shell"), "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", mag_2("Laserbatteries"), "SmokeShellRed", "SmokeShellBlue", "SmokeShellGreen", "SmokeShellPurple"};
	respawnMagazines[] = {STD_mag_load, mag_10("1Rnd_HE_Grenade_shell"), "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", mag_2("Laserbatteries"), "SmokeShellRed", "SmokeShellBlue", "SmokeShellGreen", "SmokeShellPurple"};
};

class LM_FOREST_TL_RADIO : LM_FOREST_TL
{
	displayName = $STR_units_teamleader_radio;
	backpack = "LM_RADIO_FOREST";
	weapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Laserdesignator, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Laserdesignator, Throw, Put};
	magazines[] = {STD_mag_load, "SmokeShellRed", mag_2("SmokeShellGreen"), mag_2("SmokeShellBlue"), "SmokeShellYellow", mag_2("Laserbatteries")};
	respawnMagazines[] = {STD_mag_load, "SmokeShellRed", mag_2("SmokeShellGreen"), mag_2("SmokeShellBlue"), "SmokeShellYellow", mag_2("Laserbatteries")};
};

class LM_FOREST_SL : LM_FOREST_TL
{
	scope = protected;
	displayName = $STR_units_squadleader;
	linkedItems[] = {"VSM_RAV_operator_MulticamTropic", "VSM_MulticamTropic_Cap", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152"};
	respawnLinkedItems[] = {"VSM_RAV_operator_MulticamTropic", "VSM_MulticamTropic_Cap", "ItemMap", "ItemCompass", "ItemWatch", "tf_anprc152"};
};

class LM_FOREST_SPECIALISTE_AC : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_acspecialist;
	uniformClass = "VSM_MulticamTropic_od_shirt_Camo_SS";
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, launch_B_Titan_short_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, launch_B_Titan_short_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_FAPC_Operator_MulticamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	respawnLinkedItems[] = {"VSM_FAPC_Operator_MulticamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	magazines[] = {STD_mag_load, "Titan_AT"};
	respawnMagazines[] = {STD_mag_load, "Titan_AT"};
};
class LM_FOREST_PORTEUR_AC : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_porteur_ac;
	uniformClass = "VSM_MulticamTropic_Camo";
	backpack = "LM_PORTEUR_AC_PAQUETAGE_FOREST";
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_CarrierRig_Operator_multicamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	respawnLinkedItems[] = {"VSM_CarrierRig_Operator_multicamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	magazines[] = {STD_mag_load};
	respawnMagazines[] = {STD_mag_load};
};

class LM_FOREST_SPECIALISTE_AA : LM_FOREST_SPECIALISTE_AC
{
	displayName = $STR_units_aaspecialist;
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, launch_B_Titan_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, launch_B_Titan_F, Throw, Put};
	magazines[] = {STD_mag_load, "Titan_AA"};
	respawnMagazines[] = {STD_mag_load, "Titan_AA"};
};
class LM_FOREST_PORTEUR_AA : LM_FOREST_PORTEUR_AC
{
	displayName = $STR_units_porteur_aa;
	backpack = "LM_PORTEUR_AA_PAQUETAGE_FOREST";
	magazines[] = {STD_mag_load};
	respawnMagazines[] = {STD_mag_load};
};

class LM_FOREST_MEDIC : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_medic;
	uniformClass = "VSM_MulticamTropic_od_shirt_Camo_SS";
	backpack = "LM_MEDIC_PAQUETAGE_FOREST";
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_LBT6094_operator_multicamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	respawnLinkedItems[] = {"VSM_LBT6094_operator_multicamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_rf7800str"};
	magazines[] = {mag_5("SMA_30Rnd_68x43_SPC_FMJ"), mag_3("16Rnd_9x21_Mag"), mag_8("SmokeShell"), mag_2("SmokeShellYellow")};
	respawnMagazines[] = {mag_5("SMA_30Rnd_68x43_SPC_FMJ"), mag_3("16Rnd_9x21_Mag"), mag_8("SmokeShell"), mag_2("SmokeShellYellow")};
};

class LM_FOREST_DOCTEUR : LM_FOREST_MEDIC
{
	scope = public;
	displayName = $STR_units_docteur;
	backpack = "LM_DOCTOR_PAQUETAGE_FOREST";
};

class LM_FOREST_OPERADIO : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_radiooperator;
	uniformClass = "VSM_MulticamTropic_Camo";
	backpack = "LM_RADIO_FOREST";
	weapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_LBT6094_operator_multicamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_anprc152", "ItemMap"};
	respawnLinkedItems[] = {"VSM_LBT6094_operator_multicamTropic", "VSM_MulticamTropic_OPS_2", "ItemWatch", "tf_anprc152", "ItemMap"};
	magazines[] = {STD_mag_load, "SmokeShellGreen", "SmokeShellBlue"};
	respawnMagazines[] = {STD_mag_load, "SmokeShellGreen", "SmokeShellBlue"};
};

class LM_FOREST_OPEDRONE : B_soldier_UAV_F
{
	author = "[LM] Cheitan";
	scope = public;
	faction = "LA_MUERTA";
	editorSubcategory = "LM_FOREST";
	displayName = $STR_units_droneoperator;
	uniformClass = "VSM_MulticamTropic_Camo";
	backpack = "LM_UAV_backpack_forest";
	weapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFG, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_LBT6094_operator_multicamTropic", "VSM_MulticamTropic_OPS_2", "B_UavTerminal", "ItemWatch", "tf_rf7800str"};
	respawnLinkedItems[] = {"VSM_LBT6094_operator_multicamTropic", "VSM_MulticamTropic_OPS_2", "B_UavTerminal", "ItemWatch", "tf_rf7800str"};
	magazines[] = {STD_mag_load};
	respawnMagazines[] = {STD_mag_load};
};

class LM_FOREST_MK6_GUNNER : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_mk6gunner;
	uniformClass = "VSM_MulticamTropic_od_shirt_Camo";
	backpack = "LM_Mk6_tube_forest";
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_FAPC_MG_MulticamTropic", "VSM_MulticamTropic_Boonie", "ItemWatch", "tf_rf7800str", "ItemMap", "ItemCompass"};
	respawnLinkedItems[] = {"VSM_FAPC_MG_MulticamTropic", "VSM_MulticamTropic_Boonie", "ItemWatch", "tf_rf7800str", "ItemMap", "ItemCompass"};
	magazines[] = {STD_mag_load};
	respawnMagazines[] = {STD_mag_load};
};

class LM_FOREST_MK6_ASSISTANT : LM_FOREST_MK6_GUNNER
{
	displayName = $STR_units_mk6assistant;
	backpack = "LM_Mk6_bipod_forest";
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Rangefinder, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Rangefinder, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER", "ACE_RangeTable_82mm", "ACE_SpottingScope", "ACE_EntrenchingTool", "ACE_microDAGR"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER", "ACE_RangeTable_82mm", "ACE_SpottingScope", "ACE_EntrenchingTool", "ACE_microDAGR"};
	magazines[] = {STD_mag_load, "SmokeShellGreen", "SmokeShellBlue"};
	respawnMagazines[] = {STD_mag_load, "SmokeShellGreen", "SmokeShellBlue"};
};

class LM_FOREST_INGENIEUR : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_ingenieur;
	uniformClass = "VSM_MulticamTropic_od_shirt_Camo_SS"
	backpack = "LM_GENIE_PAQUETAGE_FOREST";
	weapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMAFGCQB, hgun_Rook40_F, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER"};
	linkedItems[] = {"VSM_FAPC_MG_MulticamTropic", "H_HelmetCrew_B", "ItemWatch", "tf_rf7800str"};
	respawnLinkedItems[] = {"VSM_FAPC_MG_MulticamTropic", "H_HelmetCrew_B", "ItemWatch", "tf_rf7800str"};
	magazines[] = {STD_mag_load};
	respawnMagazines[] = {STD_mag_load};
};

class LM_FOREST_JTACAO : LM_FOREST_MAN
{
	scope = public;
	displayName = $STR_units_jtacao;
	uniformClass = "VSM_MulticamTropic_od_shirt_Camo";
	backpack = "LM_RADIO_FOREST";
	weapons[] = {SMA_ACRREMGL, hgun_Rook40_F, Laserdesignator, Throw, Put};
	respawnWeapons[] = {SMA_ACRREMGL, hgun_Rook40_F, Laserdesignator, Throw, Put};
	items[] = {KSI, "LM_BERET_OFFICIER", "ACE_MapTools", "Laserbatteries", "ACE_EntrenchingTool", "ACE_microDAGR"};
	respawnItems[] = {KSI, "LM_BERET_OFFICIER", "ACE_MapTools", "Laserbatteries", "ACE_EntrenchingTool", "ACE_microDAGR"};
	linkedItems[] = {"VSM_FAPC_MG_MulticamTropic", "VSM_MulticamTropic_Boonie", "ItemWatch", "tf_rf7800str", "ItemMap", "ItemCompass"};
	respawnLinkedItems[] = {"VSM_FAPC_MG_MulticamTropic", "VSM_MulticamTropic_Boonie", "ItemWatch", "tf_rf7800str", "ItemMap", "ItemCompass"};
	magazines[] = {STD_mag_load, mag_5("1Rnd_SmokeRed_Grenade_shell"), mag_5("1Rnd_SmokeGreen_Grenade_shell"), mag_5("1Rnd_SmokeBlue_Grenade_shell"), "SmokeShellGreen", "SmokeShellBlue"};
	respawnMagazines[] = {STD_mag_load, mag_5("1Rnd_SmokeRed_Grenade_shell"), mag_5("1Rnd_SmokeGreen_Grenade_shell"), mag_5("1Rnd_SmokeBlue_Grenade_shell"), "SmokeShellGreen", "SmokeShellBlue"};
};