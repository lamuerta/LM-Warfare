#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CfgWeapons
{
	#include "cfgWeaponsCasques.hpp"
	
	// class srifle_LRR_F
	// {
		// class bg_weaponparameters
		// {
			// class onFired_Action
			// {
				// HandAction = "GestureFireLRR";
				// Actiondelay = -0.2;
				// Sound = "";
				// Sound_Location = "RightHandMiddle1";
				// hasOptic = false;
			// };
		// };
	// };
	
	//class SMA_ACRREMMOE; //Remington ACR 6.8mm SPC avec grip
	// class LM_ACR_MARKSMAN : SMA_ACRREMMOE
	// {
		// scope = 1;
		// class LinkedItems
		// {
			// class LinkedItemsOptic
			// {
				// slot = "CowsSlot";
				// item = "optic_SOS";
			// };
			// class LinkedItemsBipod
			// {
				// slot = "asdg_Underbarrel";
				// item = "SMA_Gripod_01";
			// };
		// };
	// };
	
	class srifle_LRR_F;
	class LM_SNIPER_408 : srifle_LRR_F
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
	
	// Grenade de training, pas trop compris...
	class Default;
	class GrenadeLauncher: Default{};
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"LM_grenades"};
		class ThrowMuzzle;
		class LM_grenades: ThrowMuzzle
		{
			magazines[] = {"LM_M69_mag"};
		};
	};
	
	
	//compatibilité ACR SMA avec HuntIR ACE
	class SMA_ACRGL;
	class SMA_ACRGL_B;
	class SMA_ACRREMGL;
	class SMA_ACRREMGL_B;
	class SMA_ACRREMCQBGL;
	class SMA_ACRREMCQBGL_B;
	class SMA_ACRREMGL_N;
	class SMA_ACRREMGL_B_N;
	class SMA_ACRREMCQBGL_N;
	class SMA_ACRREMCQBGL_B_N;
	
	// class SMA_ACRGL
	// {
		// class WeaponSlotsInfo
		// {
			// class ACR_GL;
		// };
	// };
	// class SMA_ACRGL
	// {
		// class WeaponSlotsInfo : WeaponSlotsInfo
		// {
			// class ACR_GL : ACR_GL
			// {
				// magazines[] += {"ACE_HuntIR_M203"};
			// };
		// };
	// };
	// class SMA_ACRGL : SMA_ACRGL
	// {
		// class WeaponSlotsInfo : WeaponSlotsInfo
		// {
			// class ACR_GL : ACR_GL
			// {
				// magazines[] += {"ACE_HuntIR_M203"};
			// };
		// };
	// };
	
	//suffisant ?
	// class ACR_GL
	// {
		// magazines[] += {"ACE_HuntIR_M203"};
	// };
};

class cfgMagazines
{
	class CA_Magazine;
	class HandGrenade;
	class LM_M69_mag : HandGrenade
	{
		author = "[LM] Cheitan";
		mass = 10;
		scope = public;
		value = 1;
		displayName = $STR_magazines_M69;
		picture = "\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		model = "\A3\Weapons_f\ammo\Handgrenade";
		type = 256;
		ammo = "LM_M69_ammo";
		count = 1;
		initSpeed = 18;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;	// max estimated speed km/h
		sound[] = {"", db-70, 1};
		descriptionShort = $STR_magazines_M69_descshort;
		displayNameShort = "M69";
	};
};

class CfgAmmo
{
	class BulletBase;
	class GrenadeHand;
	class LM_M69_ammo : GrenadeHand
	{
		access = 1;
		hit = 0;
		explosive = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		dangerRadiusHit = -1;
		suppressionRadiusHit = 0;
		typicalspeed = 18;
		model = "\A3\Weapons_f\ammo\Handgrenade";
		visibleFire = 0.5;	// how much is visible when this weapon is fired
		audibleFire = 0.05;
		visibleFireTime = 1;	// how long is it visible
		fuseDistance = 0;
	};
};