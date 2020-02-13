/*
James Davis
February 11th
CS202 
Lab 5 - l5_main.cpp  ----- *l as in L
This program will read binary files
*/

#include <fstream>
using std::ifstream;
using std::ofstream;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::getline;
using std::string;
#include <sstream>
using std::stringstream;

int translate(string num) //Translates binary into base-10
{
	int number = 0;
	stringstream convert;
	int t;

	int use = 0;

	for (int i = 5; i >= 0; i--)
	{
		convert << num[use];
		convert >> t;

		number += t * (2 ^ i); //Adds binary digit to number

		use++;
	}

	return number;
}

int main()
{
	ifstream ifs("data.dat");
	string s;

	int sum = 0;
	int count = 0;
	int avg;
	int temp;

	for (int i = 0; i < 10; i++) //UPDATE
	{
		getline(ifs, s);
		temp = translate(s); //translates 's' into 10 bit, then gives value to temp

		sum += temp;
		count++;
	}

	avg = sum / count;

	cout << "The number of numbers is: " << count << endl;
	cout << "The sum of those numbers it: " << sum << endl;
	cout << "The Average value of the numbers is: " << avg << endl;
}