#include <iostream>
using namespace std;

//1�����캯���ķ��༰����
//����
//���ղ�������   �޲ι��죨Ĭ�Ϲ��죩  �вι���
//�������ͷ���   ��ͨ����      ��������
class Person
{
public:
	//�޲ι���
	Person()
	{
		cout << "�޲ι��캯��" << endl;
	}

	//�вι���
	Person(int a)
	{
		age = a;
		cout << "�вι��캯��" << endl;
	}

	//�������캯��   �����ж�������������
	Person(const Person &p)
	{
		age = p.age;
		cout << "�������캯��" << endl;
	}

	~Person()
	{
		cout << "��������" << endl;
	}

	int age;
};

//����
void test()
{
	//1�����ŷ�
//	Person p;
//	Person p2(10);
//  Person p3(p2);

	//2����ʾ��
	Person p;
	Person p2 = Person(10); // �вι���
	Person p3 = Person(p2); // ��������

	//Person(10) //��������  �ص㣺��ǰ��ִ�н�����ϵͳ���������յ������Ķ���
	cout << "aaaaa" << endl;

	//��Ҫ���ÿ������캯�� ��ʼ���������� ����������Ϊ Person (p3) == Person p3;
	//Person(p3);

	//3����ʽת����
	Person p4 = 10;
	Person p5 = p4;
}


int main()
{
	test();

	system("pause");

	return 0;
}