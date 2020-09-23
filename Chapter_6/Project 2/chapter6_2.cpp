#include<iostream>
#include<cctype>

int main()
{
	using namespace std;
	double donation[10] = {};
	int i = 0;
	double sum = 0;
	
	while(i<10)
	{
		if (cin >> donation[i])
		{
			sum += donation[i];	
		}
		else
		{
			break;
		}
		i++;
	}
	int j = 0, num = 0;
	while (j<i)
	{
		if (donation[j] > (sum / i))
		{
			num++;
		}
		else
		{
			j++;
			continue;
		}
		j++;
	}
	cout << "平均数为：" << sum / i << endl;
	cout << "大于平均数的个数为：" << num << endl;
	return 0;
}