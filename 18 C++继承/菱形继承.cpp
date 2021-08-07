#include<iostream>
using namespace std;

//菱形继承概念
//	两个派生类继承同一个基类
//	又有某个类同时继承两个派生类
//	这种继承被称为菱形继承 或者钻石继承

//菱形继承问题：
//1. 新类使用数据时 会产生二义性
//2. 新类继承了两份来自最初基类的数据 只需要一份

//动物类
class Animal
{
public:
	int age;
};

//利用虚继承 可以解决菱形继承的问题
//继承之前机上关键字 virtual变为虚继承
//Animal称为虚基类

//羊
class Sheep :virtual public Animal {};
//驼
class Camel :virtual public Animal {};
//羊驼
class S_C : public Sheep, public Camel {};

void test7()
{
	S_C sc;

	sc.Sheep::age = 18;
	sc.Camel::age = 15;
	//菱形继承时 两个父类拥有相同数据 需要加作用域区分
	cout << "sc.Sheep::age = " << sc.Sheep::age << endl;
	cout << "sc.Camel::age = " << sc.Camel::age << endl;
	//这份数据只要有一份就可以了 菱形继承导致数据有两份 导致资源浪费

	cout << "sc.age = " << sc.age << endl; //利用虚继承
}

int main()
{
	//vbptr: virtual base pointer 虚基类指针, 指向vbtable(virtual base table) 
	//vbtable 虚基类表: 记录了偏移量 所以最后已有一份数据

	test7();

	system("pause");
	return 0;
}