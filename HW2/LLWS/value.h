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
	int pop_rear();
	void push_front(int x);
	void push_rear(int x);

	int get(int x);
	int search(int x);

private:
	std::vector<int> _data;
};

#endif