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
