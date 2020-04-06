#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "Please enter number to check it is even or odd: ";
	cin >> num;

	if (num % 2 == 0)
		cout << "Even number" << endl;

	if (num % 2 != 0)
		cout << "Odd number" << endl;

	return 0;
}
