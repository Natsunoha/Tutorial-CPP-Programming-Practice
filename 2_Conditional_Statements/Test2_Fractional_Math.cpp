/*
 * Game Programming: Prerequisite Tests
 * Assignment 2, Test 2
 
Write a fraction math program. Have the user input:

    Fraction 1's Numerator
    Fraction 1's Denominator
    Fraction 2's Numerator
    Fraction 2's Denominator

Then, ask them what kind of operation to do: Add, subtract, multiply, or divide.

Use a conditional, and based on what operation they choose, do the appropriate math and print the answer.
 
 * I had intended for these assignments to only include concepts from this assignment
 * and all previous, but not future ones (ie, not classes in the "Conditional Statements" test)
 * 
 * Rachel J. Morris, 2012
 * http://www.moosader.com/resources/tutorials/game-programming-prerequisite-test/1
 * */

#include <iostream>
using namespace std;

int main()
{
	int n1, d1;
	int n2, d2;
	
	int opChoice;
	
	cout << "FRACTION 1" << endl;
	cout << "Enter numerator: ";
	cin >> n1;
	cout << "Enter denominator: ";
	cin >> d1;
	cout << endl << "FRACTION 2" << endl;
	cout << "Enter numerator: ";
	cin >> n2;
	cout << "Enter denominator: ";
	cin >> d2;
	
	cout << endl << "MATH!" << endl;
	cout << "Choose an operation to do!" << endl << endl;
	
	cout << "CHOICE 1: ADDITION" << endl;
	cout << n1 << "\t \t" << n2 << endl;
	cout << "---\t + \t---" << endl;
	cout << d1 << "\t \t" << d2 << endl << endl;
	
	cout << "CHOICE 2: SUBTRACTION" << endl;
	cout << n1 << "\t \t" << n2 << endl;
	cout << "---\t - \t---" << endl;
	cout << d1 << "\t \t" << d2 << endl << endl;
	
	cout << "CHOICE 3: MULTIPLICATION" << endl;
	cout << n1 << "\t \t" << n2 << endl;
	cout << "---\t * \t---" << endl;
	cout << d1 << "\t \t" << d2 << endl << endl;
	
	cout << "CHOICE 4: DIVISION" << endl;
	cout << n1 << "\t \t" << n2 << endl;
	cout << "---\t \ \t---" << endl;
	cout << d1 << "\t \t" << d2 << endl << endl;
	
	cout << "Choose an operation (1, 2, 3, 4): ";
	cin >> opChoice;
	
	int answerNume, answerDenom;
	
	if ( opChoice == 1 )
	{
		// Addition
		// Get common-denominator (lazy method)
		n1 = n1 * d2;
		n2 = n2 * d1;
		d1 = d1 * d2;
		d2 = d1;
		// Add fractions (screw reducing the fraction)
		answerNume = n1 + n2;
		answerDenom = d1;
	}
	else if ( opChoice == 2 )
	{
		// Subtraction
		// Get common-denominator (lazy method)
		n1 = n1 * d2;
		n2 = n2 * d1;
		d1 = d1 * d2;
		d2 = d1;
		// Subtract fractions (screw reducing the fraction)
		answerNume = n1 - n2;
		answerDenom = d1;
	}
	else if ( opChoice == 3 )
	{
		// Multiplication
		answerNume = n1 * n2;
		answerDenom = d1 * d2;
	}
	else
	{
		// Division
		answerNume = n1 * d2;
		answerDenom = d1 * n2;
	}
	
	cout << "THE RESULT IS..." << endl;
	cout << answerNume << endl;
	cout << "---" << endl;
	cout << answerDenom << endl;
	
	
	return 0;
}

