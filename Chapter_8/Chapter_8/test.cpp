#include<iostream> 

using namespace std;

class date {
private:
	int year;
	int month;
	int day;
public:
	void input_date() {
		cout << "������������" << endl;
		cin >> year >> month >> day;
	}
	void print_date() {
		cout << year << "��" << month << "��" << day << "��" << endl;
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
		cout << "������" << endl;
	}
	else {
		cout << "��������" << endl;
	}
	return 0;
 }