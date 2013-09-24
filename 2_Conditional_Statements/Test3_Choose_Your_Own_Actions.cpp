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
	int choice; 
	
	cout << "You are a college student at UMKC, and you're hungry." << endl;
	cout << "You can choose to either get lunch at Subway or Einstein Bagels." << endl;
	
	cout << "What will you do?" << endl;
	cout << "1. Subway" << endl;
	cout << "2. Einstein Bagels" << endl;
	
	cout << ">> ";
	cin >> choice;
	cout << endl;
	
	// This is a really ugly way to make this sort of game,
	// but since this is only testing conditionals, this is what I'm expecting...
	// (Hopefully you will also learn that this is tedious as hell!)
	
	if ( choice == 1 ) // Subway
	{
		cout << "You get a sandwich from Subway.  Coming downhill was very easy," << endl;
		cout << "but now you have to scale many many stairs to get back to class." << endl << endl;
		cout << "You finally get back to the Quad, but you're 10 minutes late for Numerical Analysis." << endl;
		
		cout << "What will you do?" << endl;
		cout << "1. Skip class and eat outside" << endl;
		cout << "2. Enter class and eat there" << endl;
		
		cout << ">> ";
		cin >> choice;
		cout << endl;
		if ( choice == 1 ) // Skip class
		{
			cout << "You skip class, hoping you can make up for it later." << endl;
			cout << "Hungry and happy, you stroll the hallway just outside the classroom as class ends," << endl;
			cout << "Hopefully you can find someone to copy notes off of." << endl << endl;
			cout << "A bunch of students exit the classroom once class is over..." << endl;
			
			cout << "What will you do?" << endl;
			cout << "1. Ask guy with glasses for help" << endl;
			cout << "2. Ask cute girl for help" << endl;
			
			cout << ">> ";
			cin >> choice;
			cout << endl;
			
			if ( choice == 1 ) // Guy
			{
				cout << "You ask the nerdy-looking guy for help, and he lets you copy his notes." << endl;
				cout << "Studying off the notes later, you don't realize that it's completely wrong until after the test." << endl;
				cout << "You fail the test and your class grade slips below a \"C\" and you fail this semester." << endl;
			}
			else if ( choice == 2 ) // Girl
			{
				cout << "You ask the girl for help, and she photocopies her notes for you." << endl;
				cout << "Once you're home studying, her notes help you understand Newton's Method." << endl;
				cout << "You get a \"B\" on the test, and have an easier time in the class." << endl;
				cout << "You end up passing." << endl;
			}
		}
		else if ( choice == 2 ) // Eat in class
		{
			cout << "You enter the class room as quietly as possible, but everyone stares at you." << endl;
			cout << "You slouch over and make your way to a desk in the back and unwrap your sandwich." << endl;
			cout << "The Subway bag and wrapping paper make loud crunching noises, as the teacher talks about Newton's Method." << endl << endl;
			cout << "The teacher comes to your seat and tells you to leave class to eat, or throw the sandwich away." << endl;
			
			cout << "What will you do?" << endl;
			cout << "1. Leave class" << endl;
			cout << "2. Throw away sandwich" << endl;
			
			cout << ">> ";
			cin >> choice;
			cout << endl;
			
			if ( choice == 1 )	// Leave class to eat
			{
				cout << "You leave class and eat your sandwich defiantly right outside the classroom, sitting on the floor" << endl;
				cout << "You end up missing the entire discussion on Newton's Method," << endl;
				cout << "and upon review later, the text book is too confusing to follow." << endl;
				cout << "You end up failing Numerical Analysis and have to take it again next semester." << endl;
			}
			else if ( choice == 2 ) // Throw away sandwich
			{
				cout << "You throw away your sandwich, weeping a little inside." << endl;
				cout << "Your stomach rumbles as you try to pay attention to class," << endl;
				cout << "but you are too forlorn from the wasted money, and intense hunger." << endl << endl;
				cout << "Your notes end up only saying \"Foodfoodfoodfood...\"," << endl;
				cout << "and you don't remember anything about Newton's Method.  Nothing in the book seems clear." << endl;
				cout << "You get a D on the test on Newton's Method, but it is enough to let you pass your final." << endl;
			}
		}
	}
	else if ( choice == 2 ) // Einstein Bagels
	{
		// CAN'T TAKE THE NESTED IF STATEMENTS ANYMORE!!
		cout << "You ate at Einstein Bagels, but unfortunately a case of the Bubonic Plague broke out just then." << endl;
		cout << "You died. Should have eaten elseware!" << endl;
	}
	
	cout << "The End" << endl;

    return 0;
}
