/*
James Davis
January 30th
CS202
HW2 - Spelunky - room.h
This program will house prototypes for class room
*/

#include <string>
using std::string;

#ifndef room_h
#define room_h

class Room {
	string _sDesc;
	string _lDesc;

public:
	Room();
	Room(string s1, string s2);
	~Room();

	void setLD(string s);
	void setSD(string s);
	string getLD();
	string getSD();
};

#endif