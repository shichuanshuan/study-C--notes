#include <iostream>
using namespace std;

int main()
{
	//创建数组
	int a[] = { 1,2,3,4,5 };

	//逆换前
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}

	//2、实现逆置
	//2、1记录起始下标位置
	int status = 0;
	int end = sizeof(a) / sizeof(a[0]) - 1;
	int temp;

	while (status < end)
	{
		//2、2实现元素的互换
		temp = a[status];
		a[status] = a[end];
		a[end] = a[status];

		//2、3更新下标
		end--;
		status++;
	}

	cout << "逆换后" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}
	

	//2、2记录结束下标位置

	//2、3起始下标与结束下标位置互换


}