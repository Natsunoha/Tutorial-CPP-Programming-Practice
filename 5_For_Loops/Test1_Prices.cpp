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
    float prices[10];
    
    cout << "Please enter in the prices for each product" << endl;
    
    for ( int i = 0; i < 10; i++ )
    {
		cout << "Price of item " << i << ": $";
		cin >> prices[i];
	}
	
	cout << "The prices are as follows:" << endl;
	
	for ( int i = 0; i < 10; i++ )
	{
		cout << "Item " << i << ": $" << prices[i] << endl;
	}
}
