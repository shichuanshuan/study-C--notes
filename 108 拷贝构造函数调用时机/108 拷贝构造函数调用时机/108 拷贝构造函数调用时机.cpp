#include <iostream>
using namespace std;

class Person
{
public:
	//���캯��
	Person()
	{
		cout << "Ĭ�Ϲ��캯��" << endl;
	}

	Person(int a)
	{
		m_Age = a;
		cout << "�вι��캯��" << endl;
	}

	Person(const Person &p)
	{
		cout << "�������캯��" << endl;
	}

	//��������
	~Person()
	{
		cout << "��������" << endl;
	}

	int m_Age;
};

//1��ʹ��һ���Ѿ���������ϵĶ����ʼ��һ���¶���
void test01()
{
	Person p1(20);
	Person p2 = Person(p1);
}

//2��ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p)
{
	// �����п�����������Ϊ�����ḱ��������ʱ�ͷš�
}

void test02()
{
	Person p;
	doWork(p);
}

//3��ֵ��ʽ���ؾֲ�����
Person doWork()
{
	Person p1;  //Ĭ�Ϲ���

	return p1;  // �����µĹ���
}

void test03()
{
	Person p = doWork();
}

int main()
{
	test03();

	system("pause");

	return 0;
}