#include <iostream>
using namespace std;

class Person
{
	friend ostream &operator<<(ostream &out, Person &p);

public:
	//���ó�Ա��������  ���������    p.operator �򻯰汾  p << cout
	//������  cout<<p;  ���ֻ����ȫ�ֺ�������
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

//ֻ������ȫ�ֺ����������������
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