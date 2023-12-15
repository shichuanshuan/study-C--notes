#include<iostream>
#include<string>
using namespace std;
//关系运算符 ==   !=  >  <

class Person
{
public:
	Person(string name, int num)
	{
		m_Name = name;
		m_Num = num;
	}

	bool operator==(Person &p)
	{
		if (m_Name == p.m_Name &&m_Num == p.m_Num)
		{
			return true;
		}

		return false;
	}

	string m_Name;
	int m_Num;
};

void test()
{
	Person p1("shi", 3);
	Person p2("shi", 3);

	//自定义类型是不能使用运算符，除非用运算符重载
	if (p1 == p2)
	{
		cout << "p1和p2相等" << endl;
	}
	else
	{
		cout << "p1和p2不相等" << endl;
	}
}

int main()
{
	test();

	system("pause");

	return 0;

}