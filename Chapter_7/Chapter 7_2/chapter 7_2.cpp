#include<iostream>
using namespace std;
void input(int *ary,int *num);
void display(int* q, int num);
double average(int* q,int num);

int main()
{
	int* ary=new int[10];
	int num=0;
	input(ary,&num);
	display(ary,num);
	cout << "����ƽ��ֵΪ��" << average(ary,num) << endl;
	delete[]ary;
	return 0;
}

void input(int *ary,int *num)
{
	*num = 0;
	cout << "������ɼ������10����" << endl;
	while (cin>>ary[*num] and (*num)<10)
	{
		if (cin.get() == '\n')break;
		(*num)++;
	}
}
void display(int* q, int num)
{
	cout << "������ĳɼ����£� " << endl;
	int i = 0;
	for (; i<=num; i++)
	{
		cout << q[i] << " ";
	}
	cout << endl;
	
}
double average(int* q,int num)
{
	double sum = 0;
	double average = 0;
	int i = 0;
	for (; i<=num; i++)
	{
		sum += q[i];
	}
	return (sum / i);
}





