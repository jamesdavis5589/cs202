/*
James Davis
January 23rd
CS202
Lab 2 - class.cpp
This program will define my class
*/

#include "class.h"

MyClass::MyClass() :
	number(0),
	letter('_'),
	word("")
{}

MyClass::MyClass(int x, char c, std::string s) :
	number(x),
	letter(c),
	word(s)
{}

int MyClass::getNumber()
{
	return number;
}

char MyClass::getLetter()
{
	return letter;
}

std::string MyClass::getWord()
{
	return word;
}