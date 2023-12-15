#include<iostream>
using namespace std;

//常函数
class Student
{
public:
	//this指针的本质 是指针常量  指针的指向是不可以修改的
	void showPerson()const
	{
		//在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
	//	this->m_Age = 100; 
		m_B = 100;

		//this = NULL;  // this指针不可以修改指针的指向的
	}

	int m_Age;
	mutable int m_B;  //特殊变量，即使在常函数中，也可以修改这个值，加关键之mutable
};

void test01()
{
	Student s;
	s.showPerson();
}


//常对象
void test02()
{
	const Student s;//在对象前加const，变为常对象；
	//s.m_Age = 100;
	s.m_B = 100;

	//常对象只能调用常函数
	s.showPerson();
}

int main()
{
	test01();

	system("pause");

	return 0;
}