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
	cout << endl << endl;
	
	string name;
	int age;
	float cash;
	
	cout << "Why hello there!" << endl;
	cout << "What is your name?" << endl;
	
	cout << ">> ";
	cin >> name;
	
	cout << "How old are you?" << endl;
	
	cout << ">> ";
	cin >> age;
	
	cout << "How much cash have you got?" << endl;
	
	cout << ">> $";
	cin >> cash;
	
	cout << endl << endl << "COOL!  So let's see..." << endl;
	cout << "You are " << name << ", a " << age << " year old with $" << cash << "!  Fancy!" << endl;
	
	return 0;
}

