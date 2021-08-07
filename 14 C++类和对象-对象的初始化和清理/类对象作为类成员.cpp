#include<iostream>
#include<string>
using namespace std;

//C++类中的成员可以是另一个类的对象 我们称该成员为 对象成员
class Phone
{
public:
	string m_PName;

	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone的构造函数调用" << endl;
	}

	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}
};

class Person7
{
public:
	string m_Name;
	Phone m_Phone;

	//Phone m_Phone = pName;
	Person7(string name, string pName) : m_Name(name), m_Phone(pName)
	{
		cout << "Person7的构造函数调用" << endl;
	}

	~Person7()
	{
		cout << "Person7的析构函数调用" << endl;
	}
};

//当其他类的对象作为本类成员 先构造其他类对象 再构造自身
//析构的顺序与构造相反（栈）
void test_2()
{
	Person7 p("张三", "苹果max");
	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}

int main7()
{
	test_2();

	system("pause");
	return 0;
}