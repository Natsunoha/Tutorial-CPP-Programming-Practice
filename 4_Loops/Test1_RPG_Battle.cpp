/*
 * Game Programming: Prerequisite Tests
 * Assignment 4, Test 1
 
Tell the user that they've encountered a monster. The monster has 100 health.

Create an array of strings that stores character class names. Use a for loop to iterate through the class array and output all of the options.

Let the user choose a class name. Each class should have a different strength. With an if statement, set the user's strength rating- some strengths are above 100 and some are below.

With a while loop, continue doing the following while the monster's health is greater than 0:

    Output the monster's health
    Display "You hit the monster for [user's strength rating] damage!"
    Subtract the strength rating amount from the monster's health

When the monster's health is equal to or less than 0, display a victory message.

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
	int baddieHP = 100;
	int playerHP = 100;
	
	int baddieStr = 5;
	int playerStr;
	
	cout << "Choose a class:" << endl;
	cout << "1. Warrior" << endl;
	cout << "2. Archer" << endl;
	
	int choice;
	cin >> choice;
	while ( choice != 1 && choice != 2 )
	{
		cout << "Invalid class, try again." << endl;
		cin >> choice;
	}
	
	if ( choice == 1 )
	{
		playerStr = 20;
	}
	else if ( choice == 2 )
	{
		playerStr = 10;
	}
	
	cout << endl << "You have encountered a monster!" << endl;
	int turn = 0;
	while ( baddieHP > 0 )
	{
		cout << endl << "Turn " << ++turn << endl;
		
		baddieHP -= playerStr;
		cout << "You attack the monster for " << playerStr << " damage!" << endl;
		playerHP -= baddieStr;
		cout << "The monster hits you for " << baddieStr << " damage!" << endl;
		cout << "Monster HP: " << baddieHP << ", Player HP: " << playerHP << endl << endl;
	}
	
	cout << "You won the battle!" << endl;
	
	return 0;
}
