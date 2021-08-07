#include<iostream>
using namespace std;

int main1()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //两个整数相除，结果依然是整数，将小数部分去除

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;
	//cout << a3 / b3 << endl; //错误！两个数相除，除数不可以为0

	//两个小数相除
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl; //运算结果也可以是小数

	//取模运算（取余）求余数
	cout << a1 % b1 << endl;
	cout << a2 % b2 << endl;
	//cout << a3 % b3 << endl;//错误！除数不可以为0

	//两个小数不可以做取模运算
	//cout << d1 % d2 << endl;

	//前置递增
	int a = 10;
	++a; //让变量+1
	cout << "a = " << a << endl;

	//后置递增
	int b = 10;
	b++; //让变量+1
	cout << "b = " << b << endl;

	//前置和后置的区别
	//前置递增 先让变量+1 然后进行表达式运算
	int A = 10;
	int B = ++A * 10;
	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
	//后置递增 先进行表达式运算 后让变量+1
	int C = 10;
	int D = C++ * 10;
	cout << "C = " << C << endl;
	cout << "D = " << D << endl;

	//递减：让变量-1

	system("pause");

	return 0;
}