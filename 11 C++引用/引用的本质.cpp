#include<iostream>
using namespace std;

//引用的本质在C++内部实现是一个指针常量
//常量指针指向不可改，也说明为什么引用不能改

int main4()
{
	int a = 10;

	//自动转换为 int* const ref = &a
	int& ref = a;
	ref = 20; //内部发现ref是引用，自动帮我们转换为：*ref = 20；

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	system("pause");

	return 0;
}