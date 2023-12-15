#include<iostream>
using namespace std;

//立方体类的定义
class Cube
{
	//行为
public:
	//设置高
	void SetH(int h)
	{
		m_H = h;
	}

	//获取高
	int GetH()
	{
		return m_H;
	}

	//设置长
	void SetL(int l)
	{
		m_L = l;
	}

	//获取长
	int GetL()
	{
		return m_L;
	}

	//设置宽
	void SetW(int w)
	{
		m_W = w;
	}

	//获取宽
	int GetW()
	{
		return m_W;
	}

	//获取立方体面积的成员函数
	int calculateS()
	{
		return (m_H*m_L + m_H * m_W + m_L * m_W) * 2;
	}

	//获取立方体体积的成员函数
	int calculateV()
	{
		return m_H * m_L*m_W;
	}

	//利用类判断两个立方体是否相等
	bool isSameClass(Cube c)
	{
		if (m_H == c.GetH() && m_L == c.GetL() && m_W == c.GetW())
		{
			return true;
		}

		return false;
	}

	//属性
private:
	int m_H;
	int m_L;
	int m_W;
};

//立方体面积比较的全局函数
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

	cout << "立方体的面积为" << sv.calculateS() << endl;
	cout << "立方体的体积为" << sv.calculateV() << endl;

	system("pause");

	return 0;
}