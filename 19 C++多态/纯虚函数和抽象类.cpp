#include<iostream>
using namespace std;

//在多态中 父类中的虚函数的实现是毫无意义的 主要都是调用子类写的内容
//因此可以将虚函数改为 纯虚函数
//纯虚函数语法： virtual 返回值类型 函数名 (从参数列表) = 0;
//当类中有了纯虚函数 这个类也称为抽象类

//抽象类特点
// -无法实例化对象
// -子类必须重写抽象类中的纯虚函数 否则也属于抽象类

class Base //抽象类 无法实例化对象
{
public:
	//纯虚函数
	virtual void func() = 0;
};

class Son : public Base //子类 必须重写父类中的纯虚函数 才能实例化对象
{
public:
	virtual void func()
	{
		cout << "func函数调用" << endl;
	}
};

int main3()
{
	Base* base = new Son;
	base->func();

	system("pause");
	return 0;
}