#include<iostream>
#include<string>
using namespace std;

//全局函数类内实现 - 直接在类内声明友元即可
//全局函数类外实现 - 需要提前让编译器知道全局函数的存在


template<class T1, class T2>
class Person5;

//类外实现 - 让编译器提前看到
template<typename T1, typename T2>
void printPerson2(Person5<T1, T2> p)
{
	cout << "类外实现 name: " << p.Name << " age: " << p.Age << endl;
}

template<class T1, class T2>
class Person5
{
	//全局函数 类内实现:
	friend void printPerson(Person5<T1, T2> p)
	{
		cout << "类内实现 name: " << p.Name << " age: " << p.Age << endl;
	}

	//全局函数 类外实现:
	//需要加一个空模板参数列表
	//如果全局函数 是类外实现 需要让编译器提前知道有这个函数模板存在
	friend void printPerson2<>(Person5<T1, T2> p);

public:
	Person5(T1 name, T2 age)
	{
		this->Age = age;
		this->Name = name;
	}

private:
	T1 Name;
	T2 Age;
};

int main8()
{
	Person5<string, int> p("Tom", 20);
	printPerson(p);
	printPerson2(p);

	system("pause");
	return 0;
}