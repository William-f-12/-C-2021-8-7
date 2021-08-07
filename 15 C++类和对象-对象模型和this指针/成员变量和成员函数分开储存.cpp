#include<iostream>
using namespace std;

//在C++中 类内的成员变量和成员函数分开储存
//只有非静态的成员变量才属于类的对象

class C1
{
	int m_A; //非静态成员变量 属于类对象上
	static int m_B; //静态成员变量 不属于类对象上
	void func() {} //非静态成员函数 不属于类对象上
	static void func2() {} //静态成员函数 不属于类对象上
};
int C1::m_B = 0;

void test01()
{
	C1 p;
	//空对象占用内存空间为：1
	//C++编译器会给每个空对象也分配一个字节的空间 是为了区分空对象占内存的位子
	//每个空对象也应该有一个独一无二的内存地址
	cout << "size of p = " << sizeof(p) << endl;
}

void test02()
{
	C1 p;
	cout << "size of p = " << sizeof(p) << endl;
}

int main1()
{
	//test01();
	test02();

	system("pause");
	return 0;
}