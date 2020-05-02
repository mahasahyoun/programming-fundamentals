#include<iostream>
using namespace std;

/*
------------------------
Original code (if-else)
------------------------
*/
/*
void main()
{
	cout << "Enter int: ";
	int number;
	cin >> number;

	if (number == 1 || number == 2 || number == 3)
	{
		cout << "Your number was 1, 2, or 3." << endl;
	}
	else if (number == 4 || number == 5 || number == 6)
	{
		cout << "Your number was 4, 5, or 6." << endl;
	}
	else
	{
		cout << "Your number was above 6." << endl;
	}
}
*/


/*
------------------------
Converted code (switch)
------------------------
*/
void main()
{
	cout << "Enter int: ";
	int number;
	cin >> number;

	switch (number)
	{
		case 1:
		case 2:
		case 3: cout << "Your number was 1, 2, or 3." << endl; 
			break;
		case 4:
		case 5:
		case 6: cout << "Your number was 4, 5, or 6." << endl; 
			break;
		default: cout << "Your number was above 6." << endl; 
	}
}
