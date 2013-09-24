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
