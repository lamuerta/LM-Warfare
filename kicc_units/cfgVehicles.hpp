#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_4(a) a, a, a, a
#define mag_3(a) a, a, a
#define mag_2(a) a, a
#define KSI mag_5("ACE_quikclot"),"ACE_tourniquet","ACE_morphine","ACE_EarPlugs","ACE_CableTie"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////             UNITES ENNEMIES          /////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class VSM_OGA_od_Uniform;
class O_VSM_OGA_od_Uniform : VSM_OGA_od_Uniform
{
	scope = 1;
	faction = LM_KICC;
	side = 0;
};
class VSM_OGA_od_Uniform_SS;
class O_VSM_OGA_od_Uniform_SS : VSM_OGA_od_Uniform_SS
{
	scope = 1;
	faction = LM_KICC;
	side = 0;
};
class I_pilot_F;
class O_I_pilot_F : I_pilot_F
{
	scope = 1;
	faction = LM_KICC;
	side = 0;
};

class VSM_OGA_OD_Backpack_Kitbag;
class KICC_SAC_DEMO : VSM_OGA_OD_Backpack_Kitbag
{
	scope = 1;
	author = "[LM] Cheitan";
	displayName = $STR_kitbag_demo;
	class TransportItems
	{
		class _xx_DemoCharge_Remote_Mag
		{
			name = "DemoCharge_Remote_Mag";
			count = 2;
		};
		class _xx_SatchelCharge_Remote_Mag
		{
			name = "SatchelCharge_Remote_Mag";
			count = 1;
		};
		class _xx_ClaymoreDirectionalMine_Remote_Mag
		{
			name = "ClaymoreDirectionalMine_Remote_Mag";
			count = 1;
		};
		class _xx_APERSTripMine_Wire_Mag
		{
			name = "APERSTripMine_Wire_Mag";
			count = 1;
		};
		class _xx_APERSMine_Range_Mag
		{
			name = "APERSMine_Range_Mag";
			count = 1;
		};
		class _xx_APERSBoundingMine_Range_Mag
		{
			name = "APERSBoundingMine_Range_Mag";
			count = 1;
		};
	};
};
class VSM_OGA_OD_carryall;
class KICC_SAC_MEDIC : VSM_OGA_OD_carryall
{
	scope = 1;
	author = "[LM] Cheitan";
	displayName = $STR_kitbag_medic;
	class TransportItems
	{
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 10;
		};
		class _xx_ACE_adenosine
		{
			name = "ACE_adenosine";
			count = 10;
		};
		class _xx_ACE_atropine
		{
			name = "ACE_atropine";
			count = 10;
		};
		class _xx_ACE_morphine
		{
			name = "ACE_morphine";
			count = 20;
		};
		class _xx_ACE_elasticBandage
		{
			name = "ACE_elasticBandage";
			count = 15;
		};
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 15;
		};
		class _xx_ACE_quikclot
		{
			name = "ACE_quikclot";
			count = 15;
		};
		class _xx_ACE_packingBandage
		{
			name = "ACE_packingBandage";
			count = 15;
		};
		class _xx_ACE_salineIV_500
		{
			name = "ACE_salineIV_500";
			count = 5;
		};
		class _xx_ACE_salineIV
		{
			name = "ACE_salineIV";
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
	};
};

class tf_mr3000_bwmod;
class KICC_RADIO_BACKPACK : tf_mr3000_bwmod
{
	author = "[LM] Karoucho, [LM] Cheitan";
	faction = "LM_MUERTA";
	displayName = $STR_radio_backpack;
	hiddenSelectionsTextures[] = {"\kicc_units\textures\radio\kicc_sacradio.paa"};
};

class O_Soldier_F;
class KICC_MAN : O_Soldier_F 
{
	scope = protected;
	faction = "LM_KICC";
	side = 0;
	editorSubcategory = "INFANTERIE_KICC";
	author = "[LM] TanK";
};

class O_helipilot_F;
class KICC_PILOTE : O_helipilot_F
{
	scope = protected;
	faction = "LM_KICC";
	side = 0;
	editorSubcategory = "PILOTE_KICC";
	author = "[LM] TanK";
};

class O_crew_F;
class KICC_EQUIPAGE : O_crew_F
{
	scope = protected;
	faction = "LM_KICC";
	side = 0;
	editorSubcategory = "EQUIPAGE_KICC";
	author = "[LM] TanK";
};

class O_recon_F;
class KICC_FS : O_recon_F
{
	scope = protected;
	faction = "LM_KICC";
	side = 0;
	editorSubcategory = "FORCES_SPECIAL_KICC";
	author = "[LM] TanK";
};

class O_soldier_PG_F;
class KICC_PARA : O_soldier_PG_F
{
	scope = protected;
	faction = "LM_KICC";
	side = 0;
	editorSubcategory = "PARA_KICC";
	author = "[LM] TanK";
};
	
//Fusilier----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_FUSILIER : KICC_MAN
{
	scope        = public;
	displayName  = $STR_fusilier;
	uniformClass = O_VSM_OGA_od_Camo;
	backpack     = "VSM_OGA_OD_Backpack_Compact";
	weapons[] = {KICC_AK12_STD,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_AK12_STD,hgun_P07_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"VSM_FAPC_MG_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak"};
	respawnLinkedItems[] = {"VSM_FAPC_MG_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak"};
	magazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84")};
	respawnMagazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84")};
};
//Fusilier FS-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_FUSILIER_FS : KICC_FS
{
	scope        = public;
	displayName  = $STR_fusilier;
	uniformClass = O_VSM_OGA_od_Camo;
	backpack     = "VSM_OGA_OD_Backpack_Compact";
	weapons[] = {KICC_MX_FS,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_MX_FS,hgun_P07_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"VSM_FAPC_MG_OGA_OD","VSM_balaclava_Black","tf_microdagr","tf_fadak","NVGoggles_OPFOR"};
	respawnLinkedItems[] = {"VSM_FAPC_MG_OGA_OD","VSM_balaclava_Black","tf_microdagr","tf_fadak","NVGoggles_OPFOR"};
	magazines[] = {mag_10("30Rnd_65x39_caseless_mag"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84")};
	respawnMagazines[] = {mag_10("30Rnd_65x39_caseless_mag"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84")};
};

//MG----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//pas le bon viseur
class KICC_FUSILIER_AUTO : KICC_MAN
{
	scope        = public;
	displayName  = $STR_mitrailleur;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] = {KICC_RPK12,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_RPK12,hgun_P07_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"VSM_LBT6094_MG_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","VSM_Goggles"};
	respawnLinkedItems[] = {"VSM_LBT6094_MG_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","VSM_Goggles"};
	magazines[] = {mag_6("hlc_60Rnd_545x39_t_rpk"),mag_6("hlc_60Rnd_545x39_t_rpk"),mag_2("16Rnd_9x21_Mag")};
	respawnMagazines[] = {mag_6("hlc_60Rnd_545x39_t_rpk"),mag_6("hlc_60Rnd_545x39_t_rpk"),mag_2("16Rnd_9x21_Mag")};
};
//ARTILLEUR ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_ARTILLEUR : KICC_MAN
{
	scope        = public;
	displayName  = $STR_artilleur;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] = {KICC_MG_ARTI,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_MG_ARTI,hgun_P07_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"VSM_LBT6094_MG_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","VSM_Goggles"};
	respawnLinkedItems[] = {"VSM_LBT6094_MG_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","VSM_Goggles"};
	magazines[] = {mag_2("130Rnd_338_Mag"),mag_2("16Rnd_9x21_Mag")};
	respawnMagazines[] = {mag_2("130Rnd_338_Mag"),mag_2("16Rnd_9x21_Mag")};
};
//MG FS-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//pas de casque ? pas de grenades ni fumi ?
class KICC_FUSILIER_AUTO_FS : KICC_FS
{
	scope        = public;
	displayName  = $STR_mitrailleur;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] = {KICC_MG_FS,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_MG_FS,hgun_P07_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"VSM_LBT6094_MG_OGA_OD","tf_microdagr","tf_fadak","VSM_balaclava2_Black","NVGoggles_OPFOR"};
	respawnLinkedItems[] = {"VSM_LBT6094_MG_OGA_OD","tf_microdagr","tf_fadak","VSM_balaclava2_Black","NVGoggles_OPFOR"};
	magazines[] = {mag_6("100Rnd_65x39_caseless_mag_Tracer"),mag_2("16Rnd_9x21_Mag")};
	respawnMagazines[] = {mag_6("100Rnd_65x39_caseless_mag_Tracer"),mag_2("16Rnd_9x21_Mag")};
};

//OP Radio----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_OP_RADIO : KICC_MAN
{
	scope        = public;
	displayName  = $STR_radio;
	uniformClass = O_VSM_OGA_od_Camo;
	backpack     = "tf_mr3000_bwmod";
	weapons[] = {KICC_AK12_STD,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_AK12_STD,hgun_P07_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","G_Bandanna_oli","ItemCompass","ItemMap"};
	respawnLinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","G_Bandanna_oli","ItemCompass","ItemMap"};
	magazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84")};
	respawnMagazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84")};
};

//TL----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_TL : KICC_MAN
{
	scope        = public;
	displayName  = $STR_teamleader;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] = {KICC_AKU12, hgun_P07_F, ACE_VectorDay, Throw, Put};
	respawnWeapons[] = {KICC_AKU12, hgun_P07_F, ACE_VectorDay, Throw, Put};
	items[] = {KSI,"ACE_microDAGR","ACE_Flashlight_MX991","ACE_MapTools"};
	respawnItems[] = {KSI,"ACE_microDAGR","ACE_Flashlight_MX991","ACE_MapTools"};
	linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","ItemCompass","ItemMap","G_Tactical_Clear"};
	respawnLinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","ItemCompass","ItemMap","G_Tactical_Clear"};
	magazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84"),"SmokeShellBlue","SmokeShellRed","SmokeShellGreen"};
	respawnMagazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84"),"SmokeShellBlue","SmokeShellRed","SmokeShellGreen"};
};
//TL FS-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_TL_FS : KICC_FS
{
	scope        = public;
	displayName  = $STR_teamleader;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] = {KICC_MX_FS, hgun_P07_F, ACE_VectorDay, Throw, Put};
	respawnWeapons[] = {KICC_MX_FS, hgun_P07_F, ACE_VectorDay, Throw, Put};
	items[] = {KSI,"ACE_microDAGR","ACE_Flashlight_MX991","ACE_MapTools"};
	respawnItems[] = {KSI,"ACE_microDAGR","ACE_Flashlight_MX991","ACE_MapTools"};
	linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","tf_microdagr","tf_fadak","ItemCompass","ItemMap","VSM_Balaclava_black_Peltor","NVGoggles_OPFOR"};
	respawnLinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","tf_microdagr","tf_fadak","ItemCompass","ItemMap","VSM_Balaclava_black_Peltor","NVGoggles_OPFOR"};
	magazines[] = {mag_10("30Rnd_65x39_caseless_mag"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84"),"SmokeShellBlue","SmokeShellRed","SmokeShellGreen"};
	respawnMagazines[] = {mag_10("30Rnd_65x39_caseless_mag"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84"),"SmokeShellBlue","SmokeShellRed","SmokeShellGreen"};
}; 

//SL----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_SL : KICC_MAN
{
	scope        = public;
	displayName  = $STR_squadleader;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] = {KICC_AKU12,hgun_P07_F,ACE_VectorDay,Throw,Put};
	respawnWeapons[] = {KICC_AKU12,hgun_P07_F,ACE_VectorDay,Throw,Put};
	items[] = {KSI,"ACE_microDAGR","ACE_Flashlight_MX991","ACE_MapTools"};
	respawnItems[] = {KSI,"ACE_microDAGR","ACE_Flashlight_MX991","ACE_MapTools"};
	linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","ItemCompass","ItemMap"};
	respawnLinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","ItemCompass","ItemMap"};
	magazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84"),"SmokeShellBlue","SmokeShellRed","SmokeShellGreen"};
	respawnMagazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84"),"SmokeShellBlue","SmokeShellRed","SmokeShellGreen"};
};
//pas de SL FS ?




//Porteur Munitions, retiré pour le moment
// class KICC_P_MUNITION : KICC_MAN
// {
	// scope        = protected;
	// displayName  = $STR_porteur;
// };
//Porteur Titan, retiré pour le moment
// class KICC_P_TITAN : KICC_MAN
// {
	// scope        = protected;
	// displayName  = $STR_porteur_ac;
// };



//Titan AC----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_TITAN_AC : KICC_MAN
{
	scope        = public;
	displayName  = $STR_specialiste_ac;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] = {KICC_AK12_STD,launch_I_Titan_short_F,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_AK12_STD,launch_I_Titan_short_F,hgun_P07_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","VSM_balaclava_Black"};
	respawnLinkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","VSM_balaclava_Black"};
	magazines[] = {mag_6("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),"Titan_AC"};
	respawnMagazines[] = {mag_6("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),"Titan_AC"};
};
//Titan AA----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_TITAN_AA : KICC_MAN
{
	scope        = public;
	displayName  = $STR_specialiste_aa;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] = {KICC_AK12_STD,launch_I_Titan_F,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_AK12_STD,launch_I_Titan_F,hgun_P07_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","VSM_balaclava_Black"};
	respawnLinkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","VSM_balaclava_Black"};
	magazines[] = {mag_6("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),"Titan_AA"};
	respawnMagazines[] = {mag_6("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),"Titan_AA"};
};

//specialiste Explosifs----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_EXPLO : KICC_MAN
{
	scope        = public;
	displayName  = $STR_specialiste_explo;
	uniformClass = O_VSM_OGA_od_Camo;
	backpack     = "KICC_SAC_DEMO";
	weapons[] = {KICC_AKU12,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_AKU12,hgun_P07_F,Throw,Put};
	items[] = {KSI,"ACE_M26_Clacker","ACE_DefusalKit"};
	respawnItems[] = {KSI,"ACE_M26_Clacker","ACE_DefusalKit"};
	linkedItems[] = {"VSM_RAV_Breacher_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","VSM_Balaclava2_black_Goggles"};
	respawnLinkedItems[] = {"VSM_RAV_Breacher_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","VSM_Balaclava2_black_Goggles"};
	magazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84")};
	respawnMagazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84")};
};
//specialiste Explosifs FS-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_EXPLO_FS : KICC_FS
{
	scope        = public;
	displayName  = $STR_specialiste_explo;
	uniformClass = O_VSM_OGA_od_Camo;
	backpack     = "KICC_SAC_DEMO";
	weapons[] = {KICC_MX_FS,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_MX_FS,hgun_P07_F,Throw,Put};
	items[] = {KSI,"ACE_M26_Clacker","ACE_DefusalKit"};
	respawnItems[] = {KSI,"ACE_M26_Clacker","ACE_DefusalKit"};
	linkedItems[] = {"VSM_RAV_Breacher_OGA_OD","VSM_Beanie_Black","tf_microdagr","tf_fadak","VSM_Balaclava2_black_Goggles","NVGoggles_OPFOR"};
	respawnLinkedItems[] = {"VSM_RAV_Breacher_OGA_OD","VSM_Beanie_Black","tf_microdagr","tf_fadak","VSM_Balaclava2_black_Goggles","NVGoggles_OPFOR"};
	magazines[] = {mag_10("30Rnd_65x39_caseless_mag"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84")};
	respawnMagazines[] = {mag_10("30Rnd_65x39_caseless_mag"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84")};
};


//MEDIC----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_MEDIC : KICC_MAN
{
	scope        = public;
	displayName  = $STR_medic;
	uniformClass = O_VSM_OGA_od_Camo;
	backpack     = "KICC_SAC_MEDIC";
	weapons[] = {KICC_AKU12,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_AKU12,hgun_P07_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"VSM_FAPC_MG_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak"};
	respawnLinkedItems[] = {"VSM_FAPC_MG_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak"};
	magazines[] = {mag_6("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_8("SmokeShell"),mag_2("SmokeShellYellow")};
	respawnMagazines[] = {mag_6("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_8("SmokeShell"),mag_2("SmokeShellYellow")};
};
//MEDIC FS-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_MEDIC_FS : KICC_FS
{
	scope        = public;
	displayName  = $STR_medic;
	uniformClass = O_VSM_OGA_od_Camo;
	backpack     = "KICC_SAC_MEDIC";
	weapons[] = {KICC_MX_FS_MEDIC,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_MX_FS_MEDIC,hgun_P07_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"VSM_FAPC_MG_OGA_OD","VSM_Beanie_Black","VSM_Shemagh_Balaclava2_OD","tf_microdagr","tf_fadak","NVGoggles_OPFOR"};
	respawnLinkedItems[] = {"VSM_FAPC_MG_OGA_OD","VSM_Beanie_Black","VSM_Shemagh_Balaclava2_OD","tf_microdagr","tf_fadak","NVGoggles_OPFOR"};
	magazines[] = {mag_6("30Rnd_65x39_caseless_mag"),mag_2("16Rnd_9x21_Mag"),mag_8("SmokeShell"),mag_2("SmokeShellYellow")};
	respawnMagazines[] = {mag_6("30Rnd_65x39_caseless_mag"),mag_2("16Rnd_9x21_Mag"),mag_8("SmokeShell"),mag_2("SmokeShellYellow")};
};

//GL----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_GRENADIER : KICC_MAN
{
	scope        = public;
	displayName  = $STR_grenadier;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] =	{KICC_AK12GL,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_AK12GL,hgun_P07_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak"};
	respawnLinkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak"};
	magazines[] = {mag_6("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84"),mag_2("hlc_GRD_White"),mag_9("hlc_VOG25_AK")};
	respawnMagazines[] = {mag_6("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84"),mag_2("hlc_GRD_White"),mag_9("hlc_VOG25_AK")};
};

//PCML----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_FUSILIER_AC : KICC_MAN
{
	scope        = public;
	displayName  = $STR_fusilier_ac;
	uniformClass = O_VSM_OGA_od_Camo;
	backpack     = "VSM_OGA_OD_Backpack_Compact";
	weapons[] = {KICC_AK12_STD,launch_NLAW_F,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_AK12_STD,launch_NLAW_F,hgun_P07_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","VSM_balaclava_Black"};
	respawnLinkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","VSM_balaclava_Black"};
	magazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84")};
	respawnMagazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84")};
};
//RPG-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_FUSILIER_RPG : KICC_MAN
{
	scope        = public;
	displayName  = $STR_fusilier_ac;
	uniformClass = O_VSM_OGA_od_Camo;
	backpack     = "VSM_OGA_OD_Backpack_Compact";
	weapons[] = {KICC_AK12_STD,launch_RPG7_F,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_AK12_STD,launch_RPG7_F,hgun_P07_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","VSM_Balaclava_black_Goggles"};
	respawnLinkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","VSM_OGA_OD_Helmet1","tf_microdagr","tf_fadak","VSM_Balaclava_black_Goggles"};
	magazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84"),mag_6("RPG7_F")};
	respawnMagazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84"),mag_6("RPG7_F")};
};

//TP----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_TIREUR_PRECISION : KICC_MAN
{
	scope        = public;
	displayName  = $STR_marksman;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] = {KICC_DMR_TP,hgun_P07_F,Laserdesignator_03,Throw,Put};
	respawnWeapons[] = {KICC_DMR_TP,hgun_P07_F,Laserdesignator_03,Throw,Put};
	items[] = {KSI,"ACE_Kestrel4500","ACE_ATragMX"};
	respawnItems[] = {KSI,"ACE_Kestrel4500","ACE_ATragMX"};
	linkedItems[] = {"VSM_RAV_operator_OGA_OD","tf_microdagr","tf_fadak","VSM_Balaclava_black_Peltor"};
	respawnLinkedItems[] = {"VSM_RAV_operator_OGA_OD","tf_microdagr","tf_fadak","VSM_Balaclava_black_Peltor"};
	magazines[] = {mag_5("20Rnd_762x51_Mag"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84"),"SmokeShellBlue","SmokeShellGreen"};
	respawnMagazines[] = {mag_5("20Rnd_762x51_Mag"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84"),"SmokeShellBlue","SmokeShellGreen"};
};
//TP FS-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_TIREUR_PRECISION_FS : KICC_FS
{
	scope        = public;
	displayName  = $STR_marksman;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] = {KICC_DMR_TP_FS,hgun_P07_F,Laserdesignator_03,Throw,Put};
	respawnWeapons[] = {KICC_DMR_TP_FS,hgun_P07_F,Laserdesignator_03,Throw,Put};
	items[] = {KSI,"ACE_Kestrel4500","ACE_ATragMX","hlc_muzzle_snds_g3"};
	respawnItems[] = {KSI,"ACE_Kestrel4500","ACE_ATragMX","hlc_muzzle_snds_g3"};
	linkedItems[] = {"VSM_RAV_operator_OGA_OD","VSM_Beanie_Black","tf_microdagr","tf_fadak","VSM_Balaclava_black_Peltor","NVGoggles_OPFOR"};
	respawnLinkedItems[] = {"VSM_RAV_operator_OGA_OD","VSM_Beanie_Black","tf_microdagr","tf_fadak","VSM_Balaclava_black_Peltor","NVGoggles_OPFOR"};
	magazines[] = {mag_5("30Rnd_65x39_caseless_mag"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84"),"SmokeShellBlue","SmokeShellGreen"};
	respawnMagazines[] = {mag_5("30Rnd_65x39_caseless_mag"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),mag_2("ACE_M84"),"SmokeShellBlue","SmokeShellGreen"};
}; 

//PILOTE H----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//pas de map ni boussole ?
class KICC_PILOTE_HELI : KICC_PILOTE
{
	scope        = public;
	displayName  = $STR_helipilote;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] = {hgun_Pistol_01_F,Throw,Put};
	respawnWeapons[] = {hgun_Pistol_01_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_O","tf_microdagr","tf_fadak","NVGoggles_OPFOR"};
	respawnLinkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_O","tf_microdagr","tf_fadak","NVGoggles_OPFOR"};
	magazines[] = {mag_3("10Rnd_9x21_Mag"), "ACE_HandFlare_Green","SmokeShellGreen","ACE_Chemlight_HiWhite","O_IR_Grenade"};
	respawnMagazines[] = {mag_3("10Rnd_9x21_Mag"), "ACE_HandFlare_Green","SmokeShellGreen","ACE_Chemlight_HiWhite","O_IR_Grenade"};
};

//COPILOTE H----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_COPILOTE_HELI : KICC_PILOTE
{
	scope        = public;
	displayName  = $STR_helicopilote;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] = {hgun_Pistol_01_F,Throw,Put};
	respawnWeapons[] = {hgun_Pistol_01_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","tf_microdagr","tf_fadak","NVGoggles_OPFOR","ItemCompass","ItemMap","ACE_MapTools"};
	respawnLinkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","tf_microdagr","tf_fadak","NVGoggles_OPFOR","ItemCompass","ItemMap","ACE_MapTools"};
	magazines[] = {mag_3("10Rnd_9x21_Mag"), "ACE_HandFlare_Green","SmokeShellGreen","ACE_Chemlight_HiWhite","O_IR_Grenade"};
	respawnMagazines[] = {mag_3("10Rnd_9x21_Mag"), "ACE_HandFlare_Green","SmokeShellGreen","ACE_Chemlight_HiWhite","O_IR_Grenade"};
};


//PILOTE A----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_PILOTE_AVION : KICC_PILOTE
{
	scope        = public;
	displayName  = $STR_pilote;
	uniformClass = O_U_I_pilotCoveralls;
	backpack     = "ACE_ReserveParachute";
	weapons[] = {hgun_Pistol_01_F,Throw,Put};
	respawnWeapons[] = {hgun_Pistol_01_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"H_PilotHelmetFighter_O","tf_microdagr","tf_fadak","ItemCompass","ItemMap"};
	respawnLinkedItems[] = {"H_PilotHelmetFighter_O","tf_microdagr","tf_fadak","ItemCompass","ItemMap"};
	magazines[] = {mag_2("16Rnd_9x21_Mag")};
	respawnMagazines[] = {mag_2("16Rnd_9x21_Mag")};
};

//EQUIPAGE----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_HOMME_EQUIPAGE : KICC_EQUIPAGE
{
	scope        = public;
	displayName  = $STR_equipage;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] = {hlc_rifle_aku12,Throw,Put};
	respawnWeapons[] = {hlc_rifle_aku12,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"VSM_LBT1961_OGA_OD","H_HelmetCrew_I","tf_microdagr","tf_fadak","ItemCompass","ItemMap"};
	respawnLinkedItems[] = {"VSM_LBT1961_OGA_OD","H_HelmetCrew_I","tf_microdagr","tf_fadak","ItemCompass","ItemMap"};
	magazines[] = {mag_5("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag")};
	respawnMagazines[] = {mag_5("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag")};
};

//PARA----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_PARACHUTISTE : KICC_PARA
{
	scope        = public;
	displayName  = $STR_parachutiste;
	uniformClass = O_VSM_OGA_od_Camo;
	backpack     = ACE_NonSteerableParachute;
	weapons[] = {KICC_AKU12,hgun_P07_F,Throw,Put};
	respawnWeapons[] = {KICC_AKU12,hgun_P07_F,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","VSM_Mich2000_OGA_OD","tf_microdagr","tf_fadak","VSM_Facemask_black_Goggles"};
	respawnLinkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","VSM_Mich2000_OGA_OD","tf_microdagr","tf_fadak","VSM_Facemask_black_Goggles"};
	magazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade")};
	respawnMagazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade")};
};

//OFFICIER------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_OFFICIER : KICC_MAN
{
	scope        = public;
	displayName  = $STR_officier;
	uniformClass = O_VSM_OGA_od_Camo_SS;
	weapons[] = {hgun_ACPC2_F,Binocular,Throw,Put};
	respawnWeapons[] = {hgun_ACPC2_F,Binocular,Throw,Put};
	items[] = {KSI,"ItemMap","ItemCompass","ACE_microDAGR","ACE_MapTools","ACE_Cellphone"};
	respawnItems[] = {KSI,"ItemMap","ItemCompass""ACE_microDAGR","ACE_MapTools","ACE_Cellphone"};
	linkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","H_Beret_Colonel","tf_microdagr","tf_fadak","G_Squares_Tinted"};
	respawnLinkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","H_Beret_Colonel","tf_microdagr","tf_fadak","G_Squares_Tinted"};
	magazines[] = {mag_2("9Rnd_45ACP_Mag")};
	respawnMagazines[] = {mag_2("9Rnd_45ACP_Mag")};
};

//SL sentinelle----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_SENTINELLE_SL : KICC_MAN
{
	scope        = public;
	displayName  = $STR_squadleader;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] = {KICC_AK12_SENTRY,hgun_P07_F,Rangefinder,Throw,Put};
	respawnWeapons[] = {KICC_AK12_SENTRY,hgun_P07_F,Rangefinder,Throw,Put};
	items[] = {KSI,"ItemMap","ItemCompass"};
	respawnItems[] = {KSI,"ItemMap","ItemCompass"};
	linkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","VSM_Bowman_cap_Tan","tf_microdagr","tf_fadak"};
	respawnLinkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","VSM_Bowman_cap_Tan","tf_microdagr","tf_fadak"};
	magazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade")};
	respawnMagazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade")};
};

//Radio sentinelle-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_SENTINELLE_RADIO : KICC_MAN
{
	scope        = public;
	displayName  = $STR_radio;
	uniformClass = O_VSM_OGA_od_Camo;
	backpack     = "tf_mr3000_bwmod";
	weapons[] = {KICC_AK12_SENTRY,hgun_P07_F,Rangefinder,Throw,Put};
	respawnWeapons[] = {KICC_AK12_SENTRY,hgun_P07_F,Rangefinder,Throw,Put};
	items[] = {KSI,"ItemMap","ItemCompass"};
	respawnItems[] = {KSI,"ItemMap","ItemCompass"};
	linkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","VSM_Bowman","tf_microdagr","tf_fadak"};
	respawnLinkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","VSM_Bowman","tf_microdagr","tf_fadak"};
	magazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade")};
	respawnMagazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade")};
};

//Sniper---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class KICC_SNIPER : KICC_MAN
{
	scope        = public;
	displayName  = $STR_sniper;
	uniformClass = O_VSM_OGA_od_Camo;
	weapons[] = {KICC_AWM,hgun_P07_F,Binocular,Throw,Put};
	respawnWeapons[] = {KICC_AWM,hgun_P07_F,Binocular,Throw,Put};
	items[] = {KSI};
	respawnItems[] = {KSI};
	linkedItems[] = {"V_Chestrig_rgr","VSM_Bowman","tf_microdagr","tf_fadak","VSM_balaclava2_Black"};
	respawnLinkedItems[] = {"V_Chestrig_rgr","VSM_Bowman","tf_microdagr","tf_fadak","VSM_balaclava2_Black"};
	magazines[] = {mag_5("hlc_5rnd_300WM_FMJ_AWM"),mag_2("16Rnd_9x21_Mag")};
	respawnMagazines[] = {mag_5("hlc_5rnd_300WM_FMJ_AWM"),mag_2("16Rnd_9x21_Mag")};
};
//spotter
class KICC_SPOTTER : KICC_MAN
{
	scope        = public;
	displayName  = $STR_spotter;
	uniformClass = O_VSM_OGA_od_Camo;
	backpack     = "tf_mr3000_bwmod";
	weapons[] = {KICC_AK12_STD,hgun_P07_F,Laserdesignator_03,Throw,Put};
	respawnWeapons[] = {KICC_AK12_STD,hgun_P07_F,Laserdesignator_03,Throw,Put};
	items[] = {KSI,"ACE_ATragMX","ACE_Kestrel4500","ACE_microDAGR","ACE_MapTools","ACE_M26_Clacker"};
	respawnItems[] = {KSI,"ACE_ATragMX","ACE_Kestrel4500","ACE_microDAGR","ACE_MapTools","ACE_M26_Clacker"};
	linkedItems[] = {"VSM_LBT6094_MG_OGA_OD","VSM_Bowman","tf_microdagr","tf_fadak","VSM_balaclava2_Black"};
	respawnLinkedItems[] = {"VSM_LBT6094_MG_OGA_OD","VSM_Bowman","tf_microdagr","tf_fadak","VSM_balaclava2_Black"};
	magazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),"SmokeShellGreen","SmokeShellRed","SmokeShellBlue",mag_2("ClaymoreDirectionalMine_Remote_Mag")};
	respawnMagazines[] = {mag_10("hlc_30Rnd_545x39_B_AK"),mag_2("16Rnd_9x21_Mag"),mag_2("SmokeShell"),mag_2("HandGrenade"),"SmokeShellGreen","SmokeShellRed","SmokeShellBlue",mag_2("ClaymoreDirectionalMine_Remote_Mag")};
};















/////////////////////////////// retexture vehicules KICC

//Orca
class O_Heli_Light_02_unarmed_F;
class KICC_ORCA_UNARMED : O_Heli_Light_02_unarmed_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "HELI_KICC";
	displayName = $STR_orca;
	crew = "KICC_PILOTE_HELI";
	hiddenSelectionsTextures[]={"\kicc_units\textures\orca\orca_kicc.paa"};
	typicalCargo[]={"KICC_PILOTE_HELI", "KICC_COPILOTE_HELI"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\orca\orca_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};

class O_Heli_Light_02_F;
class KICC_ORCA_ARMED : O_Heli_Light_02_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "HELI_KICC";
	displayName = $STR_orca_armed;
	crew = "KICC_PILOTE_HELI";
	hiddenSelectionsTextures[]={"\kicc_units\textures\orca\orca_kicc.paa"};
	typicalCargo[]={"KICC_PILOTE_HELI", "KICC_COPILOTE_HELI"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\orca\orca_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};



//Kajman
class O_Heli_Attack_02_F;
class KICC_KAJMAN : O_Heli_Attack_02_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "HELI_KICC";
	displayName = $STR_kajman;
	crew = "KICC_PILOTE_HELI";
	hiddenSelectionsTextures[]={"\kicc_units\textures\kajman\kajman_texture0_kicc.paa", "\kicc_units\textures\kajman\kajman_texture1_kicc.paa"};
	typicalCargo[]={"KICC_PILOTE_HELI", "KICC_COPILOTE_HELI"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\kajman\kajman_texture0_kicc.paa",
				"\kicc_units\textures\kajman\kajman_texture1_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};



//Huron
class B_Heli_Transport_03_F;
class KICC_HURON_ARMED : B_Heli_Transport_03_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "HELI_KICC";
	displayName = $STR_huron_minigun;
	crew = "KICC_PILOTE_HELI";
	hiddenSelectionsTextures[]={"\kicc_units\textures\huron\huron_texture0_kicc.paa", "\kicc_units\textures\huron\huron_texture1_kicc.paa"};
	typicalCargo[]={"KICC_PILOTE_HELI", "KICC_COPILOTE_HELI", "KICC_COPILOTE_HELI", "KICC_COPILOTE_HELI"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\huron\huron_texture0_kicc.paa",
				"\kicc_units\textures\huron\huron_texture1_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};

class B_Heli_Transport_03_unarmed_F;
class KICC_HURON_UNARMED : B_Heli_Transport_03_unarmed_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "HELI_KICC";
	displayName = $STR_huron;
	crew = "KICC_PILOTE_HELI";
	hiddenSelectionsTextures[]={"\kicc_units\textures\huron\huron_texture0_kicc.paa", "\kicc_units\textures\huron\huron_texture1_kicc.paa"};
	typicalCargo[]={"KICC_PILOTE_HELI", "KICC_COPILOTE_HELI"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\huron\huron_texture0_kicc.paa",
				"\kicc_units\textures\huron\huron_texture1_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};



//Tempest
class O_Truck_03_transport_F;
class KICC_TEMPEST : O_Truck_03_transport_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "CAMION_KICC";
	displayName = $STR_tempest;
	crew = "KICC_HOMME_EQUIPAGE";
	hiddenSelectionsTextures[]={"\kicc_units\textures\tempest\tempest_texture0_kicc.paa", "\kicc_units\textures\tempest\tempest_texture1_kicc.paa", "\kicc_units\textures\tempest\tempest_cargo_kicc.paa"};
	typicalCargo[]={"KICC_HOMME_EQUIPAGE", "KICC_HOMME_EQUIPAGE"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\tempest\tempest_texture0_kicc.paa",
				"\kicc_units\textures\tempest\tempest_texture1_kicc.paa",
				"\kicc_units\textures\tempest\tempest_cargo_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};

class O_Truck_03_covered_F;
class KICC_TEMPEST_BACHE : O_Truck_03_covered_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "CAMION_KICC";
	displayName = $STR_tempest_bache;
	crew = "KICC_HOMME_EQUIPAGE";
	hiddenSelectionsTextures[]=
	{
		"\kicc_units\textures\tempest\tempest_texture0_kicc.paa",
		"\kicc_units\textures\tempest\tempest_texture1_kicc.paa",
		"\kicc_units\textures\tempest\tempest_cargo_kicc.paa",
		"\kicc_units\textures\tempest\tempest_cover_kicc.paa"
	};
	typicalCargo[]={"KICC_HOMME_EQUIPAGE", "KICC_HOMME_EQUIPAGE"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\tempest\tempest_texture0_kicc.paa",
				"\kicc_units\textures\tempest\tempest_texture1_kicc.paa",
				"\kicc_units\textures\tempest\tempest_cargo_kicc.paa",
				"\kicc_units\textures\tempest\tempest_cover_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};

class O_Truck_03_repair_F;
class KICC_TEMPEST_REPAIR : O_Truck_03_repair_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "CAMION_KICC";
	displayName = $STR_tempest_repair;
	crew = "KICC_HOMME_EQUIPAGE";
	hiddenSelectionsTextures[]={"\kicc_units\textures\tempest\tempest_texture0_kicc.paa", "\kicc_units\textures\tempest\tempest_texture1_kicc.paa", "\kicc_units\textures\tempest\tempest_repair_kicc.paa"};
	typicalCargo[]={"KICC_HOMME_EQUIPAGE", "KICC_HOMME_EQUIPAGE"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\tempest\tempest_texture0_kicc.paa",
				"\kicc_units\textures\tempest\tempest_texture1_kicc.paa",
				"\kicc_units\textures\tempest\tempest_repair_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};

class O_Truck_03_ammo_F;
class KICC_TEMPEST_AMMO : O_Truck_03_ammo_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "CAMION_KICC";
	displayName = $STR_tempest_ammo;
	crew = "KICC_HOMME_EQUIPAGE";
	hiddenSelectionsTextures[]={"\kicc_units\textures\tempest\tempest_texture0_kicc.paa", "\kicc_units\textures\tempest\tempest_texture1_kicc.paa", "\kicc_units\textures\tempest\tempest_cargo_kicc.paa", "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"};
	typicalCargo[]={"KICC_HOMME_EQUIPAGE", "KICC_HOMME_EQUIPAGE"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\tempest\tempest_texture0_kicc.paa",
				"\kicc_units\textures\tempest\tempest_texture1_kicc.paa",
				"\kicc_units\textures\tempest\tempest_cargo_kicc.paa",
				"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};

class O_Truck_03_medical_F;
class KICC_TEMPEST_MEDIC : O_Truck_03_medical_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "CAMION_KICC";
	displayName = $STR_tempest_medic;
	crew = "KICC_HOMME_EQUIPAGE";
	hiddenSelectionsTextures[]={"\kicc_units\textures\tempest\tempest_texture0_kicc.paa", "\kicc_units\textures\tempest\tempest_texture1_kicc.paa", "\kicc_units\textures\tempest\tempest_cargo_kicc.paa", "\kicc_units\textures\tempest\tempest_cover_kicc.paa"};
	typicalCargo[]={"KICC_HOMME_EQUIPAGE", "KICC_HOMME_EQUIPAGE"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\tempest\tempest_texture0_kicc.paa",
				"\kicc_units\textures\tempest\tempest_texture1_kicc.paa",
				"\kicc_units\textures\tempest\tempest_cargo_kicc.paa",
				"\kicc_units\textures\tempest\tempest_cover_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};

class O_Truck_03_fuel_F;
class KICC_TEMPEST_FUEL : O_Truck_03_fuel_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "CAMION_KICC";
	displayName = $STR_tempest_fuel;
	crew = "KICC_HOMME_EQUIPAGE";
	hiddenSelectionsTextures[]={"\kicc_units\textures\tempest\tempest_texture0_kicc.paa", "\kicc_units\textures\tempest\tempest_texture1_kicc.paa", "\kicc_units\textures\tempest\tempest_fuel_kicc.paa"};
	typicalCargo[]={"KICC_HOMME_EQUIPAGE", "KICC_HOMME_EQUIPAGE"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\tempest\tempest_texture0_kicc.paa",
				"\kicc_units\textures\tempest\tempest_texture1_kicc.paa",
				"\kicc_units\textures\tempest\tempest_fuel_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};

class O_Truck_03_device_F;
class KICC_TEMPEST_DEVICE : O_Truck_03_device_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "CAMION_KICC";
	displayName = $STR_tempest_device;
	crew = "KICC_HOMME_EQUIPAGE";
	hiddenSelectionsTextures[]=
	{
		"\kicc_units\textures\tempest\tempest_texture0_kicc.paa",
		"\kicc_units\textures\tempest\tempest_texture1_kicc.paa",
		"\kicc_units\textures\tempest\tempest_cargo_kicc.paa",
		"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
		"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
	};
	typicalCargo[]={"KICC_HOMME_EQUIPAGE", "KICC_HOMME_EQUIPAGE"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\tempest\tempest_texture0_kicc.paa",
				"\kicc_units\textures\tempest\tempest_texture1_kicc.paa",
				"\kicc_units\textures\tempest\tempest_cargo_kicc.paa",
				"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
				"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};



//Sochor
class O_MBT_02_arty_F;
class KICC_SOCHOR : O_MBT_02_arty_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "BLINDE_KICC";
	displayName = $STR_sochor;
	crew = "KICC_HOMME_EQUIPAGE";
	hiddenSelectionsTextures[]=
	{
		"\kicc_units\textures\sochor\sochor_texture0_kicc.paa",
		"\kicc_units\textures\sochor\sochor_texture1_kicc.paa",
		"\kicc_units\textures\sochor\sochor_texture2_kicc.paa",
		"\kicc_units\textures\sochor\sochor_texture3_turret_kicc.paa"
	};
	typicalCargo[]={"KICC_HOMME_EQUIPAGE", "KICC_HOMME_EQUIPAGE", "KICC_HOMME_EQUIPAGE"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\sochor\sochor_texture0_kicc.paa",
				"\kicc_units\textures\sochor\sochor_texture1_kicc.paa",
				"\kicc_units\textures\sochor\sochor_texture2_kicc.paa",
				"\kicc_units\textures\sochor\sochor_texture3_turret_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};



//Tigris
class O_APC_Tracked_02_AA_F;
class KICC_TIGRIS : O_APC_Tracked_02_AA_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "BLINDE_KICC";
	displayName = $STR_tigris;
	crew = "KICC_HOMME_EQUIPAGE";
	hiddenSelectionsTextures[]=
	{
		"\kicc_units\textures\tigris\tigris_texture0_kicc.paa",
		"\kicc_units\textures\tigris\tigris_texture1_kicc.paa",
		"\kicc_units\textures\tigris\tigris_texture2_kicc.paa"
	};
	typicalCargo[]={"KICC_HOMME_EQUIPAGE", "KICC_HOMME_EQUIPAGE", "KICC_HOMME_EQUIPAGE"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\tigris\tigris_texture0_kicc.paa",
				"\kicc_units\textures\tigris\tigris_texture1_kicc.paa",
				"\kicc_units\textures\tigris\tigris_texture2_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};



//Gorgon
class I_APC_Wheeled_03_cannon_F;
class KICC_GORGON : I_APC_Wheeled_03_cannon_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "BLINDE_KICC";
	displayName = $STR_gorgon;
	crew = "KICC_HOMME_EQUIPAGE";
	hiddenSelectionsTextures[]=
	{
		"\kicc_units\textures\gorgon\gorgon_texture0_kicc.paa",
		"\kicc_units\textures\gorgon\gorgon_texture1_kicc.paa",
		"\kicc_units\textures\gorgon\gorgon_texture2_kicc.paa",
		"\kicc_units\textures\gorgon\gorgon_texture3_kicc.paa"
	};
	typicalCargo[]={"KICC_HOMME_EQUIPAGE", "KICC_HOMME_EQUIPAGE", "KICC_HOMME_EQUIPAGE"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\gorgon\gorgon_texture0_kicc.paa",
				"\kicc_units\textures\gorgon\gorgon_texture1_kicc.paa",
				"\kicc_units\textures\gorgon\gorgon_texture2_kicc.paa",
				"\kicc_units\textures\gorgon\gorgon_texture3_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};



//Ifrit
class O_MRAP_02_F;
class KICC_IFRIT : O_MRAP_02_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "MRAP_KICC";
	displayName = $STR_ifrit;
	crew = "KICC_FUSILIER";
	hiddenSelectionsTextures[]=
	{
		"\kicc_units\textures\ifrit\ifrit_texture0_kicc.paa",
		"\kicc_units\textures\ifrit\ifrit_texture1_kicc.paa"
	};
	typicalCargo[]={"KICC_FUSILIER", "KICC_FUSILIER", "KICC_FUSILIER"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\ifrit\ifrit_texture0_kicc.paa",
				"\kicc_units\textures\ifrit\ifrit_texture1_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};

class O_MRAP_02_gmg_F;
class KICC_IFRIT_GMG : O_MRAP_02_gmg_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "MRAP_KICC";
	displayName = $STR_ifrit_gmg;
	crew = "KICC_FUSILIER";
	hiddenSelectionsTextures[]=
	{
		"\kicc_units\textures\ifrit\ifrit_texture0_kicc.paa",
		"\kicc_units\textures\ifrit\ifrit_texture1_kicc.paa",
		"\kicc_units\textures\ifrit\ifrit_texture2_turret_kicc.paa"
	};
	typicalCargo[]={"KICC_FUSILIER", "KICC_FUSILIER", "KICC_FUSILIER"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\ifrit\ifrit_texture0_kicc.paa",
				"\kicc_units\textures\ifrit\ifrit_texture1_kicc.paa",
				"\kicc_units\textures\ifrit\ifrit_texture2_turret_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};

class O_MRAP_02_hmg_F;
class KICC_IFRIT_HMG : O_MRAP_02_hmg_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "MRAP_KICC";
	displayName = $STR_ifrit_hmg;
	crew = "KICC_FUSILIER";
	hiddenSelectionsTextures[]=
	{
		"\kicc_units\textures\ifrit\ifrit_texture0_kicc.paa",
		"\kicc_units\textures\ifrit\ifrit_texture1_kicc.paa",
		"\kicc_units\textures\ifrit\ifrit_texture2_turret_kicc.paa"
	};
	typicalCargo[]={"KICC_FUSILIER", "KICC_FUSILIER", "KICC_FUSILIER"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\ifrit\ifrit_texture0_kicc.paa",
				"\kicc_units\textures\ifrit\ifrit_texture1_kicc.paa",
				"\kicc_units\textures\ifrit\ifrit_texture2_turret_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};



//Offroad
class B_G_Offroad_01_F;
class KICC_OFFROAD_UNARMED : B_G_Offroad_01_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "OFFROAD_KICC";
	displayName = $STR_offroad;
	crew = "KICC_FUSILIER";
	animationList[] = {};
	hiddenSelectionsTextures[]=
	{
		"\kicc_units\textures\offroad\offroad_kicc.paa",
		"\kicc_units\textures\offroad\offroad_kicc.paa"
	};
	typicalCargo[]={"KICC_FUSILIER", "KICC_FUSILIER"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\offroad\offroad_kicc.paa",
				"\kicc_units\textures\offroad\offroad_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};

class B_G_Offroad_01_armed_F;
class KICC_OFFROAD_ARMED : B_G_Offroad_01_armed_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "OFFROAD_KICC";
	displayName = $STR_offroad_arme;
	crew = "KICC_FUSILIER";
	animationList[] = {};
	hiddenSelectionsTextures[]=
	{
		"\kicc_units\textures\offroad\offroad_kicc.paa",
		"\kicc_units\textures\offroad\offroad_kicc.paa"
	};
	typicalCargo[]={"KICC_FUSILIER", "KICC_FUSILIER", "KICC_FUSILIER"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\offroad\offroad_kicc.paa",
				"\kicc_units\textures\offroad\offroad_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};


//T-100
class O_MBT_02_cannon_F;
class KICC_T100 : O_MBT_02_cannon_F
{
	scope = 2;
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "BLINDE_KICC";
	displayName = $STR_t100;
	crew = "KICC_HOMME_EQUIPAGE";
	hiddenSelectionsTextures[]=
	{
		"\kicc_units\textures\t100\t100_texture0_kicc.paa",
		"\kicc_units\textures\t100\t100_texture1_kicc.paa",
		"\kicc_units\textures\t100\t100_texture2_kicc.paa"
	};
	typicalCargo[]={"KICC_HOMME_EQUIPAGE", "KICC_HOMME_EQUIPAGE", "KICC_HOMME_EQUIPAGE"};
	availableForSupportTypes[] = {"Drop","Transport"};
	author = "[LM] Cheitan, [LM] Antazur";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Antazur";
			textures[]=
			{
				"\kicc_units\textures\t100\t100_texture0_kicc.paa",
				"\kicc_units\textures\t100\t100_texture1_kicc.paa",
				"\kicc_units\textures\t100\t100_texture2_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};


//Buzzard
class I_Plane_Fighter_03_AA_F;
class I_Plane_Fighter_03_CAS_F;
class KICC_BUZZARD_AA : I_Plane_Fighter_03_AA_F
{
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "AVION_KICC";
	displayName = $STR_buzzard_aa;
	crew = "KICC_PILOTE_AVION";
	hiddenSelectionsTextures[]=
	{
		"\kicc_units\textures\buzzard\buzzard_texture0_kicc.paa",
		"\kicc_units\textures\buzzard\buzzard_texture1_kicc.paa"
	};
	author = "[LM] Stark, [LM] Cheitan";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Stark";
			textures[]=
			{
				"\kicc_units\textures\buzzard\buzzard_texture0_kicc.paa",
				"\kicc_units\textures\buzzard\buzzard_texture1_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};
class KICC_BUZZARD_CAS : I_Plane_Fighter_03_CAS_F
{
	side = 0;
	faction = "LM_KICC";
	editorSubcategory = "AVION_KICC";
	displayName = $STR_buzzard_cas;
	crew = "KICC_PILOTE_AVION";
	hiddenSelectionsTextures[]=
	{
		"\kicc_units\textures\buzzard\buzzard_texture0_kicc.paa",
		"\kicc_units\textures\buzzard\buzzard_texture1_kicc.paa"
	};
	author = "[LM] Stark, [LM] Cheitan";
	forceInGarage = 1;
	textureList[] = {"kicc", 1};
	class textureSources
	{
		class kicc
		{
			displayName = "KICC";
			author = "[LM] Stark";
			textures[]=
			{
				"\kicc_units\textures\buzzard\buzzard_texture0_kicc.paa",
				"\kicc_units\textures\buzzard\buzzard_texture1_kicc.paa"
			};
			factions[] = {"LM_KICC"};
		};
	};
};




