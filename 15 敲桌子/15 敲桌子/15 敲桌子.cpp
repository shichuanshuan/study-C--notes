#include <iostream>
using namespace std;

int main()
{
	// �����Ӱ���

	//1�������1-100����
	int num = 0;

	for (num = 1; num <= 100; num++)
	{
		if (num % 7 == 0 || num % 10 == 7 || num / 10 == 7)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}

	system("pause");

	return 0;
}