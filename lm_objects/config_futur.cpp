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
		requiredAddons[] = {"lm_units"};
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
				//class LM_uniforme
				//{
				//	displayName = $STR_LM_ace_uniforme;
				//	condition = "";
				//	statement = "";
				//	#include "cfgVehiclesUniformeActions.hpp"
				//};
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

class cfgWeapons
{
	class ACE_ItemCore;
	class InventoryItem_Base_F;
	class LM_PERCEUSE : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Perceuse";
		model = "\A3\Structures_F\Items\Tools\DrillAku_F.p3d";
		picture = "\lm_objects\img\perceuse.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 25;
		};
	};
	class LM_MARTEAU : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Marteau";
		model = "\A3\Structures_F\Items\Tools\Hammer_F.p3d";
		picture = "\lm_objects\img\marteau.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 25;
		};
	};
	
	
	
	
	class LM_TOURNEVIS_CRUCI : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Tournevis cruci";
		model = "\A3\Structures_F\Items\Tools\Screwdriver_V2_F.p3d";
		picture = "\lm_objects\img\tournevis.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 5;
		};
	};
	class LM_TOURNEVIS_PLAT : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Tournevis plat";
		model = "\A3\Structures_F\Items\Tools\Screwdriver_V1_F.p3d";
		picture = "\lm_objects\img\tournevis.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 5;
		};
	};
	class LM_TENAILLES : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Tenailles";
		model = "\A3\Structures_F\Items\Tools\Pliers_F.p3d";
		picture = "\lm_objects\img\tenailles.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 10;
		};
	};
	class LM_LIME : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Lime";
		model = "\A3\Structures_F\Items\Tools\File_F.p3d";
		picture = "\lm_objects\img\lime.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 10;
		};
	};
	class LM_METRE : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Metre";
		model = "\A3\Structures_F\Items\Tools\Meter3m_F.p3d";
		picture = "\lm_objects\img\metre.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 5;
		};
	};
	class LM_RUBAN_ADHESIF : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Scotch";
		model = "\A3\Structures_F_EPA\Items\Tools\DuctTape_F.p3d";
		picture = "\lm_objects\img\ruban_adhesif.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 5;
		};
	};
	class LM_MULTIMETRE : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Multimetre";
		model = "\A3\Structures_F\Items\Tools\MultiMeter_F.p3d";
		picture = "\lm_objects\img\multimetre.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 10;
		};
	};
	class LM_CLE : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Clé";
		model = "\A3\Structures_F\Items\Tools\Wrench_F.p3d";
		picture = "\lm_objects\img\cle.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 10;
		};
	};
	class LM_OUVRE_BOITE : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Ouvre boite";
		model = "\A3\Structures_F_EPA\Items\Tools\CanOpener_F.p3d";
		picture = "\lm_objects\img\ouvre_boite.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 5;
		};
	};
	
	
	
	class LM_SCIE : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Scie";
		model = "\A3\Structures_F\Items\Tools\Saw_F.p3d";
		picture = "\lm_objects\img\scie.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 40;
		};
	};
	class LM_DISQUEUSE : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Disqueuse";
		model = "\A3\Structures_F\Items\Tools\Grinder_F.p3d";
		picture = "\lm_objects\img\disqueuse.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 60;
		};
	};
	class LM_CORDE : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Rouleau de corde";
		model = "\A3\Structures_F_Heli\Items\Tools\Rope_01_F.p3d";
		picture = "\lm_objects\img\corde.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 30;
		};
	};
	class LM_CHALUMEAU : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Chalumeau";
		model = "\A3\Structures_F_EPA\Items\Tools\ButaneTorch_F.p3d";
		picture = "\lm_objects\img\chalumeau.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 40;
		};
	};
	
	
	
	class LM_PELLE : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Pelle";
		model = "\A3\Structures_F_EPA\Items\Tools\Shovel_F.p3d";
		picture = "\lm_objects\img\pelle.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 100;
		};
	};
	class LM_HACHE : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Hache";
		model = "\A3\Structures_F\Items\Tools\Axe_F.p3d";
		picture = "\lm_objects\img\hache.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 100;
		};
	};
	class LM_EXTINCTEUR : ACE_ItemCore
	{
		scope = 1;
		displayName = "[TEMP] Extincteur";
		model = "\A3\Structures_F_EPA\Items\Tools\FireExtinguisher_F.p3d";
		picture = "\lm_objects\img\extincteur.jpg";
		class ItemInfo : InventoryItem_Base_F
		{
			mass = 100;
		};
	};
};