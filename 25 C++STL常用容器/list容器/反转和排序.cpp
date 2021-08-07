#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

//函数原型:
// - reverse(); 反转列表
// - sort(); 链表排序

template<typename T>
void printList(const list<T>& l)
{
	for (typename list<T>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int v1, int v2)
{
	//降序 就让第一个数大于第二个数
	return v1 > v2;
}

void test06()
{
	list<int> l1;
	l1.push_back(19);
	l1.push_back(10);
	l1.push_back(23);
	l1.push_back(4);
	printList(l1);

	//反转
	cout << "反转后：" << endl;
	l1.reverse();
	printList(l1);

	//排序
	cout << "排序后:" << endl;
	//所有不支持随机访问迭代器的容器 不可以用标准算法
	//sort(l1.begin(), l1.end());
	//不支持随机访问迭代器的容器 内部会提供对应算法
	l1.sort(); // 默认排序规则：从小到大
	printList(l1);

	cout << "降序:" << endl;
	l1.sort(myCompare);
	printList(l1);
}

int main6()
{
	test06();

	system("pause");
	return 0;
}