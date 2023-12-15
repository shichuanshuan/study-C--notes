#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 4,2,8,0,5,7,1,3,9 };
	int i, j;
	int temp;

	for (i = 0; i < 8; i++)
	{
		// 比较一次结束，少循环一周
		for (j = 0; j < 8 - i ; j++)
		{
			if (arr[j] > arr[j + 1] )
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < 9; i++)
	{
		cout << arr[i];
	}

}
