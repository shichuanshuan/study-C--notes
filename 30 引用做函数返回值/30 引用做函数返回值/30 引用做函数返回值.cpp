#include<iostream>
using namespace std;


//1、局部变量的引用不能作为返回值
int& tese01()
{
	int a = 10;

	return a;
}


//2、函数的调用可以作为左值
int &tese02()
{
	// 全局变量
	static int a = 10;

	return a;
}


int main()
{
	int &i_32Ret = tese01();

	cout << "i_32Ret = " << i_32Ret << endl;//第一次正确因为编译器做了保留
	cout << "i_32Ret = " << i_32Ret << endl;//第二次错误因为a的内存已经释放

	int &i_32Ret2 = tese02();
	cout << "i_32Ret2 = " << i_32Ret2 << endl;
	cout << "i_32Ret2 = " << i_32Ret2 << endl;

	tese02() = 1000;
	cout << "i_32Ret2 = " << i_32Ret2 << endl;


	system("pause");

	return 0;
}
