#include <iostream>
#include <string>
using namespace std;

//��Ա��������Ϊ˽��
//�ŵ� 1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��

//�������
class Person
{
public:
	// �������� д
	void SetName(string name)
	{
		m_Name = name;
	}
	// ��ȡ���� ��
	string GetName()
	{
		return m_Name;
	}

	// ������
	int GetAge()
	{
		age = 20;
		return age;
	}

	//д����
	void SetLover(string lover)
	{
		m_Lover = lover;
	}

private:
	string m_Name;  // ��д
	int age;        // ��
	string m_Lover; // д
};


int main()
{
	Person per;

	per.SetName("ʯ��˨");
	cout << "����Ϊ��" << per.GetName() << endl;

	cout << "�������Ϊ��" << per.GetAge() << endl;

	per.SetLover("�Ծ�");

	system("pause");

	return 0;
}