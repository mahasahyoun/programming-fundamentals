#include <iostream>

using namespace std;

void main()
{
	int seconds, minutes, hours;

	cout << "Enter time in second: ";
	cin >> seconds;

	minutes = seconds / 60;
	seconds = seconds % 60;
	hours = minutes / 60;
	minutes = minutes % 60;

	cout << "" << hours << ":" << "" << minutes << ":" << "" << seconds << endl;
}