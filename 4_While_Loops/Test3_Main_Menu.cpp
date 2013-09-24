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
	
	float balance = 100;
	
	do
	{
		cout << "MAIN MENU" << endl;
		cout << "1. Get balance" << endl;
		cout << "2. Deposit funds" << endl;
		cout << "3. Withdraw funds" << endl;
		cout << "4. Exit" << endl;
		
		int choice;
		cin >> choice;
		
		if ( choice < 1 || choice > 4 )
		{
			cout << "Invalid option, try again: ";
		}
		else if ( choice == 1 )
		{
			cout << "Your balance is $" << balance << endl;
		}
		else if ( choice == 2 )
		{
			cout << "How much to deposit? $";
			float amount;
			cin >> amount;
			balance += amount;
			cout << "Deposited $" << amount << endl;
		}
		else if ( choice == 3 )
		{
			cout << "How much to withdraw? $";
			float amount;
			cin >> amount;
			
			if ( balance - amount < 0 ) 
			{
				cout << "Cannot withdraw; would leave overdrawn!" << endl;
			}
			else
			{
				balance -= amount;
			}
		}
		else if ( choice == 4 )
		{
			done = true;
		}
		
	} while ( !done );	
	
	return 0;
}
