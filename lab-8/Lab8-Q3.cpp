#include <iostream>

using namespace std;

int main()
{
	float H, W, area;

	cout << "Enter the height of quadrangle shape: ";
	cin >> H;
	
	cout << "Enter the width of quadrangle shape: ";
	cin >> W;
	
	area = H * W;

	if (H == W)
	{
		cout << "Square";
	}
	else
	{
		cout << "Rectangle";		
	}
	
	cout << endl << "Area = " << area << endl;

	return 0;
}
