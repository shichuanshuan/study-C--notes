#include <iostream>
using namespace std;

int main()
{
	//��������
	int a[] = { 1,2,3,4,5 };

	//�滻ǰ
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}

	//2��ʵ������
	//2��1��¼��ʼ�±�λ��
	int status = 0;
	int end = sizeof(a) / sizeof(a[0]) - 1;
	int temp;

	while (status < end)
	{
		//2��2ʵ��Ԫ�صĻ���
		temp = a[status];
		a[status] = a[end];
		a[end] = a[status];

		//2��3�����±�
		end--;
		status++;
	}

	cout << "�滻��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}
	

	//2��2��¼�����±�λ��

	//2��3��ʼ�±�������±�λ�û���


}