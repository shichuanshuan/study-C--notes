#include "iostream"
using namespace std;

int main()
{
	//1、字符型变量创建方式
	char ch = 'a';
	cout << "ch = " << ch << endl;

	//2、字符型变量所占内存大小
	cout << "char 所占内存大小" << sizeof(ch) << endl;

	//3、字符型变量常见错误


	//4、字符型变量对于ASCLL编码
	cout << (int)ch << endl;

	system("pause");

	return 0;
}