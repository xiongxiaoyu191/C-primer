#include<iostream> 

using namespace std;

class date {
private:
	int year;
	int month;
	int day;
public:
	void input_date() {
		cout << "请输入年月日" << endl;
		cin >> year >> month >> day;
	}
	void print_date() {
		cout << year << "年" << month << "月" << day << "日" << endl;
	}
	bool is_leap_year() {
		if (((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0)) {
			return true;
		}
		return false;
	}

};
int main()
{
	date dt;
	dt.input_date();
	dt.print_date();
	if (dt.is_leap_year() == true) {
		cout << "是闰年" << endl;
	}
	else {
		cout << "不是闰年" << endl;
	}
	return 0;
 }