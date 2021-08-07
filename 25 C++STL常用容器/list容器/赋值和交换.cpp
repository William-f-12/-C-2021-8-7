#include<iostream>
#include<list>
using namespace std;

//函数原型
// - assign(beg, end);
// - assign(n, elem);
// - list& operator=(const list& lst);
// - swap(lst);

template<typename T>
void printList(const list<T>& l)
{
	for (typename list<T>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test02()
{
	//赋值
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printList(l1);

	list<int> l2;
	l2 = l1; //operator= 赋值
	printList(l2);

	list<int> l3;
	l3.assign(l2.begin(), l2.end());
	printList(l3);

	list<int> l4;
	l4.assign(10, 200);
	printList(l4);

	//交换
	l1.swap(l4);
	cout << "l1: " << endl;
	printList(l1);
	cout << "l4: " << endl;
	printList(l4);
}

int main2()
{
	test02();

	system("pause");
	return 0;
}