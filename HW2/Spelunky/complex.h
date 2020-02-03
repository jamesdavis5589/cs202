/*
James Davis
January 30th
CS202
HW2 - Spelunky - spelunkey_main.cpp
This program will house prototypes for class Complex
*/

#include "room.h"

#include <vector>
using std::vector;

#ifndef complex_h
#define complex_h

class Complex {
	vector<Room> _system;

public:
	Complex();

	string getLD(int x); //x is the slot in _system
	string getSD(int x);
	void setSD(int x, string s);
	void setLD(int x, string s);

	void read();
	void write();
};

#endif // !complex_h