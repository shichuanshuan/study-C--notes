#include <iostream>
using namespace std;
//timeϵͳʱ�������
#include <ctime>


int main()
{
	//�����������ӣ��������õ�ǰϵͳʱ���������������ֹÿ�ζ�һ��
	srand((unsigned int)time(NULL));

	//1������һ�������
	int num = rand() % 100 + 1;  // rand()%100+1 ����0+1~99+1�����
	int i_32Ret;

	//2����ҽ��в²�
	while (1)
	{
		cout << "������²����" << endl;
		cin >> i_32Ret;
		if (num > i_32Ret)
		{
			cout << "С��" << endl;
		}
		else
		{
			if (num < i_32Ret)
			{
				cout << "����" << endl;
			}
			else
			{
				cout << "�����" << endl;
				break;
			}
		}
	}


	system("pause");

	return 0;
}