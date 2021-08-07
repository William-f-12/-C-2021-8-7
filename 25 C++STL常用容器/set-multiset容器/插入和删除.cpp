#include<iostream>
#include<set>
using namespace std;

//函数原型
// - insert(elem);
// - clear();
// - erase(pos); 删除pos迭代器所指向的元素 返回下一个元素的迭代器
// - erase(beg, end); 删除区间[beg, end)的所有元素 返回下一个元素的迭代器
// - erase(elem); 删除容器中值为elem的元素

template<typename T>
void printSet(const set<T>& s)
{
	for (typename set<T>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test03()
{
	set<int> s1;
	//插入
	s1.insert(30);
	s1.insert(20);
	s1.insert(10);
	s1.insert(40);

	//遍历
	printSet(s1);

	//删除
	s1.erase(s1.begin());
	printSet(s1);

	//删除重载版本
	s1.erase(30);
	printSet(s1);

	//清空
	//1.erase(s1.begin(), s1.end());
	s1.clear();
	printSet(s1);
}

int main3()
{
	test03();

	system("pause");
	return 0;
}