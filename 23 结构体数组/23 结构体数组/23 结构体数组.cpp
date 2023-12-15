#include <iostream>
#include <string>
using namespace std;

//1、创建结构体
struct Student
{
	string name;
	int age;
	int score;
};

int main()
{
	//2、创建结构体数组
	struct Student stuArray[3] = { {"张三", 80, 80},{"李四", 59, 59},{"王五",90,90} };

	//3、修改结构体数组
	stuArray[1].name = "赵六";
	stuArray[1].age = 61;
	stuArray[1].score = 61;

	for (int i = 0; i < 3; i++)
	{
		cout << "姓名" << stuArray[i].name
			<< " 年龄" << stuArray[i].age
			<< " 分数" << stuArray[i].score << endl;
	}

	system("pause");

	return 0;
}

