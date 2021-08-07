#include<iostream>
using namespace std;

int main2()
{
	//空指针：指针变量指向内存中编号为0的空间
	//用途：初始化指针变量
	//空指针指向的内存是不可以访问的(0-255的编号是系统占用的)
	int* p = NULL;
	//*p = 100; 错误，空指针不能进行访问


	//野指针：指针变量指向非法的内存空间
	//在程序中，尽量避免用野指针
	//int* p1 = (int*)0x1100;
	//cout << *p1 << endl; 错误

	//空指针和野指针都不是我们申请的空间

	system("pause");

	return 0;
}