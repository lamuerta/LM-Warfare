class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class VestItem;
	class ItemCore;
	class HeadgearItem;
	class Vest_Camo_Base;
	class LM_WINTER_UNIFORM: Uniform_Base
	{
		author="Kolin";
		scope=2;
		displayName="$STR_uniform";
		descriptionshort = "$STR_uniform_desc";
		picture="\lm_winter\ui\icon_uniform.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="LM_WINTER_UNIFORM";
			containerClass="Supply40";
			mass=20;
			uniformType = "Neopren";
			armor = 20;
		};
	};
	class LM_WINTER_VEST_HEX : Vest_Camo_Base
    {
        author = "W4lly63";
        scope = 2;
        displayName = "$STR_vest_hex";
		descriptionshort = "$STR_vest_desc";
        picture = "\lm_winter\ui\icon_vest_hex.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"lm_winter\tex\vest_hex.paa"};
        class ItemInfo : VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
            mass = 100;
            hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor = 20;
					hipointName = "HitAbdomen";
					passThrough = 0.2;
				};
				class Body
				{
					hipointName = "HitBody";
					passThrough = 0.2;
				};
				class Chest
				{
					armor = 20;
					hipointName = "HitChest";
					passThrough = 0.2;
				};
				class Diaphragm
				{
					armor = 20;
					hipointName = "HitDiaphragm";
					passThrough = 0.2;
				};
			};
		};
	};
	class LM_WINTER_VEST_CAMO : LM_WINTER_VEST_HEX
    {
        author = "W4lly63";
        displayName = "$STR_vest_camo";
        picture = "\lm_winter\ui\icon_vest_camo.paa";
        hiddenSelectionsTextures[] = {"lm_winter\tex\vest_camo.paa"};
	};
	
	class LM_WINTER_SHEMAGH_HEX: ItemCore
    {
        author = "W4lly63";
        scope = 2;
        displayName = "$STR_shemagh_hex";
		descriptionshort = "$STR_shemagh_desc";
        picture = "\lm_winter\ui\icon_shemag_hex.paa";
        model = "\A3\Characters_F_Gamma\Guerrilla\headgear_shemagmask";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"lm_winter\tex\shemag_hex.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 20;
            uniformModel = "\A3\Characters_F_Gamma\Guerrilla\headgear_shemagmask";
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 2;
                     passThrough = 0.2;
                };
            };
        };
	};
	class LM_WINTER_SHEMAGH_CAMO: LM_WINTER_SHEMAGH_HEX
    {
        displayName = "$STR_shemagh_camo";
        picture = "\lm_winter\ui\icon_shemag_camo.paa";
        hiddenSelectionsTextures[] = {"lm_winter\tex\shemag_camo.paa"};
	};

	class LM_WINTER_BONNET_CAMO: ItemCore
    {
        author = "W4lly63";
        scope = 2;
        displayName = "$STR_bonnet_camo";
		descriptionshort = "$STR_bonnet_desc";
        picture = "\lm_winter\ui\icon_bonnet_camo.paa";
        model = "\A3\Characters_F\Civil\headgear_beaniehat01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"lm_winter\tex\bonnet_camo.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 6;
            uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01";
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                     hitPointName = "HitHead";
                     armor = 2;
                     passThrough = 0.2;
                };
            };
        };
	};
	class LM_WINTER_BONNET_HEX: LM_WINTER_BONNET_CAMO
    {
        displayName = "$STR_bonnet_hex";
        picture = "\lm_winter\ui\icon_bonnet_hex.paa";
        hiddenSelectionsTextures[] = {"lm_winter\tex\bonnet_hex.paa"};
    };
};