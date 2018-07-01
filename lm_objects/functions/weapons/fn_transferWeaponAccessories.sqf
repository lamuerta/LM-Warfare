params["_player", "_weap"];

// Sauv. des accessoires
_acc = primaryWeaponItems _player;

// Sauv. du chargeur engagé et de la grenade
_gre = "";
_mag = "";
_ammo = 0;
_magList = magazinesAmmoFull _player;
{
	if(_x select 4 isEqualTo primaryWeapon _player) then {
		_mag = _x select 0;
		_ammo = _x select 1;
	};
	if(_x select 4 isEqualTo "ACR_GL") then { _gre = _x select 0; };
} forEach _magList;

// Ajout d'un chargeur plein et de la grenade
if !(_gre isEqualTo "") then { _player addMagazine _gre; };
if !(_mag isEqualTo "") then { _player addMagazine _mag; };

// Ajout de la nouvelle arme
_player addWeapon _weap;

// Un chargeur plein devrait être engagé, on le ramnène au bon nombre de munitions
_player setAmmo [primaryWeapon _player, _ammo];

// On remonte les accessoires
{ _player addPrimaryWeaponItem _x; } forEach _acc;