#include<iostream>

using namespace std;

int main()
{
	int n1, n2;
	char operation;

	cout << "Please, enter 2 numbers to calcuate: " << endl;
	cin >> n1 >> n2;

	cout << endl;

	cout << "Please, choose an operation by entering its character (+, -, *, /, %): " << endl;
	cin >> operation;

	cout << endl;

	switch(operation)
	{
		case '+': cout << "Answer = " << n1 + n2 << endl; 
			break;
		case '-': cout << "Answer = " << n1 - n2 << endl;
			break;
		case '*': cout << "Answer = " << n1 * n2 << endl;
			break;
		case '/': cout << "Answer = " << n1 / n2 << endl;
			break;
		case '%': cout << "Answer = " << n1 % n2 << endl;
			break;
		default: cout << "Invalid operation" << endl;	
	}

	return 0;
}
