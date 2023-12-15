#include <iostream>
#include <string>
using namespace std;

// class 后面紧跟着的就是类名称
class Student
{
	//访问权限
	//公共权限
public:
	//属性   成员属性  成员变量
	string m_Name;
	int m_Id;

	//行为   成员函数  成员方法
	void showStudent()
	{
		cout << "姓名" << m_Name << endl;
		cout << "学号" << m_Id << endl;
	}
};

int main()
{
	Student s;

	s.m_Name = "张三";
	s.m_Id = 1;

	s.showStudent();

	system("pause");

	return 0;
}