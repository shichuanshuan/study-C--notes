#include <iostream>
using namespace std;

void func()
{
	int *p = new int(10);

	cout << *p << endl;

	delete p;
}

int main()
{
	func();

	system("pause");

	return 0;
}