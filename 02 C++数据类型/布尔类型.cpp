#include<iostream>
using namespace std;

int main6()
{
	//1. 创建bool数据类型
	bool flag = true; //真
	cout << flag << endl;

	flag = false; //假
	cout << flag << endl;

	//本质上 1代表真 0代表假; 非零一般代表true

	//2. 查看bool类型所占空间
	cout << "bool类型所占空间： " << sizeof(bool) << endl;

	system("pause");

	return 0;
}