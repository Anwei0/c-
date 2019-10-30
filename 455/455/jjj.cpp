#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

/*
闰年的2月份有29天
普通闰年: 能被4整除但不能被100整除的年份为
世纪闰年: 能被400整除
*/

int main(void) {
	int year;
	int month;
	bool flag = false;
	int days;

	cout << "请输入年份：";
	cin >> year;
	cout << "请输入月份：";
	cin >> month;

	if (year % 400 == 0) {
		flag = true;
	} else if (year % 4 == 0  &&  year % 100 != 0) {
		flag = true;
	} else {
		flag = false;
	}

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 2:
		days = flag ? 29 : 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		std::cout << "无效月份" << std::endl;
		break;
	}
	
	cout <<  year << "年" << month << "月一共有：" << days << "天" << endl;
	system("pause");
	return 0;
}
