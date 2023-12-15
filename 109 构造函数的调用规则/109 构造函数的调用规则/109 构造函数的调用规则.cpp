#include <iostream>
using namespace std;

//构造函数调用规则
//默认情况下，C++编译器至少给一个类提供一下三个函数
//1、默认构造函数  （无参，函数体为空）
//2、默认析构函数  （函数体为空）
//3、默认拷贝函数，对属性进行拷贝
class Person
{
public:
	Person()
	{
		cout << "默认构造函数" << endl;
	}

	Person(int age)
	{
		m_Age = age;
		cout << "有参构造函数" << endl;
	}

	Person(const Person &p)
	{
		cout << "拷贝构造函数" << endl;
		m_Age = p.m_Age;
	}

	~Person()
	{
		cout << "析构函数" << endl;
	}

	int m_Age;
};

//如果把拷贝构造注释，结果不会改变。原因是编译器默认提供拷贝编译
void test01()
{
	Person p;
	p.m_Age = 18;

	Person p1(p);

	cout << "p1的年龄为" << p1.m_Age << endl;
}

//如果我们写了有参构造函数，编译器不再提供默认构造函数
//如果我们提供了拷贝构造函数，编译器就不再提供普通构造函数
void test02()
{
	Person p;
	Person p1(10);
}

int main()
{
	test02();

	system("pause");

	return 0;
}