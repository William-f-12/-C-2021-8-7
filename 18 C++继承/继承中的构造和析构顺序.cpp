#include<iostream>
using namespace std;

//子类继承父类后 当子类创建对象 也会调用父类的构造函数

class Base
{
public:
	Base()
	{
		cout << "Base的构造函数" << endl;
	}
	~Base()
	{
		cout << "Base的析构函数" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son的构造函数" << endl;
	}
	~Son()
	{
		cout << "Son的析构函数" << endl;
	}
};

void test3()
{
	Son s;

	//继承中的构造和析构顺序如下：
	//先构造父类 在构造子类 
	//析构与构造的顺序相反
}

int main4()
{
	test3();

	system("pause");
	return 0;
}