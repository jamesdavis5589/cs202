/*
James Davis
January 30th
CS202
Lab 3 - lab3_main.cpp
This program will use pointers with my class from Lab 2
*/

#include "Additional/class.h"

int main()
{
	MyClass c1(32, 'A', "James");

	int* ptr1 = c1.getNumber();
}