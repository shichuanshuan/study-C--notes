#include <iostream>
using namespace std;

//thisָ�����;

class Person
{
public:
	Person(int age)
	{
		//���βκͳ�Ա����ͬ��ʱ��������thisָ��������
		// thisָ��ָ�� �����õĳ�Ա���� �����Ķ���
		this->age = age;   // ����������Ϊ����age��ͬһ������˴�ӡ������ȷ��ֵ
	}

	Person& PersonAdd(Person &p)
	{
		this->age += p.age;

		//this ָ��p2��ָ�룬��*thisָ��ľ���p2���������
		return *this;
	}

	int age;
};


//1��������Ƴ�ͻ
void test01()
{
	Person p(18);
	cout << "����Ϊ��" << p.age << endl;
}

//2 ���ض�������*this
void test02()
{
	Person p1(10);

	Person p2(10);

	p2.PersonAdd(p1).PersonAdd(p1).PersonAdd(p1);

	cout << "P2����Ϊ" << p2.age << endl;
}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;

}

