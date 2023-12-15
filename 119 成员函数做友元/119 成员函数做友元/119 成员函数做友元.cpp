#include<iostream>
using namespace std;

class Building;

class GoodGay
{
public:
	GoodGay();

	void visit();//让vitis函数可以访问Building中私有成员
	void visit2();//让vitis函数不可以访问building中私有成员

	Building *building;
};

class Building
{
	friend void GoodGay::visit();

public:
	Building();

	int m_SittingRoom;//客厅

private:

	int m_BedRoom;//卧室

};

//类外实现成员函数
Building::Building()
{
	m_SittingRoom = 2;
	m_BedRoom = 4;
}

GoodGay::GoodGay()
{
	building = new Building;
}

//类外实现成员函数
void GoodGay::visit()
{
	cout << "visit客厅个数" << building->m_SittingRoom << endl;
	cout << "visit客厅个数" << building->m_BedRoom << endl;
}

//类外实现成员函数
void GoodGay::visit2()
{
	cout << "visit2客厅个数" << building->m_SittingRoom << endl;
}


int main()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();

	system("pause");

	return 0;
}