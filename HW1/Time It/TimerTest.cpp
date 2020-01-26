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

StopWatch timer;
int tempTime = 0;

void allocate(int* &x, int s)
{
	//s = number of 0s

	for (int i = 0; i < (10 ^ s); i++)
	{
		//Literal random stuff
		random_device rand;
		mt19937 ran2(rand);
		uniform_int_distribution<int> dist(0, 100);
		int ran3 = dist(ran2);

		x[i] = ran3;
	}
}

//Allocates array and times how long it takes as well
void measureA(int* &x, int s)
{
	timer.start();
	allocate(x, s);
	timer.stop;

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
	int* i = new int[1000000000]; //1B


	cout << "How long does it take to assign values to the arrays?" << endl;

	//Filling arrays with random values
	measureA(a, 1);
	cout << "it takes " << tempTime << "milliseconds to allocate 10 array slots" << endl;
	measureA(b, 2);
	cout << "it takes " << tempTime << "milliseconds to allocate 100 array slots" << endl;
	measureA(c, 3);
	cout << "it takes " << tempTime << "milliseconds to allocate 1000 array slots" << endl;
	measureA(d, 4);
	cout << "it takes " << tempTime << "milliseconds to allocate 10000 array slots" << endl;
	measureA(e, 5);
	cout << "it takes " << tempTime << "milliseconds to allocate 100000 array slots" << endl;
	measureA(f, 6);
	cout << "it takes " << tempTime << "milliseconds to allocate 1000000 array slots" << endl;
	measureA(g, 7);
	cout << "it takes " << tempTime << "milliseconds to allocate 10000000 array slots" << endl;
	measureA(h, 8);
	cout << "it takes " << tempTime << "milliseconds to allocate 100000000 array slots" << endl;
	measureA(i, 9);
	cout << "it takes " << tempTime << "milliseconds to allocate 1000000000 array slots" << endl;
	cout << endl;

	//removing memory
	delete[] a, b, c, d, e, f, g, h, i;
}