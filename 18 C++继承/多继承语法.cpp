#include <iostream>
using namespace std;

//C++允许一个类继承多个类
//语法： class 子类 ：继承方式 父类1， 继承方式 父类2...
//多继承可能会引发父类中有同名成员出现 需要加作用域区分
//实际开发中 不常使用

class Base1
{
public:
	int a;

	Base1()
	{
		a = 100;
	}
};

class Base2
{
public:
	int a;
	int b;

	Base2()
	{
		a = 50;
		b = 200;
	}
};

//子类
class Son02 : public Base1, public Base2
{
public:
	int c;
	int d;

	Son02()
	{
		c = 300;
		d = 400;
	}
};

void test6()
{
	Son02 s;
	cout << "size of son02: " << sizeof(s) << endl;

	//当父类中出现同名成员 需要加作用域区分
	cout << "Base1::a = " << s.Base1::a << endl; //访问Base1中的a
	cout << "Base2::a = " << s.Base2::a << endl; //访问Base2中的a
}

int main7()
{
	test6();

	system("pause");
	return 0;
}