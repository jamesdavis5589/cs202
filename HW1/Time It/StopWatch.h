/*
James Davis
January 15th, 2020
CS202
HW1 - Time It - StopWatch.h
This program will house prototypes for class StopWatch
*/

#ifndef StopWatch_h
#define StopWatch_h

class StopWatch
{
	double _time;

public:
	StopWatch();

	void start();
	double stop();

	double timeS(); //Seconds
	double timeM(); //Milliseconds
};

#endif