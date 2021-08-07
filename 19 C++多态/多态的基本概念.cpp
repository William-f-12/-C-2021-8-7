#include<iostream>
using namespace std;

//多态是C++面向对象三大特性之一
//多态分为两类
// 1. 静态多态：函数重载 和 运算符重载 属于静态多态 服用函数名
// 2. 动态多态：派生类和虚函数实现运行时多态
 
//静态多态和动态多态的区别：
// 静态多态的函数地址早绑定 - 编译阶段确定函数地址
// 动态多态的函数地址晚绑定 - 运行阶段确定函数地址

class Animal
{
public:
	//speak函数就是虚函数
	//函数前面加上virtual关键字 变成虚函数 娜姆编译器在编译时就不能确定函数调用了
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

class Cat : public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

class Dog : public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

//地址早绑定 在编译阶段就确定函数地址
//如果想执行让猫说话 那么这个函数地址就不能提前绑定 需要在运行阶段进行绑定 地址晚绑定

//动态多态满足条件
// 1. 有继承关系
// 2. 重写父类中的虚函数

//动态多态的使用
//父类的指针或者引用 执行子类对象

void doSpeak(Animal &animal) //Animal &animal = cat;
{
	animal.speak();
}

int main1()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl; 
	//4 指针所占内存-vfptr(virtual function pointer) 虚函数(表)指针 指向虚函数表(vftable)
	//表内部记录虚函数的地址 &Animal::speak 
	//该指针也被继承到子类 当子类重写了父类的虚函数 子类中的虚函数表内部会替换成子类的虚函数地址
	//当父类的指针或引用指向子类对象时 发生多态

	Cat cat;
	Dog dog;

	doSpeak(cat); //C++允许父类到子类的转换
	doSpeak(dog);

	system("pause");
	return 0;
}