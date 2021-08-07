#include<iostream>
using namespace std;

//堆区：由程序员管理

int* func1()
{
	//用new在堆区开辟数据
	//指针本质也是局部变量，放在栈上，指针保存的数据放在堆区
	int* p = new int(10);
	return p;
}

int main3()
{
	int* p = func1();
	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}