/*
 * Game Programming: Prerequisite Tests
 * Assignment 2, Test 1
 
 Write a program that asks the user for their birth-year. From that, it approximates their age by comparing it to the current year.

    If the user is older than 21, then print a statement that you give them a beer.
    If they're younger than 21 but equal then or older than 18, then print a statement about how they can vote or enter the military.
    If they're younger than 18 but equal to or older than 16, then print a statement about how they can drive now.
    If they're under 16, then print that they don't get any perks... besides, y'know, being a kid.
 * 
 * I had intended for these assignments to only include concepts from this assignment
 * and all previous, but not future ones (ie, not classes in the "Conditional Statements" test)
 * 
 * Rachel J. Morris, 2012
 * http://www.moosader.com/resources/tutorials/game-programming-prerequisite-test/1
 * */

#include <iostream>
using namespace std;

int main()
{
	int birthYear;
	int currentYear = 2012; // lazy
	
	cout << "What year were you born? ";
	cin >> birthYear;
	
	int age = currentYear - birthYear;
	
	string response;
	if ( age >= 21 )
		response = "Hey, you're old!  Have a beer!";
	else if ( age >= 18 )
		response = "Not quite 21 yet, but you want vote! Woo!";
	else if ( age >= 16 )
		response = "Not quite an adult yet, but hey, you can drive a car!";
	else
		response = "You can drink, vote, or drive, but you should enjoy being a kid. ENJOY IT!!!";
		
	cout << response << endl;
	
	return 0;
}
