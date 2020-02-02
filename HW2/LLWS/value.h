/*
James Davis
January 30th
CS202
HW2 - LLSR - value.h
This program will be the prototype for the class used in main testing
*/

#include <vector>

#ifndef value_h
#define value_h

//Value Collection
struct ValueC {
	ValueC();

	int pop_front();
	int pop_back();
	void push_front();
	void push_back();

private:
	std::vector<int> _data;
};

#endif