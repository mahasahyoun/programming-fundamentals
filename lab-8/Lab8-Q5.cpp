#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x, R;

	cout << "Please, enter a floating number: ";
	cin >> x;

	if (x > 0)
		R = pow(x, 2);
	else
		R = pow(x, 3);
	
	cout << "R = " << R << endl;
	
	return 0;
}
