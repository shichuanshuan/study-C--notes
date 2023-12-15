#include <iostream>
using namespace std;

int main()
{
	int a1 = 10;
	int b1 = 4;

	//加减乘除
	cout << "加减乘除";
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 / b1 << endl;
	cout << a1 * b1 << endl;

	int a2 = 10;
	int b2 = 0;

	// 被除数不能为0
	//cout << a2 / b2 << endl;

	double d1 = 0.5;
	double d2 = 0.25;
	
	// 两个小数可以相除
	cout << "两个小数可以相除 \t";
	cout << d1 / d2 << endl;

	system("pause");
	
	return 0;
}