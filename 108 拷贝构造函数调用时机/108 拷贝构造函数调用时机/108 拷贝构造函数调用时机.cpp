#include <iostream>
using namespace std;

class Person
{
public:
	//构造函数
	Person()
	{
		cout << "默认构造函数" << endl;
	}

	Person(int a)
	{
		m_Age = a;
		cout << "有参构造函数" << endl;
	}

	Person(const Person &p)
	{
		cout << "拷贝构造函数" << endl;
	}

	//析构函数
	~Person()
	{
		cout << "析构函数" << endl;
	}

	int m_Age;
};

//1、使用一个已经创建的完毕的对象初始化一个新对象
void test01()
{
	Person p1(20);
	Person p2 = Person(p1);
}

//2、值传递的方式给函数参数传值
void doWork(Person p)
{
	// 会运行拷贝函数，因为创建会副本，结束时释放。
}

void test02()
{
	Person p;
	doWork(p);
}

//3、值方式返回局部对象
Person doWork()
{
	Person p1;  //默认构造

	return p1;  // 返回新的构造
}

void test03()
{
	Person p = doWork();
}

int main()
{
	test03();

	system("pause");

	return 0;
}