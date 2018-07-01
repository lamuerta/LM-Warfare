class CfgVehicles
{
	class B_Soldier_F;
	class LM_WINTER_UNIFORM: B_Soldier_F
	{
		scope=1;
		scopeCurator=0;
		modelsides[]={3,2,1,0};
		uniformClass="LM_WINTER_UNIFORM";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\lm_winter\tex\uniform.paa";
		};
		model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
	};

	class Bag_Base;
	class LM_WINTER_BACKPACK_CAMO: Bag_Base
    {
        author = "W4lly63";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
        displayName = "$STR_backpack_camo";
		vehicleClass = Backpacks;
        picture = "\lm_winter\ui\icon_backpack_camo.paa";
        hiddenSelectionsTextures[]={"\lm_winter\tex\backpack_camo.paa"};
        maximumLoad = 160;
        mass = 20;
    };
    class LM_WINTER_BACKPACK_WHITE: Bag_Base
    {
        author = "W4lly63";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
        displayName = "$STR_backpack_white";
		vehicleClass = Backpacks;
        picture = "\lm_winter\ui\icon_backpack_white.paa";
        hiddenSelectionsTextures[]={"\lm_winter\tex\backpack_white.paa"};
        maximumLoad = 160;
        mass = 20;
    };
    class LM_CARRYALL_CAMO: Bag_Base
    {
        author = "W4lly63";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
        displayName = "$STR_carryall_camo";
		vehicleClass = Backpacks;
        picture = "\lm_winter\ui\icon_carryall_camo.paa";
        hiddenSelectionsTextures[]={"\lm_winter\tex\carryall_camo.paa"};
        maximumLoad = 320;
        mass = 60;
    };
    class LM_CARRYALL_WHITE: Bag_Base
    {
        author = "W4lly63";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
        displayName = "$STR_carryall_white";
		vehicleClass = Backpacks;
        picture = "\lm_winter\ui\icon_carryall_white.paa";
        hiddenSelectionsTextures[]={"\lm_winter\tex\carryall_white.paa"};
        maximumLoad = 320;
        mass = 60;
    };
};