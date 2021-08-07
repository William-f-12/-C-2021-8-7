#include<iostream>
using namespace std;

//常量引用
//用来修饰形参，防止误操作

//打印数据
void showValue(const int& val)
{
	//val = 1000; 
	cout << "val = " << val << endl;
}

int main()
{
	int a = 10;
	int& ref = a;
	//int& ref = 10; //引用必须引一块合法的内存空间
	//加上const之后，编译器将代码修改为：int temp = 10; const int& ref1 = temp;
	const int& ref1 = 10; 
	//ref1 = 20; //加入const后变为只读，不可修改

	a = 100;
	showValue(a);

	system("pause");

	return 0;
}