/*
James Davis
February 15th
CS202
HW4 - Hunt the Wumpus - wumpus_main.cpp
This program will run the main wumpus program
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void move()
{

}

void shoot()
{

}

void rules()
{
	cout << "\"I smell a Wumpus\" means you are next to the Wumpus" << endl;
	cout << "\"I hear wings flapping\" means you are next to some bats" << endl;
	cout << "\"I feel a breeze\" means you are next to a pit" << endl;
	cout << endl;
	cout << "Falling into a pit kills you" << endl;
	cout << "Getting caught by bats will move you to a random room" << endl;
	cout << "Bumping into the Wumpus will result in you dying, by the Wumpus.  Eaten." << endl;
	cout << endl;
	cout << "To win, shoot the Wumpus with an arrow" << endl;
	cout << endl;
}

void turn()
{

}

int main()
{
	cout << "Hello and welcome to Hunt the Wumpus" << endl;
	cout << "If you ever want to see the rules, just type \"rules\"" << endl;
	rules();

}