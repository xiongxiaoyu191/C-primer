#include<iostream>
#include<cmath>

using namespace std;

class Circle {
public:
	bool cal_dis(Circle& another) {
		if (sqrt(pow((m_x - another.m_x), 2) + pow((m_y - another.m_y), 2)) < (m_r + another.m_r) ){
			return true;
		}
		return false;
	}
	void getA(double x, double y, double r) {
		m_x = x;
		m_y = y;
		m_r = r;
		
	}
	
private:
	double m_x;
	double m_y;
	double m_r;
};
int main()
{
	Circle Cr1,Cr2;
	Cr1.getA(1, 1, 1);
	Cr2.getA(5, 5, 1);
	cout << "两圆是否相交：  " << Cr1.cal_dis(Cr2) << endl;
	return 0;


}