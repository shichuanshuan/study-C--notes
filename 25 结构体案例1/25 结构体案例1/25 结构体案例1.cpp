#include <iostream>
#include <string>
#include<ctime>
using namespace std;

// ����ѧ����Ϣ�ṹ��
struct student
{
	string sName;
	int score;
};

//������ʦ��Ϣ�ṹ��
struct teacher
{
	string tName;
	student stu[5];
};

//
void allocateSpace(struct teacher tArray[], int len)
{
	string Array = "ABCDE";

	//��ÿ����ʦ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teachar_";
		tArray[i].tName += Array[i];

		//ͨ��ѭ����ÿ����ʦ��ѧ����ֵ
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
		cout << "��ʦ������Ϊ��" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������Ϊ��" << tArray[i].stu[j].sName
				<< "\tѧ���ķ���Ϊ " << tArray[i].stu[j].score << endl;
		}
	}
}

int main()
{
	struct teacher tArray[3];
	srand((unsigned int)time(NULL));

	// ��ʦѧ����Ϣ����
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray,len);

	// ��Ϣ���
	printfInfo(tArray, len);

	system("pause");

	return 0;
}