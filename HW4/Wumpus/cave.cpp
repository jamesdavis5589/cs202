/*
James Davis
February 15th
CS202
HW4 - Hunt the Wumpus - room.h
This program will define class cave
*/

#include "cave.h"
#include <algorithm>
using std::rand;

Cave::Cave() :
	_cave()
{
	for (int i = 0; i < 25; i++)
	{
		_cave.push_back(Room());
	}

	//Bat Spawns
	for (int i = 0; i < 3; i++)
	{
		int r = rand() % 25;


		if (_cave[r].getType() == 2)
		{
			i--;
		}
		else
		{
			_cave[r].setType(2);
		}
	}

	//Pit Spawns
	for (int i = 0; i < 2; i++)
	{
		int r = rand() % 25;


		if (_cave[r].getType() != 1)
		{
			i--;
		}
		else
		{
			_cave[r].setType(3);
		}
	}

	//Wumpus Spawn
	bool x1 = false;

	while (!x1)
	{
		int r = rand() % 25;


		if (_cave[r].getType() == 1)
		{
			x1 = true;
			break;
		}
	}
}

Cave::Cave(int y, int z) :
	_cave()
{
	for (int i = 0; i < 25; i++)
	{
		_cave.push_back(Room());
	}

	//Bat Spawns
	for (int i = 0; i < y; i++)
	{
		int r = rand() % 25;


		if (_cave[r].getType() == 2)
		{
			i--;
		}
		else
		{
			_cave[r].setType(2);
		}
	}

	//Pit Spawns
	for (int i = 0; i < z; i++)
	{
		int r = rand() % 25;


		if (_cave[r].getType() != 1)
		{
			i--;
		}
		else
		{
			_cave[r].setType(3);
		}
	}

	//Wumpus Spawn
	bool x1 = false;

	while (!x1)
	{
		int r = rand() % 25;


		if (_cave[r].getType() == 1)
		{
			x1 = true;
			break;
		}
	}
}