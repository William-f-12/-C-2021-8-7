#include<iostream>
#include<string>
using namespace std;

//模板的通用性并不是万能的
//C++为了解决这种问题 提供了模板的重载
//有些特定数据 需要用具体化方式做特殊实现

class Person
{
public:
	string m_name;
	int m_age;

	Person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
};

//对比两个数据是否相等
template<typename T>
bool isEqual(T &a, T &b)
{
	if (a == b) {
		return true;
	}
	return false;
}

//利用具体化Person的版本实现代码， 具体化优先代用
template<> bool isEqual(Person& p1, Person& p2)
{
	if (p1.m_name == p2.m_name && p1.m_age == p2.m_age) {
		return true;
	}
	return false;
}

int main()
{
	int a = 10;
	int b = 20;

	Person p1("tom", 10);
	Person p2("Tom", 10);

	bool ret = isEqual(p1, p2);
	if (ret) {
		cout << "a == b" << endl;
	}
	else {
		cout << "a != b" << endl;
	}

	system("pause");
	return 0;
}