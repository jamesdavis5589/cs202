/*
James Davis
January 30th
CS202
HW2 - LLSR - value.cpp
This program will define the struct used for testing
*/

#include "value.h"

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