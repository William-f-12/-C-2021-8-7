#include<iostream>
using namespace std;

//数据类型：
//- C++在创建一个变量或常量时，必须要指出相应的数据类型，否则无法给变量分配内存

//sizeof 关键字：
//- sizeof 关键字可以统计数据类型所占内存大小
//语法： sizeof(数据类型/变量)

int main1()
{
	//整型： 表示整数类型的数据
	//1. 短整型 2字节: -2^15 ~ 2^15-1（-32768 ~ 32767）
	short num1 = 10;
	//2. 整型 4字节： -2^31 ~ 2^31-1
	int num2 = 10;
	//3. 长整型 win-4字节： -2^31 ~ 2^31-1
	long num3 = 10;
	//4. 长长整型 8字节： -2^63 ~ 2^63-1
	long long num4 = 10;

	cout << "short所占内存空间为：" << sizeof(num1) << endl;
	cout << "int所占内存空间为：" << sizeof(num2) << endl;
	cout << "long所占内存空间为：" << sizeof(num3) << endl;
	cout << "long long所占内存空间为：" << sizeof(num4) << endl;

	system("pause");

	return 0;
}