#include <iostream>
#include <string>
using namespace std;

// class ��������ŵľ���������
class Student
{
	//����Ȩ��
	//����Ȩ��
public:
	//����   ��Ա����  ��Ա����
	string m_Name;
	int m_Id;

	//��Ϊ   ��Ա����  ��Ա����
	void showStudent()
	{
		cout << "����" << m_Name << endl;
		cout << "ѧ��" << m_Id << endl;
	}
};

int main()
{
	Student s;

	s.m_Name = "����";
	s.m_Id = 1;

	s.showStudent();

	system("pause");

	return 0;
}