/*
 * Game Programming: Prerequisite Tests
 * Assignment 3, Test 3
 
This is an extention of Test 2, but instead of having the user input the index, let them enter"

    North
    South
    East
    West

Which will move the User to an adjacent map, if one exists.

Since you will have a fixed width/height, you can navigate through the maps by using basic math to figure out a neighbor index:

0 1 2
3 4 5

 * 
 * I had intended for these assignments to only include concepts from this assignment
 * and all previous, but not future ones (ie, not classes in the "Conditional Statements" test)
 * 
 * Rachel J. Morris, 2012
 * http://www.moosader.com/resources/tutorials/game-programming-prerequisite-test/1
 * */

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	// Functions would be REALLY HANDY HERE!!
	// But this test doesn't cover Functions. :)

	// Allocate memory
	string* mapName;
	string* mapDescription;
	
	mapName = new string[6];
	mapDescription = new string[6];
	
	// Setup maps
	mapName[0] = "Deep Forest";
	mapName[1] = "Edge of the Forest";
	mapName[2] = "Grassy Field";
	mapName[3] = "Forest Clearing Village";
	mapName[4] = "Cave Opening";
	mapName[5] = "Shimmering Lake";
	
	mapDescription[0] = "You are standing in a thick forest.\nSunlight bleeds through the trees from the East.\nThere is noise coming from the South.";
	mapDescription[1] = "You are standing at the edge of the forest.\nThe forest lies to the West.\nTo the East is an empty field.\nTo the South is a rocky structure.";
	mapDescription[2] = "You are standing in a grassy field, sparcely populated with bushes and flowers.\nTo the West you see a forest.\nTo the South is a lake.";
	mapDescription[3] = "You are standing in a small village in the forest's clearing.\nTo the North is more forest.\nTo the East is a rocky structure.";
	mapDescription[4] = "You are standing next to a cave.\nTo the North is the edge of the forest.\nTo the East is a lake.\nTo the West is a village.";
	mapDescription[5] = "You are standing next to a shimmering lake.\nTo the North is a field.\nTo the West is a cave.";
	
	// Main loop
	bool done = false;
	int currentMap = 1;
	string choice;
	
	while( !done )
	{
		// Print current map stuff
		system( "clear" ); // Use "cls" in Windows. Syscalls aren't a good thing to use :P
		cout << "-----------------------------------------" << endl;
		cout << mapName[currentMap] << endl;
		cout << mapDescription[currentMap] << endl;
		cout << "-----------------------------------------" << endl;
		
		// Draw a map!
		cout << "MAP" << endl;
		
		cout << "-------" << endl;
		cout << "|";
		for ( int i = 0; i < 6; i++ )
		{
			if ( i == 3 ) 
			{
				cout << endl;
				cout << "|";
			}
			
			if ( i == currentMap )
			{
				cout << "X|";
			}
			else 
			{
				cout << " |";
			}
		}
		cout << endl << "-------" << endl;
		cout << "-----------------------------------------" << endl;
		
		
		// Get user input
		cout << "Where do you want to go?" << endl;
		cout << "(N, S, E, W) or EXIT to quit" << endl;
		cin >> choice;
		
		if ( choice == "EXIT" || choice == "exit" ) 
		{
			done = true;
		}
		else if ( choice == "N" || choice == "n" )
		{
			if ( currentMap > 2 ) 
			{
				currentMap = currentMap - 3;
			}
			else
			{
				cout << "Cannot go north!" << endl;
			}
		}
		else if ( choice == "S" || choice == "s" )
		{
			if ( currentMap <= 2 ) 
			{
				currentMap = currentMap + 3;
			}
			else
			{
				cout << "Cannot go south!" << endl;
			}
		}
		else if ( choice == "E" || choice == "e" )
		{
			if ( currentMap != 2 && currentMap != 5 )
			{
				currentMap = currentMap + 1;
			}
			else
			{
				cout << "Cannot go east!" << endl;
			}
		}
		else if ( choice == "W" || choice == "w" )
		{
			if ( currentMap != 0 && currentMap != 3 )
			{
				currentMap = currentMap - 1;
			}
			else
			{
				cout << "Cannot go west!" << endl;
			}
		}
	}
	
	// Clear memory
	delete [] mapName;
	delete [] mapDescription;
	
	return 0;
}
