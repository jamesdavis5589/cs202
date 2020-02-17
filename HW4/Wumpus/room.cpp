/*
James Davis
February 15th
CS202
HW4 - Hunt the Wumpus - room.cpp
This program will define class room
*/

#include "room.h"
#include <iostream>

Room::Room() :
	_type(1)
{}

Room::Room(int x) :
	_type(x)
{
	if (x < 1 || x > 4)
	{
		std::cout << "ERROR: Room has wrong type" << std::endl;
	}
}

void Room::setType(int x)
{
	_type = x;

	if (x < 1 || x > 4)
	{
		std::cout << "ERROR: Room has wrong type" << std::endl;
	}
}

int Room::getType()
{
	return _type;
}