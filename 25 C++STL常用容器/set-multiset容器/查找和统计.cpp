#include<iostream>
#include<set>
using namespace std;

//函数原型
// - find(key); 查找key是否存在 若存在返回该键的元素的迭代器 若不存在返回set.end();
// - count(key); 统计key的元素个数

void test04()
{
	//查找
	set<int> s1;
	
	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int>::iterator pos = s1.find(30);

	if (pos != s1.end())
	{
		cout << "找到元素：" << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//统计
	int num = s1.count(30);
	//对于set而言 统计结果要么是0 要么是1
	cout << "s1有" << num << "个30" << endl;
}

int main4()
{
	test04();

	system("pause");
	return 0;
}