/*
James Davis
January 23rd
CS202
Lab 2 - class.h
This program will host the prototype for my class
*/

#ifndef class_h
#define class_h

#include <string>

class MyClass
{
	int number;
	char letter;
	std::string word;

public:
	MyClass();
	MyClass(int x, char c, std::string s);

	int getNumber();
	char getLetter();
	std::string getWord();
};

#endif