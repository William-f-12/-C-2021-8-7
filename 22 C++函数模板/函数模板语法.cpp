#include<iostream>
using namespace std;

//函数模板作用：建立一个通用函数其函数返回值类型和形参类型可以不具体制定 用一个虚拟的类型来代表

//语法：
//template<typename T>
//函数声明或定义
//template - 声明创建模板
//typename - 表明后面的符号是一种数据类型 可以用class代替
//T - 通用的数据类型 可以替换 通常为大写字母


//交换两个整型函数
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//交换两个浮点型函数
void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//函数模板
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//类型参数化

//注意事项：
//1. 自动类型推到 必须推导出一致的数据类型T 才可以使用
//2. 模板必须要确定出T的数据类型 才可以使用

int main1()
{
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	
	//利用函数模板交换
	//两种方式来使用
	//1. 自动类型推导
	//mySwap(a, b);
	//2. 显示指定类型
	mySwap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 1.1;
	double d = 2.2;
	mySwap(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	system("pause");
	return 0;
}