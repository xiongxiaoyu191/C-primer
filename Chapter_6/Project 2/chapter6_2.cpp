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
	cout << "ƽ����Ϊ��" << sum / i << endl;
	cout << "����ƽ�����ĸ���Ϊ��" << num << endl;
	return 0;
}