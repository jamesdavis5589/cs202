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

int main()
{
	int* a = new int[10];
	int* b = new int[100];
	int* c = new int[1000]; //1K
	int* d = new int[10000];
	int* e = new int[100000];
	int* f = new int[1000000]; //1M
	int* g = new int[10000000];
	int* h = new int[100000000];
	int* i = new int[1000000000]; //1B



	delete[] a, b, c, d, e, f, g, h, i;
}