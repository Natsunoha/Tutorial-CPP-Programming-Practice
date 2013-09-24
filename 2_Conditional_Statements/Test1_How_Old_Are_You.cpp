/*
 * C++ Programming Practice
 * Repo: https://github.com/Moosader/Tutorial-CPP-Programming-Practice
 * Webpage: http://www.moosader.com/
 * Rachel J. Morris
 * */

using namespace std;

int main()
{
	int birthYear;
	int currentYear = 2012; // lazy
	
	cout << "What year were you born? ";
	cin >> birthYear;
	
	int age = currentYear - birthYear;
	
	string response;
	if ( age >= 21 )
		response = "Hey, you're old!  Have a beer!";
	else if ( age >= 18 )
		response = "Not quite 21 yet, but you want vote! Woo!";
	else if ( age >= 16 )
		response = "Not quite an adult yet, but hey, you can drive a car!";
	else
		response = "You can't drink, vote, or drive, but you should enjoy being a kid. ENJOY IT!!!";
		
	cout << response << endl;
	
	return 0;
}
