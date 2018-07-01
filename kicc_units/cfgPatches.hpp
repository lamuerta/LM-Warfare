// Pa bien saisi l'utilité. Mais en gros nécessaire pour la compatibilité avec d'autres mods, etc etc...
class CfgPatches
{
	class KICC_UNITS //pas super utile mais nécessaire pour que fonctionne correctement en Zeus il me semble
	{
		// toutes les unités définies dans la config
		units[] = 
		{
			"KICC_FUSILIER",
			"KICC_FUSILIER_AUTO",
			"KICC_OP_RADIO",
			"KICC_TL",
			"KICC_SL",
			"KICC_P_MUNITION",
			"KICC_P_TITAN",
			"KICC_TITAN_AC",
			"KICC_TITAN_AA",
			"KICC_EXPLO",
			"KICC_MEDIC",
			"KICC_GRENADIER",
			"KICC_FUSILIER_AC",
			"KICC_TIREUR_PRECISION",
			"KICC_PILOTE_HELI",
			"KICC_COPILOTE_HELI",
			"KICC_PILOTE_AVION",
			"KICC_HOMME_EQUIPAGE",
			"KICC_SPECFOR",
			"KICC_SPECFOR_MP5",
			"KICC_PARACHUTISTE",
			
			"KICC_ORCA_UNARMED",
			"KICC_ORCA_ARMED",
			"KICC_KAJMAN",
			"KICC_HURON_ARMED",
			"KICC_HURON_UNARMED",
			"KICC_TEMPEST",
			"KICC_TEMPEST_BACHE",
			"KICC_TEMPEST_REPAIR",
			"KICC_TEMPEST_AMMO",
			"KICC_TEMPEST_MEDIC",
			"KICC_TEMPEST_FUEL",
			"KICC_TEMPEST_DEVICE",
			"KICC_SOCHOR",
			"KICC_TIGRIS",
			"KICC_GORGON",
			"KICC_IFRIT",
			"KICC_IFRIT_GMG",
			"KICC_IFRIT_HMG",
			"KICC_OFFROAD_UNARMED",
			"KICC_OFFROAD_ARMED",
			"KICC_T100",
			"KICC_BUZZARD_AA",
			"KICC_BUZZARD_CAS"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"lm_units",
			"hlcweapons_aks"
		};
	};
};