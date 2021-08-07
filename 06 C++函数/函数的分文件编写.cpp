#include<iostream>
#include"swap.h" //包含函数的头文件，自定义的头文件需要用双引号
using namespace std;

//函数的分文件编写
/*四个步骤：
* 1. 创建后缀名为.h的头文件
* 2. 创建后缀名为.cpp的源文件
* 3. 在头文件中写含税声明
* 4. 在源文件中写函数的定义
*/

//函数的声明： 在头文件中
//函数的定义： 在源文件中

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);

	system("pause");

	return 0;
}