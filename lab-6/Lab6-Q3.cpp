#include <iostream>

using namespace std;

void main()
{
	float n1, n2, n3, n4, average, sum;

	cout << "Please enter 4 test scores: " << endl;
	cin >> n1 >> n2 >> n3 >> n4;

	sum = n1 + n2 + n3 + n4;
	average = sum / 4;

	cout << endl << "The average test score: " << average << endl;
}




// Alternative method below

/*
void main()
{
	float n1, n2, n3, n4, average;
	cout << "Please enter 4 test scores: " << endl;
	cin >> n1 >> n2 >> n3 >> n4;

	average = (n1 + n2 + n3 + n4) / 4;
	
	cout << endl << "The average test score: " << average << endl;
}
*/













