#include<iostream>
#include<map>
using namespace std;

//函数原型
// - insert(elem);
// - clear();
// - erase(pos); 删除pos迭代器所指的元素 返回下一个元素的迭代器
// - erase(beg, end); 删除区间[beg, ned)的所有元素 返回下一个元素的迭代器
// - erase(key); 删除容器中值为key的元素

template<typename T1, typename T2>
void printMap(const map<T1, T2>& m)
{
	for (typename map<T1, T2>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << it->first << " value: " << it->second << endl;
	}
	cout << endl;
}

void test03()
{
	map<int, int> m;
	//第一种插入
	m.insert(pair<int, int>(1, 1));
	m.insert(pair<int, int>(2, 4));
	m.insert(pair<int, int>(3, 9));
	m.insert(pair<int, int>(4, 16));
	//第二种插入
	m.insert(make_pair(5, 25));
	m.insert(make_pair(6, 36));
	//第三种插入
	m.insert(map<int, int>::value_type(7, 49));
	//第四种插入 - 不建议
	m[8] = 64;
	//[]不建议插入 可以用key访问到value

	printMap(m);

	//删除
	m.erase(m.begin());
	m.erase(3); // 按照key删除
	printMap(m);

	//清空
	//m.erase(m.begin(), m.end()); 按区间删除
	m.clear();
	printMap(m);
}

int main3()
{
	test03();

	system("pause");
	return 0;
}