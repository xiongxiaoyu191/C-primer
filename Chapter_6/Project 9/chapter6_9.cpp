#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct donation
{
	string name;
	double money;
};

int main()
{
	void donation_list(donation * p, int n);
	int Size;
	ifstream filetxt;
	filetxt.open("abc.txt");	
	if (!filetxt.is_open())
	{
		cout << "couldn't open the file" << endl;
	}
	filetxt >> Size;
	donation* p = new donation[Size];
	filetxt.get();
	for (int j = 0; j < Size; j++)
	{
		getline(filetxt, p[j].name);
		filetxt >> p[j].money;
		filetxt.get();
	}
	donation_list(p, Size);
	filetxt.close();
	delete[] p;
}
void donation_list( donation *p,int n)
{
	cout << "捐款总人数为：" <<n<< endl;
	cout << "========The Grand Patrons=======" << endl;
	for (int i = 0; i < n; i++)
	{
		
		if (p[i].money > 10000)
		{
			cout << "name: " << p[i].name << "  money: " << p[i].money << endl;
		}
		else
		{
			continue;
		}
	}
	cout << "========The Patrons=======" << endl;
	for (int i = 0; i < n; i++)
	{
	
		if (p[i].money <= 10000)
		{
			cout << "name: " << p[i].name << "  money: " << p[i].money << endl;
		}
		else
		{
			continue;
		}
	}

}