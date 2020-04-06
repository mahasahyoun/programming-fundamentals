#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "Please enter an integer number: ";
	cin >> num;

	if (num >= 0)
		cout << "Positive" << endl;

	if (num < 0)
		cout << "Negative" << endl;

	return 0;
}