/*
James Davis
January 30th
CS202
HW2 - Spelunky - spelunkey_main.cpp
This program will
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
};

#endif