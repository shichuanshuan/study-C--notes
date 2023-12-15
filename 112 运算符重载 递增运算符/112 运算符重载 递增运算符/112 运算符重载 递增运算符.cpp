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

	//重载前置++运算符
	Studen& operator++()
	{
		//先做++运算
		m_A++;

		//再将自身做个返回
		return *this;
	}

	//重载后置++运算符
	Studen operator++(int)
	{
		//先 记录当前结构
		Studen temp = *this;

		//后 递增
		m_A++;

		//最后将结果作为返回
		return temp;
	}

private:
	int m_A;
};

//重载<<运算符
ostream& operator<<(ostream &out, Studen myint)
{
	cout << myint.m_A;
	return out;
}

//前置++运算
void test()
{
	Studen s;

	cout << ++s << endl;
}

//后置++运算
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
