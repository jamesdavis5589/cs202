/*
James Davis
January 15th, 2020
CS202
HW1 - Time It - TimerTest.cpp
This program test out class Stopwatch
*/

#include "StopWatch.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <random>
using std::mt19937;
using std::random_device;
using std::uniform_int_distribution;
using std::search;
using std::binary_search;
using std::sort;
#include <vector>
using std::vector;

StopWatch timer;
int tempTime = 0;

void allocate(vector<int> x, int s)
{
	//s = number of 0s

	for (int z = 0; z < (10 ^ s); z++)
	{
		//Literal random stuff

		random_device rf;
		mt19937 ran2(rf());
		uniform_int_distribution<int> dist(INT32_MIN, INT32_MAX);
		x.push_back(dist(ran2));
	}
}

//Allocates array and times how long it takes as well
void measureA(vector<int> x, int s)
{
	timer.start();
	allocate(x, s);
	timer.stop();

	tempTime = (timer.timeM()).count();
}

//Searches array and measures how long it takes
void measureB(vector<int> x, vector<int> s)
{
	timer.start();
	search(x.begin(), x.end(), s[0], s[1]);
	timer.stop();

	tempTime = (timer.timeM()).count();
}

//Searches array with binary_search and measures how long it takes
void measureC(vector<int> x, int v)
{
	timer.start();
	binary_search(x.begin(), x.end(), v);
	timer.stop();

	tempTime = (timer.timeM()).count();
}

//Sorts an array and measures how long it takes
void measureD(vector<int> x)
{
	timer.start();
	sort(x.begin(), x.end());
	timer.stop();

	tempTime = (timer.timeM()).count();
}

int main()
{
	//adding memory
	vector<int> a, b, c, d, e, f, g, h, i;

	cout << "How long does it take to assign values to the arrays?" << endl;

	//Filling arrays with random values - and now measuring how long that takes
	measureA(a, 1);
	cout << "it takes " << tempTime << " milliseconds to allocate 10 array slots" << endl;
	measureA(b, 2);
	cout << "it takes " << tempTime << " milliseconds to allocate 100 array slots" << endl;
	measureA(c, 3);
	cout << "it takes " << tempTime << " milliseconds to allocate 1000 array slots" << endl;
	measureA(d, 4);
	cout << "it takes " << tempTime << " milliseconds to allocate 10000 array slots" << endl;
	measureA(e, 5);
	cout << "it takes " << tempTime << " milliseconds to allocate 100000 array slots" << endl;
	measureA(f, 6);
	cout << "it takes " << tempTime << " milliseconds to allocate 1000000 array slots" << endl;
	measureA(g, 7);
	cout << "it takes " << tempTime << " milliseconds to allocate 10000000 array slots" << endl;
	measureA(h, 8);
	cout << "it takes " << tempTime << " milliseconds to allocate 100000000 array slots" << endl;
	measureA(i, 9);
	cout << "it takes " << tempTime << " milliseconds to allocate 1000000000 array slots" << endl;
	cout << endl << endl << endl;


	int look = 32;
	int look2 = 33;
	vector<int> ss{ look, look2 };
	
	//Searching arrays and measuring how long it takes
	//Search
	cout << "How long does it take to search arrays with std::search?" << endl;
	measureB(a, ss);
	cout << "it takes " << tempTime << " milliseconds to search 10 array slots" << endl;
	measureB(b, ss);
	cout << "it takes " << tempTime << " milliseconds to search 100 array slots" << endl;
	measureB(c, ss);
	cout << "it takes " << tempTime << " milliseconds to search 1000 array slots" << endl;
	measureB(d, ss);
	cout << "it takes " << tempTime << " milliseconds to search 10000 array slots" << endl;
	measureB(e, ss);
	cout << "it takes " << tempTime << " milliseconds to search 100000 array slots" << endl;
	measureB(f, ss);
	cout << "it takes " << tempTime << " milliseconds to search 1000000 array slots" << endl;
	measureB(g, ss);
	cout << "it takes " << tempTime << " milliseconds to search 10000000 array slots" << endl;
	measureB(h, ss);
	cout << "it takes " << tempTime << " milliseconds to search 100000000 array slots" << endl;
	measureB(i, ss);
	cout << "it takes " << tempTime << " milliseconds to search 1000000000 array slots" << endl;
	cout << endl << endl << endl;


	//Sort for binary_search
	cout << "How long does it take to sort arrays?" << endl;
	measureD(a);
	cout << "it takes " << tempTime << " milliseconds to sort 10 array slots" << endl;
	measureD(b);
	cout << "it takes " << tempTime << " milliseconds to sort 100 array slots" << endl;
	measureD(c);
	cout << "it takes " << tempTime << " milliseconds to sort 1000 array slots" << endl;
	measureD(d);
	cout << "it takes " << tempTime << " milliseconds to sort 10000 array slots" << endl;
	measureD(e);
	cout << "it takes " << tempTime << " milliseconds to sort 100000 array slots" << endl;
	measureD(f);
	cout << "it takes " << tempTime << " milliseconds to sort 1000000 array slots" << endl;
	measureD(g);
	cout << "it takes " << tempTime << " milliseconds to sort 10000000 array slots" << endl;
	measureD(h);
	cout << "it takes " << tempTime << " milliseconds to sort 100000000 array slots" << endl;
	measureD(i);
	cout << "it takes " << tempTime << " milliseconds to sort 1000000000 array slots" << endl;
	cout << endl << endl;

	//Binary_search
	cout << "How long does it take to search arrays with binary_search?" << endl;
	measureC(a, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 10 array slots" << endl;
	measureC(b, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 100 array slots" << endl;
	measureC(c, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 1000 array slots" << endl;
	measureC(d, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 10000 array slots" << endl;
	measureC(e, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 100000 array slots" << endl;
	measureC(f, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 1000000 array slots" << endl;
	measureC(g, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 10000000 array slots" << endl;
	measureC(h, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 100000000 array slots" << endl;
	measureC(i, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 1000000000 array slots" << endl;
	cout << endl << endl << endl;
}