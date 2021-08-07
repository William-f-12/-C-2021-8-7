#include<iostream>
using namespace std;

//C++中函数的形参列表中可以有占位参数，用来做占位，调用时必须填补该位置
//返回值类型 函数名(数据类型) {}
//占位参数还可以有默认参数
void func(int a, int = 10)
{
	cout << "this is func" << endl;
}

int main2()
{
	func(10);

	system("pause");

	return 0;
}