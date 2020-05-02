#include<iostream>

using namespace std;

int main()
{
	char ch;

	cout << "Please, enter a character: ";

	cin >> ch;

	switch (ch)
	{
		case 'A':
		case 'a':
		case 'I':
		case 'i':
		case 'U':
		case 'u':
		case 'E':
		case 'e':
		case 'O':
		case 'o': cout << ch << " is a vowel" << endl;
			break;
		default:
			if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
			{
				cout << ch << " is a consonant" << endl;
			}
			else
			{
				cout << ch << " is a special character" << endl;
			}
		}

	return 0;
}
