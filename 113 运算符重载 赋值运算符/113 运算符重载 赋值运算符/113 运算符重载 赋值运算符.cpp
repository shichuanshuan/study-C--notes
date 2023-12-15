#include <iostream>
using namespace std;

//赋值运算符重装载
class Person
{
public:
	Person(int age)
	{
		m_Num = new int(age);
	}


	~Person()
	{
		if (m_Num != NULL)
		{
			delete m_Num;
			m_Num = NULL;
		}
	}

	//重载赋值运算符
	Person& operator=(Person &p)
	{
		//编译器提供浅拷贝
		//m_Num = p.m_Num;

		//应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
		if (m_Num != NULL)
		{
			delete m_Num;
			m_Num = NULL;
		}

		//深拷贝
		m_Num = new int(*p.m_Num);

		//返回对象本身
		return *this;
	}

	int *m_Num;
};

void test()
{
	Person p1(18);
	Person p2(20);
	Person p3(20);

	p3 = p2 = p1;

	cout << *p1.m_Num << endl;
	cout << *p2.m_Num << endl;
	cout << *p3.m_Num << endl;
}

int main()
{
	test();

	system("pause");

	return 0;
}