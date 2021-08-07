#include<iostream>
using namespace std;

int main1()
{
	//引用的基本语法
	//数据类型 &别名 = 原名

	int a = 10;
	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	//引用的注意事项
	//1. 引用必须初始化：int &b;是错误的
	//2. 引用一旦初始化后就不可以更改

	system("pause");

	return 0;
}