#include <iostream>
using namespace std;

//���캯�����ù���
//Ĭ������£�C++���������ٸ�һ�����ṩһ����������
//1��Ĭ�Ϲ��캯��  ���޲Σ�������Ϊ�գ�
//2��Ĭ����������  ��������Ϊ�գ�
//3��Ĭ�Ͽ��������������Խ��п���
class Person
{
public:
	Person()
	{
		cout << "Ĭ�Ϲ��캯��" << endl;
	}

	Person(int age)
	{
		m_Age = age;
		cout << "�вι��캯��" << endl;
	}

	Person(const Person &p)
	{
		cout << "�������캯��" << endl;
		m_Age = p.m_Age;
	}

	~Person()
	{
		cout << "��������" << endl;
	}

	int m_Age;
};

//����ѿ�������ע�ͣ��������ı䡣ԭ���Ǳ�����Ĭ���ṩ��������
void test01()
{
	Person p;
	p.m_Age = 18;

	Person p1(p);

	cout << "p1������Ϊ" << p1.m_Age << endl;
}

//�������д���вι��캯���������������ṩĬ�Ϲ��캯��
//��������ṩ�˿������캯�����������Ͳ����ṩ��ͨ���캯��
void test02()
{
	Person p;
	Person p1(10);
}

int main()
{
	test02();

	system("pause");

	return 0;
}