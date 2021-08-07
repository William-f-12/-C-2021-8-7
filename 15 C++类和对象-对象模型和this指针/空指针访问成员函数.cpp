#include<iostream>
using namespace std;

//C++中空指针也可以调用成员函数 但是要注意有没有用到this指针
//如果用到this指针 需要加以判断保证代码的健壮性

class Person1
{
public:
	int m_Age;

	void showClassName()
	{
		cout << "this is person class" << endl;
	}
	void showPersonAge()
	{
		if (this == NULL) { return; }
		cout << "age = " << m_Age << endl;
	}
};

void test()
{
	Person1* p = NULL;
	p->showClassName();
	p->showPersonAge(); //报错 因为传入指针为NULL
}

int main3()
{
	test();

	system("pause");
	return 0;
}