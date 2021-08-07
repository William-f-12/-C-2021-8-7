#include<iostream>
#include<set>
using namespace std;

//利用仿函数 可以改变排序规则

class MyCompare
{
public:
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};

template<typename T>
void printSet(const set<T>& s)
{
	for (typename set<T>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test07()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(50);
	s1.insert(20);
	s1.insert(30);
	printSet(s1);

	//指定排序规则为从大到小
	set<int, MyCompare> s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(50);
	s2.insert(20);
	s2.insert(30);
	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main7()
{
	test07();

	system("pause");
	return 0;
}