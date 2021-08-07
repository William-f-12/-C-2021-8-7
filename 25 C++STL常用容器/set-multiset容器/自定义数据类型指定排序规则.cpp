#include<iostream>
#include<set>
#include<string>
using namespace std;

class Person
{
public:
	int m_age;
	string m_name;

	Person(string name, int age)
	{
		this->m_age = age;
		this->m_name = name;
	}
};

class MyCompare
{
public:
	bool operator()(Person p1, Person p2)const
	{
		return p1.m_age < p2.m_age;
	}
};

void test08()
{
	//自定义的数据类型 都会指定排序规则
	set<Person, MyCompare> s;

	Person p1("tom", 18);
	Person p2("jerry", 17);
	Person p3("wang", 19);
	Person p4("aaron", 14);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, MyCompare>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名: " << (*it).m_name << " 年龄: " << (*it).m_age << endl;
	}
}

int main()
{
	test08();

	system("pause");
	return 0;
}