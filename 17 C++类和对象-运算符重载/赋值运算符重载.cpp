#include<iostream>
using namespace std;

//赋值运算符重载
//C++编译器给一个类添加4个函数
// 1. 默认构造函数
// 2. 默认析构函数
// 3. 默认拷贝函数
// 4. 赋值运算符 operator= 对属性进行值拷贝

class Human
{
public:
	int* m_Age;

	Human(int age)
	{
		m_Age = new int(age);
	}
	~Human()
	{
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}

	Human& operator=(Human& h)
	{
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
		m_Age = new int(*h.m_Age);
		return *this;
	}
};

int main4()
{
	Human p1(19);
	Human p2(10); 
	p2 = p1; //赋值运算
	cout << "p1的年龄是" << *p1.m_Age << endl;
	cout << "p2的年龄是" << *p2.m_Age << endl;

	system("pause");
	return 0;
}