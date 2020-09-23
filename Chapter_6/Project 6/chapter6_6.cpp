#include<iostream>
#include<string>

int main()
{
	using namespace std;
	const int Size = 5;
	struct donation
	{
		string name;
		double money;
	};
	donation* p = new donation[Size];
	for (int i = 0; i < Size; i++)
	{
		cout << "Please enter the name" << endl;
		cin >> p[i].name;
		cin.get();
		cout << "Please enter the money" << endl;
		cin >> p[i].money;
		cin.get();
	}
	donation* q = new donation[Size];
	donation* s = new donation[Size];
	int k = 0,l=0;
	for (int j = 0; j < Size; j++)
	{
		if (p[j].money >= 10000)
		{
			q[k] = p[j];
			k++;
		}
		else
		{
			s[l] = p[j];
			l++;
		}
	}
	cout << "========" << "the Grand Patrons" << "=======" << endl;
	if (k==0)
	{
		cout << "None" << endl;
	}
	else
	{
		for (int j = 0; j <k; j++)
		{
			cout << "name:" << q[j].name << "   " << "money:" << q[j].money << endl;
		}
	}
	cout << "========" << "the Patrons" << "=======" << endl;
	if (l==0)
	{
		cout << "None" << endl;
	}
	else
	{
		for (int j = 0; j < l; j++)
		{
			cout << "name:" << s[j].name << "   " << "money:" << s[j].money << endl;
		}
	}
	return 0;
	
	
}
