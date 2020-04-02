#include<iostream>

using namespace std;

void main()
{
	float length, width, area;

	cout << "Please enter the value of the following: " << endl;
	cout << "Length of rectangle: ";
	cin >> length;

	cout << "Width of rectangle: ";
	cin >> width;

	area = (length * width);
	cout << endl << "The area of rectangle: " << area << endl;
}
