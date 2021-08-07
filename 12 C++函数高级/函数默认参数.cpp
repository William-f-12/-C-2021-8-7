#include<iostream>
using namespace std;

//在C++中，函数的形参列表中的形参是可以有默认值的

//如果我们传入数据，就用我们的数据，如果没有就用默认值
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

//注意事项
//1. 如果某个位置已经有了默认参数，从这个参数往后，从左到右都必须有默认值
//2. 如果函数的声明有了默认参数，那么函数的定义不能有默认参数
//声明和定义只能一个有默认参数
int func2(int a = 10, int b = 10);

int func2(int a, int b)
{
	return a + b;
}

int main1()
{
	cout << func(10, 30) << endl;
	cout << func2() << endl;

	system("pause");

	return 0;
}