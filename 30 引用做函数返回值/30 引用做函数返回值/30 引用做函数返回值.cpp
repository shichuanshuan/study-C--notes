#include<iostream>
using namespace std;


//1���ֲ����������ò�����Ϊ����ֵ
int& tese01()
{
	int a = 10;

	return a;
}


//2�������ĵ��ÿ�����Ϊ��ֵ
int &tese02()
{
	// ȫ�ֱ���
	static int a = 10;

	return a;
}


int main()
{
	int &i_32Ret = tese01();

	cout << "i_32Ret = " << i_32Ret << endl;//��һ����ȷ��Ϊ���������˱���
	cout << "i_32Ret = " << i_32Ret << endl;//�ڶ��δ�����Ϊa���ڴ��Ѿ��ͷ�

	int &i_32Ret2 = tese02();
	cout << "i_32Ret2 = " << i_32Ret2 << endl;
	cout << "i_32Ret2 = " << i_32Ret2 << endl;

	tese02() = 1000;
	cout << "i_32Ret2 = " << i_32Ret2 << endl;


	system("pause");

	return 0;
}
