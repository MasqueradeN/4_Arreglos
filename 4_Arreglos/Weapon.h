#pragma once
#include "Entity.h"
class Weapon : public Entity
{
public:
	enum EType { melee, ranged } type;

	int damage;
	int Ammo;

	Weapon();

	Weapon(const char* _name, int _ammo, EType _type, int _damage);

	void attack(Entity entiti);
	void giveAmmo(int newAmmo);

};

template<>
inline void StringArray<Weapon>::listContents()
{
	for (int i = 0; i < bruhSize; i++)
	{
		std::cout << "Weapon: [" << i << "] " << arrayz[i].toString() << "(" << arrayz[i].type << ")" << "\n";
	}
}