#include <iostream>
using namespace std;

int main()
{
	//1��const����ָ�롢����ָ��
	int a = 10;
	int b = 10;

	const int *p = &a;
	//ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�
	//*p = 20 ����
	p = &b;

	//2��const���γ���  ָ�볣��
	int * const p2 = &a;
	//ָ��ָ���ֵ���Ըģ�ָ���ָ�򲻿��Ը�
	*p2 = 20;  
	// p = &b; ����

	//3��const�����γ�����������ָ��
	const int * const p3 = &a;
	// *p2 = 20;  ����
	// p = &b;    ����

	system("pause");

	return 0;
}