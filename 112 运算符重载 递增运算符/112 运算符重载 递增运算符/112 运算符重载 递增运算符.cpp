#include <iostream>
using namespace std;

class Studen
{
	friend ostream& operator<<(ostream &out, Studen myint);

public:

	Studen()
	{
		m_A = 0;
	}

	//����ǰ��++�����
	Studen& operator++()
	{
		//����++����
		m_A++;

		//�ٽ�������������
		return *this;
	}

	//���غ���++�����
	Studen operator++(int)
	{
		//�� ��¼��ǰ�ṹ
		Studen temp = *this;

		//�� ����
		m_A++;

		//��󽫽����Ϊ����
		return temp;
	}

private:
	int m_A;
};

//����<<�����
ostream& operator<<(ostream &out, Studen myint)
{
	cout << myint.m_A;
	return out;
}

//ǰ��++����
void test()
{
	Studen s;

	cout << ++s << endl;
}

//����++����
void test02()
{
	Studen my;

	cout << my++ << endl;
	cout << my << endl;
}

int main()
{
	//test();
	test02();

	system("pause");

	return 0;

}
