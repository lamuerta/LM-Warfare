#define IDENTITY 

class CfgGlasses
{
	class G_Balaclava_blk;
    class LM_WINTER_BALACLAVA: G_Balaclava_blk
    {
        author = "W4lly63";
        displayname = "$STR_balaclava";
        hiddenSelectionsTextures[] = {"lm_winter\tex\balaclava.paa"};
        model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        picture = "lm_winter\ui\icon_balaclava.paa";
        identityTypes[] =
        {
            "NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,
            "G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0
        };
        mass = 4;
    };
};