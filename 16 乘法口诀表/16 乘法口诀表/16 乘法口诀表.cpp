#include <iostream>
using namespace std;

int main()
{
	int i, j;

	//��ӡ����
	for (i = 1; i < 10; i++)
	{
		//��ӡ����
		for (j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" << i * j << " ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}