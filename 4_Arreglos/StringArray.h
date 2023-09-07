#pragma once
#include <cstdint>
#include <string.h>
#include <iostream>
//#include "Entity.h"
//#include "Character.h"
//#include "Weapon.h"

template <typename T>

class StringArray
{
	size_t bruhSize;
	T* arrayz;
	//std::uint32_t strings;

public:

	StringArray()
	{
		bruhSize = 0;
		arrayz = nullptr;
	}

	StringArray(size_t newsize)
	{
		bruhSize = newsize;
		arrayz = new T[newsize];
	}

	~StringArray()
	{
		if (arrayz != nullptr)
		{
			delete[] arrayz;
			bruhSize = 0;
		}
	}

	T& operator[](size_t index)
	{
		return arrayz[index];
	}

	void resize(size_t newSize)
	{
		T* newData = new T[newSize];
		if (newSize < bruhSize)
		{
			for (int i = 0; i < newSize; i++)
			{
				newData[i] = arrayz[i];
			}
			delete[] arrayz;
			arrayz = newData;
			bruhSize = newSize;
		}
		else
		{
			for (int i = 0; i < bruhSize; i++)
			{
				newData[i] = arrayz[i];
			}
			delete[] arrayz;
			arrayz = newData;
			bruhSize = newSize;
		}
	}

	size_t getSize() const
	{
		return bruhSize;
	}

	size_t sizebytes()
	{
		return sizeof(T);
	}

	void listContents()
	{
		for (int i = 0; i < bruhSize; i++)
		{
			std::cout << "[ " << i << " ] = " << arrayz[i] << "\n";
		}
	}

	T Add(T newItem)
	{
		resize(bruhSize + 1);
		arrayz[bruhSize - 1] = newItem;
		return newItem;
	}
};


