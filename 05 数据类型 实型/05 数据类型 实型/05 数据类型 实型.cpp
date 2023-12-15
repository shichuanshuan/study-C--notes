#include "iostream"
using namespace std;

// float  4字节   7位有效数字
// double 8字节   15、16位有效数字

int main()
{
	float f1 = 3.14f;  // 默认是double类型，加f变单精度
	double d1 = 3.14;

	cout << f1 << endl;
	cout << d1 << endl;

	system("pause");

	return 0;
}
