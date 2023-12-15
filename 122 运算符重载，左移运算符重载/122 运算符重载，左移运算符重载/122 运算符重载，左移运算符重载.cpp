#include <iostream>
using namespace std;

class Person
{
	friend ostream &operator<<(ostream &out, Person &p);

public:
	//利用成员函数重载  左移运算符    p.operator 简化版本  p << cout
	//不符合  cout<<p;  因此只能用全局函数重载
 	//void operator<<( cout)
	//{

	//}

	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:

	int m_A;
	int m_B;
};

//只能利用全局函数重载左移运算符
ostream &operator<<(ostream &out, Person &p)
{
	cout << "p.m_A =" << p.m_A << " p.m_B =" << p.m_B << endl;

	return out;
}

void test()
{
	Person p(10,10);

	cout << p << endl;
}

int main()
{
	test();

	system("pause");

	return 0;
}