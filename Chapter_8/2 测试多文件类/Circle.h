#ifndef __CIRCLE_H_
#define __CIRCLE_H_


class Point
{
public:
	//输入半径
	void input_r();
	//计算周长
	void cal_l();
	//计算面积
	void cal_s();
private:
	double m_r;
	double l;
	double s;

};


#endif
