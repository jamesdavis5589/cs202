/*
James Davis
January 15th, 2020
CS202
HW1 - Time It - StopWatch.h
This program will house prototypes for class StopWatch
*/

#ifndef StopWatch_h
#define StopWatch_h

#include <chrono>
using std::chrono::system_clock;
using std::chrono::time_point;
using std::chrono::duration_cast;

using std::chrono::milliseconds;
using std::chrono::seconds;

class StopWatch
{
	milliseconds _time;
	time_point<system_clock> _start;
	time_point<system_clock> _end;

public:
	StopWatch();

	void start();
	milliseconds stop();

	seconds timeS();
	milliseconds timeM();
};

#endif