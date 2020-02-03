/*
James Davis
January 30th
CS202
HW2 - Spelunky - spelunkey_main.cpp
This program will
*/

#include "complex.h"

#include <fstream>
using std::ifstream;
using std::ofstream;
using std::getline;

Complex::Complex() :
	_system()
{
	for (int i = 0; i < 15; i++)
	{
		_system.push_back(Room());
	}
}

/*
FILE LAYOUT:

room 1
-short desciption
-long description

room 2
-short
-long
...
*/

void Complex::read() //Will read the file and update the cave system accordingly
{
	ifstream ifs("complex_save");
	string line;

	for (int i = 0; i < _system.size(); i++)
	{
		//Read short description
		getline(ifs, line);
		_system[i].setSD(line);

		//Read long description
		getline(ifs, line);
		_system[i].setLD(line);
	}
}

void Complex::write() //Will save current cave system to file
{
	ofstream ofs("complex_save");

	for (int i = 0; i < _system.size(); i++)
	{
		//Write short description
		ofs << _system[i].getSD() << "\n";

		//Write long description
		ofs << _system[i].getLD() << "\n";
	}
}