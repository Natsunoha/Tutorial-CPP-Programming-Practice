/*
 * Game Programming: Prerequisite Tests
 * Assignment 1, Test 2
 * Write a C++ program that asks the user for their name, age, and how much money they have. These should be string (or character array), int, and float. Output the data back to the user.
 * 
 * I had intended for these assignments to only include concepts from this assignment
 * and all previous, but not future ones (ie, not classes in the "Conditional Statements" test)
 * 
 * Rachel J. Morris, 2012
 * http://www.moosader.com/resources/tutorials/game-programming-prerequisite-test/1
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

