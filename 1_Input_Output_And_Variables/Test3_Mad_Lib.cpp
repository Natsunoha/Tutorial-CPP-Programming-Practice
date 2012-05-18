/*
 * Game Programming: Prerequisite Tests
 * Assignment 1, Test 3
 * Write a mad lib in C++. Take your short story from Test 1 and remove some of the nouns, verbs, and adjectives. Ask the user to enter a series of corresponding nouns, verbs, and adjectives, and after they're done entering their answers, print out the story again, but insert the nouns, verbs, and adjectives back into the story to make something crazy.
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
	string name1, name2;
	string mood;
	string location;	
	string animal1, animal2;
	string verb1, verb2, verb3, verb4;
	
	cout << "Enter a name: ";
	cin >> name1;
	cout << "Enter another name: ";
	cin >> name2;
	cout << "Enter a mood: ";
	cin >> mood;
	cout << "Enter a location: ";
	cin >> location;
	cout << "Enter an animal: ";
	cin >> animal1;
	cout << "Enter a verb, past-tense: ";
	cin >> verb1;
	cout << "Enter a verb, past-tense: ";
	cin >> verb2;
	cout << "Enter a verb, past-tense: ";
	cin >> verb3;
	cout << "Enter a verb, ending in \"ily\": ";
	cin >> verb4;
	cout << "Enter another animal: ";
	cin >> animal2;
	
	cout << "\n\nI HAVE A FEW QUESTIONS!!" << endl;
	
	cout << "------------------------------------------------------" << endl;
	
	cout << "\n\nMy Story!" << endl << endl;
	
	cout << "\t There was once a " << animal1 << " named " << name1 << "." << endl;
	cout << name1 << " was the best " << animal1 << " ever.  He " << verb1 << " and " << verb2 << " and " << verb3 << " all day!" << endl;
	cout << name1 << " loved his toy " << animal2 << ", " << name2 << "." << endl << endl;
	
	cout << "\t One day, " << name1 << " fell down a cliff and landed in " << location << "." << endl;
	cout << "His best toy friend " << name2 << " mourned " << name1 << " all week." << endl;
	cout << "But when " << name1 << " came back, " << name2 << " was " << mood << "!" << endl << endl;
	
	cout << "\t Turns out, " << name1 << " was actually a figment of " << name2 << " imagination!" << endl;
	cout << "" << name1 << " and " << name2 << " lived " << verb4 << " ever after!" << endl;
	
	return 0;
}
