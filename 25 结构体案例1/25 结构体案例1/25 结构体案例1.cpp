#include <iostream>
#include <string>
#include<ctime>
using namespace std;

// 创建学生信息结构体
struct student
{
	string sName;
	int score;
};

//创建老师信息结构体
struct teacher
{
	string tName;
	student stu[5];
};

//
void allocateSpace(struct teacher tArray[], int len)
{
	string Array = "ABCDE";

	//给每个老师赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teachar_";
		tArray[i].tName += Array[i];

		//通过循环给每个老师的学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].stu[j].sName = "Strudent_";
			tArray[i].stu[j].sName += Array[j];

			int i32_Ret = rand() % 61 + 40;
			tArray[i].stu[j].score = i32_Ret;
		}	
	}
}

//
void printfInfo(struct teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师的姓名为：" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生的姓名为：" << tArray[i].stu[j].sName
				<< "\t学生的分数为 " << tArray[i].stu[j].score << endl;
		}
	}
}

int main()
{
	struct teacher tArray[3];
	srand((unsigned int)time(NULL));

	// 老师学生信息输入
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray,len);

	// 信息输出
	printfInfo(tArray, len);

	system("pause");

	return 0;
}