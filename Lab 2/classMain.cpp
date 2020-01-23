/*
James Davis
January 23rd
CS202
Lab 2 - classMain.cpp
This program will test out my class
*/

#include "class.h"

using std::string;
#include <vector>
using std::vector;

int main()
{
	//int, char, string

	MyClass tester(32, 'X', "James");


	int copy = tester.getNumber();


	int value = 104;
	tester.setNumber(value);


	char let = 'f';
	tester.setLetter(let);


	string english = "Hello";
	tester.setWord(english);

	
	MyClass g1();
	MyClass g2();
	MyClass g3();
	MyClass g4();
	MyClass g5();
	
	vector<MyClass> group{ MyClass() };// g1, g2, g3, g4, g5
}