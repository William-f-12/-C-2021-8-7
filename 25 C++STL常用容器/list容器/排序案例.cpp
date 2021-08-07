#include<iostream>
#include<string>
#include<list>
using namespace std;

//按年龄进行升序 如果年龄相同按身高进行降序

class Person
{
public:
	string m_name;
	int m_age;
	int m_height;

	Person(string name, int age, int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}
};

template<typename T>
void printList(const list<T>& l)
{
	for (typename list<T>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
template<>
void printList<Person>(const list<Person>& l)
{
	for (typename list<Person>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "姓名: " << (*it).m_name << " 年龄: " << (*it).m_age << " 身高: " << (*it).m_height << endl;
	}
}

//指定排序规则
bool myComparePerson(Person& p1, Person& p2)
{
	//按年龄进行升序 如果年龄相同按身高进行降序
	//使用三目运算符
	return (p1.m_age == p2.m_age) ? (p1.m_height > p2.m_height) : (p1.m_age < p2.m_age);
}

void test()
{
	list<Person> L; //创建容器

	//准备数据
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	//插入数据
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	printList(L);

	//排序
	cout << "---------------------------" << endl;
	cout << "排序后：" << endl;
	cout << "---------------------------" << endl;

	L.sort(myComparePerson);
	printList(L);
}

int main()
{
	test();

	system("pause");
	return 0;
}