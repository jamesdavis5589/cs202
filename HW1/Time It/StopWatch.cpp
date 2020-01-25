/*
James Davis
January 15th, 2020
CS202
HW1 - Time It - StopWatch.cpp
This program will define class Stopwatch
*/

#include "StopWatch.h"

StopWatch::StopWatch() :
	_time(milliseconds{ 0 })
{}

void StopWatch::start()
{
	_start = system_clock::now();
}

milliseconds StopWatch::stop()
{
	_end = system_clock::now();

	auto ans = duration_cast<milliseconds>( _end - _start ).count();
	_time = milliseconds{ ans };
	return milliseconds{ ans };
}

seconds StopWatch::timeS()
{
	return seconds{ duration_cast<seconds>(_end - _start).count() };
}

milliseconds StopWatch::timeM()
{
	return _time;
}