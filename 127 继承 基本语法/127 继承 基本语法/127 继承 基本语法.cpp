#include<iostream>
using namespace std;

class Basepage
{
public:
	void hander()
	{
		cout << "首页、视频" << endl;
	}

	void footer()
	{
		cout << "帮助" << endl;
	}

	void left()
	{
		cout << "Java、C++、" << endl;
	}
};

//继承的好处：减少重复代码
//语法：class  子类  继承方式  父类
//子类  也称  派生类
//父类  也称  基类
class Java :public Basepage
{
public:
	void counter()
	{
		cout << "Java 学科视频" << endl;
	}
};

class CPP :public Basepage
{
public:
	void counter()
	{
		cout << "CPP 学科视频" << endl;
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