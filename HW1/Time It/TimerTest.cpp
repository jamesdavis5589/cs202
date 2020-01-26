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

		
		//uniform_int_distribution<int> dist(0, 100);
		//int ran3 = dist(ran2);

		x[z] = ran2();
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
	cout << endl;


	int look = 32;

	//Searching arrays and measuring how long it takes
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
	cout << endl;

	//removing memory
	delete[] a, b, c, d, e, f, g, h, i;
}