#include<iostream>
#include<string>

int main()
{
	using namespace std;
	double salary;
	double tax;
	cout << "请输入你的工资：" << endl;
	cin >> salary;
	while (true)
	{
		if ((int(salary) - salary) != 0 or salary<0)
		{
			break;
		}
		else if (salary>=0 and salary <= 5000)
		{
			tax = 0;
		}
		else if (salary >= 5001 and salary <= 15000)
		{
			tax = 5000 * 0 + (salary - 5000) * 0.1;
		}
		else if (salary >= 15001 and salary <= 35000)
		{
			tax = 5000 * 0 + 10000 * 0.1 + (salary - 15000) * 0.15;
		}
		else
		{
			tax = 5000 * 0 + 10000 * 0.1 + 20000 * 0.15 + (salary - 35000) * 0.2;
		}
		cout << "工资为：" << salary << endl << "税收为：" << tax << endl;
		break;
	}
	

	return 0;
}