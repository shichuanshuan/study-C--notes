#include <iostream>
using namespace std;

int main()
{
	int i, j;

	//打印行数
	for (i = 1; i < 10; i++)
	{
		//打印列数
		for (j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" << i * j << " ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}