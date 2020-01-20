/*
James Davis
January 19th, 2020
CS202
HW0 - Temperature - main.cpp
This program will convert between Celsius and Farenheit
*/

#include <stdlib.h>
#include <sstream>
using std::stringstream;
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

//(0°C × 9/5) + 32 = 32°F

//Farenheit to Celsius
double cpp_ftoc(const char* str)
{
	stringstream ss;
	double x;

	ss << str;
	ss >> x;

	return x - 32 / (9 / 5);
}

//Celsius to Farenheit
double c_ctof(const char* str)
{
	double x = strtod(str, nullptr);

	return x * (9.0 / 5.0) + 32.0;
}

int main(int argc, char* argv[])
{
	vector<string> args;
	for (int i; i < argc; i++)
	{
		args.push_back(argv[i]);
	}

	for (const auto& arg : args)
	{
		if (argc >= 2 && args[1] == std::string("--ftoc"))
		{
			cpp_ftoc(argv[argc]);
		}

		if (argc >= 2 && args[1] == std::string("--ctof"))
		{
			c_ctof(argv[argc]);
		}
	}
}