/*
James Davis
February 17th
CS202
HW3 - Simple Tokenizer - tokenizer_main.cpp
This program will take user input, then write it into a file
*/

#include <fstream>
using std::ifstream;
using std::ofstream;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <sstream>
using std::getline;
#include <string>
using std::string;

int main()
{
	ofstream ofs("output.txt");

	cout << "Enter inputs to be written to the file" << endl;
	cout << "To end, enter \"stop\"" << endl;
	cout << endl;

	string s;

	for (int i = 0; i < 2; i++)
	{
		getline(cin, s);

		if (s == "stop")
		{
			break;
		}
		else
		{
			ofs << s << endl;
		}

		i--;
	}

	cout << endl;
}