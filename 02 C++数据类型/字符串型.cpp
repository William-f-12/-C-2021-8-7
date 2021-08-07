#include<iostream>
#include<string>//用c++风格字符串要包含这个头文件？
using namespace std;

//字符串型
//C风格：  char 变量名[] = "字符串值";
//C++风格：string 变量名 = "字符串值";

int main5()
{
	//1. C风格字符串
	//要加中括号； 等号后面要用双引号 包含起来字符串
	char str[] = "hello world";
	cout << str << endl;

	//2. C++风格字符串
	string str2 = "hello world!";
	cout << str2 << endl;

	cout << "str: " << sizeof(str) << endl;
	cout << "str2: " << sizeof(str2) << endl;

	system("pause");

	return 0;
}