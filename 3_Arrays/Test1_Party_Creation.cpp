/*
 * Game Programming: Prerequisite Tests
 * Assignment 3, Test 1
 
Write a program where it tells you that you get a party of 4 RPG characters (not letters :P). Characters will have:

    A name (entered by user) - string
    A class (chosen by user) - string
    A Strength rating (calculated from class) - number

For all 4 characters:

    Get the character's name from the User.
    Display a list of classes and have the User select a class.
    Based on the class chosen, give this user an arbitrary Strength amount.

After the user is done setting up the party, output every member's Name, Class, and Strength in a nice list.

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
	// If this were a later test, I'd use classes here.
	string playerName[4];
	string playerClass[4];
	int playerStrength[4];
	
	// Enter user data
	for ( int index = 0; index < 4; index++ )
	{
		// This could be written cleaner :)
		cout << endl;
		cout << "Character " << (index+1) << " Setup" << endl;
		cout << "Name: ";
		cin >> playerName[index];
		cout << endl;
		cout << "Choose a class:" << endl;
		cout << "1. Warrior" << endl;
		cout << "2. Archer" << endl;
		cout << "3. Mage" << endl;
		int choice;
		cin >> choice;
		
		switch( choice )
		{
			case 1:
				playerClass[index] = "Warrior";
				playerStrength[index] = 20;
			break;
			
			case 2:
				playerClass[index] = "Archer";
				playerStrength[index] = 10;
			break;
			
			case 3:
				playerClass[index] = "Mage";
				playerStrength[index] = 5;
			break;
		}
	}
	
	cout << "--------------------------------------------------" << endl;
	cout << "YOUR PARTY:" << endl << endl;
	
	// Display all party stats:
	for ( int index = 0; index < 4; index++ )
	{
		cout << endl;
		cout << "Player " << (index + 1) << endl;
		cout << "Name: " << playerName[index] << endl;
		cout << "Class: " << playerClass[index] << endl;
		cout << "Strength: " << playerStrength[index] << endl;
	}
	
	cout << endl << endl << "END" << endl;	
	
	return 0;
}
