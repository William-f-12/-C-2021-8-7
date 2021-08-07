#include<iostream>
using namespace std;

//指针在32位下占4个字节，64位下8个字节

int main1()
{
	//1. 定义指针
	int a = 10;
	//指针定义的语法: 数据类型 * 指针变量名；
	int* p;
	//让指针记录变量a的地址
	p = &a;
	cout << "a的地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;

	//指针所占的内存空间
	cout << "sizeof(int *) = " << sizeof(p) << endl;
	cout << "sizeof(float *) = " << sizeof(float *) << endl;
	cout << "sizeof(double *) = " << sizeof(double *) << endl;
	cout << "sizeof(char *) = " << sizeof(char *) << endl;

	//2. 使用指针
	//可以通过解引用的方式来找到指针指向的内存
	//指针前加 * 代表解引用，找到指针指向内存中的数据
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	system("pause");

	return 0;
}