#include <iostream>
using namespace std;

// ÒıÓÃ´«µİ
void MySwap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	MySwap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}