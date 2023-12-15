#include<iostream>
using namespace std;

//��������Ķ���
class Cube
{
	//��Ϊ
public:
	//���ø�
	void SetH(int h)
	{
		m_H = h;
	}

	//��ȡ��
	int GetH()
	{
		return m_H;
	}

	//���ó�
	void SetL(int l)
	{
		m_L = l;
	}

	//��ȡ��
	int GetL()
	{
		return m_L;
	}

	//���ÿ�
	void SetW(int w)
	{
		m_W = w;
	}

	//��ȡ��
	int GetW()
	{
		return m_W;
	}

	//��ȡ����������ĳ�Ա����
	int calculateS()
	{
		return (m_H*m_L + m_H * m_W + m_L * m_W) * 2;
	}

	//��ȡ����������ĳ�Ա����
	int calculateV()
	{
		return m_H * m_L*m_W;
	}

	//�������ж������������Ƿ����
	bool isSameClass(Cube c)
	{
		if (m_H == c.GetH() && m_L == c.GetL() && m_W == c.GetW())
		{
			return true;
		}

		return false;
	}

	//����
private:
	int m_H;
	int m_L;
	int m_W;
};

//����������Ƚϵ�ȫ�ֺ���
bool isSame(Cube c1, Cube c2)
{
	if (c1.GetH() == c2.GetH() && c1.GetL() == c2.GetL() && c1.GetW() == c2.GetW())
	{
		return true;
	}

	return false;
}

int main()
{
	Cube sv;

	sv.SetH(10);
	sv.SetL(10);
	sv.SetW(10);

	cout << "����������Ϊ" << sv.calculateS() << endl;
	cout << "����������Ϊ" << sv.calculateV() << endl;

	system("pause");

	return 0;
}