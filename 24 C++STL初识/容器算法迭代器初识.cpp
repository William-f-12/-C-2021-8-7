#include<iostream>
using namespace std;
#include<vector>
#include<algorithm> //标准算法头文件

// vector存放内置数据类型
// 容器：vector
// 算法：for_each
// 迭代器：vector<int>::iterator

void print(int val)
{
	cout << val << endl;
}

void test01()
{
	//创建了一个vector容器 数组
	vector<int> v;

	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//通过迭代器访问容器中的数据
	vector<int>::iterator itBegin = v.begin(); //起始迭代器 指向容器中第一个元素
	vector<int>::iterator itEnd = v.end(); //结束迭代器 指向容器中最后一个元素的下一个位置

	//第一种遍历方式
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}

	//第二种遍历方式
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	//第三种遍历方式 利用STL中提供的遍历算法
	for_each(v.begin(), v.end(), print);
}

// vector容器中存放自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->Age = age;
		this->Name = name;
	}

	string Name;
	int Age;

};

void test02()
{
	vector<Person> v;

	Person p1("aaa", 10);
	Person p2("bbb", 11);
	Person p3("ccc", 12);
	Person p4("ddd", 13);

	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//遍历容器中数据
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		// cout << "姓名: " << (*it).Name << " 年龄: " << (*it).Age << endl;
		cout << "姓名: " << it->Name << " 年龄: " << it->Age << endl;
	}
}

void test03()
{
	vector<Person*> v;

	Person p1("aaa", 10);
	Person p2("bbb", 11);
	Person p3("ccc", 12);
	Person p4("ddd", 13);

	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);

	//遍历容器中数据
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名: " << (*it)->Name << " 年龄: " << (*it)->Age << endl;
	}
}

int main1()
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
}