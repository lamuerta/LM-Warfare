#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

#include "cfgFunctions.hpp"
#include "cfgWeapons.hpp"

class CfgPatches
{
	class LM_objects
	{
		units[] =
		{
			"LM_BASE_DROITE",
			"LM_BASE_GAUCHE",
			"LM_BOARD_FREQUENCES",
			"LM_BOARD_GRIDMAP"
		};
		weapons[] = {};
		requiredVersion = 1.000000;
		requiredAddons[] = {"lm_units", "tfw_radios_rf3080"};
	};
};

class CfgEditorSubcategories
{
	class EDSUBCAT_LM_PANNEAUX
	{
		displayName = "$STR_subcat_panneaux";
	};
	class EDSUBCAT_LM_OBJETS
	{
		displayName = "$STR_subcat_objets";
	};
};

class CfgEditorCategories
{
	class EDCAT_LM_OBJETS
	{
		displayName = "$STR_edcat_objets";
	};
};

class CfgVehicles
{
	class Man;
	class CAManBase : Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class LM_arme_principale
				{
					displayName = $STR_LM_ace_arme_principale;
					condition = "";
					statement = "";
					#include "cfgVehiclesACRActions.hpp"
					#include "cfgVehiclesAWMActions.hpp"
					#include "cfgVehiclesMP5Actions.hpp"
					#include "cfgVehiclesHKActions.hpp"
				};
			};
		};
	};
	
	class SignAd_Sponsor_F;
	class LM_SIGN_BASE : SignAd_Sponsor_F
	{
		author = "$STR_auteurs";
		editorCategory = "EDCAT_LM_OBJETS";
		editorSubcategory = "EDSUBCAT_LM_PANNEAUX";
		scope = 1;
	};
	class LM_BASE_DROITE : LM_SIGN_BASE
	{
		scope = 2;
		displayName = "$STR_base_droite";
		hiddenSelectionsTextures[]=
		{
			"\lm_objects\textures\sign_base_droite.paa"
		};
	};
	class LM_BASE_GAUCHE : LM_SIGN_BASE
	{
		scope = 2;
		displayName = "$STR_base_gauche";
		hiddenSelectionsTextures[]=
		{
			"\lm_objects\textures\sign_base_gauche.paa"
		};
	};
	
	class Land_MapBoard_F;
	class LM_BOARD_GRIDMAP : Land_MapBoard_F
	{
		displayName = "$STR_base_gauche";
		editorCategory = "EDCAT_LM_OBJETS";
		editorSubcategory = "EDSUBCAT_LM_PANNEAUX";
		hiddenSelectionsTextures[]=
		{
			"\lm_objects\textures\gridmap.paa"
		};
	};
	
	class Land_Noticeboard_F;
	class LM_BOARD_BASE : Land_Noticeboard_F
	{
		author = "$STR_auteurs";
		editorCategory = "EDCAT_LM_OBJETS";
		editorSubcategory = "EDSUBCAT_LM_PANNEAUX";
		scope = 1;
	};
	class LM_BOARD_FREQUENCES : LM_BOARD_BASE
	{
		scope = 1;
		displayName = "$STR_gridmap";
		hiddenSelectionsTextures[]=
		{
			"\lm_objects\textures\frequences.paa"
		};
	};
	
	// Filets de levage
	class CargoNet_01_barrels_F;
	class LM_CARGONET_FUEL : CargoNet_01_barrels_F
	{
		scope = 1;
		faction = "LA_MUERTA";
		displayName = "$STR_cargonet_fuel";
		editorSubcategory = "LM_OBJETS";
		ace_refuel_flowRate = 1;
		ace_refuel_fuelCargo = 1000;
	};
	class CargoNet_01_box_F;
	class LM_CARGONET_AMMO : CargoNet_01_box_F
	{
		scope = 1;
		faction = "LA_MUERTA";
		displayName = "$STR_cargonet_ammo";
		editorSubcategory = "LM_OBJETS";
		class TransportMagazines {
			mag_xx(SMA_30Rnd_68x43_SPC_FMJ,60);
			mag_xx(16Rnd_9x21_Mag,20);
			mag_xx(SmokeShell,30);
			mag_xx(SmokeShellGreen,15);
			mag_xx(SmokeShellBlue,15);
			mag_xx(HandGrenade,20);
			mag_xx(SatchelCharge_Remote_Mag,5);
			mag_xx(DemoCharge_Remote_Mag,10);
		};
		class TransportItems {
			item_xx(ACE_quikclot,20);
			item_xx(ACE_morphine,10);
			item_xx(ACE_M26_Clacker,1);
			item_xx(ACE_EarPlugs,1);
			item_xx(ToolKit,1);
		};
	};
};