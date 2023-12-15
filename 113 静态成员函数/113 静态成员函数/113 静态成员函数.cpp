#include<iostream>
using namespace std;

// 静态成员函数特点：
// 1 程序共享一个函数
// 2 静态成员函数只能访问静态成员变量

class Person
{
public:
	static void fun()
	{
		cout << "fun调用" << endl;
		m_A = 100;
		cout << "m_A = " << m_A << endl;

		//m_B = 200; 错误，不可以访问非静态成员变量
	}

	static int m_A;//静态成员变量
	int m_B;
};

int Person::m_A = 0;//类外声明；

void test()
{
	//1、通过对象访问
	Person p;
	p.fun();

	//2、通过类名访问
	Person::fun();
}

int main()
{
	test();

	system("pause");

	return 0;
}