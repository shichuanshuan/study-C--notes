#include <iostream>
using namespace std;

int main()
{
	int a1 = 10;
	int b1 = 4;

	//�Ӽ��˳�
	cout << "�Ӽ��˳�";
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 / b1 << endl;
	cout << a1 * b1 << endl;

	int a2 = 10;
	int b2 = 0;

	// ����������Ϊ0
	//cout << a2 / b2 << endl;

	double d1 = 0.5;
	double d2 = 0.25;
	
	// ����С���������
	cout << "����С��������� \t";
	cout << d1 / d2 << endl;

	system("pause");
	
	return 0;
}