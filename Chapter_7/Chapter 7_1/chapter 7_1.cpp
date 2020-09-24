#include<iostream>

double average(double x, double y);
int main()
{
	using namespace std;
	double x, y;
	cout << "Please enter two numbers:" << endl;
	while (cin >> x >> y)
	{
		if (x == 0 or y == 0)
		{
			cout << "ÊäÈë½áÊø£¡" << endl;
			break;
		}
		else
		{
			cout << x << " and " << y << " averge is: " << average(x, y) << endl;
		}
	}

}

double average(double x, double y)
{
	return 2.0 * x * y / (x + y);
}