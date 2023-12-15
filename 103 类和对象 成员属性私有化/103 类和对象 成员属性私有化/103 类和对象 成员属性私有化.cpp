#include <iostream>
#include <string>
using namespace std;

//成员属性设置为私有
//优点 1、可以自己控制读写权限
//2、对于写可以检测数据的有效性

//设计人类
class Person
{
public:
	// 设置姓名 写
	void SetName(string name)
	{
		m_Name = name;
	}
	// 获取姓名 读
	string GetName()
	{
		return m_Name;
	}

	// 读年龄
	int GetAge()
	{
		age = 20;
		return age;
	}

	//写情人
	void SetLover(string lover)
	{
		m_Lover = lover;
	}

private:
	string m_Name;  // 读写
	int age;        // 读
	string m_Lover; // 写
};


int main()
{
	Person per;

	per.SetName("石传栓");
	cout << "姓名为：" << per.GetName() << endl;

	cout << "获得年龄为：" << per.GetAge() << endl;

	per.SetLover("苍井");

	system("pause");

	return 0;
}