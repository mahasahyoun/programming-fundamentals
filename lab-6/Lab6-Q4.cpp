#include <iostream>

using namespace std;

void main()
{
    int n, d1, d2, d3, d4;

	cout << "Enter a four-digit positive integer: ";
	cin >> n;

	d4 = n % 10;
	n = n / 10;	
	d3 = n % 10;
	n = n / 10; 
	d2 = n % 10;
	n = n / 10; 
	d1 = n % 10;     

	cout << d1 << endl << d2 << endl << d3 << endl << d4 << endl;
}




// algorithm testing:
/*
	1234
	1234 % 10 = 4
	d4 = 4

	1234 / 10 = 123
	123
	123 % 10 = 3
	d3 = 3

	123 / 10 = 12
	12
	12 % 10 = 2
	d2 = 2

	12 / 10 = 1
	1
	1 % 10 = 1
	d1 = 1
*/




