#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

// - find	查找元素
// - find_if	按条件查找元素
// - adjacent_find	查找相邻重复元素
// - binary_search	二分查找法
// - count		统计元素个数
// - count_it	按条件统计元素个数

//找到了返回指定元素的迭代器 找不到返回结束迭代器end()

class Person
{
public:
	int m_age;
	string m_name;

	Person(int age, string name)
	{
		this->m_age = age;
		this->m_name = name;
	}
	//需要重载==号操作符
	bool operator==(const Person& p)
	{
		if (this->m_age == p.m_age && this->m_name == p.m_name)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
};

void test01()
{
	//查找内置数据类型
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
	if (pos != v.end())
	{
		cout << "找到了元素" << *pos << endl;
	}
	else
	{
		cout << "没找到" << endl;
	}

	//查找自定义元素类型
	vector<Person> v2;
	Person p1(19, "tom");
	Person p2(12, "jessic");
	Person p3(14, "jerry");
	Person p4(11, "david");
	Person p5(123, "peter");

	v2.push_back(p1);
	v2.push_back(p2);
	v2.push_back(p3);
	v2.push_back(p4);

	vector<Person>::iterator pos2 = find(v2.begin(), v2.end(), p2);
	if (pos2 != v2.end())
	{
		cout << "找到了元素" << pos2->m_name << endl;
	}
	else
	{
		cout << "没找到" << endl;
	}
}

int main1()
{
	test01();

	system("pause");
	return 0;
}