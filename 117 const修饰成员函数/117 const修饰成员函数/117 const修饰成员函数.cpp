#include<iostream>
using namespace std;

//������
class Student
{
public:
	//thisָ��ı��� ��ָ�볣��  ָ���ָ���ǲ������޸ĵ�
	void showPerson()const
	{
		//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
	//	this->m_Age = 100; 
		m_B = 100;

		//this = NULL;  // thisָ�벻�����޸�ָ���ָ���
	}

	int m_Age;
	mutable int m_B;  //�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ�֮mutable
};

void test01()
{
	Student s;
	s.showPerson();
}


//������
void test02()
{
	const Student s;//�ڶ���ǰ��const����Ϊ������
	//s.m_Age = 100;
	s.m_B = 100;

	//������ֻ�ܵ��ó�����
	s.showPerson();
}

int main()
{
	test01();

	system("pause");

	return 0;
}