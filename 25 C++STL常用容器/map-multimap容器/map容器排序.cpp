#include<iostream>
#include<map>
using namespace std;

//map容器默认排序规则为 按照key值进行从小到大排序
//利用仿函数 可以改变排序规则

class MyCompare
{
public:
	bool operator()(int key1, int key2)const
	{
		return key1 > key2;
	}
};

void test05()
{
	map<int, int, MyCompare> m;
	m.insert(make_pair(1, 40));
	m.insert(make_pair(4, 10));
	m.insert(make_pair(3, 20));
	m.insert(make_pair(2, 30));

	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << it->first << " value: " << it->second << endl;
	}
	cout << endl;
}

int main()
{
	test05();

	system("pause");
	return 0;
}