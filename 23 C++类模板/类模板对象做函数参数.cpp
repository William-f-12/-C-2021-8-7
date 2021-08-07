#include<iostream>
#include<string>
using namespace std;

//类模板对象做函数参数
//一共有三种传入类型
 
//类模板
template<class T1, class T2>
class Human
{
public:
	Human(T1 name, T2 age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	void showHuman()
	{
		cout << "name: " << this->m_Name << endl;
		cout << "age: " << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

// 1. 指定传入的类型 - 直接显示对象的数据类型
void printPerson1(Human<string, int> &h)
{
	h.showHuman();
}

void test1()
{
	Human<string, int> h("Tom", 19);
	printPerson1(h);
}

// 2. 参数模板化 - 将对象中的参数变为模板进行传递
template<typename T1, typename T2>
void printPerson2(Human<T1, T2> &h)
{
	h.showHuman();
	cout << "T1的类型为： " << typeid(T1).name() << endl;
	cout << "T2的类型为： " << typeid(T2).name() << endl;
}

void test2()
{
	Human<string, int> h("Jerry", 29);
	printPerson2(h);
}

// 3. 整个类模板化 - 将这个对象类型 模板化进行传递
template<typename T>
void printPerson3(T &h)
{
	h.showHuman();
	cout << "T的数据类型为： " << typeid(T).name() << endl;
}

void test3()
{
	Human<string, int> h("Jeck", 17);
	printPerson3(h);
}

int main4()
{
	test1();
	test2();
	test3();

	system("pause");
	return 0;
}