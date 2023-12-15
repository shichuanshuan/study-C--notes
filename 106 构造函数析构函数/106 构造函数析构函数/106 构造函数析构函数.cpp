#include <iostream>
using namespace std;

class Person
{
public:
	//1、构造函数
	//没有返回值，不用写void
	//函数名与类名相同
	//构造函数可以有参数，可以发送重载
	//创建对象的时候，构造函数会自动调用，而且只调用一次
	Person()
	{
		cout << "这是构造函数" << endl;
	}

	//2、析构函数
	//没有void返回值
	//函数名与类名相同 在名称前加~
	//析构函数不能有参数、不可以发生重载
	//对象在销毁前 会自动调用析构函数 而且只会调用一次
	~Person()
	{
		cout << "这是析构函数" << endl;
	}

};

void test01()
{
	Person p;
}

int main()
{
	test01();

	system("pause");

	return 0;
}