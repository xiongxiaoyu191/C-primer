#include "Circle.h"
#include<iostream>
const double PI = 3.1415926;
using namespace std;
void Circle::input_r() {
	cout << "请输入半径" << endl;
	cin >> m_r;
}
void Circle::cal_l() {
	l = 2 * PI * m_r;
	cout << "圆的周长为： " << l << endl;
}
void Circle::cal_s() {
	s = 2 * PI * sqrt(m_r);
	cout << "圆的面积为：  " << s << endl;
}