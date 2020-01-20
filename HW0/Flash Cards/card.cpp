/*
James Davis
January 19th
CS202
HW0 - FlashCards - flashCardsMain.cpp
This program will define class card
*/

#include "card.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

Card::Card() :
	_front(""),
	_back(""),
	_correct(false)
{};

Card::Card(string f, string b) :
	_front(f),
	_back(b),
	_correct(false)
{}

string Card::getFront() 
{
	return _front;
}

string Card::getBack()
{
	return _back;
}

bool Card::getC()
{
	return _correct;
}

void Card::setFront(string s)
{
	_front = s;
}

void Card::setBack(string s)
{
	_back = s;
}

void Card::test()
{
	string input;

	cout << "Front: " << _front << endl;
	cout << "Response: ";
	cin >> input;

	if (input == _back)
	{
		cout << "Correct!" << endl;
		_correct = true;
		cout << endl;
	}
	else
	{
		cout << "Incorrect" << endl;
		_correct = false;
		cout << endl;
	}
}