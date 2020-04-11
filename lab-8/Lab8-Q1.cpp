#include <iostream>

using namespace std;

int main()
{
	int mark;

	cout << "Please, enter a student's mark: ";
	cin >> mark;

	if (mark >= 50)
		cout << "Success" << endl;
	else
		cout << "Fail" << endl;
	
	return 0;
}
