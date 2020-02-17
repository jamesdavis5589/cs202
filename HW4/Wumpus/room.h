/*
James Davis
February 15th
CS202
HW4 - Hunt the Wumpus - room.h
This program will house prototypes for class room
*/

#ifndef room_h

class Room {
	int _type;

public:
	Room();
	Room(int x);

	void setType(int x);
	int getType();
};

/*
ROOM TYPES:
1 - Clear
2 - Bats
3 - Pit
4 - Wumpus
*/

#endif // !room_h
