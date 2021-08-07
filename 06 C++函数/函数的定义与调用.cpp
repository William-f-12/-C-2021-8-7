#include<iostream>
using namespace std;

//函数的定义5个步骤:
/*
	1. 返回值类型
	2. 函数名
	3. 参数列表
	4. 函数体语句
	5. return 表达式
*/

/*语法：

返回值类型 函数名 （参数列表）
{

	函数体语句

	return 表达式
}
*/

//一个加法函数
//函数定义的时候，num1和num2并没有真实数据，是形式上的参数，简称形参
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main1()
{
	//在main函数中调用add函数
	//函数调用语法：函数名称（参数）
	int a = 10;
	int b = 20;
	int c = add(a, b); //a和b称为实际参数，简称实参，调用时，实参的值会传给形参
	cout << c << endl;

	a = 123412421;
	b = 13123;
	c = add(a, b);
	cout << c << endl;

	system("pause");

	return 0;
}