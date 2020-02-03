/*
James Davis
January 30th
CS202
HW2 - Spelunky - room.cpp
This program will define class room
*/

#include "room.h"

Room::Room() :
	_sDesc(),
	_lDesc()
{}

Room::Room(string s1, string s2) :
	_sDesc(s1),
	_lDesc(s2)
{}

Room::~Room()
{
	_sDesc = "";
	_lDesc = "";
}

void Room::setLD(string s)
{
	_lDesc = s;
}

void Room::setSD(string s)
{
	_sDesc = s;
}