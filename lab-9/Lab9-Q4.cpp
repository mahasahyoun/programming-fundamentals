#include <iostream>

using namespace std;

int main()
{
	int mark;

	cout << "Please enter a student mark between 0 and 100: ";

	cin >> mark;

	if (mark < 0 || mark > 100)
	{
		cout << "Invalid "<< endl;
	}
	else
	{
		if (mark >= 90 && mark <= 100)
		{
			cout << "Excellent" << endl;
		}
		else
		{
			if (mark >= 80 && mark <= 89)
			{
				cout << "Very Good";
			}

			else
			{
				if (mark >= 70 && mark <= 79)
				{
					cout << "Good" << endl;
				}

				else
				{
					if (mark >= 50 && mark <= 69)
					{
						cout << "Accepted";
					}

					else
					{
						if (mark >= 0 && mark <= 49)
						{
							cout << "Failed";
						}
					}
				}
			}
		}
	}

	return 0;
}

