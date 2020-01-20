/*
James Davis
January 19th
CS202
HW0 - FlashCards - flashCardsMain.cpp
This program will host prototypes for class card
*/

#ifndef card_h
#define card_h

#include <string>
using std::string;

class Card {
	string _front;
	string _back;

public:
	Card();
	Card(string f, string b);

	string getFront();
	string getBack();
	void setFront(string s);
	void setBack(string s);
};

#endif // !card_h