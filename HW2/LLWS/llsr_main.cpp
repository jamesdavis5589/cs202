/*
James Davis
January 30th
CS202
HW2 - LLSR - llsr_main.cpp
This program will test out stuff on class ValueC
*/

//LLSR stands for: Linked List with Shared_ptr<T>

#include "value.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	cout << "Creating a version of my class, then adding values to the back using push_rear()" << endl;
	ValueC values;
	values.push_rear(3);
	values.push_rear(27);
	values.push_rear(84);
	values.push_rear(2);

	cout << "Now adding some values to the front of group using push_front()" << endl;
	values.push_front(19);
	values.push_front(33);

	cout << "Will now return the rear-most using pop_rear()" << endl;
	cout << "The value at the end of the data group is " << values.pop_rear() << endl;

	cout << "Now using pop_front() to get the value at the front of the data group:" << endl;
	cout << "Value at the front of data group is " << values.pop_front() << endl;

}