#include <iostream>
#include <string>
using namespace std;

//1�������ṹ��
struct Student
{
	string name;
	int age;
	int score;
};

int main()
{
	//2�������ṹ������
	struct Student stuArray[3] = { {"����", 80, 80},{"����", 59, 59},{"����",90,90} };

	//3���޸Ľṹ������
	stuArray[1].name = "����";
	stuArray[1].age = 61;
	stuArray[1].score = 61;

	for (int i = 0; i < 3; i++)
	{
		cout << "����" << stuArray[i].name
			<< " ����" << stuArray[i].age
			<< " ����" << stuArray[i].score << endl;
	}

	system("pause");

	return 0;
}

