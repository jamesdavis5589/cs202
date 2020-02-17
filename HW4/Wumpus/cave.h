/*
James Davis
February 15th
CS202
HW4 - Hunt the Wumpus - room.h
This program will hold prototypes for class cave
*/

#include "room.h"
#include <vector>
using std::vector;

#ifndef room_h

class Cave {
	vector<Room> _cave;

public:
	Cave();
	Cave(int y, int z);
};

/*
ROOM TYPES:
1 - Clear
2 - Bats
3 - Pit
4 - Wumpus
*/

#endif // !room_h