#include <iostream>
using namespace std;

int main()
{
	//1����ָ�����ڸ�ָ��������г�ʼ��
	int *p = NULL;

	//2����ָ���ǲ����Խ��з��ʵ�
	*p = 100;

	cout << *p << endl;

	system("pause");

	return 0;

}