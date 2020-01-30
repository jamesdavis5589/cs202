/*
James Davis
January 23rd
CS202
Lab 2 - class.cpp
This program will define my class
*/

#include "class.h"
#include <iostream>

MyClass::MyClass() :
	number(0),
	letter(' '),
	word("")
{}

MyClass::MyClass(int x, char c, std::string s) :
	number(x),
	letter(c),
	word(s)
{}

MyClass::MyClass(const MyClass& m)
{
	number = m.number;
	letter = m.letter;
	word = m.word;
}

MyClass::~MyClass()
{
	std::cout << "Destroying " << word << "\n";
	number = NULL;
	letter = NULL;
}

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

void MyClass::setNumber(int x)
{
	number = x;
}

void MyClass::setLetter(char &c)
{
	letter = c;
}

void MyClass::setWord(const std::string &s)
{
	word = s;
}