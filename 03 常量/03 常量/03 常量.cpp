#include "iostream"
using namespace std;

// 常量的定义方式
//1、#defin宏常量
//2、const修饰的常量

#define DAY 7

int main()
{
	cout << " 一周共有： " << DAY << " 天 " << endl;

	// 2、const修饰的常量

	const int month = 12;

	cout << "一年总共有" << month << "个月份" << endl;

	system("pause");

	return 0;

}