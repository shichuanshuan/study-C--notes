#include <iostream>
using namespace std;

int main()
{
	//����ָ����������е�Ԫ��
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;

	int *p = arr;

	cout << "����ָ����ʵ�һ��Ԫ��" << *p << endl;

	p++;

	cout << "����ָ����ʵڶ���Ԫ��" << *p << endl;

	system("pause");

	return 0;
}