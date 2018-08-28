class CfgPatches {
    class ADDON {
        name = "lm_aps";
        units[] = {"LM_APS"};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"ace_repair"};
        author = "[LM] Cheitan";
        url = "https://www.lamuerta.fr";
    };
};

class CfgFunctions {
    class LM {
        class APS {
            file = "\lm_aps\functions";
            class addApsActions {};
            class canUseAps {};
            class doUseAps {};
        };
    };
};

class CfgSounds {
    class aps_sound {
        name = "APS sound effect";
        sound[] = {"\lm_aps\sound\spray.ogg",3,1};
        titles[] = {};
    };
};

class Extended_InitPost_EventHandlers {
    class Car {
        class lm_aps {
            init = "_this call LM_fnc_addApsActions";
        };
    };
};

class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class LM_AP_Spray: ACE_ItemCore {
        scope = 2;
        author = "[LM] Cheitan";
        model="\A3\Structures_F_EPA\Items\Tools\ButaneCanister_F.p3d";
        picture = "\lm_aps\ui\icon.paa";
        displayName = $STR_aps_item;
        descriptionShort = $STR_aps_descShort;
        descriptionUse = $STR_aps_descShort;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 15;
        };
    };
};

class CfgVehicles {
    class Item_Base_F;
    class LM_AP_Spray_Item: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = $STR_aps_item;
        author = "[LM] Cheitan";
        vehicleClass = "Items";
        class TransportItems {
            class _xx_LM_AP_Spray {
                name = "LM_AP_Spray";
                count = 1;
            };
        };
    };
};

// Icon made by Freepik from www.flaticon.com