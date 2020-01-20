/*
James Davis
January 19th
CS202
HW0 - FlashCards - flashCardsMain.cpp
This program will help you study with flash cards
*/

#include "card.h"

#include <vector>
using std::vector;
#include <algorithm>
using std::random_shuffle;

int main()
{
	vector<Card> deck;
	Card c1("ongaku", "music");
	Card c2("sakana", "fish");
	Card c3("mizu", "water");
	Card c4("niku", "meat");
	Card c5("yasai", "vegetable");

	deck.push_back(c1);
	deck.push_back(c2);
	deck.push_back(c3);
	deck.push_back(c4);
	deck.push_back(c5);

	random_shuffle(deck.begin(), deck.end());

	int got = 0;

	//Go through deck
	for (auto c : deck)
	{
		c.test();
		if (c.getC())
		{
			got++;
		}
	}
}