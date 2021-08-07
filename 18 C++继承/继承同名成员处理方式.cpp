#include<iostream>
using namespace std;

//访问子类中同名成员 直接访问即可
//访问父类中同名成员 需要加作用域

class Father
{
public:
	int m_A;

	Father()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Father - func()调用" << endl;
	}
	void func(int a)
	{
		cout << "Father - func(int a)调用" << endl;
	}
};

class Son_ :public Father
{
public:
	int m_A;

	Son_()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son_ - func()调用" << endl;
	}
};

void test4()
{
	Son_ s;

	//同名成员属性
	cout << "son_   中的m_A: " << s.m_A << endl;
	cout << "Father 中的m_A: " << s.Father::m_A << endl;

	//同名成员函数
	s.func(); //子类中的函数
	s.Father::func(); //父类中的函数

	//如果子类中出现和父类同名的成员函数 子类的同名成员会隐藏掉父类中所有同名成员函数
	//如果想访问到父类中被隐藏的同名成员函数 需要加作用域
	s.Father::func(100);
}

int main5()
{
	test4();

	system("pause");
	return 0;
}