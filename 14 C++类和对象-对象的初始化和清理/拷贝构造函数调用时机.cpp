#include<iostream>
using namespace std;

//C++中拷贝构造调用时机

class Person3
{
public:
	int m_Age;
	Person3()
	{
		cout << "Person3默认构造函数调用" << endl;
	}
	Person3(int age)
	{
		m_Age = age;
		cout << "Person3有参构造函数调用" << endl;
	}
	Person3(const Person3& p)
	{
		m_Age = p.m_Age;
		cout << "Person3拷贝构造函数调用" << endl;
	}

	~Person3()
	{
		cout << "Person3析构函数调用" << endl;
	}
};

//C++中拷贝构造调用时机通常有三种情况
// 1. 使用一个已经创建完毕的对象来初始化一个新对象
void test1()
{	
	Person3 p1(20);
	Person3 p2(p1);
	cout << "p2的年龄是" << p2.m_Age << endl;
}

// 2. 值传递的方式给函数参数传值
void doWork(Person3 p)
{

}

void test2()
{
	Person3 p;
	doWork(p);
}

// 3. 以值方式返回局部对象
Person3 doWork2()
{
	Person3 p1;
	return p1;
}

void test3()
{
	Person3 p = doWork2();
}

int main3()
{
	//test1();
	//test2();
	test3();

	system("pause");
	return 0;
}