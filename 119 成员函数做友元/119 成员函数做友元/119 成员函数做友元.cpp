#include<iostream>
using namespace std;

class Building;

class GoodGay
{
public:
	GoodGay();

	void visit();//��vitis�������Է���Building��˽�г�Ա
	void visit2();//��vitis���������Է���building��˽�г�Ա

	Building *building;
};

class Building
{
	friend void GoodGay::visit();

public:
	Building();

	int m_SittingRoom;//����

private:

	int m_BedRoom;//����

};

//����ʵ�ֳ�Ա����
Building::Building()
{
	m_SittingRoom = 2;
	m_BedRoom = 4;
}

GoodGay::GoodGay()
{
	building = new Building;
}

//����ʵ�ֳ�Ա����
void GoodGay::visit()
{
	cout << "visit��������" << building->m_SittingRoom << endl;
	cout << "visit��������" << building->m_BedRoom << endl;
}

//����ʵ�ֳ�Ա����
void GoodGay::visit2()
{
	cout << "visit2��������" << building->m_SittingRoom << endl;
}


int main()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();

	system("pause");

	return 0;
}