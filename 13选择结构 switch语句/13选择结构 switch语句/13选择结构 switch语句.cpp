#include <iostream>
using namespace std;

int main()
{
	int score;

	cout << "��������Դ˵�Ӱ������" << endl;
	cin >> score;

	switch (score)
	{ 
		case 10: cout << "���ε�Ӱ�ǳ�����" << endl;
		break;

		case 9: cout << "����Ӱ������" << endl;
		break;

		default: cout << "����Ϊ������Ƭ" << endl;
	}

	system("pause");

	return 0;
}