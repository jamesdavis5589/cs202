/*
James Davis
January 30th
CS202
HW2 - LLSR - value.cpp
This program will define the struct used for testing
*/

#include "value.h"
#include <iostream>
using std::cout;

ValueC::ValueC() :
	_data()
{}

int ValueC::pop_front()
{
	return(_data[1]);
}

int ValueC::pop_rear()
{
	return(_data[_data.size()]);
}

void ValueC::push_front(int x)
{
	std::vector<int> tempV;
	tempV.push_back(x);

	for (int z : _data)
	{
		tempV.push_back(z);
	}

	_data = tempV;
}

void ValueC::push_rear(int x)
{
	_data.push_back(x);
}

int ValueC::get(int x)
{
	return _data[x];
}

int ValueC::search(int x)
{
	for (int i = 0; i < _data.size(); i++)
	{
		if (_data[i] == x)
		{
			return i;
		}
	}

	return -1;  //If not found
}

void ValueC::print()
{
	for (int z : _data)
	{
		cout << z << ", ";
	}
}