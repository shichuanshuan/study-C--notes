#include<iostream>
using namespace std;

class Basepage
{
public:
	void hander()
	{
		cout << "��ҳ����Ƶ" << endl;
	}

	void footer()
	{
		cout << "����" << endl;
	}

	void left()
	{
		cout << "Java��C++��" << endl;
	}
};

//�̳еĺô��������ظ�����
//�﷨��class  ����  �̳з�ʽ  ����
//����  Ҳ��  ������
//����  Ҳ��  ����
class Java :public Basepage
{
public:
	void counter()
	{
		cout << "Java ѧ����Ƶ" << endl;
	}
};

class CPP :public Basepage
{
public:
	void counter()
	{
		cout << "CPP ѧ����Ƶ" << endl;
	}
};

void test()
{
	Java ja;
	ja.hander();
	ja.footer();
	ja.left();
	ja.counter();

	CPP cp;
	cp.hander();
	cp.footer();
	cp.left();
	cp.counter();
}

int main()
{
	test();

	system("pause");

	return 0;
}