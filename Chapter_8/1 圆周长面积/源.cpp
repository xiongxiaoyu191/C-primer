#include<iostream>
#include<math.h>
const double PI = 3.1415926;

using namespace std;

class Point
{
public:
	void input_r() {
		cout << "������뾶" << endl;
		cin >> m_r;
	}
	void cal_l() {
		l = 2 * PI * m_r;
		cout << "Բ���ܳ�Ϊ�� " << l << endl;
	}
	void cal_s() {
		s = 2 * PI * sqrt(m_r);
		cout << "Բ�����Ϊ��  " << s << endl;
	}

private:
	double m_r;
	double l;
	double s;

};

int main()
{
	Point cr;
	cr.input_r();
	cr.cal_l();
	cr.cal_s();

	return 0;	
}