#include<iostream>
using namespace std;

int main()
{
	//引用基本语法
	// 数据类型 &别名 = 原名
	//b也指向a的地址
	int a = 10;
	int &b = a;

	cout << "原名的值 a = " << a << endl;
	cout << "别名的值 b = " << b << endl;

	b = 100;
	cout << "赋值后原名的值 a = " << a << endl;
	cout << "赋值后别名的值 b = " << b << endl;

	system("pause");

	return 0;
}