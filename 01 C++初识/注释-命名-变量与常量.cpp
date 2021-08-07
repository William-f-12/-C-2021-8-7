#include <iostream>
using namespace std;

// 1. 单行注释: 用于解释单行代码

/* 
	2. 多行注释:
	main 是一个程序的入口
	每个程序都必须有这么一个函数
	有且仅有一个
*/

#define day 7 // <-- 1.宏常量

int main()
{
	// hello world!
	cout << "hello world" << endl;

	// 变量
	// 数据类型 变量名 = 变量值
	int a = 10;

	cout << "a = " << a << endl;

	// 常量
	/*
		1. #define 宏常量：#define 常量名 常量值
			通常在文件上方定义， 表示一个常量
		2. const修饰的变量： const 数据类型 常量名 = 常量值
	*/
	// day = 14; // 错误，day是常量，一旦就该就会报错
	cout << "一周总共有" << day << "天" << endl;

	// 2. const 修饰的变量
	const int month = 12;
	// month = 24; // 错误，month也是常量

	/* 
		关键字：c++预先保留的单词（标识符）
		在定义变量或常量的时候不要用关键字
	*/
	// int int = 10; // 错误，int是关键字，不能作为变量名

	/*
		C++给标识符（变量、常量）命名时，有一套自己的规则
			1. 标识符不能是关键字
			2. 标识符只能由字母、数字、下划线组成
			3. 第一个字符必须为字母或下划线
			4. 标识符中字母区分大小写
	*/

	system("pause");

	return 0;
}