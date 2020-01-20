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

	string getFront();
	string getBack();
};

#endif // !card_h