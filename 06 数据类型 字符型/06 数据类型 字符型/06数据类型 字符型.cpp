#include "iostream"
using namespace std;

int main()
{
	//1���ַ��ͱ���������ʽ
	char ch = 'a';
	cout << "ch = " << ch << endl;

	//2���ַ��ͱ�����ռ�ڴ��С
	cout << "char ��ռ�ڴ��С" << sizeof(ch) << endl;

	//3���ַ��ͱ�����������


	//4���ַ��ͱ�������ASCLL����
	cout << (int)ch << endl;

	system("pause");

	return 0;
}