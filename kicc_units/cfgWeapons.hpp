class cfgWeapons
{
	//uniforme
	class Uniform_Base;
	class UniformItem;
	class O_VSM_OGA_od_Camo : Uniform_Base {
		scope = protected;
		displayName = "[VSM] Massif Combat Uniform (OGA OD)";
		picture = "\VSM_OGA\Data\Icons\VSM_OGA_OD.paa";
		
		class ItemInfo : UniformItem {
			uniformClass = "O_VSM_OGA_od_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class O_VSM_OGA_od_Camo_SS : Uniform_Base {
		scope = protected;
		displayName = "[VSM] Massif Combat Uniform Rolled Sleeves (OGA OD)";
		picture = "\VSM_OGA\Data\Icons\VSM_OGA_OD.paa";
		
		class ItemInfo : UniformItem {
			uniformClass = "O_VSM_OGA_od_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class O_U_I_pilotCoveralls: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_pilot_coveralls_haf";
		picture="\A3\characters_f_beta\data\ui\icon_U_IR_PilotCoveralls_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\pilot_suit_rus_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_I_pilot_F";
			containerClass="Supply60";
			mass=80;
		};
	};
	



	//arme de dotation de TL
	class hlc_rifle_aku12;
	class KICC_AKU12 : hlc_rifle_aku12
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "asdg_OpticRail_AK12";
				item = "SMA_BARSKA";
			};
			class LinkedItemsAcc
			{
				slot = "asdg_FrontSideRail_AK12";
				item = "SMA_SFFL_BLK";
			};
		};
	};
	
	//arme de dotation standard
	class hlc_rifle_ak12;
	class KICC_AK12_STD : hlc_rifle_ak12
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "asdg_OpticRail_AK12";
				item = "SMA_BARSKA";
			};
			class LinkedItemsAcc
			{
				slot = "asdg_FrontSideRail_AK12";
				item = "SMA_SFFL_BLK";
			};
		};
	};
	class KICC_AK12_SENTRY : hlc_rifle_ak12
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "asdg_OpticRail_AK12";
				item = "SMA_ELCAN_SPECTER";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_545SUP_AK";
			};
		};
	};
	
	//MX FS
	class arifle_MX_Black_F;
	class KICC_MX_FS : arifle_MX_Black_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SMA_ELCAN_SPECTER";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "SMA_SFFL_BLK";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_H";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
		};
	};
	class KICC_MX_FS_MEDIC : arifle_MX_Black_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SMA_eotech552";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "SMA_SFFL_BLK";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_H";
			};
		};
	};
	
	//MG
	class hlc_rifle_RPK12;
	class KICC_RPK12 : hlc_rifle_RPK12
	{
		scope = 1;
		class LinkedItemsOptic
		{
			slot = "asdg_OpticRail_Minimi_long";
			item = "SMA_ELCAN_SPECTER";
		};
	};
	//MG FS
	class arifle_MX_SW_Black_F;
	class KICC_MG_FS : arifle_MX_SW_Black_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SMA_ELCAN_SPECTER";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_H";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
		};
	};
	//MG ARTILLEUR
	class MMG_02_black_F;
	class KICC_MG_ARTI : MMG_02_black_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SMA_ELCAN_SPECTER";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "SMA_SFFL_BLK";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
		};
	};
	
	//GL
	class hlc_rifle_ak12GL;
	class KICC_AK12GL : hlc_rifle_ak12GL
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "asdg_FrontSideRail_AK12";
				item = "SMA_BARSKA";
			};
		};
	};
	
	//TP
	class srifle_DMR_03_F;
	class KICC_DMR_TP : srifle_DMR_03_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_AMS";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
		};
	};
	//TP FS
	class arifle_MXM_Black_F;
	class KICC_DMR_TP_FS : arifle_MXM_Black_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_AMS";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_H";
			};
		};
	};
	
	class hlc_rifle_awMagnum_OD_ghillie;
	class KICC_AWM : hlc_rifle_awMagnum_OD_ghillie
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_LRPS";
			};
		};
	};
};