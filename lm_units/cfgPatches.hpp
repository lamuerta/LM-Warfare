// Pa bien saisi l'utilité. Mais en gros nécessaire pour la compatibilité avec d'autres mods, etc etc...
class CfgPatches
{
	class LM_UNITS //pas super utile mais nécessaire pour que fonctionne correctement en Zeus il me semble
	{
		// toutes les unités définies dans la config
		units[] = 
		{
			"LM_BASE_MAN",
			"LM_BASE_FUSILIER",
			"LM_BASE_GRENADIER",
			"LM_BASE_FUSILIER_AC",
			"LM_BASE_DEMO",
			"LM_BASE_MITRAILLEUR",
			"LM_BASE_ARTILLEUR",
			"LM_BASE_TP",
			"LM_BASE_TL",
			"LM_BASE_SL",
			"LM_BASE_SPECIALISTE_AC",
			"LM_BASE_SPECIALISTE_AA",
			"LM_BASE_MEDIC",
			"LM_BASE_OPERADIO",
			"LM_BASE_OPEDRONE",
			"LM_BASE_JTACAO",
			"LM_BASE_INGENIEUR",
			"LM_BASE_MK6_GUNNER",
			"LM_BASE_MK6_ASSISTANT",
			
			"LM_FOREST_MAN",
			"LM_FOREST_FUSILIER",
			"LM_FOREST_GRENADIER",
			"LM_FOREST_FUSILIER_AC",
			"LM_FOREST_DEMO",
			"LM_FOREST_MITRAILLEUR",
			"LM_FOREST_ARTILLEUR",
			"LM_FOREST_TP",
			"LM_FOREST_TL",
			"LM_FOREST_SL",
			"LM_FOREST_SPECIALISTE_AC",
			"LM_FOREST_SPECIALISTE_AA",
			"LM_FOREST_MEDIC",
			"LM_FOREST_OPERADIO",
			"LM_FOREST_OPEDRONE",
			"LM_FOREST_JTACAO",
			"LM_FOREST_MK6_GUNNER",
			"LM_FOREST_MK6_GUNNER",
			
			"LM_SPECIAL_HELIPILOTE",
			"LM_SPECIAL_TANKPILOTE",
			"LM_SPECIAL_PILOTE",
			"LM_SPECIAL_SPOTTER",
			"LM_SPECIAL_SNIPER"
		};
		
		// toutes les armes définies dans la config
		weapons[] =
		{
		
		};
		
		// version requise, utile si utilise des fonctions ajoutées à une version précise de Arma.
		requiredVersion = 0.1;
		
		// noms des mods requis par la config (tels que définis dans leur cfgPatches").
		requiredAddons[] =
		{
			"ace_main",
			"task_force_radio",
			"SMA_ACR_MAGPUL",
			"tfw_radios_ilbe"
		};
	};
};