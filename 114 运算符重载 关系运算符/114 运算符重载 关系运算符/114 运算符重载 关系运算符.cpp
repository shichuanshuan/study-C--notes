#include<iostream>
#include<string>
using namespace std;
//��ϵ����� ==   !=  >  <

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

	//�Զ��������ǲ���ʹ������������������������
	if (p1 == p2)
	{
		cout << "p1��p2���" << endl;
	}
	else
	{
		cout << "p1��p2�����" << endl;
	}
}

int main()
{
	test();

	system("pause");

	return 0;

}