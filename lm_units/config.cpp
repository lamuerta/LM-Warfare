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
#define mag_10(a) a, a, a, a, a, a, a, a, a, a

#define KSI 			mag_8("ACE_quikclot"),"ACE_tourniquet","ACE_morphine","ACE_EarPlugs",mag_2("ACE_CableTie"),"RDP_Splint"
#define STD_mag_load 	mag_5("SMA_30Rnd_68x43_SPC_FMJ"),mag_3("16Rnd_9x21_Mag"),mag_2("HandGrenade"),mag_2("SmokeShell"),mag_2("ACE_M84")


#include "cfgPatches.hpp"
#include "cfgFactionClasses.hpp"
#include "cfgEditorSubcategories.hpp"
#include "cfgWeapons.hpp"

class CfgVehicles
{
	class B_Soldier_base_F; // Référence externe, nécessaire pour faire fonctionner l'héritage. Classe redéfinie mais aucune propriété modifiée.
	class B_soldier_UAV_F; // Pour l'opé drone

	#include "cfgVehiclesBags.hpp"
	#include "cfgVehiclesBase.hpp"
	#include "cfgVehiclesForest.hpp"
	#include "cfgVehiclesSpecial.hpp"
};

#include "cfgGroups.hpp"