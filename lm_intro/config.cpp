#define TEast			0
#define TWest			1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown	4
#define TEnemy			5
#define TFriendly		6
#define TLogic			7

#define private			0
#define protected		1
#define public			2

#define true			1
#define false			0

class CfgPatches
{
	class lm_intro
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Map_Altis","A3_Map_Stratis","A3_Map_Stratis_Scenes", "A3_Map_Altis_Scenes","LM_UNITS"};
	};
};

class CfgMissions
{
	class Cutscenes
	{
		class Altis_intro1 // Class referenced in 'cutscenes' property in CfgWorlds
		{
			directory = "lm_intro\altis_intro_lm.Altis"; // Path to scenario with the scene
		};
	};
};

class RscStandardDisplay;
class RscControlsGroup;
class RscPicture;
class RscPictureKeepAspect;
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class LoadingStart: RscControlsGroup
		{
			class controls {
				class Logo: RscPictureKeepAspect
				{
					text = "lm_intro\lm_logo_512.paa";
					onLoad = "";
				};
			};
		};
	};
};