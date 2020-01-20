/*
James Davis
January 19th
CS202
HW0 - FlashCards - flashCardsMain.cpp
This program will define class card
*/

#include "card.h"

Card::Card() :
	_front(""),
	_back("")
{};

string Card::getFront() 
{
	return _front;
}

string Card::getBack()
{
	return _back;
}

void Card::setFront(string s)
{
	_front = s;
}

void Card::setBack(string s)
{
	_back = s;
}