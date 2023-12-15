#include <iostream>
using namespace std;

class Person
{
public:

	//Person(int a,int b,int c):m_A(a),m_B(b),m_C(c)
	Person():m_A(10),m_B(20),m_C(30)
	{
		cout << "构造函数" << endl;
	}

	~Person()
	{
		cout << "析构函数" << endl;
	}

	int m_A;
	int m_B;
	int m_C;
};


int main()
{
	Person s;
	//Person s1(1, 2, 3);
	cout << s.m_A << s.m_B << s.m_C << endl;

	system("pause");

	return 0;
}