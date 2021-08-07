#include<iostream>
using namespace std;

//函数重载：函数名可以相同，提高复用性
//满足条件：同一个作用域下，函数名称相同，函数参数 类型不同 或 个数不同 或 顺序不同

void func()
{
	cout << "func()的调用" << endl;
}

void func(int a)
{
	cout << "func(int a)的调用!" << endl;
}

void func(double a)
{
	cout << "func(double a)的调用!" << endl;
}

//注意事项
//函数的返回值不可以作为函数重载的条件

//1-引用作为重载条件
void fun(int& a)
{
	cout << "fun(int& a)的调用" << endl;
}

void fun(const int& a)
{
	cout << "fun(const int& a)的调用" << endl;
}

//2-函数重载碰到默认参数
void fun2(int a, int b = 10)
{
	cout << "fun2（int a, int b）的调用" << endl;
}

void fun2(int a)
{
	cout << "fun2（int a）的调用" << endl;
}

int main()
{
	func();
	func(2);
	func(3.2);

	int a = 10;
	fun(a); //调用第一个版本，因为a是变量，默认调用无const的
	fun(10); //int& a = 10不合法，const int& a = 10合法，所以调用第二个

	//fun2(10); 当函数重载碰到默认参数，出现二义性，报错，尽量避免这种情况

	system("pause");

	return 0;
}