#include<iostream>
using namespace std;

//实型（浮点型）
//- 用于表示小数

int main2()
{
	//1. 单精度 float 4字节 
	//2. 双精度 double 8字节 
	//默认情况下，输出一个小数会显示出6位有效数字

	float f1 = 3.14f;
	cout << "f1 = " << f1 << endl;
	cout << "float所占内存空间为" << sizeof(f1) << endl;

	double d1 = 3.14;
	cout << "d1 = " << d1 << endl;
	cout << "double所占内存空间为" << sizeof(d1) << endl;

	//科学计数法
	float f2 = 3e2; //3 * 10^2;
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; //3 * 0.1^2;
	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;
}