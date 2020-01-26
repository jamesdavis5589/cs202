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

StopWatch timer;
int tempTime = 0;

void allocate(int* &x, int s)
{
	//s = number of 0s

	for (int z = 0; z < (10 ^ s); z++)
	{
		//Literal random stuff

		random_device rf;
		mt19937 ran2(rf());
		uniform_int_distribution<int> dist(INT32_MIN, INT32_MAX);
		x[z] = dist(ran2);
	}
}

//Allocates array and times how long it takes as well
void measureA(int* &x, int s)
{
	timer.start();
	allocate(x, s);
	timer.stop();

	tempTime = (timer.timeM()).count();
}

//Searches array and measures how long it takes
void measureB(int* x, int l, int s)
{
	//l is the number of 0s, s is value to be searched for
	int last = (10 ^ l);

	timer.start();
	search(0, last, s);
	timer.stop();

	tempTime = (timer.timeM()).count();
}

//Searches array with binary_search and measures how long it takes
void measureC(int* x, int l, int s)
{
	//l is the number of 0s, s is value to be searched for
	int last = (10 ^ l);

	timer.start();
	binary_search(0, last, s);
	timer.stop();

	tempTime = (timer.timeM()).count();
}

//Sorts an array and measures how long it takes
void measureD(int* x, int l)
{
	//l is the number of 0s
	int last = (10 ^ l);

	timer.start();
	sort(0, last);
	timer.stop();

	tempTime = (timer.timeM()).count();
}

int main()
{
	//adding memory
	int* a = new int[10];
	int* b = new int[100];
	int* c = new int[1000]; //1K
	int* d = new int[10000];
	int* e = new int[100000];
	int* f = new int[1000000]; //1M
	int* g = new int[10000000];
	int* h = new int[100000000];
	int* i = new int[100]; //1B 1000000000


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

	//Searching arrays and measuring how long it takes
	//Search
	cout << "How long does it take to search arrays with std::search?" << endl;
	measureB(a, 1, look);
	cout << "it takes " << tempTime << " milliseconds to search 10 array slots" << endl;
	measureB(b, 2, look);
	cout << "it takes " << tempTime << " milliseconds to search 100 array slots" << endl;
	measureB(c, 3, look);
	cout << "it takes " << tempTime << " milliseconds to search 1000 array slots" << endl;
	measureB(d, 4, look);
	cout << "it takes " << tempTime << " milliseconds to search 10000 array slots" << endl;
	measureB(e, 5, look);
	cout << "it takes " << tempTime << " milliseconds to search 100000 array slots" << endl;
	measureB(f, 6, look);
	cout << "it takes " << tempTime << " milliseconds to search 1000000 array slots" << endl;
	measureB(g, 7, look);
	cout << "it takes " << tempTime << " milliseconds to search 10000000 array slots" << endl;
	measureB(h, 8, look);
	cout << "it takes " << tempTime << " milliseconds to search 100000000 array slots" << endl;
	measureB(i, 9, look);
	cout << "it takes " << tempTime << " milliseconds to search 1000000000 array slots" << endl;
	cout << endl << endl << endl;


	//Sort for binary_search
	cout << "How long does it take to sort arrays?" << endl;
	measureD(a, 1);
	cout << "it takes " << tempTime << " milliseconds to sort 10 array slots" << endl;
	measureD(b, 2);
	cout << "it takes " << tempTime << " milliseconds to sort 100 array slots" << endl;
	measureD(c, 3);
	cout << "it takes " << tempTime << " milliseconds to sort 1000 array slots" << endl;
	measureD(d, 4);
	cout << "it takes " << tempTime << " milliseconds to sort 10000 array slots" << endl;
	measureD(e, 5);
	cout << "it takes " << tempTime << " milliseconds to sort 100000 array slots" << endl;
	measureD(f, 6);
	cout << "it takes " << tempTime << " milliseconds to sort 1000000 array slots" << endl;
	measureD(g, 7);
	cout << "it takes " << tempTime << " milliseconds to sort 10000000 array slots" << endl;
	measureD(h, 8);
	cout << "it takes " << tempTime << " milliseconds to sort 100000000 array slots" << endl;
	measureD(i, 9);
	cout << "it takes " << tempTime << " milliseconds to sort 1000000000 array slots" << endl;
	cout << endl << endl;

	//Binary_search
	cout << "How long does it take to search arrays with binary_search?" << endl;
	measureC(a, 1, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 10 array slots" << endl;
	measureC(b, 2, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 100 array slots" << endl;
	measureC(c, 3, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 1000 array slots" << endl;
	measureC(d, 4, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 10000 array slots" << endl;
	measureC(e, 5, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 100000 array slots" << endl;
	measureC(f, 6, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 1000000 array slots" << endl;
	measureC(g, 7, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 10000000 array slots" << endl;
	measureC(h, 8, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 100000000 array slots" << endl;
	measureC(i, 9, look);
	cout << "it takes " << tempTime << " milliseconds to binary_search 1000000000 array slots" << endl;
	cout << endl << endl << endl;

	//removing memory
	delete[] a, b, c, d, e, f, g, h, i;
}