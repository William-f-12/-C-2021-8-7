#include<iostream>
#include<string>
using namespace std;

//函数调用运算符重载
//函数调用运算符()也可以重载
//由于重载后使用的方式非常像函数的调用 因此称为仿函数
//仿函数没有固定的写法 非常灵活

class MyPrint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};

class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

int main()
{
	MyPrint print;
	print("hello world"); //由于使用起来非常像函数调用 所以称为仿函数

	MyAdd add;
	cout << add(100, 100) << endl;

	//匿名函数对象
	cout << MyAdd()(100, 500) << endl; //类名+()创造一个匿名对象 该行执行完即删除

	system("pause");
	return 0;
}