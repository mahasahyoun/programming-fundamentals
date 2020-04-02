#include <iostream>

using namespace std;

void main()
{
	int basic_salary = 300;
	float commission, social_insurance, total_salary, total_income, sales;

	cout << "Please enter the total sales: ";
	cin >> sales;

	commission = sales * (15.0 / 100);

	social_insurance = basic_salary * (5.5 / 100);

	total_income = basic_salary - social_insurance;

	total_salary = total_income + commission;

	cout << endl;

	cout << "The total salary for the salesman: " << total_salary << endl;
}