#include <iostream>
using namespace std;

//浅拷贝与深拷贝

class Person
{
public:
	Person()
	{
		cout << "默认构造函数" << endl;
	}

	Person(int a, int higth)
	{
		cout << "有参构造函数" << endl;
		m_Age = a;
		m_Higth = new int(higth);
	}

	Person(const Person &p)
	{
		cout << "拷贝构造函数" << endl;
		m_Age = p.m_Age;
		
		//深拷贝
		m_Higth = new int(*p.m_Higth);
	}

	~Person()
	{
		cout << "析构函数" << endl;
		if (m_Higth != NULL)
		{
			delete(m_Higth);
			m_Higth = NULL;

		}
	}

	int m_Age;
	int *m_Higth;
};

void test01()
{
	Person p(18,180);
	Person p1(p);
}

int main()
{
	test01();

	system("pause");

	return 0;
}