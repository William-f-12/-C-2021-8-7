#include<iostream>
using namespace std;

//默认情况下 C++编译器至少给一个类添加三个函数
// 1. 默认构造函数（无参 函数体为空）
// 2. 默认析构函数（无参 函数体为空）
// 3. 默认拷贝构造函数 对属性进行值拷贝

//构造函数调用规则如下：
//如果用户定义有参构造函数 c++不再提供默认无参构造 但会提供默认拷贝构造
//如果用户定义拷贝构造函数 c++不会再提供其他构造函数

class Person4
{
public:
	int m_Age;

	Person4()
	{
		cout << "Person4的默认构造函数调用" << endl;
	}
	Person4(int age)
	{
		m_Age = age;
		cout << "Person4的有参构造函数调用" << endl;
	}
	//Person4(const Person4& p)
	//{
	//	m_Age = p.m_Age;
	//	cout << "Person4的拷贝构造函数调用" << endl;
	//}

	~Person4()
	{
		cout << "Person4的析构函数调用" << endl;
	}
};

void test_()
{
	Person4 p;
	p.m_Age = 18;

	Person4 p2(p);
	cout << "p2的年龄为" << p2.m_Age << endl;
}

int main4()
{
	test_();

	system("pause");
	return 0;
}