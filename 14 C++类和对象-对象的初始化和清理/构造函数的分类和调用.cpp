#include<iostream>
using namespace std;

//构造函数的分类和调用

//两种分类方式：
// 1. 按参数分为：有参构造和无参构造（默认构造）
// 2. 按类型分为：普通构造和拷贝构造

class Person2
{
private:
	int age;
public:
	Person2() //无参构造、默认构造
	{
		cout << "Person2的无参构造函数调用" << endl;
	}
	Person2(int a) //有参构造
	{
		age = a;
		cout << "Person2的有参构造函数调用" << endl;
	}
	Person2(const Person2 &p) //拷贝构造
	{
		age = p.age;
		cout << "Person2的拷贝构造函数调用" << endl;
	}
	~Person2()
	{
		cout << "Person2的析构函数调用" << endl;
	}
};

//三种调用方式：
// 1. 括号法
// 2. 显示法
// 3. 隐式转换法

void test02()
{
	//括号法
	Person2 p1;//调用默认构造时 不要加() 编译器会认为是一个函数的声明
	Person2 p2(10);
	Person2 p3(p2);

	//显示法
	Person2 p01;
	Person2 p02 = Person2(10); //有参构造
	Person2 p03 = Person2(p02); //拷贝构造
	//Person2(10); //匿名对象 特点：当前行执行结束后 系统会立即回收掉匿名对象
	// 
	//注意：不要利用拷贝构造函数 初始化匿名对象 编译器会认为Person2(p03) == Person2 p03; 对象声明
	//Person2(p03);

	//隐式转换法
	Person2 p4 = 10; //相当于 Person2 p4 = Person2(10); 有参构造
	Person2 p5 = p4; //拷贝构造
}

int main2()
{
	test02();

	system("pause");
	return 0;
}