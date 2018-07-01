class cfgGroups
{
	class WEST //side
	{
		name = "BLUFOR";
		side = 1;
		class LA_MUERTA //faction
		{
			name = $STR_factionclasses_lamuerta;
			class lm_infanterie_base //type d'escouade
			{
				name = $STR_lmgroups_infantry_base;
				class groupe_combat //escouade
				{
					name = $STR_lmgroups_combatgroup;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_BASE_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_BASE_MITRAILLEUR";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "LM_BASE_OPERADIO";
						rank = "SOLDIER";
						position[] = {2,-2,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "LM_BASE_DEMO";
						rank = "SOLDIER";
						position[] = {-4,-4,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "LM_BASE_FUSILIER_AC";
						rank = "SOLDIER";
						position[] = {4,-4,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "LM_BASE_MEDIC";
						rank = "SOLDIER";
						position[] = {-6,-6,0};
					};
				};
				class groupe_appui_aa //escouade
				{
					name = $STR_lmgroups_supportgroup_aa;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_BASE_TL_RADIO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_BASE_SPECIALISTE_AA";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "LM_BASE_PORTEUR_AA";
						rank = "SOLDIER";
						position[] = {2,-2,0};
					};
				};
				class groupe_appui_ac //escouade
				{
					name = $STR_lmgroups_supportgroup_ac;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_BASE_TL_RADIO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_BASE_SPECIALISTE_AC";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "LM_BASE_PORTEUR_AC";
						rank = "SOLDIER";
						position[] = {2,-2,0};
					};
				};
				class groupe_logistique //escouade
				{
					name = $STR_lmgroups_logisticsgroup;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_BASE_INGENIEUR";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_BASE_INGENIEUR";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "LM_BASE_INGENIEUR";
						rank = "SOLDIER";
						position[] = {2,-2,0};
					};
				};
				class groupe_medical //escouade
				{
					name = $STR_lmgroups_medicalgroup;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_BASE_DOCTEUR";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_BASE_DOCTEUR";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "LM_BASE_DOCTEUR";
						rank = "SOLDIER";
						position[] = {2,-2,0};
					};
				};
				class groupe_helico
				{
					name = $STR_lmgroups_heligroup;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_SPECIAL_HELIPILOTE";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_SPECIAL_HELIPILOTE";
						rank = "SOLDIER";
						position[] = {-1,0,0};
					};
				};
				class patrouille
				{
					name = $STR_lmgroups_patrol;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_BASE_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_BASE_FUSILIER";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "LM_BASE_ARTILLEUR";
						rank = "SOLDIER";
						position[] = {2,-2,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "LM_BASE_MEDIC";
						rank = "SOLDIER";
						position[] = {0,-4,0};
					};
				};
				class sentinelle
				{
					name = $STR_lmgroups_sentries;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_BASE_FUSILIER";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_BASE_FUSILIER";
						rank = "SOLDIER";
						position[] = {-1,0,0};
					};
				};
			};
			class lm_infanterie_forest //type d'escouade
			{
				name = $STR_lmgroups_infantry_forest;
				class groupe_combat //escouade
				{
					name = $STR_lmgroups_combatgroup;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_FOREST_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_FOREST_MITRAILLEUR";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "LM_FOREST_OPERADIO";
						rank = "SOLDIER";
						position[] = {2,-2,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "LM_FOREST_DEMO";
						rank = "SOLDIER";
						position[] = {-4,-4,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "LM_FOREST_FUSILIER_AC";
						rank = "SOLDIER";
						position[] = {4,-4,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "LM_FOREST_MEDIC";
						rank = "SOLDIER";
						position[] = {-6,-6,0};
					};
				};
				class groupe_appui_aa //escouade
				{
					name = $STR_lmgroups_supportgroup_aa;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_FOREST_TL_RADIO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_FOREST_SPECIALISTE_AA";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "LM_FOREST_PORTEUR_AA";
						rank = "SOLDIER";
						position[] = {2,-2,0};
					};
				};
				class groupe_appui_ac //escouade
				{
					name = $STR_lmgroups_supportgroup_ac;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_FOREST_TL_RADIO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_FOREST_SPECIALISTE_AC";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "LM_FOREST_PORTEUR_AC";
						rank = "SOLDIER";
						position[] = {2,-2,0};
					};
				};
				class groupe_logistique //escouade
				{
					name = $STR_lmgroups_logisticsgroup;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_FOREST_INGENIEUR";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_FOREST_INGENIEUR";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "LM_FOREST_INGENIEUR";
						rank = "SOLDIER";
						position[] = {2,-2,0};
					};
				};
				class groupe_medical //escouade
				{
					name = $STR_lmgroups_medicalgroup;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_FOREST_DOCTEUR";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_FOREST_DOCTEUR";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "LM_FOREST_DOCTEUR";
						rank = "SOLDIER";
						position[] = {2,-2,0};
					};
				};
				class groupe_helico
				{
					name = $STR_lmgroups_heligroup;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_SPECIAL_HELIPILOTE";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_SPECIAL_HELIPILOTE";
						rank = "SOLDIER";
						position[] = {-1,0,0};
					};
				};
				class patrouille
				{
					name = $STR_lmgroups_patrol;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_FOREST_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_FOREST_FUSILIER";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "LM_FOREST_ARTILLEUR";
						rank = "SOLDIER";
						position[] = {2,-2,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "LM_FOREST_MEDIC";
						rank = "SOLDIER";
						position[] = {0,-4,0};
					};
				};
				class sentinelle
				{
					name = $STR_lmgroups_sentries;
					faction = "LA_MUERTA";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 1;
						vehicle = "LM_FOREST_FUSILIER";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LM_FOREST_FUSILIER";
						rank = "SOLDIER";
						position[] = {-1,0,0};
					};
				};
			};
		};
	};
};