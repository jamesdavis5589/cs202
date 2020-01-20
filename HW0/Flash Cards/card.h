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
	bool _correct;

public:
	Card();
	Card(string f, string b);

	string getFront();
	string getBack();
	bool getC();
	void setFront(string s);
	void setBack(string s);

	void test();
};

#endif // !card_h