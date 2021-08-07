#include<iostream>
using namespace std;

//普通函数和函数模板可以发生重载
//调用规则
// 1. 如果普通函数和函数模板都可以调用 优先调用普通函数
// 2. 可以利用空模板参数列表来强制调用函数模板
// 3. 函数模板也可以发生重载
// 4. 如果函数模板可以发生更好的匹配 优先调用函数模板

void myPrint(int a, int b)
{
	cout << "调用的是普通函数" << endl;
}

template<typename T>
void myPrint(T a, T b)
{
	cout << "调用的是函数模板" << endl;
}
//不要同时出现

template<typename T>
void myPrint(T a, T b, T c)
{
	cout << "调用的是重载的模板" << endl;
}

int main4()
{
	int a = 10;
	int b = 20;

	myPrint(a, b);
	//通过空模板参数列表 强制调用函数模板
	myPrint<>(a, b);

	myPrint(a, b, 100);
	//如果函数模板产生更好的匹配， 优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2);

	system("pause");
	return 0;
}