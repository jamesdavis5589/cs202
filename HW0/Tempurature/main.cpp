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
	vector<char> temps; //{'0', '10', '25', '50', '100'}; <-- Didn't work for some reason...
	temps.push_back('0');
	temps.push_back('10');
	temps.push_back('25');
	temps.push_back('50');
	temps.push_back('100');

	cout << "Converting " << temps[0] << " degrees farenheit into celsius:" << endl;
	cout << cpp_ftoc(temps[0]) << endl;

	cout << "Converting " << temps[0] << " degrees celsius into farenheit:" << endl;
	cout << c_ctof(temps[0]) << endl;
}