#include <iostream>
using namespace std;

//ǳ���������

class Person
{
public:
	Person()
	{
		cout << "Ĭ�Ϲ��캯��" << endl;
	}

	Person(int a, int higth)
	{
		cout << "�вι��캯��" << endl;
		m_Age = a;
		m_Higth = new int(higth);
	}

	Person(const Person &p)
	{
		cout << "�������캯��" << endl;
		m_Age = p.m_Age;
		
		//���
		m_Higth = new int(*p.m_Higth);
	}

	~Person()
	{
		cout << "��������" << endl;
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