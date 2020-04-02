#include <iostream>

using namespace std;

void main()
{
	float volume, length, width, depth;

	cout << "Please enter the values of the following: " << endl;

	cout << "Length: ";
	cin >> length;

	cout << "Width: " ;
	cin >> width;

	cout << "Depth: ";
	cin >> depth;
	 
	cout << endl;

	volume = (length * width * depth);

	cout << "The volume of the swimming pool: " << volume << endl;
}