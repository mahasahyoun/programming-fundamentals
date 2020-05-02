#include<iostream>

using namespace std;

int main ()
{
	char marital_status;

	cout << "Please, enter the first letter of the marital status (M, S, D, W): ";

	cin >> marital_status;

	// Assumption: 
	// The user can make a mistake and enter a lower case character
	switch (marital_status)
	{
		case'M': 
		case'm': cout << "Married" << endl; 
			break;
		case'S':
		case's': cout << "Single" << endl; 
			break;
		case'D':
		case'd': cout << "Divorced" << endl;
			break;
		case'W':
		case'w': cout << "Widow" << endl; 
			break;
		default: cout << "Invalid character" << endl;
	}

	return 0;
}