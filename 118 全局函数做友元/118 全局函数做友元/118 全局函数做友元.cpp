#include<iostream>
#include<string>
using namespace std;

class Building
{
	//goodGayȫ�ֺ�����Building�����ѣ����Է���Building��˽�г�Ա
	friend void goodGay(Building &building);

public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

	string m_SittingRoom;//����

private:
	string m_BedRoom;//����
};

// ȫ�ֺ���
void goodGay(Building &building)
{
	cout << "�û������ڷ���" << building.m_SittingRoom << endl;
	cout << "�û������ڷ���" << building.m_BedRoom << endl;

}

void test()
{
	Building b;

	goodGay(b);

}

int main()
{
	test();

	system("pause");

	return 0;
}