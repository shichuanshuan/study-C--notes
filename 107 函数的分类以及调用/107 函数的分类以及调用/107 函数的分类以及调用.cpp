#include <iostream>
using namespace std;

//1、构造函数的分类及调用
//分类
//按照参数分类   无参构造（默认构造）  有参构造
//按照类型分类   普通构造      拷贝构造
class Person
{
public:
	//无参构造
	Person()
	{
		cout << "无参构造函数" << endl;
	}

	//有参构造
	Person(int a)
	{
		age = a;
		cout << "有参构造函数" << endl;
	}

	//拷贝构造函数   把所有东西都拷贝过来
	Person(const Person &p)
	{
		age = p.age;
		cout << "拷贝构造函数" << endl;
	}

	~Person()
	{
		cout << "析构函数" << endl;
	}

	int age;
};

//调用
void test()
{
	//1、括号法
//	Person p;
//	Person p2(10);
//  Person p3(p2);

	//2、显示法
	Person p;
	Person p2 = Person(10); // 有参构造
	Person p3 = Person(p2); // 拷贝构造

	//Person(10) //匿名构造  特点：当前行执行结束后，系统会立即回收掉匿名的对象
	cout << "aaaaa" << endl;

	//不要利用拷贝构造函数 初始化匿名对象 编译器会认为 Person (p3) == Person p3;
	//Person(p3);

	//3、隐式转换法
	Person p4 = 10;
	Person p5 = p4;
}


int main()
{
	test();

	system("pause");

	return 0;
}