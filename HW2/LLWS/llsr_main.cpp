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
	cout << "Creating class template, then added some base values" << endl;
	ValueC values;
	values.push_rear(55);
	values.push_rear(56);
	values.push_rear(57);
	values.push_rear(58);
	values.push_rear(59);
	values.push_rear(60);
	cout << endl;

	cout << "Adding values to the back using push_rear()" << endl;
	values.push_rear(3);
	values.push_rear(27);
	values.push_rear(84);
	values.push_rear(2);
	cout << endl;

	cout << "Now adding some values to the front of group using push_front()" << endl;
	values.push_front(19);
	values.push_front(33);
	cout << endl;

	cout << "Will now return the rear-most using pop_rear()" << endl;
	cout << "The value at the end of the data group is " << values.pop_rear() << endl;
	cout << endl;

	cout << "Now using pop_front() to get the value at the front of the data group:" << endl;
	cout << "Value at the front of data group is " << values.pop_front() << endl;
	cout << endl;


	//search
	int input;
	int result;

	cout << "Will now search for a value.  Please enter a value to search for: ";
	cin >> input;
	cout << endl;
	result = values.search(input);

	if (result == -1)
	{
		cout << "Value not found" << endl;
	}
	else
	{
		cout << "Value found at slot " << result;
	}
	cout << endl;


	cout << "Will now print out the data values:" << endl;
	values.print();
	cout << endl;
}