/**
 * _player : la cible du changement d'uniforme
 */
 
params["_player", "_newUniform"];

// Récupération des items à transférer
_arrayMags = magazinesAmmoFull _player;
_arrayItems = (uniformItems _player) - (magazines _player);
_arrayNewMags = [];

// Suppresion du tableau des chargeurs engagés (mais pas des Muzzles)
_weapons = [(primaryWeapon _player), (secondaryWeapon _player), (handgunWeapon _player)];
{
	if (!(_x select 4 in _weapons)) then { _arrayNewMags pushBack _x; };
} forEach _arrayMags;

// Retrait de TOUS les chargeurs
{_player removeMagazines _x} forEach magazines _player;

// Ajout du nouvel uniforme
_player addUniform _newUniform;

// Remise des chargeurs avec le bon nombre de munitions
{
	_player addMagazine [_x select 0, _x select 1];
} forEach _arrayNewMags;
{
	_player addItemToUniform _x;
} forEach _arrayItems;