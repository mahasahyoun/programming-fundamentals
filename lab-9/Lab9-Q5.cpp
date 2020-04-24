#include <iostream>

using namespace std;

int main()
{
	float sales, total_income, total_discount;
	float basic_salary = 400, bonus = 0, total_salary = 0;

	cout << "Please, enter the sales of each employee: ";

	cin >> sales;

	if (sales <= 1000)
	{
		bonus = sales * 0.15;
		total_income = basic_salary + bonus;

		if (total_income <= 700)
		{
			total_discount = total_income * 0.15;
			total_salary = total_income - total_discount;
		}
		else
		{
			total_income = basic_salary + bonus;
			total_discount = total_income * 0.20;
			total_salary = total_income - total_discount;
		}
	}

	if (sales > 1000 && sales <= 2000)
	{
		bonus = sales * 0.20;
		total_income = basic_salary + bonus;

		if (total_income <= 700)
		{
			total_discount = total_income * 0.15;
			total_salary = total_income - total_discount;
		}
		else
		{
			total_income = basic_salary + bonus;
			total_discount = total_income * 0.20;
			total_salary = total_income - total_discount;
		}
	}

	if (sales > 2000) 
	{
		bonus = sales * 0.25;
		total_income = basic_salary + bonus;

		if (total_income <= 700)
		{
			total_discount = total_income * 0.15;
			total_salary = total_income - total_discount;
		}
		else
		{
			total_income = basic_salary + bonus;
			total_discount = total_income * 0.20;
			total_salary = total_income - total_discount;
		}
	}

	cout << "Total salary: " << total_salary;

	return 0;
}
