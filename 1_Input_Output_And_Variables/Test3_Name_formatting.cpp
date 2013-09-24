/*
 * C++ Programming Practice
 * Repo: https://github.com/Moosader/Tutorial-CPP-Programming-Practice
 * Webpage: http://www.moosader.com/
 * Rachel J. Morris
 * */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string firstname, lastname;
	cout << "What is your first name? ";
	cin >> firstname;
	
	cout << "What is your last name? ";
	cin >> lastname;
	
	cout << "Formatted: " << lastname << ", " << firstname << endl;
	
	return 0;
}
