/*
 * C++ Programming Practice
 * Repo: https://github.com/Moosader/Tutorial-CPP-Programming-Practice
 * Webpage: http://www.moosader.com/
 * Rachel J. Morris
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
