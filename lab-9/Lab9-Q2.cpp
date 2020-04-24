#include <iostream>

using namespace std;

/*
a b c
a c b

b a c
b c a

c a b
c b a
*/

int main() {

	float a, b, c;

	cout << "Please, enter 3 numbers to sort in ascending order: " << endl;

	cin >> a >> b >> c;

	// Start with a
	if ((a < b) && (a < c))
	{
		if (b < c)
		{
			cout << a << ", " << b << ", " << c;
		}
		else
		{
			cout << a << ", " << c << ", " << b;
		}
	}

	// Start with b
	if ((b < a) && (b < c))
	{
		if (a < c)
		{
			cout << b << ", " << a << ", " << c;
		}
		else
		{
			cout << b << ", " << c << ", " << a;
		}
	}

	// Start with c
	if ((c < a) && (c < b))
	{
		if (a < b)
		{
			cout << c << ", " << a << ", " << b;
		}
		else
		{
			cout << c << ", " << b << ", " << a;
		}
	}

	return 0;
}
