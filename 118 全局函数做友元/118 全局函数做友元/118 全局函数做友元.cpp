#include<iostream>
#include<string>
using namespace std;

class Building
{
	//goodGay全局函数是Building好朋友，可以访问Building中私有成员
	friend void goodGay(Building &building);

public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}

	string m_SittingRoom;//客厅

private:
	string m_BedRoom;//卧室
};

// 全局函数
void goodGay(Building &building)
{
	cout << "好基友正在访问" << building.m_SittingRoom << endl;
	cout << "好基友正在访问" << building.m_BedRoom << endl;

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