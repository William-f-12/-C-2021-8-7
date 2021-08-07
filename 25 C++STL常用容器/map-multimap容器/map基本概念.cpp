//map左右元素都是pair
//pair中第一个元素为key(键值) 起到索引作用 第二个元素为value(实值)
//所有元素都会根据元素的键值自动排序

//map、multimap属于关联式容器 底层结构用二叉树实现

//优点：
// - 可以根据key值快速找到value值
//map和multimap区别：
// map不允许容器中有重复key值元素
// multimap允许容器中有重复key值元素

#include<iostream>
#include<map>
using namespace std;

//构造：
// - map<T1, T2> mp; 默认构造
// - map(const map& mp); 拷贝构造
//赋值：
// - map& operator=(const map& mp); 重载等号操作符

template<typename T1, typename T2>
void printMap(const map<T1, T2>& m)
{
	for (typename map<T1, T2>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << it->first << " value: " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	//默认构造
	map<int, int> m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));

	printMap(m);

	//拷贝构造
	map<int, int> m2(m);
	printMap(m2);

	//赋值
	map<int, int> m3;
	m3 = m2;
	printMap(m3);
}

int main1()
{
	test01();

	system("pause");
	return 0;
}