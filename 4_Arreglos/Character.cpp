#include "Character.h"

Character::Character()
{
	karma = 0;
	weapons = StringArray<Weapon>();
}

Character::Character(const char* _name)
{
	karma = 0;
	weapons = StringArray<Weapon>();
	name = _name;
}

void Character::SetType(EChartype _type)
{
	CharType = _type;
}

const char* Character::GetType()
{
	if (CharType == EChartype::npc)
	{
		return "NPC";
	}
	else
	{
		return "Player";
	}
}

void Character::GiveWeapon(Weapon newWeapon)
{
	weapons.Add(newWeapon);
}
