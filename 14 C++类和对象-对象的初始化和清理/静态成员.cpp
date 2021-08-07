#include<iostream>
using namespace std;

//静态成员分为 
//静态成员变量：
// 所以对象共享一分数据
// 在编译阶段分配内存
// 类内声明 类外初始化

//静态成员函数
// 所有对象共享一个函数
// 静态成员函数只能访问静态成员变量

class Person
{
public:
	static int m_A; //静态成员变量
	int m_B; // 非静态成员变量

	static void func()
	{
		m_A = 100; //静态成员函数可以访问静态成员变量
		//m_B = 200; 不可以访问非静态成员变量 无法区分到底是哪个对象的属性
		cout << "static void func调用" << endl;
	}
	//静态成员函数也有访问权限
};

int Person::m_A = 0;

//有两种访问方式
void test_3()
{
	//1. 通过对象访问
	Person p;
	p.func();

	//2. 通过类名访问
	Person::func();
}

int main()
{
	test_3();

	system("pause");
	return 0;
}