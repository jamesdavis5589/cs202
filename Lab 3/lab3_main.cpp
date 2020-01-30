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

int main()
{
	MyClass c1(32, 'A', "James");

	std::cout << "Makeing a pointer to MyClass\n";
	MyClass* ptr1 = new MyClass();

	std::cout << "Making a unique pointer\n";
	auto ptr2 = std::make_unique<MyClass>(32, 'A', "james");
}