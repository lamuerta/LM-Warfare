// Sac de secouriste
class B_Carryall_mcamo;
class LM_MEDIC_HEAVY_BACKPACK : B_Carryall_mcamo
{
	author = "[LM] Antazur, [LM] Cheitan";
	scope = 2;
	side = 1;
	faction = "LA_MUERTA";
	displayName = $STR_bags_heavymedpack;
	hiddenSelectionsTextures[]={"\lm_units\textures\sacs\medical\multifonction_medevac.paa"};
	maximumLoad = 320;
	mass = 60;
	class TransportItems
	{
		item_xx(ACE_elasticBandage,20);
		item_xx(ACE_fieldDressing,10);
		item_xx(ACE_quikclot,40);
		item_xx(ACE_packingBandage,40);
		item_xx(ACE_EarPlugs,4);
		item_xx(ACE_tourniquet,10);
		item_xx(ACE_salineIV_250,8);
		item_xx(ACE_salineIV, 7);
		item_xx(ACE_adenosine,10);
		item_xx(ACE_epinephrine,10);
		item_xx(ACE_morphine,20);
		item_xx(ACE_bodyBag,2);
		item_xx(ACE_surgicalKit,1);
		item_xx(ACE_personalAidKit,1);
		item_xx(adv_aceCPR_AED,1);
		item_xx(RDP_Splint,10);
	};
};



// MATERIEL POUR DRONES

class assembleInfo;
class B_UAV_01_F;

// UAV Backpack base
class B_UAV_01_backpack_F;
class LM_UAV_backpack_base : B_UAV_01_backpack_F
{
	scope = 2;
	side = 1;
	faction = "LA_MUERTA";
	displayName = $STR_bags_uavbackpackbase;
	author = "[LM] Karoucho, [LM] Cheitan";
	hiddenSelectionsTextures[] = {"\lm_units\textures\sacs\darter\lm_altis_sacdarter.paa"};
	mass = 150;
	class assembleInfo : assembleInfo {
		base = "";
		displayName = "[LM] Darter";
		assembleTo = "LM_Darter_base";
	};
};

// UAV Backpack forest
class LM_UAV_backpack_forest : B_UAV_01_backpack_F
{
	scope = private;
	side = 1;
	faction = "LA_MUERTA";
	displayName = $STR_bags_uavbackpackforest;
	author = "[LM] Karoucho, [LM] Cheitan";
	// hiddenSelectionsTextures[] = {"\lm_units\textures\sacs\darter\m90_sac.paa"};
	mass = 150;
	class assembleInfo : assembleInfo {
		base = "";
		displayName = "[LM] Darter";
		assembleTo = "LM_Darter_forest";
	};
};


// Darter base
class LM_Darter_base : B_UAV_01_F
{
	scope = 1;
	author = "[LM] Cheitan";
	displayName = $STR_bags_darter;
	forceInGarage = 1;
	side = 1;
	faction = "LA_MUERTA";
	camouflage = 0;
	class assembleInfo {
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {"LM_UAV_backpack_base"};
	};
};

// Darter m90
class LM_Darter_forest : B_UAV_01_F
{
	scope = private;
	author = "[LM] Cheitan";
	displayName = $STR_bags_darter;
	forceInGarage = 1;
	side = 1;
	faction = "LA_MUERTA";
	camouflage = 0;
	class assembleInfo {
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {"LM_UAV_backpack_forest"};
	};
};




// Sac multi scorpion
class LM_BASE_HEAVY_BACKPACK : B_Carryall_mcamo
{
	author = "[LM] Karoucho, [LM] Cheitan";
	faction = "LA_MUERTA";
	displayName = $STR_bags_carryallbase;
	hiddenSelectionsTextures[] = {"\lm_units\textures\sacs\multifonction\multi_aor1.paa"};
};

// Sac multi M90
class LM_FOREST_HEAVY_BACKPACK : B_Carryall_mcamo
{
	scope = private;
	author = "[LM] Karoucho, [LM] Cheitan";
	faction = "LA_MUERTA";
	displayName = $STR_bags_carryallforest;
	hiddenSelectionsTextures[] = {"\lm_units\textures\sacs\multifonction\multi_m90.paa"};
};




// Wall-E Scorpion
class B_Static_Designator_01_weapon_F; // Sac désignateur
class LM_WALLY_BASE_BAG : B_Static_Designator_01_weapon_F
{
	author = "[LM] Karoucho, [LM] Cheitan";
	faction = "LM_MUERTA";
	displayName = $STR_bags_wallybase;
	hiddenSelectionsTextures[] = {"\lm_units\textures\sacs\wally\wally_aor1.paa"};
};

// Wall-E M90
class LM_WALLY_FOREST_BAG : B_Static_Designator_01_weapon_F
{
	scope = private;
	author = "[LM] Karoucho, [LM] Cheitan";
	faction = "LM_MUERTA";
	displayName = $STR_bags_wallyforest;
	hiddenSelectionsTextures[] = {"\lm_units\textures\sacs\wally\wally_m90.paa"};
};



// Radios LR
class tfw_ilbe_coy;
class LM_RADIO_BASE : tfw_ilbe_coy
{
	scope = 1;
	author = "[LM] Karoucho, [LM] Cheitan";
	faction = "LM_MUERTA";
	displayName = $STR_bags_radiobase;
	hiddenSelectionsTextures[] = {"\lm_units\textures\sacs\radio\lm_altis_sacradio.paa"};
};

class tfw_ilbe_gr;
class LM_RADIO_FOREST : tfw_ilbe_gr
{
	scope = 1;
	author = "[LM] Karoucho, [LM] Cheitan";
	faction = "LM_MUERTA";
	displayName = $STR_bags_radioforest;
	//hiddenSelectionsTextures[] = {"\lm_units\textures\sacs\radio\radio_m90.paa"};
};