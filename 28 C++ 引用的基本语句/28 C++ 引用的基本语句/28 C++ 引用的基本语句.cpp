#include<iostream>
using namespace std;

int main()
{
	//���û����﷨
	// �������� &���� = ԭ��
	//bҲָ��a�ĵ�ַ
	int a = 10;
	int &b = a;

	cout << "ԭ����ֵ a = " << a << endl;
	cout << "������ֵ b = " << b << endl;

	b = 100;
	cout << "��ֵ��ԭ����ֵ a = " << a << endl;
	cout << "��ֵ�������ֵ b = " << b << endl;

	system("pause");

	return 0;
}