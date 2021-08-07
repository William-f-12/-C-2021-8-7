#include<iostream>
using namespace std;

//类模板和函数模板的区别主要有两点：
// 1. 类模板没有自动类型推导的使用方式
// 2. 类模板在函数参数列表中可以有默认参数

//类模板
template<class NameType, class AgeType = int> //模板参数列表 可以有默认
class People
{
public:
	People(NameType name, AgeType age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	void showPeople()
	{
		cout << "name: " << this->m_Name << endl;
		cout << "age: " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

void test01()
{
	//People p("孙悟空", 1000); 错误 无法用自动类型推导
	People<string, int> p("孙悟空", 1000); //只能用显示指定类型
	p.showPeople();
}

void test02()
{
	People<string> p("猪八戒", 1234);
	p.showPeople();
}

int main2()
{
	test01();
	test02();

	system("pause");
	return 0;
}