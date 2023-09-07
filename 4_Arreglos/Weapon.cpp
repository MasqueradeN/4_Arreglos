#include "Weapon.h"

Weapon::Weapon()
{
	name = "weapon";
	Ammo = 0;
	damage = 0;
	type = EType::ranged;
}

Weapon::Weapon(const char* _name, int _ammo, EType _type, int _damage)
{
	name = _name;
	Ammo = _ammo;
	type = _type;
	damage = _damage;
}

void Weapon::attack(Entity entiti)
{
}

void Weapon::giveAmmo(int newAmmo)
{
}
