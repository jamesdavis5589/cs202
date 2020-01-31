/*
James Davis
January 30th
CS202
Lab 3 - lab3_main.cpp
This program will use pointers with my class from Lab 2
*/

#include "Additional/class.h"

#include <memory>
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	MyClass c1(32, 'A', "James");

	cout << "Making a pointer to MyClass\n";
	MyClass* ptr1 = new MyClass();

	cout << "Making a unique pointer\n";
	auto ptr2 = std::make_unique<MyClass>(32, 'A', "james");

	cout << "Transferring ownership from unique_ptr to another one\n";
	auto ptr3 = std::move(ptr2);

	cout << "Using member from class via pointer\n"; //fix
	cout << "Class member is: ";
	ptr3->printNum();
	cout << endl;

	cout << "Setting a shared_ptr\n";
	auto sPtr = std::make_shared<MyClass>(55, 'C', "liam");

	cout << "Giving another shared_ptr access to above value\n";
	auto sPtr2 = std::make_shared<MyClass>(sPtr);
}