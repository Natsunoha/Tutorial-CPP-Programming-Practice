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
	bool done = false;
	int number;
	int sum = 0;
	
	cout << "Enter a number to start at: ";
	cin >> number;
	
	while ( number > 0 )
	{
		sum += number;
		
		number--;
	}
	
	cout << "Final sum: " << sum << endl;
	
	return 0;
}
