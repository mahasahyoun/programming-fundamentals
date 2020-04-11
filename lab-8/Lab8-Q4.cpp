#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a, b, c, s, area;

	cout << "Please enter 3 floating numbers: " << endl;
	cin >> a >> b >> c;

	if ((a + b > c) && (b + c > a) && (a + c > b))
	{
		s = (a + b + c) / 2;
		area = sqrt (s * (s - a) * (s - b) * (s - c));
		cout << "Area = " << area;
	}
	else
	{
		cout << "Conditions not satisfied";
	}
	
	return 0;
}
