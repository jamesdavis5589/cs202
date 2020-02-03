/*
James Davis
January 30th
CS202
HW2 - Spelunky - spelunkey_main.cpp
This program will run the main program using room and complex
*/

#include "complex.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void UI(Complex c)
{
	string inp;
	int rm = 0;

	while (inp != "stop")
	{
		cout << c.getSD(rm) << endl;
		cout << c.getLD(rm) << endl;
		cout << endl;

		if (rm == 0)
		{
			cout << "Move forward : 1" << endl;
			cin >> inp;

			if (inp != "stop")
			{
				rm++;
			}
			else
			{
				break;
			}
		}
		else if (rm == 14)
		{
			cout << endl;
			break;
		}
		else
		{
			cout << "Move forward : 1" << endl;
			cout << "Move back : 2" << endl;
			cin >> inp;

			if (inp == "1")
			{
				rm++;
			}
			else if (inp == "stop")
			{
				break;
			}
			else
			{
				rm--;
			}
		}

	}
}

int main()
{
	Complex caves;
	caves.read();

	UI(caves);
}