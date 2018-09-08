#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CfgPatches
{
	class LM_vehicules
	{
		units[] =
		{
			LM_LITTLEBIRD,
			LM_LITTLEBIRD_ARMED,
			LM_MOHAWK,
			LM_MBT_KUMA,
			LM_AZRAEL,
			LM_F18,
			LM_MRAP_HUNTER,
			LM_MRAP_HUNTER_HMG,
			LM_MRAP_HUNTER_GMG,
			LM_MRAP_HUNTER_RECO,
			LM_MRAP_HUNTER_MEDIC,
			LM_PROWLER_HMG,
			LM_PROWLER,
			LM_OFFROAD_M90,
			LM_OFFROAD_SCORPION,
			LM_ZAMAK,
			LM_ZAMAK_COVERED,
			LM_ZAMAK_MEDIC,
			LM_ZAMAK_AMMO,
			LM_ZAMAK_REPAIR,
			LM_ZAMAK_FUEL,
			LM_GREYHAWK,
			LM_HERCULE_UGV,
			LM_BLACKFOOT,
			LM_GHOST,
			LM_MARSHALL
		};
		weapons[] = {};
		requiredVersion = 1.000000;
		requiredAddons[] = {"lm_units"};
	};
};

class CfgFunctions {
    class LM {
        class SLAT {
            file = "\lm_vehicules\functions\SLAT";
            class canSLAT {};
            class doSLAT {};
			class addSLATactions {};
        };
		class CAMO {
            file = "\lm_vehicules\functions\CAMO";
            class canCAMO {};
            class doCAMO {};
			class addCAMOactions {};
        };
    };
};

class Extended_InitPost_EventHandlers {
    class Car {
        class lm_slat {
            init = "_this call LM_fnc_addSLATactions";
        };
		class lm_camo {
            init = "_this call LM_fnc_addCAMOactions";
        };
    };
	class Tank {
		class lm_camo {
            init = "_this call LM_fnc_addCAMOactions";
        };
    };
};

class CfgVehicles
{
	// Ajout de véhicules au mod de towing
	class Car_F;
	
	class MRAP_01_base_F : Car_F {
		LESH_canTow = 1;
		LESH_AxisOffsetTower[] = {0, -4.4, -1};
	};
	
	class LSV_01_base_F : Car_F {
		LESH_canTow = 1;
		LESH_AxisOffsetTower[] = {-0.3, -2.1, -1.3};
	};
	
	class Offroad_01_base_F : Car_F {
		LESH_canTow = 1;
		LESH_AxisOffsetTower[] = {0, -3, -1};
	};
	
	class Truck_02_base_F : Car_F {
		LESH_canTow = 1;
		LESH_AxisOffsetTower[] = {0, -3.9, -1.1};
	};
	
	class APC_Wheeled_01_base_F : Car_F {
		LESH_canTow = 1;
		LESH_AxisOffsetTower[] = {0, -4.1, -1.5};
	};
	
	// class MBT_03_base_F : Car_F {
		// LESH_canTow = 1;
		// LESH_AxisOffsetTower[] = {0, -5.1, -1.6};
	// };


	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////                              REFERENCES EXTERNES                                /////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	//Hummingbird, Blackfoot, GhostHawk
	class B_Heli_Light_01_F;
	class B_Heli_Light_01_armed_F;
	class B_Heli_Attack_01_dynamicLoadout_F;
	class B_Heli_Transport_01_F;
	
	//Mohawk, Taru
	class I_Heli_Transport_02_F;
	
	//Kuma, Cheetah
	class I_MBT_03_cannon_F;
	class B_APC_Tracked_01_AA_F;
	
	//Néophron, Black Wasp
	class O_Plane_CAS_02_F;
	class B_Plane_Fighter_01_F;
	
	//Hunter, Offroad, Prowler
	class B_MRAP_01_F;
	class B_MRAP_01_gmg_F;
	class B_MRAP_01_hmg_F;
	class B_G_Offroad_01_F;
	class B_LSV_01_armed_F;
	class B_LSV_01_unarmed_F;
	
	//Zamak
	class I_Truck_02_covered_F;
	class I_Truck_02_transport_F;
	class I_Truck_02_medical_F;
	class I_Truck_02_ammo_F;
	class I_Truck_02_fuel_F;
	class I_Truck_02_box_F;
	
	//Drones
	class B_UAV_01_F;
	class B_UAV_02_dynamicLoadout_F;
	class B_UGV_01_F;
	
	

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////                                     DRONES                                     /////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	

	// Greyhawk
	class LM_GREYHAWK : B_UAV_02_dynamicLoadout_F
	{
		author = "[LM] Karoucho, [LM] Cheitan";
		displayName = $STR_greyhawk;
		editorSubcategory = "LM_DRONES";
		hiddenSelectionsTextures[] = {"\lm_vehicules\textures\greyhawk\lm_greyhawk_ext01.paa"};
		forceInGarage = 1;
		side = 1;
		faction = "LA_MUERTA";
		camouflage = 0;
	};
	
	// Stomper
	class LM_HERCULE_UGV : B_UGV_01_F
	{
		author = "[LM] Cheitan";
		displayName = $STR_hercule;
		editorSubcategory = "LM_DRONES";
		forceInGarage = 1;
		side = 1;
		faction = "LA_MUERTA";
	};
	
	
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////                                 HELICO LEGERS                                   /////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// MH6 Littlebird
	class LM_LITTLEBIRD : B_Heli_Light_01_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_HELI_LIGHT";
		displayName = $STR_mh6_littlebird;
		crew = "LM_SPECIAL_HELIPILOTE";
		hiddenSelectionsTextures[]={"\lm_vehicules\textures\mh6\lm_littlebird_ext01.paa"};
		typicalCargo[]={"LM_BASE_FUSILIER", "LM_BASE_FUSILIER"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		textureList[] = {"grey", 1};
		class textureSources
		{
			class grey
			{
				displayName = "Grey";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\mh6\lm_littlebird_ext01.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
			mag_xx(HandGrenade,2);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	// AH6 Littlebird
	class LM_LITTLEBIRD_ARMED : B_Heli_Light_01_armed_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_HELI_LIGHT";
		displayName = $STR_ah6_littlebird;
		crew = "LM_SPECIAL_HELIPILOTE";
		hiddenSelectionsTextures[]={"\lm_vehicules\textures\mh6\lm_littlebird_ext01.paa"};
		typicalCargo[]={"LM_BASE_FUSILIER", "LM_BASE_FUSILIER"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		textureList[] = {"grey", 1};
		class textureSources
		{
			class grey
			{
				displayName = "Grey";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\mh6\lm_littlebird_ext01.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
			mag_xx(HandGrenade,2);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	// GhostHawk
	class LM_GHOST : B_Heli_Transport_01_F
	{
		author = "[LM] Cheitan, [LM] Karoucho";
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_HELI_LIGHT";
		displayName = $STR_ghosthawk;
		crew = "LM_SPECIAL_HELIPILOTE";
		typicalCargo[]={"LM_SPECIAL_HELIPILOTE", "LM_SPECIAL_HELIPILOTE"};
		availableForSupportTypes[] = {"Drop","Transport"};
		forceInGarage = 1;
		hiddenSelectionsTextures[]={"\lm_vehicules\textures\ghosthawk\lm_ghosthawk_ext01.paa", "\lm_vehicules\textures\ghosthawk\lm_ghosthawk_ext02.paa"};
		textureList[] = {"grey", 1};
		class textureSources
		{
			class grey
			{
				displayName = "Grey";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\ghosthawk\lm_ghosthawk_ext01.paa",
					"\lm_vehicules\textures\ghosthawk\lm_ghosthawk_ext02.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
			mag_xx(HandGrenade,2);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	// Blackfoot
	class LM_BLACKFOOT : B_Heli_Attack_01_dynamicLoadout_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_HELI_LIGHT";
		displayName = $STR_blackfoot;
		crew = "LM_SPECIAL_HELIPILOTE";
		hiddenSelectionsTextures[]={"\lm_vehicules\textures\blackfoot\lm_blackfoot_ext01.paa"};
		typicalCargo[]={"LM_SPECIAL_HELIPILOTE", "LM_SPECIAL_HELIPILOTE"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		textureList[] = {"grey", 1};
		class textureSources
		{
			class grey
			{
				displayName = "grey";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\blackfoot\lm_blackfoot_ext01.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(SMA_ACRREMAFGCQB,2);
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,6);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	
	
	
	
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////                                 HELICO LOURDS                                   /////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// Mohawk
	class LM_MOHAWK : I_Heli_Transport_02_F
	{
		GOS_QM_CargoCustom[] = {{2.15,2.399,-3.573},{0,-5.151,-3.573},{-2.2,4.649,-3.573}};
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_HELI_HEAVY";
		displayName = $STR_mohawk;
		crew = "LM_SPECIAL_HELIPILOTE";
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\mohawk\lm_mohawk_ext01.paa",
			"\lm_vehicules\textures\mohawk\lm_mohawk_ext02.paa",
			"\lm_vehicules\textures\mohawk\lm_mohawk_ext03.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
		};
		typicalCargo[]={"LM_SPECIAL_HELIPILOTE", "LM_SPECIAL_HELIPILOTE"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		textureList[] = {"grey", 1};
		class textureSources
		{
			class grey
			{
				displayName = "grey";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\mohawk\lm_mohawk_ext01.paa",
					"\lm_vehicules\textures\mohawk\lm_mohawk_ext02.paa",
					"\lm_vehicules\textures\mohawk\lm_mohawk_ext03.paa",
					"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(SMA_ACRREMAFGCQB,2);
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};

	// Huron
	class B_Heli_Transport_03_F;
	class LM_HURON : B_Heli_Transport_03_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_HELI_HEAVY";
		displayName = $STR_huron;
		crew = "LM_SPECIAL_HELIPILOTE";
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\huron\lm_huron_ext01.paa",
			"\lm_vehicules\textures\huron\lm_huron_ext02.paa"
		};
		typicalCargo[]={"LM_SPECIAL_HELIPILOTE", "LM_SPECIAL_HELIPILOTE"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		textureList[] = {"altis", 1};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\huron\lm_huron_ext01.paa",
					"\lm_vehicules\textures\huron\lm_huron_ext02.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(SMA_ACRREMAFGCQB,2);
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////                                    BLINDES                                      /////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// Kuma
	class LM_MBT_KUMA : I_MBT_03_cannon_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_BLINDES";
		displayName = $STR_kuma;
		crew = "LM_BASE_INGENIEUR";
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\kuma\lm_altis_kuma_ext01.paa",
			"\lm_vehicules\textures\kuma\lm_altis_kuma_ext02.paa",
			"\lm_vehicules\textures\kuma\lm_altis_kuma_tourelle.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"
		};
		typicalCargo[]={"LM_BASE_INGENIEUR", "LM_BASE_INGENIEUR", "LM_BASE_INGENIEUR"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		textureList[] = {"grey", 1};
		class textureSources
		{
			class grey
			{
				displayName = "grey";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\kuma\lm_altis_kuma_ext01.paa",
					"\lm_vehicules\textures\kuma\lm_altis_kuma_ext02.paa",
					"\lm_vehicules\textures\kuma\lm_altis_kuma_tourelle.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hlc_smg_MP5N,3);
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(hlc_30Rnd_9x19_B_MP5,6);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	class LM_CHEETAH : B_APC_Tracked_01_AA_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_BLINDES";
		displayName = $STR_cheetah;
		crew = "LM_BASE_INGENIEUR";
		typicalCargo[]={"LM_BASE_INGENIEUR", "LM_BASE_INGENIEUR", "LM_BASE_INGENIEUR"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan";
		forceInGarage = 1;
		class TransportWeapons {
			weap_xx(hlc_smg_MP5N,3);
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(hlc_30Rnd_9x19_B_MP5,6);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	//marshall
	class B_APC_Wheeled_01_cannon_F;
	class LM_MARSHALL : B_APC_Wheeled_01_cannon_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_BLINDES";
		displayName = $STR_marshall;
		crew = "LM_BASE_INGENIEUR";
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\marshall\lm_altis_marshall_ext01.paa",
			"\lm_vehicules\textures\marshall\lm_altis_marshall_ext02.paa",
			"\lm_vehicules\textures\marshall\lm_altis_marshall_tourelle.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"a3\Armor_F\Data\cage_sand_CO.paa"
		};
		textureList[] = {"altis", 1};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\marshall\lm_altis_marshall_ext01.paa",
					"\lm_vehicules\textures\marshall\lm_altis_marshall_ext02.paa",
					"\lm_vehicules\textures\marshall\lm_altis_marshall_tourelle.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"a3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	
	
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////                                     AVIONS                                      /////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// Neophron
	class LM_AZRAEL : O_Plane_CAS_02_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_PLANES";
		displayName = $STR_azrael;
		crew = "LM_SPECIAL_PILOTE";
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\neophron\lm_azrael_ext01.paa",
			"\lm_vehicules\textures\neophron\lm_azrael_ext02.paa"
		};
		typicalCargo[]={"LM_SPECIAL_PILOTE"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		disableInventory = 1;
		textureList[] = {"grey", 1};
		class textureSources
		{
			class grey
			{
				displayName = "grey";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\neophron\lm_azrael_ext01.paa",
					"\lm_vehicules\textures\neophron\lm_azrael_ext02.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		class TransportItems {
		};
	};
	
	//Black Wasp
	class LM_F18 : B_Plane_Fighter_01_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_PLANES";
		displayName = $STR_f18;
		crew = "LM_SPECIAL_PILOTE";
		typicalCargo[]={"LM_SPECIAL_PILOTE"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan";
		forceInGarage = 1;
		disableInventory = 1;
		class TransportWeapons {
		};
		class TransportMagazines {
		};
		class TransportItems {
		};
	};
	
	
	
	
	
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////                        MINE-RESISTANT AMBUSH-PROTECTED                          /////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// Hunter
	class LM_MRAP_HUNTER : B_MRAP_01_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_MRAP";
		displayName = $STR_hunter;
		crew = "LM_BASE_FUSILIER";
		typicalCargo[]={"LM_BASE_FUSILIER"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\hunter\lm_altis_hunter_ext01.paa",
			"\lm_vehicules\textures\hunter\lm_altis_hunter_ext02.paa"
		};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\hunter\lm_altis_hunter_ext01.paa",
					"\lm_vehicules\textures\hunter\lm_altis_hunter_ext02.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	class LM_MRAP_HUNTER_HMG : B_MRAP_01_hmg_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_MRAP";
		displayName = $STR_hunter_hmg;
		crew = "LM_BASE_FUSILIER";
		typicalCargo[]={"LM_BASE_FUSILIER"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\hunter\lm_altis_hunter_ext01.paa",
			"\lm_vehicules\textures\hunter\lm_altis_hunter_ext02.paa",
			"\lm_vehicules\textures\hunter\lm_altis_hunter_tourelle.paa"
		};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\hunter\lm_altis_hunter_ext01.paa",
					"\lm_vehicules\textures\hunter\lm_altis_hunter_ext02.paa",
					"\lm_vehicules\textures\hunter\lm_altis_hunter_tourelle.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	// Hunter
	class LM_MRAP_HUNTER_GMG : B_MRAP_01_gmg_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_MRAP";
		displayName = $STR_hunter_gmg;
		crew = "LM_BASE_FUSILIER";
		typicalCargo[]={"LM_BASE_FUSILIER"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\hunter\lm_altis_hunter_ext01.paa",
			"\lm_vehicules\textures\hunter\lm_altis_hunter_ext02.paa",
			"\lm_vehicules\textures\hunter\lm_altis_hunter_tourelle.paa"
		};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\hunter\lm_altis_hunter_ext01.paa",
					"\lm_vehicules\textures\hunter\lm_altis_hunter_ext02.paa",
					"\lm_vehicules\textures\hunter\lm_altis_hunter_tourelle.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	// Hunter reco, à supprimer à la prochaine MAJ
	class LM_MRAP_HUNTER_RECO : LM_MRAP_HUNTER
	{
		scope = 1;
	};
	
	// Hunter medic
	class LM_MRAP_HUNTER_MEDIC : LM_MRAP_HUNTER
	{
		author = "[LM] Karoucho, [LM] Cheitan";
		editorSubcategory = "LM_MEDIC";
		displayName = $STR_hunter_medic;
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\hunter\lm_altis_hunter_ext01_medical.paa",
			"\lm_vehicules\textures\hunter\lm_altis_hunter_ext02.paa"
		};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\hunter\lm_altis_hunter_ext01_medical.paa",
					"\lm_vehicules\textures\hunter\lm_altis_hunter_ext02.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {
			item_xx(ACE_quikclot,80);
			item_xx(ACE_packingBandage,80);
			
			item_xx(ACE_morphine,50);
			item_xx(ACE_epinephrine,50);
			
			item_xx(ACE_tourniquet,15);
			
			item_xx(ACE_salineIV,15);
			item_xx(ACE_salineIV_500,15);
			item_xx(ACE_salineIV_250,15);
			
			item_xx(ACE_bodyBag,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(ACE_surgicalKit,1);
			item_xx(ACE_personalAidKit,1);
			item_xx(RDP_Splint,20);
		};
	};	
	
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////                                    CAMIONS                                      /////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// Prowler armé
	class LM_PROWLER_HMG : B_LSV_01_armed_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_CARS";
		displayName = $STR_prowler_hmg;
		crew = "LM_BASE_FUSILIER";
		typicalCargo[]={"LM_BASE_FUSILIER"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\prowler\lm_altis_prowler_ext01.paa",
			"\lm_vehicules\textures\prowler\lm_altis_prowler_ext02.paa",
			"\lm_vehicules\textures\prowler\lm_altis_prowler_ext03.paa",
			"\lm_vehicules\textures\prowler\lm_altis_prowler_ext04.paa"
		};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\prowler\lm_altis_prowler_ext01.paa",
					"\lm_vehicules\textures\prowler\lm_altis_prowler_ext02.paa",
					"\lm_vehicules\textures\prowler\lm_altis_prowler_ext03.paa",
					"\lm_vehicules\textures\prowler\lm_altis_prowler_ext04.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	// Prowler non-armé
	class LM_PROWLER : B_LSV_01_unarmed_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_CARS";
		displayName = $STR_prowler;
		crew = "LM_BASE_FUSILIER";
		typicalCargo[]={"LM_BASE_FUSILIER"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan";
		forceInGarage = 1;
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\prowler\lm_altis_prowler_ext01.paa",
			"\lm_vehicules\textures\prowler\lm_altis_prowler_ext02.paa",
			"\lm_vehicules\textures\prowler\lm_altis_prowler_ext03.paa",
			"\lm_vehicules\textures\prowler\lm_altis_prowler_ext04.paa"
		};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\prowler\lm_altis_prowler_ext01.paa",
					"\lm_vehicules\textures\prowler\lm_altis_prowler_ext02.paa",
					"\lm_vehicules\textures\prowler\lm_altis_prowler_ext03.paa",
					"\lm_vehicules\textures\prowler\lm_altis_prowler_ext04.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	// Offroad
	class LM_OFFROAD_ALTIS : B_G_Offroad_01_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_CARS";
		displayName = $STR_offroad_altis;
		hiddenSelectionsTextures[] =
		{
			"\lm_vehicules\textures\offroad\lm_altis_offroad_ext01.paa",
			"\lm_vehicules\textures\offroad\lm_altis_offroad_ext01.paa"
		};
		crew = "LM_BASE_FUSILIER";
		typicalCargo[]={"LM_BASE_FUSILIER"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Karoucho, [LM] Cheitan";
		forceInGarage = 1;
		textureList[] = {"altis", 1};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\offroad\lm_altis_offroad_ext01.paa",
					"\lm_vehicules\textures\offroad\lm_altis_offroad_ext01.paa"
				};
			};
		};
		class EventHandlers { };
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	class LM_OFFROAD_M90 : B_G_Offroad_01_F
	{
		scope = 1;
	};
	class LM_OFFROAD_SCORPION : B_G_Offroad_01_F
	{
		scope = 1;
	};
	
	// Zamak couvert
	class LM_ZAMAK_COVERED :  I_Truck_02_covered_F
	{
		GOS_QM_CargoCustom[] = {{0,-4.4,-2.223},{1.801,2.802,-2.223}}; //offset des positions cargo pour le mod d'entrée rapide
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_TRUCKS";
		displayName = $STR_zamak_covered;
		crew = "LM_BASE_FUSILIER";
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\zamak\lm_altis_zamak_cabine.paa",
			"\lm_vehicules\textures\zamak\lm_altis_zamak_couvert.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
		};
		typicalCargo[]={"LM_BASE_FUSILIER"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Karoucho, [LM] Cheitan";
		forceInGarage = 1;
		textureList[] = {"altis", 1};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\zamak\lm_altis_zamak_cabine.paa",
					"\lm_vehicules\textures\zamak\lm_altis_zamak_couvert.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	// Zamak transport
	class LM_ZAMAK :  I_Truck_02_transport_F
	{
		// 1.2 -4.201 -2.223
		class Turrets;
		GOS_QM_CargoCustom[] = {{0,-4.4,-2.223},{1.801,2.802,-2.223}}; //offset des positions cargo pour le mod d'entrée rapide
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_TRUCKS";
		displayName = $STR_zamak;
		crew = "LM_BASE_FUSILIER";
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\zamak\lm_altis_zamak_cabine.paa",
			"\lm_vehicules\textures\zamak\lm_altis_zamak_couvert.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
		};
		typicalCargo[]={"LM_BASE_FUSILIER"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Karoucho, [LM] Cheitan";
		forceInGarage = 1;
		textureList[] = {"altis", 1};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\zamak\lm_altis_zamak_cabine.paa",
					"\lm_vehicules\textures\zamak\lm_altis_zamak_couvert.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				GOS_QM_GunnerCustom[] = {1.2,-4.201,-2.223};
			};
			class CargoTurret_02: CargoTurret_01
			{
				GOS_QM_GunnerCustom[] = {-1.2,-4.201,-2.223};
			};
		};
		
	};
	
	// Zamak médical
	class LM_ZAMAK_MEDIC :  I_Truck_02_medical_F
	{
		GOS_QM_CargoCustom[] = {{0,-4.4,-2.223},{1.801,2.802,-2.223}}; //offset des positions cargo pour le mod d'entrée rapide'
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_MEDIC";
		displayName = $STR_zamak_medic;
		crew = "LM_BASE_FUSILIER";
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\zamak\lm_altis_zamak_cabine.paa",
			"\lm_vehicules\textures\zamak\lm_altis_zamak_couvert.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
		};
		typicalCargo[]={"LM_BASE_FUSILIER"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		textureList[] = {"altis", 1};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\zamak\lm_altis_zamak_cabine.paa",
					"\lm_vehicules\textures\zamak\lm_altis_zamak_couvert.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SmokeShell,4);
			mag_xx(SmokeShellGreen,1);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,80);
			item_xx(ACE_packingBandage,80);
			
			item_xx(ACE_morphine,50);
			item_xx(ACE_epinephrine,50);
			
			item_xx(ACE_tourniquet,15);
			
			item_xx(ACE_salineIV,15);
			item_xx(ACE_salineIV_500,15);
			item_xx(ACE_salineIV_250,15);
			
			item_xx(ACE_bodyBag,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(ACE_surgicalKit,1);
			item_xx(ACE_personalAidKit,1);
			item_xx(RDP_Splint,20);
		};
	};
	
	// Zamak ammo
	class LM_ZAMAK_AMMO :  I_Truck_02_ammo_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_TRUCKS";
		displayName = $STR_zamak_ammo;
		crew = "LM_BASE_FUSILIER";
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\zamak\lm_altis_zamak_cabine.paa",
			"\lm_vehicules\textures\zamak\lm_altis_zamak_ammo.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
		};
		typicalCargo[]={"LM_BASE_FUSILIER"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Karoucho, [LM] Cheitan";
		forceInGarage = 1;
		textureList[] = {"altis", 1};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\zamak\lm_altis_zamak_cabine.paa",
					"\lm_vehicules\textures\zamak\lm_altis_zamak_ammo.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(SMA_ACRREMAFGCQB,3);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,60);
			mag_xx(16Rnd_9x21_Mag,20);
			mag_xx(SmokeShell,30);
			mag_xx(SmokeShellGreen,15);
			mag_xx(SmokeShellBlue,15);
			mag_xx(HandGrenade,20);
			mag_xx(SatchelCharge_Remote_Mag,10);
			mag_xx(DemoCharge_Remote_Mag,15);
		};
		class TransportItems {
			item_xx(ACE_quikclot,20);
			item_xx(ACE_morphine,10);
			item_xx(ACE_M26_Clacker,5);
			item_xx(ACE_EarPlugs,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	// Zamak réparation
	class LM_ZAMAK_REPAIR : I_Truck_02_box_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_TRUCKS";
		displayName = $STR_zamak_repair;
		crew = "LM_BASE_FUSILIER";
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\zamak\lm_altis_zamak_cabine.paa",
			"\lm_vehicules\textures\zamak\lm_altis_zamak_repair.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
		};
		typicalCargo[]={"LM_BASE_FUSILIER"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		textureList[] = {"altis", 1};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\zamak\lm_altis_zamak_cabine.paa",
					"\lm_vehicules\textures\zamak\lm_altis_zamak_repair.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,5);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
		ace_repair_canRepair = 1;
	};
	
	// Zamak fuel
	class LM_ZAMAK_FUEL :  I_Truck_02_fuel_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_TRUCKS";
		displayName = $STR_zamak_fuel;
		crew = "LM_BASE_FUSILIER";
		typicalCargo[]={"LM_BASE_FUSILIER"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Karoucho, [LM] Cheitan";
		forceInGarage = 1;
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\zamak\lm_altis_zamak_cabine.paa",
			"\lm_vehicules\textures\zamak\lm_altis_zamak_fuel.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
		};
		textureList[] = {"altis", 1};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\zamak\lm_altis_zamak_cabine.paa",
					"\lm_vehicules\textures\zamak\lm_altis_zamak_fuel.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	// Jeep Wrangler
	class C_Offroad_02_unarmed_F;
	class LM_WRANGLER : C_Offroad_02_unarmed_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_CARS";
		displayName = $STR_wrangler;
		crew = "LM_BASE_FUSILIER";
		typicalCargo[]={"LM_BASE_FUSILIER"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\jeep\lm_altis_jeep_ext01.paa",
			"\lm_vehicules\textures\jeep\lm_altis_jeep_ext02.paa",
			"\lm_vehicules\textures\jeep\lm_altis_jeep_int01.paa"
		};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\jeep\lm_altis_jeep_ext01.paa",
					"\lm_vehicules\textures\jeep\lm_altis_jeep_ext02.paa",
					"\lm_vehicules\textures\jeep\lm_altis_jeep_int01.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	
	// Blackfish
	class B_T_VTOL_01_INFANTRY_F;
	class B_T_VTOL_01_VEHICLE_F;
	class LM_BLACKFISH : B_T_VTOL_01_INFANTRY_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_PLANES";
		displayName = $STR_blackfish;
		crew = "LM_SPECIAL_HELIPILOTE";
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\blackfish\lm_blackfish_ext01.paa",
			"\lm_vehicules\textures\blackfish\lm_blackfish_ext02.paa",
			"\lm_vehicules\textures\blackfish\lm_blackfish_ext03.paa",
			"\lm_vehicules\textures\blackfish\lm_blackfish_ext04.paa"
		};
		typicalCargo[]={"LM_SPECIAL_HELIPILOTE", "LM_SPECIAL_HELIPILOTE"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		textureList[] = {"altis", 1};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\blackfish\lm_blackfish_ext01.paa",
					"\lm_vehicules\textures\blackfish\lm_blackfish_ext02.paa",
					"\lm_vehicules\textures\blackfish\lm_blackfish_ext03.paa",
					"\lm_vehicules\textures\blackfish\lm_blackfish_ext04.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(SMA_ACRREMAFGCQB,2);
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};
	class LM_BLACKFISH_VEHICLE : B_T_VTOL_01_VEHICLE_F
	{
		scope = 2;
		side = 1;
		faction = "LA_MUERTA";
		editorSubcategory = "LM_PLANES";
		displayName = $STR_blackfish_vehicle;
		crew = "LM_SPECIAL_HELIPILOTE";
		hiddenSelectionsTextures[]=
		{
			"\lm_vehicules\textures\blackfish\lm_blackfish_ext01.paa",
			"\lm_vehicules\textures\blackfish\lm_blackfish_ext02.paa",
			"\lm_vehicules\textures\blackfish\lm_blackfish_ext03.paa",
			"\lm_vehicules\textures\blackfish\lm_blackfish_ext04.paa"
		};
		typicalCargo[]={"LM_SPECIAL_HELIPILOTE", "LM_SPECIAL_HELIPILOTE"};
		availableForSupportTypes[] = {"Drop","Transport"};
		author = "[LM] Cheitan, [LM] Karoucho";
		forceInGarage = 1;
		textureList[] = {"altis", 1};
		class textureSources
		{
			class altis
			{
				displayName = "Altis";
				author = "[LM] Karoucho";
				textures[] =
				{
					"\lm_vehicules\textures\blackfish\lm_blackfish_ext01.paa",
					"\lm_vehicules\textures\blackfish\lm_blackfish_ext02.paa",
					"\lm_vehicules\textures\blackfish\lm_blackfish_ext03.paa",
					"\lm_vehicules\textures\blackfish\lm_blackfish_ext04.paa"
				};
				factions[] = {"LA_MUERTA"};
			};
		};
		class TransportWeapons {
			weap_xx(SMA_ACRREMAFGCQB,2);
			weap_xx(hgun_Pistol_Signal_F,1);
		};
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,10);
			mag_xx(SmokeShell,5);
			mag_xx(SmokeShellGreen,2);
			mag_xx(SmokeShellBlue,2);
			mag_xx(6Rnd_RedSignal_F,1);
			mag_xx(6Rnd_GreenSignal_F,1);
		};
		class TransportItems {
			item_xx(ACE_quikclot,10);
			item_xx(ACE_morphine,5);
			item_xx(ToolKit,1);
			item_xx(adv_aceCPR_AED,1);
			item_xx(RDP_Splint,10);
		};
	};





	// Conteneurs Huron
	class B_Slingload_01_Cargo_F;
	class B_Slingload_01_Fuel_F;
	class B_Slingload_01_Ammo_F;
	class B_Slingload_01_Repair_F;
	class B_Slingload_01_Medevac_F;
	class LM_SLINGLOAD_CARGO : B_Slingload_01_Cargo_F { editorSubcategory = "LM_HELI_HEAVY"; };
	class LM_SLINGLOAD_FUEL : B_Slingload_01_Fuel_F { editorSubcategory = "LM_HELI_HEAVY"; };
	class LM_SLINGLOAD_AMMO : B_Slingload_01_Ammo_F { editorSubcategory = "LM_HELI_HEAVY"; };
	class LM_SLINGLOAD_REPAIR : B_Slingload_01_Repair_F { editorSubcategory = "LM_HELI_HEAVY"; };
	class LM_SLINGLOAD_MEDIC : B_Slingload_01_Medevac_F { editorSubcategory = "LM_HELI_HEAVY"; };

};