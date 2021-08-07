#include<iostream>
using namespace std;

//静态成员和非静态成员出现同名 处理方式一致
//访问子类同名成员 直接访问即可
//访问父类同名成员 需要加作用域

class father
{
public:
	static int m_A;

	static void func()
	{
		cout << "father - static void func()调用" << endl;
	}
};
int father::m_A = 100;

class son01 :public father
{
public:
	static int m_A;

	static void func()
	{
		cout << "son01 - static void func()调用" << endl;
	}
};
int son01::m_A = 200;

void test5()
{
	//同名静态属性
	//1. 通过对象访问
	son01 s;
	cout << "通过对象访问" << endl;
	cout << " son01 下m_A = " << s.m_A << endl;
	cout << " father 下m_A = " << s.father::m_A << endl;

	//2. 通过类名访问
	cout << "通过类名访问" << endl;
	cout << " son01 下m_A = " << son01::m_A << endl;
	//第一个::代表通过类名方式访问 第二个::代表访问父类作用域下
	cout << " father 下m_A = " << son01::father::m_A << endl;


	//同名静态函数
	//1. 通过类名访问
	cout << "通过对象访问" << endl;
	s.func();
	s.father::func();

	//2. 通过类名访问
	cout << "通过类名访问" << endl;
	son01::func();
	son01::father::func();
}

int main6()
{
	test5();

	system("pause");
	return 0;
}