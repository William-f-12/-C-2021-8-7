#include<iostream>
using namespace std;

int main3()
{
	//const 修饰指针有三种情况:
	int a = 10;
	int b = 10;

	// 1. const修饰指针 - 常量指针
	//指针的指向可以更改，指针指向的值不可以更改	
	const int* p1 = &a;
	//*p1 = 20; 错误,指针指向的值不能更改
	p1 = &b; //正确

	// 2. const修饰常量 - 指针常量
	//指针的指向不能改，指针指向的值可以改
	int* const p2 = &a;
	*p2 = 20; //正确
	//p2 = &b; 错误，指针的指向不能改
	
	// 3. const既修饰指针，又修饰常量
	//指针的指向和指向的值都不可以改
	const int* const p = &a;


	system("pause");

	return 0;
}