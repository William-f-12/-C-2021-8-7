#include "swap.h" //包含自定义的头文件，用双引号

//函数的定义
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}