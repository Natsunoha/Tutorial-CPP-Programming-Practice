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
	// Create dynamic string arrays & allocate space
	string* mapName;
	string* mapDescription;
	
	mapName = new string[3];
	mapDescription = new string[3];
	
	// Set up maps
	mapName[0] = "Clearing";
	mapDescription[0] = "You are standing in a clearing in a thick forest.\n  To the north is a beach.\n  To the south is more forest.";
	
	mapName[1] = "Volcano";
	mapDescription[1] = "You are standing next to an active volcano.\n  To the north is the Volcano's face.\n  To the west is a beach.";
	
	mapName[2] = "Beach";
	mapDescription[2] = "You are standing on a sandy beach.\n  To the west is a vast ocean.\n  To the south is a forest.";
	
	// Let user see maps
	bool done = false;
	int choice;
	while ( !done ) 
	{
		cout << endl;		
		cout << "Choose a map to look at: " << endl;
		for ( int i = 0; i < 3; i++ )
		{
			cout << i << ": " << mapName[i] << endl;
		}
		cout << "3: Quit" << endl;
		cin >> choice;
		
		// Verify valid index, or the program will crash if they choose something out-of-bounds
		while ( choice < 0 || choice > 3 )
		{
			cout << "Invalid map #. Choose one between 0 and 2." << endl;
			cin >> choice;
		}
		
		if ( choice == 3 )
		{
			done = true;
		}
		else 
		{
			// Display map info
			cout << endl << endl;
			cout << mapName[choice] << endl;
			cout << "---------------------------------" << endl;
			cout << mapDescription[choice] << endl;
		}
	}
	
	// Release stored memory
	delete [] mapName;
	delete [] mapDescription;
	
	return 0;
}
