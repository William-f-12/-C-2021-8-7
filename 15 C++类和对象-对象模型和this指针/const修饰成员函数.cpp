#include<iostream>
using namespace std;

//常函数
//成员函数加const后我们称这个函数为常函数
//常函数内不可修改成员属性
//成员属性声明时加关键字mutable后 在常函数中依然可以修改

//常对象
//声明对象前加const称该对象为常对象
//常对象只能调用常函数

class Person2
{
public:

	//this指针的本质是指针常量 指向不可改：Person* const this
	void showPerson() const //常函数: 修改为 const Person* const this 所以不可修改成员属性
	{
		//this->m_A = 100;
		this->m_B = 10;
	}

	void func()
	{

	}

	int m_A;
	mutable int m_B; //特殊变量 即使在常函数中也可以修改 加上关键字mutable
};

void test0()
{
	Person2 p;
	p.showPerson();
}

void test00()
{
	const Person2 p; //在对向前加上const 变为常对象
	//p.m_A = 100;
	p.m_B = 100; //m_B是特殊的值 在常对象下也可以修改

	//常对象只能调用常对象
	//p.func(); 错误 因为普通函数可以修改普通成员属性 而常对象本身不允许修改属性 所以常对象不能调用普通函数
	p.showPerson(); //常对象只能调用常函数
}

int main()
{
	test0();
	test00();

	system("pause");
	return 0;
}