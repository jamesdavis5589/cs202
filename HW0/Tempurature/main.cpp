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

//(0°C × 9/5) + 32 = 32°F

//Farenheit to Celsius
double cpp_ftoc(const char* str)
{
	stringstream ss;
	double x;

	ss << str;
	ss >> x;

	return x-32/(9/5)
}

//Celsius to Farenheit
double c_ctof(const char* str)
{
	int x = strtod(str, nullptr);

	return x*(9/5)+32
}

int main(int argc, char* argv[])
{

}