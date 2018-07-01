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

#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a

#define KSI 			mag_2("ACE_fieldDressing"),mag_2("ACE_elasticBandage"),mag_2("ACE_quikclot"),mag_2("ACE_packingBandage"),"ACE_tourniquet","ACE_morphine","ACE_EarPlugs"
#define STD_mag_load 	mag_5("hlc_30rnd_556x45_EPR_G36"),mag_3("16Rnd_9x21_Mag"),mag_2("HandGrenade"),mag_2("SmokeShell")


#include "cfgPatches.hpp"
#include "cfgFactionClasses.hpp"
#include "cfgEditorSubcategories.hpp"
#include "cfgWeapons.hpp"

class CfgVehicles
{
	#include "cfgVehicles.hpp"
};

#include "cfgGroups.hpp"