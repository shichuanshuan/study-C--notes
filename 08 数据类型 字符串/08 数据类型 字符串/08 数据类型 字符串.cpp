#include <iostream>
#include <string>
using namespace std;

int main()
{ 
	//1、C语言风格字符串
	char str[] = "hello world";
	cout << str << endl;

	//2、C++风格字符串
	//注意事项：要包含都文件<string>
	string str2 = "hello world";
	cout << str2 << endl;

	system("pause");

	return 0;
}
