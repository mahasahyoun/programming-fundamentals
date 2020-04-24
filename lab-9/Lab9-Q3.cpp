#include <iostream>
#include <cmath>

using namespace std; 

int main()
{
	float x, z;

	cout << "Please, enter a numeric value of x: "<<  endl;
	cin >> x;

	if (x > 0)
	{
		z = pow (x, 2);
	}
	else
	{
		if (x < 0)
		{
			z = pow(x, 3);
		}
		else
		{
			if (x == 0)
			{
				z = 0;
			}
		}
	}

	cout << "The value of Z: " << z;

	return 0;
}
