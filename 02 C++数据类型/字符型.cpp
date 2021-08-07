#include<iostream>
using namespace std;

//字符型
//语法： char ch = 'a';
//1. 在显示字符型变量时，用单引号将字符括起来，不要用双引号
//2. 单引号内只能由一个字符，不可以是字符串

//C，C++中字符型变量只占1字节(8bit)
//字符型变量将对应的ASCII编码放入储存单元

int main3()
{
	//创建方式
	char ch = 'A';
	cout << ch << endl;

	//所占内存大小
	cout << "char所占内存空间为：" << sizeof(ch) << endl;

	//常见错误
	//char ch2 = "b"; //创建字符型变量时，要用单引号
	//char ch2 = 'adcdef'; //创建字符型变量时，单引号内只能由一个字符

	//对应ASCII编码
	//a - 97
	//A - 65
	cout << (int)ch << endl;
	
	system("pause");

	return 0;
}