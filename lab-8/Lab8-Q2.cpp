#include <iostream>

using namespace std;

int main()
{
	int number;
	cout << "Please, enter an integer number: ";
	cin >> number;

	if (number % 2 == 0)
		cout << "Even" << endl;
	else
		cout << "Odd" << endl;

	return 0;
}