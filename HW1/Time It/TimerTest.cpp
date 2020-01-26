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

void allocate(int* x, int s)
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

	//Filling arrays with random values
	allocate(a, 1);
	allocate(b, 2);
	allocate(c, 3);
	allocate(d, 4);
	allocate(e, 5);
	allocate(f, 6);
	allocate(g, 7);
	allocate(h, 8);
	allocate(i, 9);


	//removing memory
	delete[] a, b, c, d, e, f, g, h, i;
}