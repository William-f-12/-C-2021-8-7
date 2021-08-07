#include<iostream>
#include<map>
using namespace std;

//函数原型
// - find(key); 查找key是否存在 若存在返回该键的元素的迭代器 若不存在返回map.end()
// - count(key); 统计key的元素个数

void test04()
{
	//查找
	map<int, int> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));

	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "查找到了元素key = " << pos->first << " value = " << pos->second << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//统计
	//map不允许插入重复的key元素 count结果要么是0 要么是1
	//multimap的count统计可能大于1
	int num = m.count(3);
	cout << "num = " << num << endl;
}

int main4()
{
	test04();

	system("pause");
	return 0;
}