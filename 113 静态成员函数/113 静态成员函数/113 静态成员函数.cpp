#include<iostream>
using namespace std;

// ��̬��Ա�����ص㣺
// 1 ������һ������
// 2 ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person
{
public:
	static void fun()
	{
		cout << "fun����" << endl;
		m_A = 100;
		cout << "m_A = " << m_A << endl;

		//m_B = 200; ���󣬲����Է��ʷǾ�̬��Ա����
	}

	static int m_A;//��̬��Ա����
	int m_B;
};

int Person::m_A = 0;//����������

void test()
{
	//1��ͨ���������
	Person p;
	p.fun();

	//2��ͨ����������
	Person::fun();
}

int main()
{
	test();

	system("pause");

	return 0;
}