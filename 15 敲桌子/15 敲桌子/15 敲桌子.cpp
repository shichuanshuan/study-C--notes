#include <iostream>
using namespace std;

int main()
{
	// 敲桌子案例

	//1、先输出1-100数字
	int num = 0;

	for (num = 1; num <= 100; num++)
	{
		if (num % 7 == 0 || num % 10 == 7 || num / 10 == 7)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}

	system("pause");

	return 0;
}