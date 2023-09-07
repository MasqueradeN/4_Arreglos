#pragma once
#include <string>
#include <random>
#include "StringArray.h"

class Entity
{
public:
	std::string name;
	int health;

	Entity()
	{
		name = "xd";
		health = 0;
	}

	const char* toString()
	{
		return name.c_str();
	}
};

template<>
inline void StringArray<Entity>::listContents()
{
	for (int i = 0; i < bruhSize; i++)
	{
		std::cout << "[" << i << "] = " << arrayz[i].toString() << "\n";
	}
}