/*
James Davis
February 4th
CS202
Lab 4 - lab4_main.cpp
This program will test out streams
*/

#include <sstream>
using std::ostringstream;
using std::istringstream;
#include <fstream>
using std::ifstream;
using std::ofstream;
#include <iostream>
using std::endl;
#include <string>
using std::string;
using std::getline;

int main()
{
	ifstream ifs("text.txt");
	ofstream ofs("output.txt");

	istringstream iss;
	ostringstream oss;

	oss << "Displaying contents of file text.txt:" << endl;
	string s;
	getline(ifs, s);
	oss << s;
	oss << endl;

	int x;

	oss << "Now, enter a string, then afterwards enter how many times you want it repeated" << endl;
	oss << "String: ";
	iss >> s;
	oss << endl;
	oss << "Int: ";
	iss >> x;
	oss << "\n\n";

	for (int i = 0; i < x; i++)
	{
		oss << s << endl;
	}
}