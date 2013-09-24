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
	int number1, number2;
	
	cout << "Enter two numbers, separated by a space: ";
	cin >> number1 >> number2;
	
	cout << number1 << " + " << number2 << " = " << ( number1 + number2 ) << endl;
	cout << number1 << " - " << number2 << " = " << ( number1 - number2 ) << endl;
	cout << number1 << " * " << number2 << " = " << ( number1 * number2 ) << endl;
	cout << number1 << " / " << number2 << " = " << ( number1 / number2 ) << endl;
	
	return 0;
}
