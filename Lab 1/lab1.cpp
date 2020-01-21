/*
James Davis
January 21st, 2020
CS202
Lab 1 - lab1.cpp
This program will test out flow-of-control structures
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;

//THEME: Jumpsuits

void zippify(bool &jsuit)
{
	if (jsuit)
	{
		jsuit = false;
		cout << "Zipper has been unzipped" << endl;
	}
	else
	{
		cout << "Zipper already unzipped" << endl;
	}
}

int main()
{
	//if / else
	bool zipper = true;

	if (zipper)
	{
		zipper = false;
	}
	else
	{
		cout << "Zipper is confirmed unzipped" << endl;
	}
	cout << endl;

	//switch
	int jumpsuits = 32;

	switch (jumpsuits / 2)
	{
	case 0:
	{
		cout << "There are no suits" << endl;
	}
	case 16:
	{
		cout << "Half of the starting suits remain" << endl;
	}
	case 3:
	{
		cout << "3 suits" << endl;
	}
	}
	cout << endl;

	//function call
	bool zipper2 = false;
	zippify(zipper2);
	cout << endl;

	//while-loop
	int jumpsuit2 = 5;
	while (jumpsuit2 <= 20)
	{
		cout << jumpsuit2 << " jumpsuits" << endl;
		jumpsuit2++;
	}
	cout << endl;

	//do-while-loop

	//for-loop
	for (int jumpingsuit = 0; jumpingsuit < 10; jumpingsuit++)
	{
		cout << jumpingsuit << " jumping suits" << endl;
	}
	cout << endl;

	//range-based for-loop
	vector<int> wardrobe{ 44, 86, 92, 104, 253 };
	int count = 0;

	for (int x : wardrobe)
	{
		count++;
		cout << "Jumpsuit #" << x << " in wardrobe..." << endl;
	}
	cout << endl;
	cout << count << " jumpsuits in wardrobe" << endl;
}