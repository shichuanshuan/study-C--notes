#include <iostream>
using namespace std;

//������Ĭ�ϲ���
int fun(int a, int b = 10, int c = 20)
{
	return a + b + c;
}


//�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
int fun2(int a = 20, int b = 20, int c = 20);
int fun2(int a, int b, int c)
{
	return a + b + c;
}

int main()
{
	//��������Լ���������ݣ������Լ������ݣ����û���Ǿ���Ĭ��ֵ
	cout << fun(10) << endl;
	cout << fun(20, 10, 20)<< endl;

	system("pause");

	return 0;
}