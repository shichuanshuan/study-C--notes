#include <iostream>
#include <string>
using namespace std;

int main()
{
	//1、整型
	int a = 0;
	cout << "请输入整型数字" << endl;
	cin >> a;
	cout << "a = " << a << endl;

	//2、浮点型
	float f = 3.14f;
	cout << "请输入浮点型数字" << endl;
	cin >> f;
	cout << "f = " << f << endl;

	//3、字符型
	char c = 'c';
	cout << "请输入字符型变量" << endl;
	cin >> c;
	cout << "c = " << c << endl;

	//4、字符串型
	string str = "SCS";
	cout << "请输入字符串型变量" << endl;
	cin >> str;
	cout << "str = " << str << endl;

	system("pause");

	return 0;
}