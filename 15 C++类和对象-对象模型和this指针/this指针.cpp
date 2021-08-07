#include<iostream>
using namespace std;

//this 指针是隐含每一个非静态成员函数内的一种指针
//1-形参和成员变量重名时 可用this指针来区分
//2-在类的非静态成员函数中返回对象本身 可使用return *this

class Person
{
public:
	int age;

	Person(int age)
	{
		//this指针指向被调用的成员函数所属的对象
		this->age = age;
	}

	//用值的方式返回会返回一个新对象 用引用返回则不会
	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;
		//this指向p2的指针 *this指向的就是对象本体
		return *this;
	}
};

void test1()
{
	Person p1(18);
	cout << "p1的年龄为：" << p1.age << endl;
}

void test2()
{
	Person p1(10);

	Person p2(10);
	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2的年龄为：" << p2.age << endl;
}

int main2()
{
	test1();
	test2();

	system("pause");
	return 0;
}