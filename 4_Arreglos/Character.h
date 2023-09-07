#pragma once
#include "Entity.h"
#include "Weapon.h"

typedef StringArray<Weapon> Inventory;

class Character : public Entity
{
public:
	enum EChartype {player, npc} CharType;
	int karma;
	Inventory weapons;

	Character();
	Character(const char* _name);

	void SetType(EChartype _type);
	const char* GetType();

	void GiveWeapon(Weapon newWeapon);
};

template<>
inline void StringArray<Character>::listContents()
{
	for (int i = 0; i < bruhSize; i++)
	{
		std::cout << "Character: [" << i << "] "<< arrayz[i].toString() << "(" << arrayz[i].GetType() << ")" << "\n";
	}
}