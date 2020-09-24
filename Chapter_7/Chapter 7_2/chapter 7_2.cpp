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
	cout << "最终平均值为：" << average(ary,num) << endl;
	delete[]ary;
	return 0;
}

void input(int *ary,int *num)
{
	*num = 0;
	cout << "请输入成绩，最多10个：" << endl;
	while (cin>>ary[*num] and (*num)<10)
	{
		if (cin.get() == '\n')break;
		(*num)++;
	}
}
void display(int* q, int num)
{
	cout << "你输入的成绩如下： " << endl;
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





