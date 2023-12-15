#include <iostream>
using namespace std;
//time系统时间随机数
#include <ctime>


int main()
{
	//添加随机数种子，作用利用当前系统时间生成随机数，防止每次都一样
	srand((unsigned int)time(NULL));

	//1、产生一个随机数
	int num = rand() % 100 + 1;  // rand()%100+1 生成0+1~99+1随机数
	int i_32Ret;

	//2、玩家进行猜测
	while (1)
	{
		cout << "请输入猜测的数" << endl;
		cin >> i_32Ret;
		if (num > i_32Ret)
		{
			cout << "小了" << endl;
		}
		else
		{
			if (num < i_32Ret)
			{
				cout << "大了" << endl;
			}
			else
			{
				cout << "答对了" << endl;
				break;
			}
		}
	}


	system("pause");

	return 0;
}