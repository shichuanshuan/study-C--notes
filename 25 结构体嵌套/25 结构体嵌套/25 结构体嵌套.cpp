#include <iostream>
#include <string>
using namespace std;

// ����ѧ����Ϣ�ṹ��
struct Student 
{
	string name;
	int age;
	int score;
};

//������ʦ��Ϣ�ṹ��
struct Teacher
{
	string name;
	int age;
	int id;
	struct Student stu;
};

int main()
{
	// ������ʦ��Ϣ
	Teacher t;
	t.name = "����";
	t.age = 28;
	t.id = 100;
	t.stu.name = "����";
	t.stu.age = 20;
	t.stu.score = 100;

	cout << "��ʦ����" << t.name << " ��ʦ����" << t.age << " ��ʦid" << t.id
		<< "��ʦѧ��������" << t.stu.name << " ��ʦѧ��������" << t.stu.age
		<< " ��ʦѧ���ķ���" << t.stu.age << endl;

	system("pause");

	return 0;
}
