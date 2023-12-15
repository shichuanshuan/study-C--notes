#include <iostream>
using namespace std;

//��ֵ�������װ��
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

	//���ظ�ֵ�����
	Person& operator=(Person &p)
	{
		//�������ṩǳ����
		//m_Num = p.m_Num;

		//Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�������
		if (m_Num != NULL)
		{
			delete m_Num;
			m_Num = NULL;
		}

		//���
		m_Num = new int(*p.m_Num);

		//���ض�����
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