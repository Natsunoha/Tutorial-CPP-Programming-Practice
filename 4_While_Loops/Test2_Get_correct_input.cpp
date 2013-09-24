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
	int age = -1;

	cout << "What is your age? ":
	cin >> age;
	
	while ( age < 0 || age > 150 )
	{
		cout << "Invalid age. What is your age? ";
		cin >> age;
	}
	
	cout << "I believe that you are " << age << endl;	
	
	return 0;
}
