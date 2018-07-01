class cfgGroups
{
	class EAST //side
	{
		name = "OPFOR";
		side = 0;
		class LM_KICC //faction
		{
			name = "KICC";
			class kicc_infanterie_base //type d'escouade
			{
				name = $STR_group_infanterie;
				class assaut //escouade
				{
					name = $STR_group_combat;
					faction = "LM_KICC";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 0;
						vehicle = "KICC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "KICC_FUSILIER_AUTO";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "KICC_OP_RADIO";
						rank = "SOLDIER";
						position[] = {2,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "KICC_EXPLO";
						rank = "SOLDIER";
						position[] = {-4,-4,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "KICC_FUSILIER_AC";
						rank = "SOLDIER";
						position[] = {4,-4,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "KICC_GRENADIER";
						rank = "SOLDIER";
						position[] = {-6,-6,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "KICC_FUSILIER";
						rank = "SOLDIER";
						position[] = {6,-6,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "KICC_MEDIC";
						rank = "SOLDIER";
						position[] = {0,-4,0};
					};
				};
				class appui //escouade
				{
					name = $STR_group_soutien;
					faction = "LM_KICC";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 0;
						vehicle = "KICC_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "KICC_ARTILLEUR";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "KICC_OP_RADIO";
						rank = "SOLDIER";
						position[] = {2,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "KICC_TIREUR_PRECISION";
						rank = "SOLDIER";
						position[] = {-4,-4,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "KICC_FUSILIER";
						rank = "SOLDIER";
						position[] = {4,-4,0};
					};
				};
				class antichar
				{
					name = $STR_group_ac;
					faction = "LM_KICC";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 0;
						vehicle = "KICC_FUSILIER";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "KICC_TITAN_AC";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
				};
				class antiaerien
				{
					name = $STR_group_aa;
					faction = "LM_KICC";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 0;
						vehicle = "KICC_FUSILIER";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "KICC_TITAN_AA";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
				};
				class sentinelle
				{
					name = $STR_group_sentinelles;
					faction = "LM_KICC";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0 //unité de l'escouade
					{
						side = 0;
						vehicle = "KICC_SENTINELLE_SL";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "KICC_SENTINELLE_RADIO";
						rank = "SOLDIER";
						position[] = {-1,0,0};
					};
				};
				class snipers
				{
					name = $STR_group_snipers;
					faction = "LM_KICC";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0 //unité de l'escouade
					{
						side = 0;
						vehicle = "KICC_SPOTTER";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "KICC_SNIPER";
						rank = "SOLDIER";
						position[] = {-1,0,0};
					};
				};
				class specfor //escouade
				{
					name = $STR_group_specfor;
					faction = "LM_KICC";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0 //unité de l'escouade
					{
						side = 0;
						vehicle = "KICC_TL_FS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "KICC_FUSILIER_FS";
						rank = "SOLDIER";
						position[] = {-2,-2,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "KICC_EXPLO_FS";
						rank = "SOLDIER";
						position[] = {2,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "KICC_FUSILIER_AUTO_FS";
						rank = "SOLDIER";
						position[] = {-4,-4,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "KICC_TIREUR_PRECISION_FS";
						rank = "SOLDIER";
						position[] = {4,-4,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "KICC_MEDIC_FS";
						rank = "SOLDIER";
						position[] = {0,-4,0};
					};
				};
			};
			class kicc_infanterie_mecanisee
			{
				name = $STR_group_infanterie_meca;
				class barrage_light
				{
					name = $STR_group_barrage_leger;
					faction = "LM_KICC";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "KICC_OFFROAD_ARMED";
						rank = "SOLDIER";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "KICC_SL";
						rank = "SERGEANT";
						position[] = {2,1,0};
					};
				};
				class equipe_urbaine
				{
					name = $STR_group_equipe_urbaine;
					faction = "LM_KICC";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "KICC_T100";
						rank = "SOLDIER";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "KICC_FUSILIER";
						rank = "SOLDIER";
						position[] = {-3,2,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "KICC_TL";
						rank = "SERGEANT";
						position[] = {-3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "KICC_MEDIC";
						rank = "SOLDIER";
						position[] = {-3,-2,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "KICC_EXPLO";
						rank = "SOLDIER";
						position[] = {-3,-4,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "KICC_FUSILIER";
						rank = "SOLDIER";
						position[] = {3,2,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "KICC_SL";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "KICC_MEDIC";
						rank = "SOLDIER";
						position[] = {3,-2,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "KICC_EXPLO";
						rank = "SOLDIER";
						position[] = {3,-4,0};
					};
				};
			};
		};
	};
};