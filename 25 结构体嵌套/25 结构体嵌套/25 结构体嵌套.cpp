#include <iostream>
#include <string>
using namespace std;

// 创建学生信息结构体
struct Student 
{
	string name;
	int age;
	int score;
};

//创建老师信息结构体
struct Teacher
{
	string name;
	int age;
	int id;
	struct Student stu;
};

int main()
{
	// 输入老师信息
	Teacher t;
	t.name = "李四";
	t.age = 28;
	t.id = 100;
	t.stu.name = "王二";
	t.stu.age = 20;
	t.stu.score = 100;

	cout << "老师姓名" << t.name << " 老师年龄" << t.age << " 老师id" << t.id
		<< "老师学生的姓名" << t.stu.name << " 老师学生的年龄" << t.stu.age
		<< " 老师学生的分数" << t.stu.age << endl;

	system("pause");

	return 0;
}
