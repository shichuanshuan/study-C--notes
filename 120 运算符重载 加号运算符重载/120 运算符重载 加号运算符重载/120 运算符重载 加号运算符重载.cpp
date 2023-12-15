#include<iostream>
using namespace std;

//加号运算符重载

class Person
{
public:
	//成员函数+重载
	Person operator+(Person &p)
	{
		Person temp;

		temp.m_A = m_A + p.m_A;
		temp.m_B = m_B + p.m_B;

		return temp;
	}

	int m_A;
	int m_B;
};

//全局函数+重载
//Person operator+(Person p1, Person p2)
//{
//	Person temp;
//
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p2.m_B + p2.m_B;
//
//	return temp;
//}

void test()
{
	Person p1, p2, p3;

	p1.m_A = 10;
	p1.m_B = 20;

	p2.m_A = 10;
	p2.m_B = 20;

	p3 = p1 + p2;

	cout << "p3.m_A =" << p3.m_A << endl;
	cout << "p3.m_B =" << p3.m_B << endl;
}

int main()
{
	test();

	system("pause");

	return 0;
}