// Pa bien saisi l'utilité. Mais en gros nécessaire pour la compatibilité avec d'autres mods, etc etc...
class CfgPatches
{
	class LM_WINTER //pas super utile mais nécessaire pour que fonctionne correctement en Zeus il me semble
	{
		// toutes les unités définies dans la config
		units[] = 
		{
		
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
			"task_force_radio"
		};
	};
};