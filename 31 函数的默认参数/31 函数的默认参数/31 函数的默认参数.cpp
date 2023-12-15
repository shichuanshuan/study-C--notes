#include <iostream>
using namespace std;

//函数的默认参数
int fun(int a, int b = 10, int c = 20)
{
	return a + b + c;
}


//如果函数声明有默认参数，函数实现就不能有默认参数
int fun2(int a = 20, int b = 20, int c = 20);
int fun2(int a, int b, int c)
{
	return a + b + c;
}

int main()
{
	//如果我们自己传入的数据，就用自己的数据，如果没有那就用默认值
	cout << fun(10) << endl;
	cout << fun(20, 10, 20)<< endl;

	system("pause");

	return 0;
}