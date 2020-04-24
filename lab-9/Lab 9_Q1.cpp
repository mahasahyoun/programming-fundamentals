#include <iostream>

using namespace std;

int main()
{
	char marital_status;

	cout << "Please, enter the first letter of the marital status (M, S, D, W): ";
	cin >> marital_status;

	if (marital_status == 'M')
	{
		cout << "Married";
	}
	else
	{
		if (marital_status == 'S')
		{
			cout << "Single";
		}
		else
		{
			if (marital_status == 'D')
			{
				cout << "Divorced";
			}
			else
			{
				if (marital_status == 'W')
				{
					cout << "Widowed";
				}
				else
				{
					cout << "Invalid letter";
				}
			}
		}

	}

	return 0;

}

